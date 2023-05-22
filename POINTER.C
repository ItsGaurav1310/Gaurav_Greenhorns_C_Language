	#include<stdio.h>
	#include<conio.h>
	#include<string.h>


	void main()
	{
	 char email[100], pass[100];
	 clrscr();

	 printf("Enter email: ");
	 gets(email);

	 printf("Enter password: ");
	 gets(pass);

	 if(strcmp(email, "admin@gmail.com")==0 && strcmp(pass, "123456")==0)
	 {
	   printf("Login successfull...");
	 }
	 else
	 {
	   printf("Login failed...");
	 }

	 getch();
	}