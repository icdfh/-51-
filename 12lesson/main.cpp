// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// void changeNumber(int* p){
//     *p = 500;
// }

void changeByPointer(int* x){
    *x = 100;
}
void changeByValue(int x){
    x = 100;
    cout<<x<<endl;
}



int main() {
//   int a = 5;
//   int b = 10;
  
//   int* p = &a;
  
//   cout<<"Before" << endl;
//   cout<< "a = " << a << endl;
//   cout<< "B = " << b << endl;
  
//   *p = 100;
  
//   p = &b;
//   *p = 200;
   
//   cout<<"After" << endl;
//   cout<< "a = " << a << endl;
//   cout<< "B = " << b << endl;

// int number = 10;
// changeNumber(&number);

// cout<<number<<endl;

// int a = 10;
// int b = 10;

// changeByValue(a);
// changeByPointer(&b);
// cout<<a<<endl;
// cout<<b<<endl;
   
   
// Динамическая память
// int numbers[5];

// int size;
// cin >>size;
// int numbers[size];

// new and delete

// int* number = new int;
// int* number2 = new int(50);

// *number = 10;
// cout<<*number<<endl;
// cout<<"Address: "<<number<<endl;
// cout<<"Address: "<<&number2<<endl;
// cout<<"Value: "<<*number2<<endl;





// delete number;

// double* price = new double(1500.0);

// cout<< "Old price: " << *price << endl;

// *price = *price + 300;

// cout<<"New price" << *price<<endl;
// delete price;

// string* name = new string("Madiyar");
// cout<< "Hello, " << *name << endl;

// delete name;

// string* name = new string;

// cout << "Enter your name: ";
// cin >> *name;

// cout<<"Hello, "<< *name <<"!" <<endl;
// delete name;

// Как делать не нужно!
// int* number = new int(10);

// cout<< *number << endl;
// delete number;

// int size;
// cout<<"Enter size: ";
// cin >> size;
// int* numbers = new int[size];

// for(int i = 0; i < size; i++){
//     cout<<"Enter number " << i << ": ";
//     cin >> numbers[i];
// }
// cout<<"Array: ";
// for(int i = 0; i< size; i++){
//     cout<<numbers[i] << " ";
// }

// delete[] numbers;
// numbers = nullptr;

// int size;
// cout << "Enter size: ";
// cin >> size;

// if(size <= 0){
//     cout<<"Size must be greater than 0" << endl;
//     return 0;
// }
// int* numbers = new int[size];
// int* squares = new int[size];

// for(int i = 0; i < size; i++){
//     cout <<"Enter number" << i + 1 << ": ";
//     cin >> numbers[i];
// }
// for(int i = 0; i < size; i++){
//     squares[i] = numbers[i] * numbers[i];
// }
// cout<<"Original: ";
// for(int i = 0; i < size; i++){
//     cout<<numbers[i] << " ";
// }
// cout<<"Squares: ";
// for(int i = 0; i < size; i++){
//     cout<<squares[i] << " ";
// }

// delete[] numbers;
// delete[] squares;

// numbers = nullptr;
// squares = nullptr;


// Мини проект анализ оценок студентов:

int count;
cout<<"Enter students count: ";
cin >> count;

if(count <= 0){
    cout<<"Students count must be greater than 0" << endl;
    return 0;
}

int* grades = new int[count];
for(int i = 0; i < count; i++){
    cout<<"Enter grade for student" << i + 1 << ": ";
    cin >> grades[i];
}
cout << endl;
cout << "All grades: ";
for(int i = 0; i < count; i++){
    cout << grades[i] << " ";
}
cout << endl;

int sum = 0;
for(int i = 0; i < count; i++){
    sum += grades[i];
}
double average = static_cast<double>(sum) / count;

int maxGrade = grades[0];
int minGrade = grades[0];

for(int i = 1; i < count; i++){
    if(grades[i] > maxGrade){
        maxGrade = grades[i];
    }
    if(grades[i] < minGrade){
        minGrade = grades[i];
    }
}
int aboveAverage = 0;
for(int i = 0; i < count; i++){
    if(grades[i] > average){
        aboveAverage++;
    }
}

cout<<"Sum " << sum<< endl;
cout<<"Avg " << average<<endl;
cout<<"Min grade " << minGrade<<endl;
cout<<"Max grade " << maxGrade<<endl;
cout<<"AboveAverage " << aboveAverage<<endl;

delete[] grades;
grades = nullptr;


    return 0;
}