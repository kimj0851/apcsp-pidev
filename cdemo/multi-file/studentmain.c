#include <stdio.h>
#include "student.h"
#include <string.h>


struct Student {
  int age;
  char firstname[20];
  char lastname[20];
  int studentId;
};

int main() {  
  char input[100];
  int number;
  printf("How many students do you want to input?\n");
  fgets(input, 100, stdin);
  sscanf(input, "%d", &number);
  int placer = number - 1;
  struct Student studentArray[placer];
  int i;
  for (i=0; i<number; i++){
    char firstname[20];
    char lastname[20];
    int age;
    int studentId;
    printf("First Name: \n");
    scanf("%s", firstname);
    printf("Last Name: \n");
    scanf("%s", lastname);
    printf("Age: \n");
    scanf("%d", &age);
    printf("Student ID: \n");
    scanf("%d", &studentId);
    struct Student student;
    student.age = age;
    strcpy(student.firstname, firstname);
    strcpy(student.lastname, lastname);
    student.studentId = studentId;
    studentArray[i] = student;
  }
  int j;
  for (j=0;j<number;j++){
    printStudent(&studentArray[j]);
    printf("\n"); 
  }
  return 0;
}


