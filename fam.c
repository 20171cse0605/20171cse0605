#include<stdio.h>
struct student
{
	char name[50];
	int age;
	float marks;
}s;
void main()
{
	printf("enter the stud i8nfo\n");
	printf("enter the name\n");
	gets(s.name);
	printf("enter the age\n");
	scanf("%d",&s.age);
	printf("enter the marks\n");
	scanf("%f",&s.marks);
	printf("the student details are\n");
	printf("name=%s\nage=%d\nmarks=%f\n",s.name,s.age,s.marks);
}
