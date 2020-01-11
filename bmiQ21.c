#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
const int FoToin = 12;
const float  Intom = 0.0254;
const float ptokg=2.2;

double bmi(int f,int i,double m){
double heightm = (((float)f)*FoToin+((float)i))*Intom;
double weightkg =((float)m)/ptokg;
double bmi = (heightm*heightm)/weightkg;
return bmi;

}
int main(){
double pounds;
int feet;
int inches;
cout<<"Enter your hight:\n"<<"Enter the height in feet : ";
cin>> feet;
cout << "Enter the  inches: ";
cin >> inches;
cout << "Enter your weight in pounds :";
cin >> pounds;

cout<<"Your BMI is ="<<bmi(feet,inches,pounds)<< endl;

}
