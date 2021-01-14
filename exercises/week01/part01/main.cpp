#include "student.h"

int main(void) {

  Student maria;
  Student kevin("Kevin", "12345");
  auto matthew = new Student("Matthew", "23456");

  maria.print();
  kevin.print();
  matthew->print();

  maria.set_name("Maria");
  maria.set_student_id("34567");
  maria.set_credits(225);

  kevin.set_credits(12);
  matthew->set_credits(148);

  maria.print();
  kevin.print();
  matthew->print();

  delete matthew;

  return 0;
}
