// ================Массивы================
#include <iostream>
#include <string>

using namespace std;
int main(){
	// int numbers[5];

	// numbers[0] = 10;
	// numbers[1] = 20;
	// numbers[2] = 30;
	// numbers[3] = 40;
	// numbers[4] = 50;

 	// cout<<numbers[0] << endl;
	// cout<<numbers[1] << endl;
	// cout<<numbers[2] << endl;
	// cout<<numbers[3] << endl;
	// cout<<numbers[4] << endl;


	// int numbers[5] = {1,2,3,4,5}
	// int arr[] = {10,20,30,40}

	// int arr[5];

	// for(int i = 0; i < 5; i++){
	// 	cout<<"Введите элемент с индексом "<<i<<": ";
	// 		cin>>arr[i];
	// }

	// int arr[6] = {10,20,30,40,50,60};

	// for(int i = 0; i < 6; i++){
	// 	cout << "arr[" << i << "] = " << arr[i] << endl;
	// }

	// int arr[5];

	// for (int i = 0; i < 5; i++){
	// 	cout<<"Введите число: ";
	// 	cin>>arr[i];
	// }
	// cout<<"\nЭлемент массива:\n";
	// for(int i = 0; i < 5; i++){
	// 	cout<<arr[i]<<" ";
	// }

	// 1.Сумма элентов массива
	// int arr[5];
	// int sum = 0;

	// for(int i = 0; i < 5; i++){
	// 	cout<<"Введите число: ";
	// 	cin >> arr[i];
	// }
	// for(int i = 0; i < 5; i++){
	// 	sum += arr[i];
	// }
	// cout<<"Сумма элементов массива: " << sum << endl;


	// int arr[5];
	// int sum = 0;
	// double average;
	
	// for(int i = 0; i < 5; i++){
	// 	cout<<"Введите число: ";
	// 	cin >> arr[i];
	// }
	// for(int i = 0; i < 5; i++){
	// 	sum += arr[i];
	// }
	// average = (double)sum / 5;

	// cout<<"Среднее: " << average << endl;
	// cout<<"Сумма элементов массива: " << sum << endl;

	// 2. Найти максимальное значение
	// int arr[5];

	// for(int i = 0; i < 5; i++){
	// 	cout<<"Введмте число: ";
	// 	cin >> arr[i];
	// }
	// int maxValue = arr[0];

	// for(int i = 1; i < 5; i++){
	// 	if(arr[i] > maxValue){
	// 		maxValue = arr[i];
	// 	}
	// }
	// cout<<"Максимум: " << maxValue << endl;
	int arr[5];
	int x;
	// bool found = false;

	for(int i = 0; i < 5; i++){
		cout<<"Введите число: ";
		cin>>arr[i];
	}
	cout<<"Введите число для поиска ";
	cin >> x;

	for(int i = 0; i < 5; i++){
		if(arr[i] == x){
			// found = true;
			cout<<"Число есть";
			break;
		}
	}
	cout<<"Числа нету";
	// if(found){
	// 	cout<<"Число есть в массиве"<<endl;
	// }
	// else{
	// 	cout<<"Числа нет в массиве"<<endl;
	// }