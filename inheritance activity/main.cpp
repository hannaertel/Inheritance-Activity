#include "Student.h"
#include <iostream>

int main(int argc, char* argv[ ]) {
   Student s = Student(2.9, "Sam");
   std::cout << "Name = " << s.getName() << " GPA = " << s.getGPA() << std::endl;
   Person p = Person("Sara");
   Person *personPtr = &s;
   Student *studentPtr = &s; 
   //would give error if was &p without student *; now have cast it to be a student by (student *)


   p.print();
   s.print();
   personPtr -> print();
   studentPtr -> print();
   

}
