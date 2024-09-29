#include<iostream>
using namespace std;
void bonus(int num1 , int num2);
main(){
int num1,num2;
cout << "Enter your position:" ;
cin >> num1;
cout<< "Enter your friend's position: " ;
cin >> num2;

bonus(num1 , num2);
}

void bonus(int num1 , int num2){

if(num2-num1 <=6){
    cout<< "True";
}
if(num2-num1 >6){
    cout << "False";
}
}