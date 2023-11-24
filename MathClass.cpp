#include <iostream>
#include "Course.h"
#include "Student.h"
#include "MathClass.h"
#include "CSClass.h"
#include <iomanip>

// constructor
MathClass::MathClass(): Course(){
    avg = 0;
}

// calculate the average student's grades
void MathClass::CalcFinalGrade(){

    student.SetGrades();

    int grade1 = student.GetLabGrade();
    int grade2 = student.GetExamGrade();
    int grade3 = student.GetQuizGrade();

    avg = (grade1 + grade2 + grade3) / 3;

    cout << "Lab Grade: " << grade1 << "/" << student.GetLetterGrade(grade1) << endl;
    cout << "Exam Grade: " << grade2 << "/" << student.GetLetterGrade(grade2) << endl;
    cout << "Quiz Grade: " << grade3 << "/" << student.GetLetterGrade(grade3) << endl;
    cout << "Final Average: " << avg << "/" << student.GetLetterGrade(avg) << endl;
}
