#include <iostream>
#include "Course.h"
#include "Student.h"
#include "MathClass.h"
#include "CSClass.h"


/* Cosntructor */
Course::Course() {
}

/* Returns name */
string Course::GetName() {
    return name;
}

/* Modifies name */
void Course::SetName(string n) {
    name = n;
}

// Virtual Function
void Course::CalcFinalGrade() {
}
