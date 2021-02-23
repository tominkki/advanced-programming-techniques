#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "address.h"

class Student {
  private:
    std::string _name = "";
    std::string _student_id = "";
    int _credits = 0;
    Address _address;

  public:
    Student(void);
    Student(const std::string& name, const std::string& student_id);
    ~Student();

    std::string name(void) const;
    std::string student_id(void) const;
    int credits(void) const;
    Address address(void) const;

    void set_name(const std::string& name);
    void set_student_id(const std::string& student_id);
    void set_credits(const int& credits);
    void set_address(const std::string& street, const std::string& zip, const std::string& municipality);
};

#endif // STUDENT_H
