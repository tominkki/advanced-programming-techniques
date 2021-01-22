package src;

/*
No need to do anything to make runtime polymorphism work.
*/

public class Main {
  public static void main(String[] args) {
    Student test = new Trainee("pekka", "123", "dev", 3000);
    Trainee test2 = new Trainee("matti", "123", "dev", 2699);

    test.print();
    test2.print();
  }
}
