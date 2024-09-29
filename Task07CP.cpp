#include<iostream>
using namespace std;
void flowershop(int redrose , int whiterose , int tulip);
main(){
int redrose ,whiterose, tulip;

cout<<"Red Rose :";
cin >> redrose;
cout<<"White Rose:";
cin >> whiterose;
cout<< "Tulips:";
cin >> tulip;

flowershop(redrose , whiterose , tulip);

}
void flowershop(int redrose , int whiterose , int tulip){
if((redrose*2) +(whiterose*4.10) +(tulip*2.50) >200){
    cout<< "Total price was:" << (redrose*2) +(whiterose*4.10) +(tulip*2.50) << "$" << endl;
    cout<<"Discounted price is :" << ((redrose*2) +(whiterose*4.10) +(tulip*2.50)) - ((redrose*2) +(whiterose*4.10) +(tulip*2.50))*0.2 << "$" ;
}
if((redrose*2) +(whiterose*4.10) +(tulip*2.50) < 200){
    cout<<"price is :" << (redrose*2) +(whiterose*4.10) +(tulip*2.50) << "$" << endl;
    cout<< "No discount on price. " ;

}

}

