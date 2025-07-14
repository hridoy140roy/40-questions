
#include <stdio.h>

// Structure define korilu student information babe
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Student data input lobo
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);  // Full line read koribo

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Output display koribo
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
