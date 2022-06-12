//To read student data and append to a file named students.txt.
#include<stdio.h>
#include<conio.h>
void addstudent()
{
	int rollno,year;
	char name[40],section[2],branch[5];
	FILE *fp;
	clrscr();
	printf("Enter roll number:\n");
	scanf("%d",&rollno);
	printf("Enter name of the student:\n");
	scanf("%s",name);
	printf("Enter branch of the student:\n");
	scanf("%s",branch);
	printf("Enter section of the student:\n");
	scanf("%s",section);
	printf("Enter the year of study of student:");
	scanf("%d",&year);
	fp=fopen("c:\\turboc3\\bin\\project\\students.txt","a+");
	fprintf(fp,"%d %s %s %s %d\n",rollno,name,branch,section,year);
	fclose(fp);
	printf("Record saved successfully.");
	getch();
}







