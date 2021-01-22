#pragma once
#include "../student/student.h"

class Trainee: public Student {
  private:
    std::string _job;
    float _salary;

  public:
    Trainee(void);
    Trainee(const std::string& name, const std::string& student_id, const std::string& job, const float& salary);
    ~Trainee();

    std::string job(void) const; 
    float salary(void) const;

    void set_job(const std::string& job);
    void set_salary(const float& salary);

    void print(void) const;
};
