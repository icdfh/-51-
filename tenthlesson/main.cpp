// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void changeValue(int* p){
    *p = 100;
}
void increment(int* p){
    (*p)++;
}
void swapValues(int* a, int*b){
    int swap = *a;
    *a = *b;
    *b = swap;
}

void addTen(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] + 10;
    }
}


int main() {
//   int a = 10;
//   int* p = &a;
//   cout << a << endl;
//   cout << &a << endl;
//   cout << p << endl;
//   cout << *p << endl;

// int x = 7;
// int* p = &x;

// *p = 20;
// cout<< x << endl;
// cout << *p << endl;

// int num = 15;
// int* p1 = &num;
// int* p2 = &num;

// *p1 = 50;
// cout << num << endl;
// cout << *p2 << endl;

// int value = 8;
// int* p = &value;

// *p = *p + 5;

// cout << value << endl;

// int* p;

// if(p == nullptr){
//     cout << "Указатель пустой" << endl;
// }

// int a = 5;
// cout<<"До:" << a << endl;
// changeValue(&a);
// cout<<"После"<<a << endl;

// int x = 9;
// increment(&x);
// cout<<x<<endl;

   
// int x = 3;
// int y = 8;

// cout<< "До " << x << " " << y << endl;

// swapValues(&x, &y);

// cout<< "После " << x << " " << y << endl;

// int arr[5] = {10,20,30,40,50};

// int* p = arr;

// cout<<"Первый элемент массива: " << arr[0] <<endl;
// cout << "Через указатель: " << *p << endl;

// for(int i = 0; i < 5; i++){
//     *(p + i) = *(p + i) + 1;
// }

// for(int i = 0; i < 5; i++){
//     cout << *(p + i) << " ";
// }


int numbers[5] = {1,2,3,4,5};

addTen(numbers, 5);

for(int i = 0; i < 5; i++){
    cout << numbers[i] << " ";
}

    return 0;
}