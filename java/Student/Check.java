class Student{
    public String name; 
    public double marks; 
    public String result; 

    public void check(){
        if(marks >= 33){
            result = "Passed";
        } else {
            result = "Failed";
        }
    }

    public void display(){
        System.out.println("Name: " + name);
        System.out.println("Marks: " + marks);
        System.out.println("Result: " + result);
    }
}

public class Check {
    public static void main(String[] args){
        Student st = new Student();

        st.name = "Kajal";
        st.marks = 33; 

        st.check();
        st.display();
    }
}
