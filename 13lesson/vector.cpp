#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    string name;
    int age;
    double grade;
};

int main() {
    vector<Student> students;
    
    // Student s1 = {"Ali",18,91.3};
    // Student s2 = {"Amina", 20, 95.0};
    // students.push_back(s1);
    // students.push_back(s2);
    
    students.push_back({"Ali",18,93.0});
    students.push_back({"Qwerty",99, 99});
    students.pop_back();
    // students.clear();
   
    
    for(int i = 0; i < students.size(); i++){
        cout <<students[i].name<<" " <<students[i].age<<" "<<students[i].grade<<endl;
    }
    cout<< students.empty()<< endl;
    
//   vector<int> numbers;
   
//   numbers.push_back(10);
//   numbers.push_back(20);
//   numbers.push_back(30);
   
//   for(int i = 0; i < numbers.size(); i++){
//       cout << numbers[i] << endl;
//   }

//     vector<string> names;
//     names.push_back("Ali");
//     names.push_back("Amina");
//     names.push_back("Dias");

//       for(int i = 0; i < names.size(); i++){
//       cout << names[i] << endl;
//   }

    return 0;
}