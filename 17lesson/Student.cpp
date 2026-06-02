#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, int age, double averageGrade){
    this->name = name;
    this->age = age;
    this->averageGrade = averageGrade;
}

void Student::printInfo(){
    cout<<"Имя: " << name << endl;
    cout<<"Возраст: " << age << endl;
    cout<<"Средняя оценка" << averageGrade << endl;
}
bool Student::isExcellentsStudent(){
    return averageGrade >= 4.5;
}