#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
#include <ctime>
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
	ostream& operator << (ostream& out, const Student& student) {
		
	}
};
int students() {
	srand(time(NULL));
	vector<Student> Students = { Student("Munyaya", 1,3,4,4,5),Student("WMAT", 2,3,3,4,2),
								Student("Maxim", 3,5,4,4,5),  Student("Andrey", 4,4,4,4,4),
								Student("Sergey", 5,4,4,4,3), Student("Danya", 6,3,2,4,5),
								Student("Jaba" , 7,4,3,4,5),  Student("Legushka", 7,5,4,5,3),
								Student("Vlad", 2,4,3,2,5),   Student("Gribnik" , 5,5,4,3,3), };
	auto varmiyu = [](Student& student) -> bool {
		for (auto& sec : student.examens) {
			if (sec.second != 2) {
				return false;
			}
			else {
				return true;
			}
		}

	};
	vector<Student> ryadovoy;
	for (auto& student : Students) {
		if (varmiyu(student)) {
			ryadovoy.push_back(student);
		}
	}
	if (ryadovoy.size() != 0) {
		cout << ryadovoy << endl;
		cout << "Expulsion" << endl << ryadovoy[rand() % ryadovoy.size()];
	}
	else {
		cout << "Not Found";
	}
}