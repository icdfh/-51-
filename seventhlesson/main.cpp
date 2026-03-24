// Двумерные массивы и рандомайзер

#include <iostream>
using namespace std;

int main(){
	// int arr[5] = {10,20,30,40,50};

	// for(int i = 0; i < 5; i++){
	// 	cout<<arr[i]<<" "<<endl;
	// }

	// int arr[5];

	// for(int i = 0; i < 5; i++){
	// 	cout<<"Введите элемент с индексом "<<i<<": ";
	// 	cin >> arr[i];
	// }
	// cout<<"Ваш массив: ";
	// for(int i = 0; i < 5; i++){
	// 	cout<<arr[i]<<" ";
	// }

	// int arr[5];
	// int sum = 0;
	
	// for(int i = 0; i < 5; i++){
	// 	cout<<"Введите элемент с индексом "<<i<<": ";
	// 	cin >> arr[i];
	// }
	// for(int i = 0; i < 5; i++){
	// 	sum += arr[i];
	// }
	// cout<<"Сумма = " <<sum;

	// Lesson 7
	// int arr[2][3] = {
	// {1,2,3},
	// {4,5,6}
	// };
	// for(int i = 0; i < 2; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cout<< arr[i][j] << " ";
	// 	}
	// 	cout<<endl;
	// }

	int arr[2][3];

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Введите элемент [" << i << "]["<<j<<"]: ";
			cout<<i<<j<<endl;
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

