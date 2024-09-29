#include<iostream>
using namespace std;
void speedcheck(int num);
main(){
int num;
cout<< "Enter your speed:";
cin>> num;

speedcheck(num);
}

void speedcheck(int num){

if(num>100){
    cout << "Halt!!!!!!!!.........You will be Charged !!!!!!!!!!.......... " ;
}
if(num<=100){
    cout<< "Perfect! you are going good " ;
}
}