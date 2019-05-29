#include <string.h>
#include <stdio.h>
#include "student.h"

struct Student{
  int age;
  char firstname[20];
  char lastname[20];
  int studentId;
};



void printStudent(struct Student* student){
  printf("Student first name is %s\n", student->firstname);
  printf("Student last name is %s\n", student->lastname);
  printf("Student age is %d\n", student->age);
  printf("Student id is %d\n", student->studentId);

}


