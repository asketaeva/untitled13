//
// Created by 77775 on 23.11.2021.
//

#ifndef UNTITLED13_COURSE_H
#define UNTITLED13_COURSE_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <list>
using namespace std;
class Course {
private:
    string name;
    string lecturer;
    int class_room;
public:

    Course(const string &name, const string &lecturer, const int &class_room) {

            this->name = name;
            this->lecturer = lecturer;
            this->class_room = class_room;

    }
void printCourse() const;
}


#endif //UNTITLED13_COURSE_H
