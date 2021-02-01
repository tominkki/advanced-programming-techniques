package part03;

public class Person {
  
  private Integer age;
  private String name;
  private Address address;

  public Person() {
    this.address = new Address();
  }

  public void setAge(Integer age) {
    this.age = age;
  }

  public void setName(String name) {
    this.name = name;
  }

  public void setAddress(String street, String zip, String municipality) {
    this.address.setStreetAddress(street);
    this.address.setZip(zip);
    this.address.setMunicipality(municipality);
  }

  public Integer getAge() { return this.age; }

  public String getName() { return this.name; }

  public Address getAddress() { return this.address; }

  public void print() {
    String info = String.format(
      "Name: %s\nAge: %d",
      this.name,
      this.age
    );
    System.out.println(info);
    this.address.print();
  }
}
