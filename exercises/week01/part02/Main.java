package part02;

public class Main {
  public static void main ( String[] args ) {
    var maria = new Student();
    var kevin = new Student("Kevin", "12345");

    maria.print();
    kevin.print();

    maria.setName("Maria");
    maria.setStudentId("23456");
    maria.setCredits(245);

    kevin.setCredits(12);

    maria.print();
    kevin.print();
  }
}
