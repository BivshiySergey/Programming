#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <stdexcept>
struct Student {
	std::map<std::string, int> examens;
	std::string imya;
	int gruppa;
	Student(std::string name, int group, int math, int phys, int hyst, int prog) {
		if (group < 1 or group > 9) {
			throw std::invalid_argument("Invalid group.Got value from 1 to 9");
		}
		if (math < 2 or math > 5 or phys < 2 or phys > 5 or hyst < 2 or hyst > 5 or prog < 2 or prog > 5) {
			throw std::invalid_argument("Invalid notes.Got value from 2 to 5");
		}
		imya = name;
		gruppa = group;
		examens = { {"Math",math},{"Phys",phys}, {"Hyst",hyst},{"Prog" , prog} };
	}
	bool operator < (const Student& other) const
	{
		return imya < other.imya;
	}
	bool operator > (const Student& other) const
	{
		return imya > other.imya;
	}
};
std::ostream& operator << (std::ostream& out, const Student& student_one) {
	auto imyadlin = student_one.imya.length();
	std::string imyadlinminuses, imyadlinspace;
	for (int i = 0; i < imyadlin;) {
		imyadlinminuses += "-";
	}
	for (int i = 0; i < imyadlin - 4;) {
		imyadlinspace += " ";
	}
	out << "+" << imyadlinminuses << "-+-------+------+------+------+------+\n"
		<< "| Name" << imyadlinspace << "| Group | Math | Phys | Hist | Prog |\n "
		<< "+" << imyadlinminuses << "-+-------+------+------+------+------+\n"
		<< "| " << student_one.imya << " | " << student_one.gruppa << " |"
		<< student_one.examens.at("Math") << " |" << student_one.examens.at("Phys") << " |" << student_one.examens.at("Hist") << " |" << student_one.examens.at("Prog") << " |\n"
		<< "+" << imyadlinminuses << "+-------+------+------+------+------+\n";
	return out;
}
std::ostream& operator << (std::ostream& out, const std::vector<Student>& students_all) {
	auto imyadlin = students_all.at(0).imya.length();
	for (auto forname = students_all.begin() + 1; forname != students_all.end(); ++forname) {
		if (forname->imya.length() > imyadlin) {
			imyadlin = forname->imya.length();
		}
	}
	std::string imyadlinminuses, imyadlinspace;
	for (int i = 0; i < imyadlin;) {
		imyadlinminuses += "-";
	}
	for (int i = 0; i < imyadlin - 4;) {
		imyadlinspace += " ";
	}
	out << "+" << imyadlinminuses << "-+-------+------+------+------+------+\n"
		<< "| Name" << imyadlinspace << "| Group | Math | Phys | Hist | Prog |\n"
		<< "+" << imyadlinminuses << "-+-------+------+------+------+------+\n";
	for (auto& student_one : students_all) {
		out << "| " << student_one.imya << std::string(imyadlin - student_one.imya.length(), ' ') 
			<< " | " << student_one.gruppa << " |"
			<< student_one.examens.at("Math") << " |" << student_one.examens.at("Phys") << " |" << student_one.examens.at("Hist") << " |" << student_one.examens.at("Prog") << " |\n"
			<< "+" << imyadlinminuses << "+-------+------+------+------+------+\n";
		return out;
	}
}
int students() {
	srand(time(NULL));
	std::vector<Student> Students = { Student("Munyaya", 1,3,4,4,5),Student("WMAT", 2,3,3,4,2),
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
	std::vector<Student> ryadovoy;
	for (auto& student : Students) {
		if (varmiyu(student)) {
			ryadovoy.push_back(student);
		}
	}
	if (ryadovoy.size() != 0) {
		std::cout << ryadovoy << std::endl;
		std::cout << "Expulsion" << std::endl << ryadovoy[rand() % ryadovoy.size()];
	}
	else {
		std::cout << "Not Found";
	}
	return 0;
}