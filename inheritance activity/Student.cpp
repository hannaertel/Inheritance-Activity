#include <string>
#include <iostream>
#include "Student.h"

Student::Student(float _gpa, std::string name): Person(name)  {
   gpa = _gpa;
}

float Student::getGPA( ) {
   return gpa;
}
void Student::print(){
    auto name = getName();
    std::cout << "Name: " << name; 
    std::cout << "GPA: " << gpa;
}