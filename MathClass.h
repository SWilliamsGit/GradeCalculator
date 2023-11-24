#ifndef MATHCLASS_H
#define MATHCLASS_H
#include "Course.h"
#include "Student.h"

class MathClass: public Course {

    private:
        int avg;
        Student student;

    public:
        MathClass();
        void CalcFinalGrade();
};

#endif // MATHCLASS_H
