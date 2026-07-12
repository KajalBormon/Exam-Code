#include<iostream>
using namespace std; 

class Employee{
    private: 
        int employeeId; 
        string employeeName; 
        double salary; 
    

    public:
        Employee(int employeeId, string employeeName, double salary){
            this->employeeId = employeeId; 
            this->employeeName = employeeName;

            // validation 
            if(salary <= 0){
                cout << "Invalid salary! Salary set to 0" << endl;
            } else {
                this->salary = salary;
            }
        }

        //Getter method 
        int getEmployeeId(){
            return employeeId; 
        }

        string getEmployeeName(){
            return employeeName; 
        }

        double getSalary(){
            return salary; 
        }

        // Setter method 
        void setSalary(double salary){
            if(salary <= 0) {
                cout << "Invalid salary" << endl; 
            } else {
                this->salary = salary; 
            }
        }

        //Increment Salary
        void incrementSalary(double percentage){
            if(percentage < 0){
                cout << "Invalid percentage" << endl; 
            } else {
                salary = salary + (salary * percentage / 100);
            }
        }

        // display method
        void display(){
            cout << "Employee ID: " << employeeId << endl; 
            cout << "Employee Name: " << employeeName << endl; 
            cout << "Salary: " << salary << endl;
        }
};

int main(){
    Employee e1(101, "Arpa", 50000);
    Employee e2(201, "Kajal", 30000);

    cout << "========Before Update=========" << endl; 
    e1.display(); 
    cout << endl; 
    e2.display(); 

    e1.incrementSalary(15);
    e2.setSalary(35000);

    cout << "\n========After Update=========" << endl;  
    e1.display(); 
    cout << endl;
    e2.display();
    
    return 0; 
}