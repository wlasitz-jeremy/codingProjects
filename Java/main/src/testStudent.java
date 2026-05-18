public class testStudent {
    public static void main(String[] args) {
        Student student1 = new Student("John", 21, 3.5, false);
        Student student2 = new Student("Arya", 17, 3.8, true);
        Student student3 = new Student("Brandon", 19, 3.2, true);

        System.out.printf("Name: %s, Age: %d, GPA: %.1f, Graduated: %b%n", student1.name, student1.age, student1.gpa, student1.isGraduated);
        System.out.printf("Name: %s, Age: %d, GPA: %.1f, Graduated: %b%n", student2.name, student2.age, student2.gpa, student2.isGraduated);
        System.out.printf("Name: %s, Age: %d, GPA: %.1f, Graduated: %b%n", student3.name, student3.age, student3.gpa, student3.isGraduated);

    }
}
