#include "student.h"

Student::Student(void) { }

Student::Student(const std::string& name, const std::string& student_id)
  : _name(name), _student_id(student_id), _credits(0) { }

Student::~Student() {
  printf("Student %s destructed.\n", _name.c_str());
}

//getters

std::string Student::name(void) const { return _name; }

std::string Student::student_id(void) const { return _student_id; }

int Student::credits(void) const { return _credits; }

//setters

void Student::set_name(const std::string& name) {
  _name = name;
}

void Student::set_student_id(const std::string& student_id){
  _student_id = student_id;
}

void Student::set_credits(const int& credits) {
  _credits = credits;
}

//public methods

void Student::print(void) const {
  printf("Name: %s\nStudent number: %s\nCredits: %d\n", _name.c_str(), _student_id.c_str(), _credits);
}
