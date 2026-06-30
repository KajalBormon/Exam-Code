class ATM{
    public double balance = 200000;

    public void withdraw(double amount){
        if(amount <= balance){
            balance = balance - amount; 
            System.out.println("Successfully withdraw balance: " + balance);
        } else {
            System.out.println("Invalid amount");
        }
    }

    public void display(){
        System.out.println("Balance: " + balance);
    }

    public static void main(String[] args){
        ATM atm = new ATM();

        atm.display();
        atm.withdraw(50000);
        atm.display();
    }
}