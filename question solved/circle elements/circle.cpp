#include<iostream>
#include<cmath>
using namespace std; 

class Circle{
    private: 
        double radius; 
        double x, y; 
    
    public: 
        Circle(double r, double xPos, double yPos){
            radius = r; 
            x = xPos; 
            y = yPos; 
        }

        double area(){
            return M_PI * radius * radius; 
        }

        double perimeter(){
            return 2 * M_PI * radius; 
        }

        void translate(double dx, double dy){
            x += dx; 
            y += dy; 
        }

        void display(){
            cout << "Center: (" << x << ", " << y << ")" << endl;
            cout << "Radius: " << radius << endl; 
        }
};

int main(){ 
    Circle c(5,0,0);
    
    cout << "Before Translation: " << endl; 
    c.display(); 

    c.translate(3, 4);
    cout << "After Translation: " << endl; 
    
    c.display();

    cout << "\nArea: " << c.area() << endl; 
    cout << "Perimeter: " << c.perimeter() << endl; 

    return 0; 
}