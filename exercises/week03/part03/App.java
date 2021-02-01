package part03;

import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class App {

  private Scanner scanner = new Scanner(System.in);
  private boolean running = true;
  private List<Person> people = new ArrayList<Person>();

  private void addPerson() {
    Person newPerson = new Person();
    String street, zip, municipality;

    System.out.print("Name: ");
    newPerson.setName(this.scanner.nextLine());
    System.out.print("Age: ");
    newPerson.setAge(Integer.valueOf(this.scanner.nextLine()));

    System.out.print("Street address: ");
    street = this.scanner.nextLine();
    System.out.print("ZIP: ");
    zip = this.scanner.nextLine();
    System.out.print("Municipality: ");
    municipality = this.scanner.nextLine();

    newPerson.setAddress(street, zip, municipality);
    this.people.add(newPerson);
  }

  private void removePerson() {
    String name;

    System.out.print("Name of person to remove: ");
    name = this.scanner.nextLine();

    if(this.people.removeIf(p -> p.getName().equalsIgnoreCase(name))) {
      System.out.println(name + " removed.");
    } else {
      System.out.println("Could not find " + name + ".");
    }
  }

  private void printPeople() {
    this.people.forEach(p -> p.print());
  }

  private void printMenu() {
    System.out.print(
      "1. Add new person\n2. Remove person\n3. Print people\n4. Quit\n>>> "
    );
  }

  public void loop() {
    while(this.running) {
      this.printMenu();

      switch(this.scanner.nextLine()) {
        case "1": {
          this.addPerson();
          break;
        }
        case "2": {
          this.removePerson();
          break;
        }
        case "3": {
          this.printPeople();
          break;
        }
        case "4": {
          this.running = false;
          break;
        }
        default: {
          System.out.println("Invalid input.");
          break;
        }
      }
    }
  }
}
