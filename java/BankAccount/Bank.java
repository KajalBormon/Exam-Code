class BankAccount {
    public String name;
    public double balance;

    public void deposit(double amount) {
        balance += amount;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Balance: " + balance);
    }
}

public class Bank {
    public static void main(String[] args) {
        BankAccount bank = new BankAccount();

        bank.name = "UCB";
        bank.balance = 1200.0;

        bank.deposit(100);

        bank.display();
    }
}