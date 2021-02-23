#include "student.h"

Student::Student(void) {}

Student::Student(const std::string& name, const std::string& student_id)
  : _name(name), _student_id(student_id), _credits(0) {}

Student::~Student() {}

//getters

std::string Student::name(void) const { return this->_name; }

std::string Student::student_id(void) const { return this->_student_id; }

int Student::credits(void) const { return this->_credits; }

Address Student::address(void) const { return this->_address; }

//setters

void Student::set_name(const std::string& name) {
  this->_name = name;
}

void Student::set_student_id(const std::string& student_id) {
  this->_student_id = student_id;
}

void Student::set_credits(const int& credits) {
  this->_credits = credits;
}

void Student::set_address(const std::string &street, const std::string &zip, const std::string &municipality) {
    this->_address.set_address(street, zip, municipality);
}
