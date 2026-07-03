class Employee {
    public int salary = 30000;
}

class Manager extends Employee {
    public int salary = 50000;

    void display(){
        System.out.println("Manager Salary: " + salary);
        System.out.println("Employee Salary: " + super.salary);
    }
}

public class Super {
    public static void main(String[] args){
        Manager m = new Manager(); 
        m.display();
    }
}
