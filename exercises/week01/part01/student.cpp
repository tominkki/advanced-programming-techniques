#include "student.h"

Student::Student() { }

Student::Student(std::string name, std::string student_id)
  : _name(name), _student_id(student_id), _credits(0) { }

Student::~Student() {
  printf("Student %s destructed.\n", _name.c_str());
}

//getters

std::string Student::name() { return _name; }

std::string Student::student_id() { return _student_id; }

int Student::credits(){ return _credits; }

//setters

void Student::set_name(std::string name) {
  _name = name;
}

void Student::set_student_id(std::string student_id){
  _student_id = student_id;
}

void Student::set_credits(int credits) {
  _credits = credits;
}

//public methods

void Student::print() {
  printf("Name: %s\nStudent number: %s\nCredits: %d\n", _name.c_str(), _student_id.c_str(), _credits);
}
