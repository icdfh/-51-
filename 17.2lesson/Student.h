#pragma once
#include <string>
using namespace std;

class Student{
private:
    string name;
    int age;
    double averageGrade;

public:
    Student(string name, int age,double averageGrade);
    void printInfo();
    bool isExcellentsStudent();
};