#pragma once

#include <string>

class Student {
  private:
    std::string _name = "";
    std::string _student_id = "";
    int _credits = 0;

  public:
    Student();
    Student(std::string name, std::string student_id);
    ~Student();

    std::string name();
    std::string student_id();
    int credits();

    void set_name(std::string name);
    void set_student_id(std::string student_id);
    void set_credits(int credits);

    void print();
};
