#include "./trainee/trainee.h"

int main(void) {
  Trainee* test = new Trainee();

  test->print();

  test->set_name("Johan");
  test->set_student_id("1234");
  test->set_credits(234);
  test->set_job("Junior Developer");
  test->set_salary(3000);

  test->print();

  delete test;

  return 0;
}