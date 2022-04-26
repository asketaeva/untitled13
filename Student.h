//
// Created by 77775 on 23.11.2021.
//

#ifndef UNTITLED13_STUDENT_H
#define UNTITLED13_STUDENT_H
#include "Course.h"
#include <list>

class Student {
private:
    string name;
    string surname;
    char ID;
    Course course;
public:
    Student(const string &name, const string &surname, char id, Course course) {
        if (to_string(id).length() > 8 || to_string(id).length() < 8) {
            cout << "ID is not correct";
        } else {
            this->name = name;
            this->surname = surname;
            this->ID = ID;
            course.printCourse();
        }
    }

    void student_info(const Student &student);

    Student();
}

#endif //UNTITLED13_STUDENT_H
