package Structural_Design_Patterns.Adapter_Design_Pattern;

public class CollegeStudent implements Student {
    private String name;
    private String age;
    private String address;

    public CollegeStudent(String name, String age, String address) {
        this.name = name;
        this.age = age;
        this.address = address;
    }
    @Override
    public String getName() {
        return name;
    }

    @Override
    public String getAge() {
        return age;
    }

    @Override
    public String getAddress() {
        return address;
    }

}
