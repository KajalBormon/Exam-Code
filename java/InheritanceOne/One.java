class Person{
    void displayName(){
        System.out.println("Name: Kajal Bormon");
    }
}

class Student extends Person{
    void displayRoll(){
        System.out.println("Roll: 18102014");
    }
}

class GraduateStudent extends Student{
    void displayCGPA(){
        System.out.println("CGPA: 3.28");
    }
}

public class One {
    public static void main(String[] args){
        GraduateStudent s = new GraduateStudent();
        s.displayName();
        s.displayRoll();
        s.displayCGPA();
    }
}
