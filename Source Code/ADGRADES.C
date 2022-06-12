//To insert grade and credits for all subjects into Grades.txt.
#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,sem,grade;
	float credit;
	char subject[20];
	FILE *fp;
	clrscr();
	printf("Enter roll number:\n");
	scanf("%d",&rollno);
	printf("Enter the semester number:\n");
	scanf("%d",&sem);
	printf("Enter subject:\n");
	scanf("%s",subject);
	printf("Enter Grade achieved in the subject:\n");
	scanf("%d",&grade);
	printf("Enter the credits awarded for this subject:\n");
	scanf("%f",&credit);
	fp=fopen("c:\\turboc3\\bin\\project\\grades.txt","a+");
	fprintf(fp,"%d %d %s %d %.1f\n",rollno,sem,subject,grade,credit);
	fclose(fp);
	printf("Record saved successfully.");
	getch();
}







