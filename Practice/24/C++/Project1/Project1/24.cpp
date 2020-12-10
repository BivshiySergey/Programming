#include <iostream>
#include "includes/json.hpp"
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string id = "\"userId\":", completed = "\"completed\":", True = "true";
	string input = "in.json", output="out.json",l;
	ifstream bruh;
	int mid=0;
	bruh.open(input);
	while (!bruh.eof())
	{
		getline(bruh, l);
		if (l.find(id) == 4)
		{
			int i = l.find(id), end = l.find(',');
			int index = atoi(l.substr(i + id.length(), end - i - id.length()).c_str());
			if (index > mid)
				mid = index;
		}
	}
	int* mas=new int[mid];
	for (int i = 0; i < mid; i++)
		{
		mas[i] = 0;
		}
	bruh.close();
	bruh.open(input);
	if (!bruh.is_open())
	{
		cout << "Oshibka,file ne otkrilsya"<<"\n";
	}
	else
	{
		int index = 0;

		while (!bruh.eof()) {
			getline(bruh, l);
			if (l.find(id) == 4)
			{
				int i = l.find(id), end = l.find(',');
				index = atoi(l.substr(i + id.length(), end - i - id.length()).c_str());
			}
			if (l.find(completed) == 4 && l.find("true") == 17)
			{
				mas[index - 1]++;
				index = 0;
			}
		}
	}
	ofstream fout;
	fout.open(output);
	int cw = 0;
	fout << "[";
	for (int i = 0; i < mid; i++)
	{ 
		if (mas[i] != 0) {
			if (cw) {
			fout << ',';
		}
			fout << '\n';
			fout << "  {\n    \"task_completed\": " << mas[i] << ",\n    \"userId\" : " << i+1 << "\n  }";
			cw++;
		}
	}
	fout << "\n]";
	delete[] mas;
}
