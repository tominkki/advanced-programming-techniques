#include "./trainee/trainee.h"
#include "./student/student.h"

int main(void) {
  Trainee* test = new Trainee("matti", "234", "dev", 2400);
  Trainee test2 = Trainee("pekka", "123", "jobless", 0);
  Student* test3 = new Student("seppo", "123");
  Student test4 = Student("anna", "123");

  delete test;
  delete test3;

  return 0;
}