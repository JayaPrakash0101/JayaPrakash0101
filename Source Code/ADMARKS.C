//To read student data and append to a file named students.txt.
#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,dt,ap,eg,pps,eng,ladc;
	char examtype[20],examdate[14];
	FILE *fp;
	clrscr();
	printf("Enter roll number:\n");
	scanf("%d",&rollno);
	printf("Enter exam type:\n");
	scanf("%s",examtype);
	printf("Enter exam date:\n");
	scanf("%s",examdate);
	printf("Enter Design Thinking marks:");
	scanf("%d",&dt);
	printf("Enter Applied Physics marks:");
	scanf("%d",&ap);
	printf("Enter Engineering Graphics marks:");
	scanf("%d",&eg);
	printf("Enter Programming for Problem Solving marks:");
	scanf("%d",&pps);
	printf("Enter English marks:");
	scanf("%d",&eng);
	printf("Enter Mathematics marks:");
	scanf("%d",&ladc);
	fp=fopen("c:\\turboc3\\bin\\project\\marks.txt","a+");
	fprintf(fp,"%d %s %s %d %d %d %d %d %d\n",rollno,examtype,examdate,dt,ap,eg,pps,eng,ladc);
	fclose(fp);
	printf("Record saved successfully.");
	getch();
}







