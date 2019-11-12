//
// Created by tzach on 12.11.2019.
//

#ifndef PROJECTA_STUDENT_H
#define PROJECTA_STUDENT_H


#include <string>

class student {
private:
    int id;
    std::string name;

public:
    student(int _id, std::string _name);
    std::string getname();
    int getid();
};



#endif //PROJECTA_STUDENT_H
