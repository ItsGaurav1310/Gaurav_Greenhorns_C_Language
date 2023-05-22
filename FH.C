#include<stdio.h>
#include<conio.h>

void main()
{
 FILE *fp;
 char data[100];
 clrscr();

 fp = fopen("data.txt", "a");

 printf("Enter any data: ");
 gets(data);

 fputs(data, fp);  // fputs(data, file_pointer);
 fputs("\n", fp);

 printf("\nData written successfully...");

 fclose(fp);


 fp = fopen("data.txt", "r");     // fopen(filename, mode);

 printf("\n\nFile data: \n");
 printf("--------------\n");

 while(fgets(data, 2, fp) != NULL)  // fgets(container, buffer_size, file_pointer);
 {
  printf("%s", data);
 }

 fclose(fp);

 getch();
}