package part02;

public class Trainee extends Student {
  private String job;
  private float salary;

  public Trainee() {}

  public Trainee(String name, String studentId, String job, float salary) {
    this.setName(name);
    this.setStudentId(studentId);
    this.job = job;
    this.salary = salary;
  }

  //getters

  public String getJob() { return this.job; }
  public float getSalary() { return this.salary; }

  //setters

  public void setJob(String job) {
    this.job = job;
  }

  public void setSalary(float salary) {
    this.salary = salary;
  }

  //public methods

  public void print() {
    super.print();
    var info = String.format("Job: %s\nSalary: %.2f",
      this.job,
      this.salary
    );
    System.out.println(info);
  }
}
