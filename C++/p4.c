#include <stdio.h>

// Define the student structure
struct Student {
    char name[50];
    int rollNumber;
    char address[100];
    char course[10];
};

void main() {
    // Create an array of structures for ten students
    struct Student students[2];

    // Input student details
    for (int i = 0; i < 2; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Course (BCA/MCA): ");
        scanf("%s", students[i].course);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < 2; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Address: %s\n", students[i].address);
        printf("Course: %s\n", students[i].course);
        printf("\n");
    }

}
