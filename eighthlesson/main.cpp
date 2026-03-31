#include <iostream>
#include <string>

using namespace std;

void hello(){
	cout<<"Hello"<<endl;
}

void showMessage(){
	cout<<"Добро пожаловать" <<endl;
	cout<<"Выберите действие" <<endl;
	cout<<"Выберите число" <<endl;
}

void line(){
	cout<<"--------------------"<<endl;
}

void user(string name){
	cout<<"Привет "<<name<<endl;
}

void number(int x){
	cout<<"Это ваше число: "<< x << endl;
}
void sum(int a, int b){
	cout<<"Сумма"<<a + b<<endl;
}
void print(int a, string b){
	cout<<"Show: "<<a<<" "<<b<<endl;
}


int sum2(int a, int b){
	return a + b;
}

// void printHello() -> функция действий

// int getSum() -> функция результат

int square(int x){
	return x * x;
}

bool isEven(int x){
	return x % 2 == 0;
}
void printInfo();

void test(){
	int x = 10;
	cout << x << endl;
}

void printArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int sumArray(int arr[], int size){
	int sum = 0;

	for(int i = 0; i < size; i++){
		sum += arr[i];
	}

	return sum;
}

int findMax(int arr[], int size){
	int maxValue = arr[0];

	for(int i = 1; i < size; i++){
		if(arr[i] > maxValue){
			maxValue = arr[i];
		}
	}
	return maxValue;
}

int main(){
	
 //  hello();
	// line();
	// showMessage();
	// line();
	// showMessage();
	// line();
	// user("Yan");
	// // number("Qwerty");
	// sum(3,5);
	// sum(10,20);
	// print(5, "Qwerty");

	// int result = sum2(4,6);
	// cout<<result<<endl;

	// int a;
	// cout<<"Введите ваше число: ";
	// cin>>a;
	// cout<<"Квадрат числa: " << square(a)<<endl;
	
	// int n;
	// cout<<"Введите ваше число: ";
	// cin >> n;

	// if(isEven(n)){
	// 	cout<<"Четное";
	// }
	// else{
	// 	cout<<"Нечетное";
	// }
	// cout<< x << endl;
	// printInfo();

	int numbers[5] = {10,20,30,40,50};

	printArray(numbers, 5);
  cout<<"Сумма: " << sumArray(numbers,5) <<endl; 
	cout << "Максимум: " << findMax(numbers, 5) << endl;
	return 0;
}

void printInfo(){
	cout<<"Hello";
}
