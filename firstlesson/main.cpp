#include <iostream>
#include <string>

using namespace std;
int main(){
int age;
cout<<"Сколько вам лет? ";
cin>>age;
string passport;
cout<<"У вас есть паспорт?(Да/Нет): ";
cin>>passport;
if(age >= 18 || passport == "Да"){
	cout<<"Доступ разрещен";
}
else{
	cout<<"Ты еще маленький или найди паспорт";
}
	
	
// string login = "qwerty";
// int password = 123;
// string true_login;
// int true_password;
// cout<<"Введите ваш логин: ";
// cin>>true_login;
// cout<<"Введи ваш пароль: ";
// cin>>true_password;
// if(login == true_login && password == true_password){
// 	cout<<"Здравствуйте "<<true_login;
// }
// else{
// 	cout<<"Неправильный логин или пароль";
// }
	
	// int day;
	// cout<<"Введите день недели 1-7: ";
	// cin>>day;
	// if (day == 1){
	// 	cout<<"Понедельник";
	// }
	// else if(day == 2){
	// 	cout<<"Вторник";
	// }
	// else if(day == 3){
	// 	cout<<"Среда";
	// }
	// else if(day == 4){
	// 	cout<<"Четверг";
	// }
	// else if(day == 5){
	// 	cout<<"Пятница";
	// }
	// else if(day == 6){
	// 	cout<<"Суббота";
	// }
	// else if(day == 7){
	// 	cout<<"Воскресенье";
	// }
	// else{
	// 	cout<<"ОШИБКА ВВЕДИТЕ ДЕНЬ НЕДЕЛИ!";
	// }
	
	
	// int age;
	// cout<<"Введите ваш возраст: ";
	// cin>>age;
	// if(age >= 18){
	// 	cout<<"Доступ разрещен";
	// }
	// else{
	// 	cout<<"Доступ запрещен";
	// }


	

	// int a = 5;
	// float b = 5.5;
	// double c = 5.63;
	// char d = 'A';
	// string f = "Hello world";
	// bool h = true;
	// int number;
	// cout<<"Введите ваше число:"<<endl;
	// cin>>number;
	// cout<<number<<endl;
	// cout<< number + a<<endl;
	// cout<< number * b<<endl;
	// cout<< number / 5.63<<endl;
	// cout<<"Мои переменные:"<<endl;
	// cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<f<<" "<<h;

}