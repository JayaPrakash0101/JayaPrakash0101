//To read student data from the file students.txt.
#include<stdio.h>
#include<conio.h>
void searchstudent()
{
	int rollno,rollnumber,year,found=0;
	char name[40],section[2],branch[5];
	FILE *fp;
	clrscr();
	printf("Enter a roll number to search:");
	scanf("%d",&rollnumber);
	fp=fopen("c:\\turboc3\\bin\\project\\students.txt","r");
	while((fscanf(fp,"%d%s%s%s%d\n",&rollno,name,branch,section,&year))!=EOF)
	{
		if(rollno==rollnumber)
		{
			printf("\nStudent found.\n");
			printf("Details of the student:\n");
			printf("ROLLNO  NAME  BRANCH  SECTION  YEAR\n");
			printf("------  ----  ------  -------  ----\n");
			printf("%d\t%s\t%s\t%s\t%d\n",rollno,name,branch,section,year);
			found=1;
			break;
		}
	}
	if(found!=1)
		printf("The student does not exist.");
	fclose(fp);
	getch();
}







