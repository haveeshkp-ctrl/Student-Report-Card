# Student Report System in C

## About the Project
A simple Student Report System developed using C programming. It accepts a student's name and marks in five subjects through command-line arguments and generates a report containing grades, total marks, average, and pass/fail status.

## Features
- Accepts student name and five subject marks.
- Calculates total marks out of 500.
- Calculates average marks.
- Assigns grades for each subject.
- Displays overall PASS or FAIL result.
- Calculates overall grade.
- Performs string operations.

## Subjects
1. Hindi
2. English
3. Mathematics
4. Science
5. Social Science

## Grading System

| Marks | Grade |
|---|---|
| 90–100 | A |
| 80–89 | B |
| 70–79 | C |
| 60–69 | D |
| 50–59 | E |
| Below 50 | F |

**Passing Criteria:** Minimum 35 marks in each subject.

## Concepts Used
- C Programming
- Arrays
- Loops
- Conditional Statements
- Command-Line Arguments (`argc` and `argv`)
- Functions (main function)
- String Handling (`strlen`, `strcpy`, `strcat`, `strcmp`)
- `strtol()` for converting command-line marks

## How to Run

Compile:
```bash
gcc student_report.c -o student_report
```

Run:
```bash
./student_report Haveesh 85 92 95 78 88
```

For Windows:
```powershell
.\student_report.exe Haveesh 85 92 95 78 88
```

## Sample Output

```text
========== STUDENT REPORT ==========
Student Name: Haveesh
Name Length: 7

Subject          Marks          Grade
Hindi            85             B
English          92             A
Maths            95             A
Science          78             C
Social Science   88             B

Total Marks: 438 / 500
Average: 87.60
Result: PASS
Overall Grade: B
Name Verification: Successful
Full Name: Haveesh - Student
====================================
```

## Author
Haveesh K

## Language
C Programming