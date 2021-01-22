#include "./trainee/trainee.h"
#include "./student/student.h"
/*
In both cases Trainee::print() is used as overridden Student::print() is declared with virtual keyword.
*/

int main(void) {
  Student* test = new Trainee("pekka", "123", "dev", 3000);
  Trainee* test2 = new Trainee("matti", "123", "dev", 2800);

  test->print();
  test2->print();

  delete test, test2;
  return 0;
}