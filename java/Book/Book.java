class Book {
    public String title; 
    public String author; 

    public void display(){
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
    }

    public static void main(String[] args){
        Book book = new Book();

        book.title = "The spanish";
        book.author = "Kajal Bormon";

        book.display();
    }
}
