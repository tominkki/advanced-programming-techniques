#include "trainee.h"

Trainee::Trainee(void) {
  printf("Trainee class constructor.\n");
}

Trainee::Trainee(const std::string& name, const std::string& student_id, const std::string& job, const float& salary)
  : Student(name, student_id), _job(job), _salary(salary) {
    printf("Trainee class parameterized constructor.\n");
  }

Trainee::~Trainee() {
  printf("Trainee %s destructed.\n", this->name().c_str());
}

//getters

std::string Trainee::job(void) const { return _job; } 
float Trainee::salary(void) const { return _salary; }

//setters

void Trainee::set_job(const std::string& job) {
  _job = job;
}

void Trainee::set_salary(const float& salary) {
  _salary = salary;
}

//public methods

void Trainee::print(void) const {
  Student::print();
  printf("Job: %s\nSalary: %.2f\n", _job.c_str(), _salary);
}