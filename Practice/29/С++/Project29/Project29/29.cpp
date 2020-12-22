#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;
struct Student {
	map<string, int> examens;
	string imya;
	int gruppa;
	Student(string name, int group, int math, int phys, int hyst, int prog) {
		if (group < 1 or group > 9) {
			cout << "Invalid group.Got value from 1 to 9";
		}
		if (math < 2 or math > 5 or phys < 2 or phys > 5 or hyst < 2 or hyst > 5 or prog < 2 or prog > 5) {
			cout << "Invalid notes.Got value from 2 to 5";
		}
		imya = name;
		gruppa = group;
		examens = { {"Math",math},{"Phys",phys}, {"Hyst",hyst},{"Prog" , prog} };
	}
};