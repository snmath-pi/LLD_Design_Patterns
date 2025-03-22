package Structural_Design_Patterns.Adapter_Design_Pattern;

public class StudentStudentAdapter implements Student {
    private SchoolStudent schoolStudent;

    public StudentStudentAdapter(SchoolStudent schoolStudent) {
        this.schoolStudent = schoolStudent;
    }

    @Override
    public String getName() {
        return this.schoolStudent.getFirstName();
    }
    
    @Override
    public String getAge() {
        return this.schoolStudent.getCurrentAge();
    }

    @Override
    public String getAddress() {
        return this.schoolStudent.getCurrentAddress();
    }
}
