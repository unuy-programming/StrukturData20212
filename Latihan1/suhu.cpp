#include <iostream>
#include "../input.hpp"
#include <string>
using namespace std;
int main(){
float celc, fahr, rea, kelv;
cout<<"==============================================\n";
cout<<"    PROGRAM KONVERSI SUHU DARI CELCIUS KE :   \n";
cout<<"        FAHRENHEIT | REAMUR | KELVIN          \n";
cout<<"==============================================\n";
cout<<"Masukkan suhu dalam celcius = ";
cin>>celc;
/////
fahr = (celc*1.8) + 32;
rea  =  celc * 0.8;
kelv = celc + 273.15;
/////
cout<<"=============================================\n";
cout<<"              HASIL KONVERSI SUHU            \n";
cout<<"=============================================\n";
cout<<"FAHRENHEIT  =  "<<fahr<<endl;
cout<<"REAMUR      =  "<<rea<<endl;
cout<<"KELVIN      =  "<<kelv<<endl;
cout<<"=============================================\n";
cout<<"Press Enter 1x Again to Exit\n";
getch();
 
}