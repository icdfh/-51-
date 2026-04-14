// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
    // string fullName;
    # // cout << "Enter ur full name: ";
    # // getline(cin,fullName);
    # // cout<<"Ur full name: " << fullName << endl;
    
    # // string word = "World";
    # // cout << "Length: " << word.length() << endl;
    # // cout << "Size: " << word.size() << endl;
    
    # // string word = "World";
    # // cout << word[0] << endl;
    # // cout << word[1] << endl;
    # // cout << word[2] << endl;
    
    # // string word = "Hello";
    # // word[0] = 'Y';
    # // cout<<word<<endl;
    
    # // string word = "12345";
    
    # // for(int i =0; i < word.length(); i++){
    # //     cout << "index" << i << ": " << word[i] << endl;
    # // }
    
    # // Основные операции
    # // string firstName = "Ali";
    # // string lastName = "Khan";
    
    # // string fullName = firstName + " " +  lastName;
    # // cout << fullName << endl;
    
    # // string login = "admin";
    # // string input;
    
    # // cout << "Enter login:";
    # // cin >> input;
    
    # // if (input == login){
    # //     cout<<"Access granted";
    # // }
    # // else {
    # //     cout<<"Access denied";
    # // }
    
    # // string text = "Hell";
    # // text += "o";
    # // cout<<text;
    
    # // string text = "asd";
    # // if(text.empty()){
    # //     cout<<"String is empty";
    # // }
    # // else{
    # //     cout<<text;
    # // }
    
    # // substr()
    # // string text = "Programming";
    # // cout<<text.substr(0,4)<<endl;
    
    # // find()
    # // string text = "I coding in C++";
    # // cout << text.find("i") << endl;
    
    # // erase
    # // string text = "HelloWorld";
    # // text.erase(5,6);
    # // cout << text << endl;
    
//     return 0;







// =====================УКАЗАТЕЛИ==================

    // int x = 10;
    
    // cout<<"Value: " << x << endl;
    // cout<<"Address: " << &x << endl;
    
    // int age = 18;
    // double score = 95.5;
    // char grade = 'A';
    
    // cout<< &age << endl;
    // cout << &score << endl;
    // cout << (void*)&grade << endl;
    
    // int x = 25;
    // int *p = &x;
    
    // cout<<"x = " << x << endl;
    // cout << "Address of x = " << &x << endl;
    // cout<<p<<endl;
    
    int x = 50;
    int *p = &x;
    
    cout << "x = " << x << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    // int x = 100;
    // int *p = &x;
    
    // *p = 200;
    // cout<<"x = " << x << endl;
    // cout << "*p = " << *p << endl;



/ int arr[5] = {10,20,30,40,50};
    
    // cout << arr[0] << endl;
    // cout << &arr[3] << endl;
    // cout << arr << endl;
    
    // int arr[3] = {5,10,15};
    // int *p = arr;
    
    // cout << "p = " << p << endl;
    // cout << "p = " << *p << endl;
    
    // int arr[4] = {1,20,30,40};
    // int *p = arr;
    
    // cout << *p << endl;
    // cout << *(p + 1) << endl;
    // cout << *(p + 2) << endl;
    // cout << *(p + 3) << endl;
    
    int arr[4] = {11,22,33,44};
    int *p = arr;
    
    for (int i = 0; i < 4; i++){
        cout << "arr[" << i << "] = " << *(p + i) << endl;
    }




// }