//To read student data from the file students.txt.
#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,year;
	char name[40],section[2],branch[5];
	FILE *fp;
	clrscr();
	fp=fopen("c:\\turboc3\\bin\\project\\students.txt","r");
	printf("Details of all students:\n");
	printf("ROLLNO  NAME  BRANCH  SECTION  YEAR\n");
	printf("------  ----  ------  -------  ----\n");
	while((fscanf(fp,"%d%s%s%s%d\n",&rollno,name,branch,section,&year))!=EOF)
	{ 
		printf("%d\t%s\t%s\t%s\t%d\n",rollno,name,branch,section,year);
	}
	fclose(fp);
	getch();
}







