package java.Shape;

public class Shape {
    void  area(int side){ /* Square area */
        System.out.println("Square area: " + (side * side));
    }

    void area(int length, int width){ /* Rectangle area */
        System.out.println("Rectangle area: " + (length * width));
    }

    void area(int radius){
        System.out.println("Circle area: " + (3.1416 * radius * radius));
    }

    public static void main(String[] args){
        Shape s = new Shape(); 
        
    }
}
