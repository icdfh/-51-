
#include <iostream>
#include <string>
using namespace std;

// class Student{
// public:
//     string name;
//     int age;
    
//     void sayHello(){
//         cout<<"Привет, меня зовут " << name << endl;
//     }
// };

// class Student{
// public:
//     string name;
//     int age;
    
    // Student(){
    //     cout<<"Обьект Student создан"
    // }
    
//     Student(string studentName, int studentAge){
//         name = studentName;
//         age = studentAge;
//     }
    
//     void sayHello(){
//         cout<<"Привет, меня зовут " << name << endl;
//     }
// };

// this Зачем нужен и тд? 

// class Course{
// public:
//     string title;
//     string teacher;
//     int lessonsCount;
    
//     Course(string title, string teacher, int lessonsCount){
//         this->title = title;
//         this->teacher = teacher;
//         this->lessonsCount = lessonsCount;
//     }
    
//     void showCourse(){
//         cout<<"Course: " << title << endl;
//         cout<<"Teacher: " << teacher<<endl;
//         cout<<"Lessons count: " << lessonsCount <<endl;
//     }
// };

// Неправильный вариант

// class BankAccount{
// public:
//     int balance;
// };

// Правильный вариант
// class BankAccount{
// private:
//     int balance;
    
// public:
//     BankAccount(int balance){
//         if(balance >= 0){
//             this->balance = balance;
//         }
//         else{
//             this->balance = 0;
//         }
//     }
    
//     void deposit(int amount){
//         if(amount > 0){
//             balance += amount;
//         }
//     }
    
//     void withDraw(int amount){
//         if(amount > 0 && amount <= balance){
//             balance -= amount;
//         }else{
//             cout<<"Недостаточно денег или неверная сумма"<<endl;
//         }
//     }
//     int getBalance(){
//         return balance;
//     }
    
// };

class Student{
private:
    string name;
    int age;

public:
    Student(string name, int age){
        this->name = name;
        
        if(age > 0){
            this->age = age;
        }else{
            this->age = 1;
        }
    }
    
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    
    void setAge(int age){
        if(age > 0 && age < 100){
            this->age = age;
        }
        else{
        cout<<"Некорректный возраст"<<endl;
        }
    }
    void showInfo(){
        cout << "Name: " << getName() << endl;
        cout<<"Age: " << getAge() << endl;
    }
};

int main() {
    Student s1("Ali", 19);
    
    s1.showInfo();
    
    s1.setAge(-5);
    s1.showInfo();
    
    s1.setAge(20);
    s1.showInfo();
    
    // BankAccount acc(1000);
    
    // acc.deposit(500);
    // acc.withDraw(300);
    
    // cout<<"Balance: "<<acc.getBalance()<<endl;
    
    // BankAccount acc;
    // acc.balance = 10000000000;
    
    // Course c1("JS", "Jonh Dawk", 25);
    // c1.showCourse();
    
    // Student s1;
    // s1.name = "Али";
    // s1.age = 18;
    
    // Student s1("Ali", 18);
    // Student s2("Mariya", 20);
    
    // s1.sayHello();
    // s2.sayHello();

    return 0;
}


Класс Product
Поля:
string name;
int price;
int count;
Обязательно создать конструктор
getName();
getPrice();
getCount();
setPrice(), где цена не может быть меньше 0
setCount(), где количество не может быть меньше 0
setInfo()