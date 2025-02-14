/* Create a structure called "Student" with members name,
 age, and total marks. Write a C program to input data for
 two students, display their information, and find the
 average of total marks.*/
  struct Student
  {
    char name[100];
    int age;
    int totalmarks;
  };
  int main(){
    struct Student s1,s2;
    
    printf("Enter Details for Student 1: ");
    scanf("%s",s1.name);
    scanf("%d",s1.age);    
    scanf("%d",s1.totalmarks);

    printf("Enter Details for Student 2: ");
    scanf("%s",s2.name);
    scanf("%d",s2.age);    
    scanf("%d",s2.totalmarks);


  }