#ifndef CSCLASS_H
#define CSCLASS_H
#include "Course.h"
#include "Student.h"

class CSClass: public Course {

    private:
        int weightedAvg;
        Student student;

    public:
        CSClass();
        void CalcFinalGrade();
};

#endif // CSCLASS_H

