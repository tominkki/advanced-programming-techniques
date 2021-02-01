package part02;

public class Main {
  public static void main(String[] args) {
    Person test = new Person();
    test.print();

    test.setName("Jack");
    test.setAge(34);
    test.setAddress("Homestreet", "00100", "Some municipality");

    test.print();
  }
}
