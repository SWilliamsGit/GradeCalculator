#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

class Course {

    private:
        string name;

    public:
        Course();

        /* Accessor and Mutators */
        string GetName();
        void SetName(string n);

        /**
        Calculate Students final grade
        @pre N/A
        @post calculates average grade */
        // Virtual Function
        virtual void CalcFinalGrade();
};

#endif // COURSE_H
