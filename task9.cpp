#include<iostream>
using namespace std;

main(){

float input;
float converted;
float kb;
float byte;
float bit;
float con1;
float con2;
float con3;

kb=1024;
byte=1024;
bit=8;

cout << "Enter megabytes  ";
cin >> input;
con1=input*kb;
con2=con1*byte;
con3=con2*bit;
cout << "Bit is:  ";
cout << con3;






}