#include<iostream>
using namespace std;

main(){
float matric;
float inter;
float ecat;
float ecatper;
float matricper;
float interper;
float total;

cout << "Matric marks:  ";
cin >> matric;
cout << "Inter marks:  ";
cin >> inter;
cout << "Ecat marks:  ";
cin >>ecat;

ecatper=(ecat*100/400)*0.5;
matricper=(matric*100/1100)*0.1;
interper=(inter*100/inter)*0.4;
total=ecatper+matricper+interper;

cout << "Your aggregate is:  ";
cout << total;





}