#include<iostream>
using namespace std;
void time(int hours , int min);
main(){
int hours,min;
cout << "Enter time in hours:";
cin >> hours;
cout<< "Enter time in minutes:";
cin >> min;

time(hours , min);

}

void time(int hours , int min){
if((hours) > (min/60) ){
    cout << hours;
}
if((hours) < (min/60)){
    cout<< min;
}

}