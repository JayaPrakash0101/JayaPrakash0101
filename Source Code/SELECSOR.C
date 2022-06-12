//To read student data from the file students.txt.
#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	int year;
	char name[40];
	char section[2];
	char branch[5];
}studetails[100];
void bubblesort(struct student[],int );
void main()
{
	int size,rollno,year,i=0;
	char name[40],section[2],branch[5];
	FILE *fp;
	clrscr();
	fp=fopen("c:\\turboc3\\bin\\project\\students.txt","r");
	//Populating structure array with student data from file.
	while((fscanf(fp,"%d%s%s%s%d\n",&rollno,name,branch,section,&year))!=EOF)
	{
	       //printf("%d\t%s\t%s\t%s\t%d\n",rollno,name,branch,section,year);
	       studetails[i].rollno=rollno;
	       strcpy(studetails[i].name,name);
	       strcpy(studetails[i].section,section);
	       studetails[i].year=year;
	       strcpy(studetails[i].branch,branch);
	       i++;
	}
	size=i;
	bubblesort(studetails,size);
	fclose(fp);
	getch();
}
void bubblesort(struct student a[],int n)
{
    int i,j;
    struct student temp;
    for(i=0;i<n-1;i++)
    {
	for(j=0;j<n-i-1;j++)
	{
	    if(a[j].rollno>a[j+1].rollno)
	    {
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    }
	}
    }
	printf("Details of all students in ascending order by roll number:\n");
	printf("ROLLNO  NAME  BRANCH  SECTION  YEAR\n");
	printf("------  ----  ------  -------  ----\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t%s\t%s\t%s\t%d\n",a[j].rollno,a[j].name,a[j].branch,a[j].section,a[j].year);
	}
}







