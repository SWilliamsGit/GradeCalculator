#include <iostream>
#include "Course.h"
#include "Student.h"
#include "MathClass.h"
#include "CSClass.h"

using namespace std;

int main() {

    MathClass mth;
    CSClass csc;

    Course *courseMTH = &mth;
    Course *courseCSC = &csc;

    courseMTH->SetName("MTH161");
    cout << "Course Name: " << courseMTH->GetName() << endl << endl;
    courseMTH->CalcFinalGrade();

    cout << endl;

    courseMTH->SetName("CSC210");
    cout << "Course Name: " << courseMTH->GetName() << endl << endl;
    courseCSC->CalcFinalGrade();

    return 0;
}
