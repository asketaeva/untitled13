//
// Created by 77775 on 23.11.2021.
//

#include "Course.h"
void Course::printCourse() const{
    Course course[3] = {Course("AP1", "Olzhas Turara", 65),
                              Course("AP1", "Olzhas Turara", 456),
                              Course("AP1", "Olzhas Turara", 7417)};

    cout<< left<< setw(10)<< "Course name"<< left<< setw(5)<< "Course lecturer"<< left<< setw(8)<< "Class room"<< endl;
if(to_string(class_room).length()<=3){
    for (auto & i : course)
    {
        cout<< left<< setw(10)<< i.name<< left<< setw(5)<< i.lecturer<< left<< setw(8)<< i.class_room<< endl;
    }}
else cout<< "No such class room";

}
