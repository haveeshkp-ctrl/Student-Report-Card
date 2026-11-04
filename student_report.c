#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char name[50];
    char copyName[50];

    char subjects[5][20] = {
        "Hindi",
        "English",
        "Maths",
        "Science",
        "Social Science"};

    int marks[5];
    int total = 0;
    int pass = 1;
    float average;

    if (argc != 7)
    {
        printf("Enter student name and 5 subject marks!\n");
        printf("Example: Haveesh 85 92 95 78 88\n");
        return 1;
    }

    strcpy(name, argv[1]);
    strcpy(copyName, name);

    for (int i = 0; i < 5; i++)
    {
        char *end;
        long value = strtol(argv[i + 2], &end, 10);

        if (*end != '\0' || value < 0 || value > 100)
        {
            printf("Invalid marks!\n");
            return 1;
        }

        marks[i] = (int)value;
    }

    printf("========== STUDENT REPORT ==========\n");

    printf("Student Name: %s\n", name);
    printf("Name Length: %zu\n", strlen(name));

    printf("\nSubject          Marks          Grade\n");

    for (int i = 0; i < 5; i++)
    {
        char grade;

        if (marks[i] >= 90)
            grade = 'A';
        else if (marks[i] >= 80)
            grade = 'B';
        else if (marks[i] >= 70)
            grade = 'C';
        else if (marks[i] >= 60)
            grade = 'D';
        else if (marks[i] >= 50)
            grade = 'E';
        else
            grade = 'F';

        printf("%s", subjects[i]);

        for (int j = strlen(subjects[i]); j < 17; j++)
        {
            printf(" ");
        }

        printf("%d", marks[i]);

        for (int j = 0; j < 15; j++)
        {
            printf(" ");
        }

        printf("%c\n", grade);

        total += marks[i];

        if (marks[i] < 35)
            pass = 0;
    }

    average = total / 5.0;

    printf("\nTotal Marks: %d / 500\n", total);
    printf("Average: %.2f\n", average);

    if (pass)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    if (pass)
    {
        if (average >= 90)
            printf("Overall Grade: A\n");
        else if (average >= 80)
            printf("Overall Grade: B\n");
        else if (average >= 70)
            printf("Overall Grade: C\n");
        else if (average >= 60)
            printf("Overall Grade: D\n");
        else
            printf("Overall Grade: E\n");
    }
    else
    {
        printf("Overall Grade: F\n");
    }

    if (strcmp(name, copyName) == 0)
        printf("Name Verification: Successful\n");

    strcat(copyName, " - Student");

    printf("Full Name: %s\n", copyName);

    printf("====================================\n");

    return 0;
}