#include <stdio.h>
#include <cstring>
void main()
{
	struct book
	{
		char title[20];
		char author[15];
		int pages;
		float price;
	};
	struct book book1 = {"Ramayan","Valmiki",1000,1200.50};
	printf("The name of the book is = ");
	printf("%s \n",book1.title);
	printf("The name of the author of the book is = %s \n",book1.author);
	printf("The price of the book is = %4.2f \n",book1.price);
	printf("The number of pages that this book has is = %d \n",book1.pages);
	
	struct book book2 = {"Mahabharat","sanjay",2000,2400.46};
	int total = book1.pages+book2.pages;
	printf("The total number of pages in both the books is = %d \n",total);
	char both[50];
	both = strcat(book1.title,book2.title);
	printf("The name of both the books is = %s \n",both);
}