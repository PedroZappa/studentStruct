#include <stdio.h>

struct student {
  char firstName[50];
  int roll;
  float marks;
} s[5]; // Init 5 students

int main() {
  int i; // Looping Variable

  // Take Input from User
  printf("Enter Student's Information:\n");
  for (i = 0; i < 5; i++) {
    // Assign roll number to each student
    s[i].roll = i + 1; 
    printf("\nStudent number %d,\n", s[i].roll);
    // Assign name to each student
    printf("Enter first name: ");
    scanf("%s", s[i].firstName);
    // Assign marks to each student
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
  }

  // Printing the information of each student
  for (i = 0; i < 5; i++) {
    printf("\nRoll number: %d\n", i + 1);
    printf("First name: ");
    puts(s[i].firstName); // 
    printf("Marks: %.1f", s[i].marks);
    printf("\n");
  }

  return 0;
}