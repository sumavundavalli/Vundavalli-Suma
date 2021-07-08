//Develop a C program to read and print three book details (i.e. Book Title, Author, Price,number of pages, date of publication). Also print the Bookdetails with the highest price
#include<stdio.h>
int main()
{
struct book
{
char author[20];
char title[20];
float price;
int no_pages;
char publication[20];
}
book1,book2,book3;
printf("Enter the book 1 details : ");
scanf("%s %s %f %d %s",book1.author,book1.title,&book1.price,&book1.no_pages,book1.publication);
printf("Enter the book 2 details : ");
scanf("%s %s %f %d %s",book2.author,book2.title,&book2.price,&book2.no_pages,book2.publication);
printf("Enter the book 3 details : ");
scanf("%s %s %f %d %s",book3.author,book3.title,&book3.price,&book3.no_pages,book3.publication);
if(book1.price>book2.price && book1.price>book3.price)
{
printf("Book 1 has the higest price . It's details are \n author=%s \n title=%s \n price=%.2f \n no of pages=%d \n publication is %s",book1.author,book1.title,book1.price,book1.no_pages,book1.publication);
}
else if(book2.price>book1.price && book2.price>book3.price)
{
printf("Book 2 has the higest price . It's details are author=%s,title=%s,price=%.2f,no of pages=%d,publication is %s",book2.author,book2.title,book2.price,book2.no_pages,book2.publication);
}
else
printf("Book 3 has the higest price . It's details are author=%s,title=%s,price=%.2f,no of pages=%d,publication is %s",book3.author,book3.title,book3.price,book3.no_pages,book3.publication);
return 0;
}
