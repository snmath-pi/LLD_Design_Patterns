package Structural_Design_Patterns.Adapter_Design_Pattern;

public class SchoolStudent{
    private String firstName;
    private String currentAge;
    private String currentAddress;

    public SchoolStudent(String firstName, String currentAge, String currentAddress) {
        this.firstName = firstName;
        this.currentAge = currentAge;
        this.currentAddress = currentAddress;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getCurrentAge() {
        return currentAge;
    }

    public String getCurrentAddress() {
        return currentAddress;
    }
}