class Employee{
    //Private instance variable 
    private int employeeId; 
    private String employeeName;
    private double salary; 

    // Parametrized Constructor 
    public Employee(int employeeId, String employeeName, double salary){
        this.employeeId = employeeId; 
        this.employeeName = employeeName; 

        // Validation 
        if(salary <= 0){
            System.out.println("Invalid Salary! Salary set to 0");
            this.salary = 0; 
        } else {
            this.salary = salary; 
        }
    }

    // Getter method 
    public int getEmployeeId(){
        return employeeId; 
    }

    public String getEmployeeName(){
        return employeeName; 
    }

    public double getSalary(){
        return salary; 
    }

    // Setter Method 
    public void setSalary(double salary){
        if(salary <= 0){
            System.out.println("Invalid Salary");
        } else {
            this.salary = salary; 
        }
    }

    public double incrementSalary(double percentage){
        if(percentage < 0){
            System.out.println("Invalid Percentage");
            return 0; 
        } else {
            salary += salary * (percentage / 100);
            return salary; 
        }
    }

    // Display method
    public void display(){
        System.out.println("EmployeeID: " + employeeId);
        System.out.println("Employee Name: " + employeeName);
        System.out.println("Salary: " + salary);
    }
}

class Main{
    public static void main(String[] args){
        Employee e1 = new Employee(1, "Kajal", 20000);
        Employee e2 = new Employee(2, "Arpa", 50000);

        System.out.println("===== Before Update =====");
        e1.display();
        System.out.println();
        e2.display();

        // Increase salary of first employee
        e1.incrementSalary(15);

        // Update Salary of second employee
        e2.setSalary(550000);

        System.out.println("\n===== After Update =====");
        e1.display();
        System.out.println();
        e2.display();
        System.out.println(); 

        // Using Getter Methods
        System.out.println("\n===== Using Getter Methods =====");
        System.out.println("Employee ID   : " + e1.getEmployeeId());
        System.out.println("Employee Name : " + e1.getEmployeeName());
        System.out.println("Salary        : " + e1.getSalary());
    }
}