class BankAccount{
    private String accountNumber; 
    private double balance; 

    public BankAccount(String accountNumber, double balance){
        this.accountNumber = accountNumber; 
        this.balance = balance; 
    }

    // Getter Methods
    public String getAccountNumber(){
        return accountNumber; 
    }

    public double getBalance(){
        return balance; 
    }

    // Setter Method 
    public void setBalance(double balance){
        if(balance >= 0){
            this.balance = balance; 
        } else {
            System.out.println("Balance cannot be negative.");
        }
    }

    public void balanceTransfer(BankAccount targetAccount, double amount){
        if(amount <= 0){
            System.out.println("Transfer amount must be positive.");
        } else if(this.balance < amount){
            System.out.println("Insufficient funds for transfer.");
        } else {
            this.balance -= amount; 
            targetAccount.setBalance(targetAccount.getBalance() + amount); 
            System.out.println("Transferred " + amount + " from account " + this.accountNumber + " to account " + targetAccount.getAccountNumber());
        }
    }
}

public class Main {
    public static void main(String[] args){
        BankAccount account1 = new BankAccount("Acc201", 14000);
        BankAccount account2 = new BankAccount("Acc202", 5000);

        // Display Initial Account with Balance 
        System.out.println("Before Transfer");
        System.out.println("Account Number: " + account1.getAccountNumber() + ", Balance: " + account1.getBalance());
        System.out.println("Account Number: " + account2.getAccountNumber() + ", Balance: " + account2.getBalance());

        // Transfer balance 
        account1.balanceTransfer(account2, 3000);

        // After transfer account with balance 
        System.out.println("After Transfer");
        
        System.out.println("Account Number: " + account1.getAccountNumber() + ", Balance: " + account1.getBalance());
        System.out.println("Account Number: " + account2.getAccountNumber() + ", Balance: " + account2.getBalance());

    }   
}
