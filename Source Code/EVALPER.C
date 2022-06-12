
//Performance evaluation of given student.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void calcsgpa(int ,int );
void calccgpa(int );
void main()
{
	int sem,rno;
	float credit;
	char subject[20],type[5];
	clrscr();
	printf("Enter the roll number of the student for performance evaluation:");
	scanf("%d",&rno);
	printf("Enter the type of performance evaluation [SGPA (or) CGPA]:");
	scanf("%s",type);

	if(strcmp(type,"SGPA")==0 || strcmp(type,"sgpa")==0)
	{
		printf("\nEnter semester number:");
		scanf("%d",&sem);
		calcsgpa(rno,sem);
	}
	else if(strcmp(type,"CGPA")==0 || strcmp(type,"cgpa")==0)
	{
		calccgpa(rno);
	}
	else
	{
		printf("\nInvalid type.");
		printf("\nPress any key to exit...");
		getch();
		exit(0);
	}
	getch();
}
void calcsgpa(int rno,int s)
{
	int rollno,sem, grade;
	float numsum=0;
	float densum=0;
	float credit;
	char subject[20];
	FILE *fp;
	fp=fopen("c:\\turboc3\\bin\\project\\grades.txt","r");
	while((fscanf(fp,"%d%d%s%d%f\n",&rollno,&sem,subject,&grade,&credit))!=EOF)
	{
		printf("\nrecord: %d %d %s %d %f\n",rollno,sem,subject,grade,credit);
		if(rollno==rno && sem==s)
		{
			numsum+=((float)grade*credit);
			densum+=credit;
		}
	}
	printf("\nNumerator Sum: %f\nDenomenator Sum: %f\n",numsum,densum);
	printf("Performance of student:%d\n",rno);
	printf("------  ----  ------  -------  ----\n");
	printf("SGPA: %.2f",numsum/densum);
	fclose(fp);
}
void calccgpa(int rno)
{
	FILE *fp;
	int rollno,sem,grade;
	float numsum=0;
	float densum=0;
	float credit;
	char subject[20];
	fp=fopen("c:\\turboc3\\bin\\project\\grades.txt","r");
	while((fscanf(fp,"%d%d%s%d%f\n",&rollno,&sem,subject,&grade,&credit))!=EOF)
	{
		printf("\nrecord: %d %d %s %d %f\n",rollno,sem,subject,grade,credit);
		if(rollno==rno)
		{
			numsum+=((float)grade*credit);
			densum+=credit;
		}
	}
	printf("\nNumerator Sum: %f\nDenomenator Sum: %f\n",numsum,densum);
	printf("Performance of student:%d\n",rno);
	printf("------  ----  ------  -------  ----\n");
	printf("CGPA: %.2f",numsum/densum);
	fclose(fp);
}









