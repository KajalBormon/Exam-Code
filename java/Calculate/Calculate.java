class Shop {
    public String name; 
    public double price; 
    public int quantity;
    public double total;  

    public void calculate(){
        total = price * quantity; 
    }

    public void display(){
        System.out.println("Name: " + name);
        System.out.println("Price: " + price);
        System.out.println("Quantity: " + quantity);
        System.out.println("Total: " + total);
    }
}

public class Calculate {
    public static void main(String[] args){
        Shop sh = new Shop();

        sh.name = "Dud";
        sh.price = 200;
        sh.quantity = 2; 

        sh.calculate();
        sh.display();
    }    
}
