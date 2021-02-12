package part02;

public class Student {
  private String name;
  private String studentId;
  private int credits;
  private Address address;

  public Student() {
    System.out.println("Student class constructor.");
  }

  public Student(String name, String studentId) {
    this.name = name;
    this.studentId = studentId;

    System.out.println("Student class parameterized constructor.");
  }

  //getters

  public String getName() { return this.name; }
  public String getStudentId() { return this.studentId; }
  public int getCredits() {  return this.credits; }
  public Address getAddress() { return this.address; }

  //setters

  public void setName(String name) {
    this.name = name;
  }

  public void setStudentId(String studentId) {
    this.studentId = studentId;
  }

  public void setCredits(int credits) {
    this.credits = credits;
  }

  public void setAddress(Address address) {
    this.address = address;
  }

  //public methods

  public void print() {
    var info = String.format("Name: %s\nStudent number: %s\nCredits: %s", 
      this.getName(),
      this.getStudentId(),
      this.getCredits()
    );
    System.out.println(info);
  }
}
