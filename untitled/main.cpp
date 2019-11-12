#include <iostream>
#include "student.h"

int main() {
    std::cout << "Hello, World you are amazing!" << std::endl;
    std::cout<<"roey you are amazing"<<std::endl;
    student *s=new student(203,"tzach");
    student roey(200,"roey");
    std::cout<<s->getid()<<","<< s->getname()<<std::endl;
    std::cout<<roey.getid()<<","<< roey.getname()<<std::endl;
<<<<<<< HEAD
    std::cout<<roey.getid()<<","<< roey.getname()<<std::endl;

=======
    student *t=new student(203,"tzach");
>>>>>>> 158e4326c128fce4e63a49360bb901a49fde83b3
    return 0;
}
