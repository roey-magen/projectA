//
// Created by tzach on 12.11.2019.
//

#include "student.h"
student::student(int _id,std::string _name){
    id=_id;
    name=_name;
}
std::string student::getname(){return name;}
int student:: getid(){return id;}