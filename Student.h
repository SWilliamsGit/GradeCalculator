#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

class Student{

    private:
        /* Private Members/Attributes */
        int labGrade;
        int examGrade;
        int quizGrade;

    public:
        /* Constructor */
        Student();

        /* Accessors and Mutators */
        void SetGrades();
        int GetLabGrade();
        int GetExamGrade();
        int GetQuizGrade();

        /* Obtain letter grade
        Pre: score/number is provided
        Post: returns the letter grade associated to the score/number */
        string GetLetterGrade(int grade);
};

#endif // STUDENT_H
