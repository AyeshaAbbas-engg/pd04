#include<iostream>
#include<windows.h>
using namespace std;
void printH();
void printA();
void printS();
void printN();
void gotoxy(int x , int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main(){

int x=0,y=1;
system("cls");
gotoxy(0,2);
printH();
gotoxy(0,3);
printA();
gotoxy(0,4);
printS();
gotoxy(0,5);
printS();
gotoxy(0,6);
printA();
gotoxy(0,7);
printN();
}
void printH(){

cout<< " ##       ##" << endl;
cout<<"  ##       ##" << endl;
cout<< " ###########" << endl;
cout<< " ##       ##" << endl;
cout<< " ##       ##" << endl;

}
void printA(){

cout<< "    ##" << endl;
cout<<"   ##  ##" << endl;
cout<< " ##    ##" << endl;
cout << "########" << endl;
cout << "##    ##" << endl;
}
void printS(){
cout<< " ########" << endl;
cout<< " #      #" << endl;
cout<< " ######  " << endl;
cout<< "      ##" << endl;
cout<< " #######" << endl; 
}

void printN(){
cout<< "##      ##" << endl;
cout<< "## #    ##" << endl;
cout<< "##  #   ##" << endl;
cout<< "##   #  ##" << endl;
cout<< "##    # ##" << endl;
}


