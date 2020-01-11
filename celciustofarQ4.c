#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
double ctof(double x){
return 1.8*x +32;
}

int main(){
double c;
cout << "Please enter temperature in celcius:";
cin >> c;
cout << c << " degrees Celcius is "<< ctof(c)<< " degrees Fahrenheit\n";

}
