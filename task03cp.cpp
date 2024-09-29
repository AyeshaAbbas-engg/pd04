#include<iostream>
using namespace std;
void discount(string name , int price);
main(){
string name;
int price;
cout << "Enter the name of destinated country:";
cin >> name;
cout << "Enter the price in $ :";
cin >> price;
 
discount(name, price);
}

void discount(string name, int price){
if(name=="Pakistan"){
    cout<< "Discounted price for Pakistan is " << (price - (price*0.05)) << "$" <<endl;
}
if(name=="Ireland"){
    cout<< "Discounted price for Ireland is" << (price-(price*0.1)) << "$" << endl;
}
if(name=="India"){
    cout<< "Discounted price for India is " << (price-(price*0.2)) << "$" << endl;
}
if(name=="England"){
    cout<< "Discounted price for England is " << (price-(price*0.3333)) << "$" << endl; 
}
if(name=="Canada"){
    cout<< "Discounted price for Canada is " << (price-(price*2.22)) << "$" << endl;
}
}