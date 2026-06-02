#include <iostream>
#include "Student.h"
using namespace std;

int main(){
    Student student1("Али", 18, 4.8);
    Student student2("Маша", 19,3.9);

    student1.printInfo();

    if(student1.isExcellentsStudent()){
        cout <<"Студент является отличником"<<endl;
    }
    else{
        cout<<"Студент не является отличником"<<endl;
    }
    cout<<endl;
    
    student2.printInfo();
    if(student2.isExcellentsStudent()){
        cout<<"Студент является отличником"<<endl;
    }
    else{
        cout<<"Студет не является отличником"<<endl;
    }
    return 0;
}