package part02;

public class Main {
  public static void main(String[] args) {
    Trainee test = new Trainee();

    test.print();

    test.setName("Johan");
    test.setStudentId("1234");
    test.setCredits(234);
    test.setJob("Junior Developer");
    test.setSalary(3000);

    test.print();
  }
}
