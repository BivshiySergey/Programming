#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <cpp_httplib/httplib.h>
#include <locale>
using json = nlohmann::json;
using namespace std;
using namespace httplib;

json weather;

void get_w()
{
	Client cli_wet("api.openweathermap.org");
	auto wet = cli_wet.Get("/data/2.5/onecall?lat=44.9&lon=34.1&exclude=daily&units=metric&lang=ru&appid=e8b313f86318658f663576135d7ed415");
	weather = json::parse(wet->body);
	ofstream wet_cache("cache.json");
	wet_cache << weather;
	wet_cache.close();
}
int findtime(int current_time)
{
	int ftime = -1;
	for (int i = 0; i < weather["hourly"].size(); i++) {

		if (current_time < weather["hourly"][i]["dt"])
		{
			ftime = i;
			break;
		}
		ftime = -1;
	}
	return ftime;
}
void raw_response(const Request& req, Response& res) {
	Client time_cli("http://worldtimeapi.org");
	auto time = time_cli.Get("/api/timezone/europe/simferopol");
	json j = json::parse(time->body);
	int current_time = j["unixtime"];
	ifstream wet_caсhe("cache.json");
	string wet_str = "";
	getline(wet_caсhe, wet_str, '\0');
	weather = json::parse(wet_str);
	wet_caсhe.close();
	int ftime = findtime(current_time);
	if (ftime == -1)
	{
		get_w();
		ftime = findtime(current_time);
	}
	string distr = weather["hourly"][ftime]["weather"][0]["description"];
	string temp = to_string(int(weather["hourly"][ftime]["temp"]));
	string str = "{\"pogoda\":\"" + distr + "\",\"temp\":" + temp + "}";
	res.set_content(str, "text/json");
}
string trade(string f, string s, string t)
{
	std::locale::global(std::locale(""));
	size_t pos;
	while ((pos = f.find(s)) != std::string::npos)
	{
		f.erase(pos, s.size());
		f.insert(pos, t);
	}
	return f;
}
void gen_response(const Request& req, Response& res) {
	Client time_cli("http://worldtimeapi.org");
	auto time = time_cli.Get("/api/timezone/europe/simferopol");
	json j = json::parse(time->body);
	int current_time = j["unixtime"];
	if (time) {
		if (time->status == 200) {

		}
		else {
			std::cout << "Status code: " << time->status << std::endl;
			string str = "Status code : " + to_string(time->status);
			res.set_content(str, "text/plain");
		}
	}
	else {
		auto err = time.error();
		std::cout << "Error of time code: " << err << std::endl;
		string str = "Error of time code: " + to_string(err);
		res.set_content(str, "text/plain");
	}
	ifstream wet_caсhe("cache.json");
	string wet_str = "";
	getline(wet_caсhe, wet_str, '\0');
	weather = json::parse(wet_str);
	wet_caсhe.close();
	int ftime = findtime(current_time);
	if (ftime == -1)
	{
		get_w();
		ftime = findtime(current_time);
	}
	ifstream file;
	file.open(R"(include/Widget.html)");
	if (!file.is_open())
	{
		cout << "Error.Template" << endl;
		res.set_content("Error.Template", "text/plain");
	}
	else {

		string str = "", str_p = "";
		while (!file.eof())
		{
			str_p = "";
			getline(file, str_p);
			str += str_p;
		}
		file.close();

		string distr = weather["hourly"][ftime]["weather"][0]["description"];
		string temp = to_string(int(weather["hourly"][ftime]["temp"]));
		string icon = weather["hourly"][ftime]["weather"][0]["icon"];
		str = trade(str, "{hourly[i].weather[0].description}", distr);
		str = trade(str, "{hourly[i].weather[0].icon}", icon);
		str = trade(str, "{hourly[i].temp}", temp);
		res.set_content(str, "text/html");
	}
}
int main() {

	Server svr;
	svr.Get("/", gen_response);
	svr.Get("/raw", raw_response);
	std::cout << "start\n";
	svr.listen("localhost", 3000);
}
