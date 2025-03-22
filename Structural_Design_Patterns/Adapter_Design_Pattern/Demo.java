package Structural_Design_Patterns.Adapter_Design_Pattern;
import java.util.ArrayList;
import java.util.List;

public class Demo {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        CollegeStudent collegeStudent = new CollegeStudent("John", "20", "123 Main St");
        SchoolStudent schoolStudent = new SchoolStudent("Jane", "15", "456 Maple Ave");
        StudentStudentAdapter studentStudentAdapter = new StudentStudentAdapter(schoolStudent);
        students.add(collegeStudent);
        students.add(studentStudentAdapter);

        for (Student student : students) {
            System.out.println(student.getName());
            System.out.println(student.getAge());
            System.out.println(student.getAddress());
        }
    }
}