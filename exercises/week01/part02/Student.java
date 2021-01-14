package part02;

public class Student {
  private String name;
  private String studentId;
  private int credits;

  public Student () {}

  public Student ( String name, String studentId ) {
    this.name = name;
    this.studentId = studentId;
  }

  //getters

  public String getName () { return this.name; }
  public String getStudentId () { return this.studentId; }
  public int getCredits () {  return this.credits; }

  //setters

  public void setName ( String name ) {
    this.name = name;
  }

  public void setStudentId ( String studentId ) {
    this.studentId = studentId;
  }

  public void setCredits ( int credits ) {
    this.credits = credits;
  }

  //public methods

  public void print () {
    var info = String.format("Name: %s\nStudent number: %s\nCredits: %s\n", 
      this.getName(),
      this.getStudentId(),
      this.getCredits()
    );

    System.out.println(info);
  }
}
