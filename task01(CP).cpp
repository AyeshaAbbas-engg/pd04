#include<iostream>
using namespace std;
void func(int num1 , int num2);
main(){
int num1,num2;

cout << "Enter a number:";
cin >> num1;
cout << "Enter a number:";
cin >> num2;
func(num1 , num2);
}

void func(int num1 , int num2){
if(num1==num2){
    cout<< "True";
}
if(num1!=num2){
    cout<<"False";
}
}

