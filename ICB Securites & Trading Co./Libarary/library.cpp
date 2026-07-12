#include<iostream>
using namespace std; 

class Book{
    private: 
        int bookId; 
        string bookTitle; 
        string authorName; 
        double price; 
        int availableCopies; 

    public: 
        Book(int bookId, string bookTitle, string authorName, double price, int availableCopies){
            this->bookId = bookId; 
            this->bookTitle = bookTitle;
            this->authorName = authorName; 

            //Validation 
            if(price <= 0) {
                cout << "Invalid Price! Default Price = 0\n";
                this->price = 0;
            } else {
                this->price = price; 
            }

            if(availableCopies < 0){
                cout << "Invalid Copies! Default Copies = 0\n";
                this->availableCopies = 0; 
            } else {
                this->availableCopies = availableCopies; 
            }
        }

        int getBookId(){
            return bookId; 
        }

        string getBookTitle(){
            return bookTitle; 
        }

        string getAuthorName(){
            return authorName; 
        }

        double getPrice(){
            return price; 
        }

        int getAvailableCopies(){
            return availableCopies; 
        }

        void setPrice(double price){
            if(price <= 0){
                cout << "Invalid price" << endl; 
            } else {
                this->price = price; 
                cout << "Updated Price: " << price << endl; 
            }
        }

        void setAvailableCopies(int availableCopies){
            if(availableCopies < 0) {
                cout << "Available copies can not be negative" << endl;
            } else {
                this->availableCopies = availableCopies;
            }
        }

        void issueBook(int quantity){
            if(quantity <= 0) {
                cout << "Quantity must be greater than 0" << endl;
            } else if(this->availableCopies < quantity){
                cout << "Not enough copies available." << endl; 
            } else {
                this->availableCopies -= quantity; 
                cout << "Book issued successfully" << endl; 
            }
        }

        void returnBook(int quantity) {

            if (quantity <= 0) {
                cout << "Quantity must be greater than 0\n";
            }
            else {
                availableCopies += quantity;
                cout << quantity << " book(s) returned successfully.\n";
            }
        }

        void applyDiscount(double percentage){
            if(percentage < 0){
                cout << "Invalid percentage" << endl; 
            } else {
                price = price - (price * percentage / 100); 
                cout << percentage << "%" << "Discount apply successfully" << endl;
            }
        }

        bool isAvailable(){
            if(availableCopies > 0){
                return true;
            } else {
                return false; 
            }
        }

        void display(){
            cout << "Book ID: " << bookId << endl; 
            cout << "Book Title: " << bookTitle << endl; 
            cout << "Author Name: " << authorName << endl; 
            cout << "Price: " << price << endl; 
            cout << "Available Copies: " << availableCopies << endl;
        }
};

int main() {
    Book b1(101, "Bank Math", "Khairul", 470, 10);
    Book b2(102, "Compact ID", "Ashik Mahmud", 980, 20);

    cout << "=======Issues Book=========" << endl;
    b1.issueBook(2);
    cout << endl; 
    
    cout << "=======Return Book=========" << endl;
    b2.returnBook(3);
    cout << endl;

    cout << "=======Apply Discount=========" << endl;
    b1.applyDiscount(10);
    cout << endl;

    cout << "=======Update Price=========" << endl;
    b2.setPrice(1200); 
    cout << endl; 

    cout << "=======Display Book 1=========" << endl;
    b1.display(); 
    cout << endl;

    cout << "=======Display Book 2=========" << endl;
    b2.display(); 
    cout << endl;
    
    cout << "\nAvailability status\n";

    if(b1.isAvailable()){
        cout << "Book 1 is available." << endl;
    } else {
        cout << "Book 1 is not available." << endl;
    }

    if(b2.isAvailable()){
        cout << "Book 2 is available." << endl;
    } else {
        cout << "Book 2 is not available." << endl;
    }
}