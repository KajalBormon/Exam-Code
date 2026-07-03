class Teacher{
    Teacher(){
        System.out.println("Teacher Constructor");
    }

    void teach(){
        System.out.println("Teacher Teach");
    }
}

class MathTeacher extends Teacher{
    MathTeacher(){
        System.out.println("Math Teacher Constructor");
    }

    void solveMath(){
        System.out.println("Math Teacher Solve Math");
    }
}

class Order{
    public static void main(String[] args){
        MathTeacher mt = new MathTeacher();

        mt.teach();
        mt.solveMath();
    }
}
