#include <iostream>
#include "Course.h"
#include "Student.h"
#include "MathClass.h"
#include "CSClass.h"
#include <iomanip>

// constructor
CSClass::CSClass(): Course() {
    weightedAvg = 0;
}

// calculate weighted average of student's grades
void CSClass::CalcFinalGrade() {
    student.SetGrades();

    int grade1 = student.GetLabGrade();    // lab = 50%
    int grade2 = student.GetExamGrade();   // exam = 30%
    int grade3 = student.GetQuizGrade();   // quiz = 20%

    weightedAvg = (50*grade1 + 30*grade2 + 20*grade3) / (50 + 30 + 20);

    cout << "Lab Grade: " << grade1 << "/" << student.GetLetterGrade(grade1) << endl;
    cout << "Exam Grade: " << grade2 << "/" << student.GetLetterGrade(grade2) << endl;
    cout << "Quiz Grade: " << grade3 << "/" << student.GetLetterGrade(grade3) << endl;
    cout << "Final Weighted Average: " << weightedAvg << "/" << student.GetLetterGrade(weightedAvg) << endl;

}
