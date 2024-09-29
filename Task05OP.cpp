#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x , int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main(){

int x=15,y=0;
system("cls");
gotoxy(x,y);

cout<< " AYESHA ABBAS" << endl;

}
