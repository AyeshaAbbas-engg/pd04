#include<iostream>
using namespace std;
void Answer(string ans);

main(){
string ans;
cout << "Enter True or False:";
cin >> ans;

Answer(ans);
}
void Answer(string ans){
if(ans== "True"){
    cout<< "False";
}
if(ans== "False"){
    cout<< "True";
}
}
