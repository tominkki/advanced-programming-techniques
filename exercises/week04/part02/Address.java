package part02;

public class Address {

  private String streetAddress;
  private String zip;
  private String municipality;

  public Address() {}

  public Address(String street, String zip, String municipality) {
    this.streetAddress = street;
    this.zip = zip;
    this.municipality = municipality;
  }

  public void setStreetAddress(String streetAddress) {
    this.streetAddress = streetAddress;
  }

  public void setZip(String zip) {
    this.zip = zip;
  }

  public void setMunicipality(String municipality) {
    this.municipality = municipality;
  }

  public String getStreetAddress() {
    return this.streetAddress;
  }

  public String getZip() {
    return this.zip;
  }

  public String getMunicipality() {
    return this.municipality;
  }

  public void print() {
    var info = String.format("Street address: %s\nZIP: %s\nMunicipality: %s",
      this.getStreetAddress(),
      this.getZip(),
      this.getMunicipality()
    );
    System.out.println(info);
  }
}
