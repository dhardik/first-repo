#include <stdio.h>
typedef struct
{
  char name[30];
  char department[20];
  int yearOfStudy;
  float cgpa;
}student;

int main()
{
  int t;
  printf("Enter the number of students\n");
  scanf("%d",&t);
  student stud[t];
  int i;
  for(i=0;i<t;i++)
  {
    printf("Enter the details of student %d\n",(i+1));
    printf("Enter name\n");
    scanf("%s",&stud[i].name);
    printf("Enter department\n");
    scanf("%s",&stud[i].department);
    printf("Enter year of study\n");
    scanf("%d",&stud[i].yearOfStudy);
    printf("Enter cgpa\n");
    scanf("%f",&stud[i].cgpa);
  }
  printf("Menu\n");
  printf("1)Display names of students from a particular year\n");
  printf("2)Display names of students from a particular department\n");
  printf("3)Display all details of the student having highest CGPA\n");
  printf("4)Display all details of the student from a particular department having the highest CGPA\n");
  printf("5)Display all details of a particular student (Search by name)\n");
  printf("6)Display all details of all students\n");
  printf("7)Update CGPA of a particular student [Update CGPA by 0.5 of the particular student]\n");
  printf("8)Exit\n");
  int choice;
  scanf("%d",&choice);
  if(choice==1)
  {
    void one()
  }
}
