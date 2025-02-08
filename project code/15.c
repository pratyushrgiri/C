/*Create a **structure** named **“book”** with members: **book ID, title, author, and price**. Write a main program to read and display the details of a book.
*/
# include <stdio.h>
struct book {
    int id;
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct book b;
    printf("Enter book ID: ");
    scanf("%d", &b.id);
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter book author: ");
    scanf("%s", b.author);
    printf("Enter book price: ");
    scanf("%f", &b.price);
    printf("\nBook Details:\n");
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
    return 0;
}