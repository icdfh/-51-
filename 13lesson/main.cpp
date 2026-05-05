#include <iostream>
#include <string>
using namespace std;

// struct Student{
//     string name;
//     int age;
//     double grade;
// };
// Практика 1 
// struct Product{
//     string title;
//     double price;
//     int quantity;
// };

// Массив структур
// struct Car {
//     string model;
//     string engine;
//     int speed;
// };

// Ввод массива структур    
struct Car {
    string model;
    string engine;
    int speed;
};

int main() {
    const int SIZE = 3;
    Car cars[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        cout<<"Enter model for car #" << i + 1 <<": ";
        cin >>cars[i].model;
        
        cout<<"Enter engine for car #" << i + 1 <<": ";
        cin >>cars[i].engine;
        
        cout<<"Enter speed for car #" << i + 1 <<": ";
        cin >>cars[i].speed;
    }
    
    int bestSpeed = 0;
    
    for(int i = 1; i < SIZE; i++){
        if(cars[i].speed > cars[bestSpeed].speed){
            bestSpeed = i;
        }
    }
    double sum = 0;
    
    for(int i = 0; i < SIZE; i++){
        sum += cars[i].speed;
    }
    double avg = sum / SIZE;
    
    
    cout << "Cars list:" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << cars[i].model<<" " << cars[i].engine << " " << cars[i].speed << endl;
        
    }
    cout << "Best car: " << endl;
    cout << "Model: " << cars[bestSpeed].model << endl;
    cout<< "Speed: " << cars[bestSpeed].speed << endl;
    cout<<"AVG: " << avg <<endl;
    
    
//     Car cars[3];
    
//     cars[0] = {"Toyota", "engine1", 120};
//     cars[1] = {"BWM", "engine2", 200};
//     cars[2] = {"Tesla","electric", 250};
    
//     for(int i = 0; i < 3; i++){
//         cout << "Car #" << i + 1 << endl;
//         cout<<"Model: " << cars[i].model << endl;
//         cout<<"Engine: " << cars[i].engine << endl;
//         cout<<"Speed: " << cars[i].speed << endl;
//     }
    


    
    // Product p1;
    
    // cout << "Enter product title: ";
    // cin >> p1.title;
    
    // cout << "Enter product price: ";
    // cin >> p1.price;
    
    // cout << "Enter product quantity: ";
    // cin >> p1.quantity;
    
    // double total = p1.price * p1.quantity;
    
    // cout << endl;
    // cout << "Product " << p1.title << endl;
    // cout << "Price " << p1.price << endl;
    // cout << "Quantity " << p1.quantity << endl;
    // cout << "Total " << total << endl;
    
    
    
//   Student student1;
//   Student student2;
   
//   student1.name = "Ali";
//   student1.age = 18;
//   student1.grade = 91.5;
   
//   student2.name = "Diana";
//   student2.age = 20;
//   student2.grade = 88.1;

//     Student s1;
//     Student s2;
    
//     cout<<"Enter name: ";
//     cin >> s1.name;
//     cout<<"Enter name: ";
//     cin >> s2.name;
    
//     cout<<"Enter age: ";
//     cin >> s1.age;
//     cout<<"Enter age: ";
//     cin >> s2.age;
    
//      cout<<"Enter grade: ";
//     cin >> s1.grade;
//     cout<<"Enter age: ";
//     cin >> s2.grade;
   
//   cout << "Name: " << s1.name << endl;
//   cout << "Age: " << s1.age << endl;
//   cout << "Grade: " << s1.grade << endl;
//   cout<<endl;
//   cout << "Name: " << s2.name << endl;
//   cout << "Age: " << s2.age << endl;
//   cout << "Grade: " << s2.grade << endl;



    return 0;
}