#include <iostream>
#include <string>

using namespace std;

int main(){
	// int a = 52;
	// float b = 5.5555;
	// double c = 6.5;
	// char sym = 'A';
	// string word = "Something else....";
	// bool trueorfalse = true;
	// cout<<a<<" "<<b<<" "<<c<<" "<<sym<<" "<<" "<<word<<" "<<trueorfalse<<endl;
	// string name;
	// cout<<"Введите ваше имя: ";
	// cin>>name;
	// cout<<name;

// int b = 5;
// if(b > 6){
// 	cout<<"Ура";
// }else{
// 	cout<<"Не ура";
// }

// int x;
// cin >> x;
// 	if(x >= 0 and x <= 100) cout<<"Ok RANGE";
// 	else cout<<"Out of range";


// int score;
// 	cin >> score;
// 	if (score >= 90){
// 		cout<<"A";
// 	}
// 	else if(score >= 75){
// 		cout<<"B";
// 	}
// 	else if(score >= 60){
// 		cout<<"C";
// 	}
// 	else{
// 		cout<<"F";
// 	}

	// int score;
	// cin >> score;

	// switch(score){
	// 	case 90: cout<<"A"; break;
	// 	case 75: cout<<"B"; break;
	// 	case 60: cout<<"C"; break;
	// 	case 50: cout<<"F"; break;
	// 	default: cout<<"Ошибка вывода";
	// }

	// int day;
	// cout<<"Введите день недели: ";
	// cin >> day;

	// switch(day){
	// 	case 1: cout<<"Mon";break;
	// 	case 2: cout<<"Tue";break;
	// 	case 3: cout<<"Wed";break;
	// 	case 4: cout<<"Thu";break;
	// 	case 5: cout<<"Fri";break;
	// 	case 6: cout<<"Sat";break;
	// 	case 7: cout<<"Sun";break;
	// 	default: cout<<"Invalid"
	// }

	// int month;
	// cin>>month;

	// switch(month){
	// 	case 12: case 1: case 2:
	// 	cout<<"Winter";
	// 	break;

	// 	case 3: case 4: case 5:
	// 		cout<<"Spring";
	// 		break;
		
	// 	case 6: case 7: case 8:
	// 	cout<<"Summer";
	// 	break;

	// 	case 9: case 10: case 11:
	// 		cout<<"Autumn";
	// 		break;

	// 	default: cout<<"Invalid month"
	// }

	// int cmd;
	// cout<<" 1 Открыть\n 2 Сохранить\n 3 Выйти"<<endl;
	// cout<<"Введите команду -> ";
	// cin >> cmd;

	// switch(cmd){
	// 	case 1: cout<<"Вы в приложении";break;
	// 	case 2: cout<<"Вы сохранили последние изменения";break;
	// 	case 3: cout<<"Вы вышли из системы";break;
	// 	default: cout<<"Неизвестная команда";
	// }

	// double a, b;
	// char op;
	// cout<<"Введите ваше первое число: ";
	// cin >> a;
	// cout<<"Введите вашу математическую операцию (+,-,*,/): ";
	// cin >> op;
	// cout<<"Введите ваше второе число: ";
	// cin >> b;

	// switch(op){
	// 	case '+': cout << a + b; break;
	// 	case '-': cout << a - b; break;
	// 	case '*': cout << a * b; break;
	// 	case '/': 
	// 			if (b == 0) cout <<"Делить на 0 нельзя";
	// 			else cout<< a / b;
	// 			break;
	// 	default: cout<<"Invalid operator";
	// }

	// int level;
	// cout<<"Введите пожалуйста сложность (1-3): ";
	// cin >> level;
	// int hp = 100;
	// int dmg = 10;

	// switch(level){
	// 	case 1: hp = 120; dmg = 8; cout<<"Easy";break;
	// 	case 2: hp = 100; dmg = 10; cout<<"Normal";break;
	// 	case 3: hp = 80; dmg = 14; cout<<"Hard";break;
	// 	default: cout<<"Invalid";
	// }
	// cout<<"hp" << hp <<" dmg" << dmg <<"\n";

	double value;
	int from,to;
	cin >> value >> from >> to;

	double meters;

	switch(from){
		case 1: meters = value / 100.0; break;
		case 2: meters = value; break;
		case 3: meters = value * 1000.0; break;
		default: cout<<"Invalid FROM";
	}

	double result;
	switch(to){
		case 1: result = meters * 100.0; break;
		case 2: result = meters; break;
		case 3: result = meters / 1000.0; break;
		default: cout<<"Invalid TO";
	}
	cout<<result<<"\n";
	
	
}