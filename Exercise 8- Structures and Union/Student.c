/* Create a structure called "Student" with members name,
 age, and total marks. Write a C program to input data for
 two students, display their information, and find the
 average of total marks.*/
 #include<stdio.h>
  struct Student
  {
    char name[100];
    int age;
    int totalmarks;
  };
  int main(){
    struct Student s1,s2;
    
    printf("Enter Details for Student 1: ");
    //scanf("%s",&s1.name);
    fgets(s1.name,sizeof(s1.name),stdin);
    scanf("%d",&s1.age);    
    scanf("%d",&s1.totalmarks);
    getchar();

    printf("Enter Details for Student 2: ");
    //scanf("%s",&s2.name);
    fgets(s1.name,sizeof(s2.name),stdin);
    scanf("%d",&s2.age);    
    scanf("%d",&s2.totalmarks);

    float avg=(float)(s1.totalmarks+s2.totalmarks)/2.0;

    printf("The name of student 1 is: %s\n",s1.name);
    printf("The age of student 1 is: %d\n",s1.age);
    printf("The marks of student 1 is: %d\n",s1.totalmarks);

    printf("The name of student 2 is: %s\n",s2.name);
    printf("The age of student 2 is: %d\n",s2.age);
    printf("The marks of student 2 is: %.d\n",s2.totalmarks);
    
    printf("The average marks is: %.2f\n",avg);
  }