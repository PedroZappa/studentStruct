#include <stdio.h>

struct student {
  char firstName[50];
  int roll;
  float marks;
} s[5]; // Init 5 students

int main() {
  int i; // Looping Variable

  // Take Input from User
  printf("Enter student's information:\n");
  for (i = 0; i < 5; i++) {
    // Assign roll number to each student
    s[i].roll = i + 1; 
    printf("\nFor roll number %d,\n", s[i].roll);
    // Assign name to each student
    printf("Enter %d first name: ", i + 1);
    scanf("%s", s[i].firstName);
    // Assign marks to each student
    printf("Enter %d marks: ", i + 1);
    scanf("%f", &s[i].marks);
  }

  // Printing the information of each student
  for (i = 0; i < 5; i++) {
    printf("\nRoll number: %d\n", i + 1);
    printf("First name: ");
    puts(s[i].firstName); // 
    printf("Marks: %.1f\n", s[i].marks);
    printf("\n");
  }

  return 0;
}