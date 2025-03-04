//CODE ALPHAA
//TASK
#include <iostream>
using namespace std;
void calculateGrade(float marks, string &grade, float &gpa) {
    if (marks >= 90) {
        grade = "A+";
        gpa = 4.0;
    } else if (marks >= 85) {
        grade = "A";
        gpa = 3.7;
    } else if (marks >= 80) {
        grade = "B+";
        gpa = 3.3;
    } else if (marks >= 75) {
        grade = "B";
        gpa = 3.0;
    } else if (marks >= 70) {
        grade = "C+";
        gpa = 2.7;
    } else if (marks >= 65) {
        grade = "C";
        gpa = 2.3;
    } else if (marks >= 60) {
        grade = "D+";
        gpa = 2.0;
    } else if (marks >= 50) {
        grade = "D";
        gpa = 1.7;
    } else {
        grade = "F";
        gpa = 0.0;
    }
}

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    float totalGPA = 0.0, totalCreditHours = 0.0;
    for (int i = 1; i <= numSubjects; i++) {
        float marks, creditHours;
        string grade;
        float gpa;
        
        cout << "\nEnter marks for subject " << i << ": ";
        cin >> marks;
        cout << "Enter credit hours for subject " << i << ": ";
        cin >> creditHours;

        calculateGrade(marks, grade, gpa);

        cout << "Grade: " << grade << " | GPA: " << gpa << endl;

        totalGPA += gpa * creditHours;
        totalCreditHours += creditHours;
    }

    // Calculate final CGPA
    float cgpa = totalGPA / totalCreditHours;
    cout << "\nFinal CGPA: " << cgpa << endl;

    return 0;
}
