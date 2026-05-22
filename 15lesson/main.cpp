
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

// class Student{
// private:
//     string name;
//     int age;

// public:
//     Student(string name, int age){
//         this->name = name;
        
//         if(age > 0){
//             this->age = age;
//         }else{
//             this->age = 1;
//         }
//     }
    
//     string getName(){
//         return name;
//     }
//     int getAge(){
//         return age;
//     }
    
//     void setAge(int age){
//         if(age > 0 && age < 100){
//             this->age = age;
//         }
//         else{
//         cout<<"Некорректный возраст"<<endl;
//         }
//     }
//     void showInfo(){
//         cout << "Name: " << getName() << endl;
//         cout<<"Age: " << getAge() << endl;
//     }
// };

// class Animal{
// public:
//     string name;
    
//     void eat(){
//         cout<<name<<" ест"<<endl;
//     }
//     void makeSound(){
//         cout<<"Животное издает звук"<<endl;
//     }
// };

// class Dog : public Animal{
// public:
//     void bark(){
//         cout << name << " лает" << endl;
//     }
//     void makeSound(){
//         cout<<"Собака лает";
//     }
// };
// class Cat : public Animal{
// public:
//     void makeSound(){
//         cout<<"Кошка мяукает";
//     }
// };

// class Car{
// public:
//     void start(){
//         checkEngine();
//         startFuelSystem();
//         cout<<"Машина заведена"<<endl;
//     }
// private:
//     void checkEngine(){
//         cout<<"Проверка двигателя" <<endl;
//     }
//     void startFuelSystem(){
//         cout<<"Запуск топливной системы"<<endl;
//     }
// }

// 1 БОЛЬШОЙ ПРИМЕР

class Delivery{
protected:
    string address;
    
public:
    Delivery(string deliveryAddress){
        address = deliveryAddress;
    }
    virtual void deliver() = 0;
    
    void showAddress(){
        cout<<"Адрес доставки: "<< address<<endl;
    }
};

class DroneDelivery : public Delivery{
public:
    DroneDelivery(string deliveryAddress) : Delivery(deliveryAddress){}
    
    void deliver() override{
        cout<<"Дрон доставляет заказ по воздуху"<<endl;
    }
};

class RobotDelivery : public Delivery{
public:
    RobotDelivery(string deliveryAddress) : Delivery(deliveryAddress){}
    
     void deliver() override{
        cout<<"Робот доставляет заказ по тротуару"<<endl;
    }
};

class CourierDelivery : public Delivery{
public:
    CourierDelivery(string deliveryAddress) : Delivery(deliveryAddress){}
    
     void deliver() override{
        cout<<"Курьер доставляет заказ лично"<<endl;
    }
};

int main() {
    
    Delivery* orders[3];
    
    orders[0] = new DroneDelivery("Абая 10");
    orders[1] = new RobotDelivery("Сатбаева 25");
    orders[2] = new CourierDelivery("Достык 100");
    
    for(int i = 0; i < 3; i++){
        orders[i]->showAddress();
        orders[i]->deliver();
        cout<<endl;
    }
    for(int i = 0; i < 3; i++){
        delete orders[i];
    }
    // Dog dog;
    // dog.name = "Bobik";
    // Cat cat;
    // cat.name = "Murka";
    
    // dog.makeSound();
    // cat.makeSound();
    
    // Student s1("Ali", 19);
    
    // s1.showInfo();
    
    // s1.setAge(-5);
    // s1.showInfo();
    
    // s1.setAge(20);
    // s1.showInfo();
    
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