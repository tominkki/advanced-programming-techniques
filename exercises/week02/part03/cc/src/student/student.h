#pragma once

#include <string>

class Student {
  private:
    std::string _name = "";
    std::string _student_id = "";
    int _credits = 0;

  public:
    Student(void);
    Student(const std::string& name, const std::string& student_id);
    ~Student();

    std::string name(void) const;
    std::string student_id(void) const;
    int credits(void) const;

    void set_name(const std::string& name);
    void set_student_id(const std::string& student_id);
    void set_credits(const int& credits);

    virtual void print(void) const;
};
