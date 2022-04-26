//
// Created by 77775 on 23.11.2021.
//

#include "Student.h"


void Student::student_info(const Student &student) {
    bool b = false;
    char s;
    cin>>s;
    while (!b) {
        if (s== 'A') {
            for (auto it = course.begin(); it != course.end(); it.operator++()) {
                cout << left << setw(10) << "Student name" << left << setw(5) << "Student surname" << left << setw(5)
                     << "ID" << endl;
                cout << left << setw(10) << name << left << setw(5) << surname << left << setw(5) << ID << endl;
            }
        } else if (s== 'N') {
            for (auto it = course.begin(); it != course.end(); it.operator--()) {
                cout << left << setw(10) << "Student name" << left << setw(5) << "Student surname" << left << setw(5)
                     << "ID" << left << setw(5) << endl;
                cout << left << setw(10) << name << left << setw(5) << surname << left << setw(5) << ID << endl;
            }
        } else (s == 'Q')
            b = true;
    }
}

Student::Student() {

}

