#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
const double conv =60;

double lattodec(double d,double m,double s){
double m1=m/conv;
double s1=s/(conv*conv);

double sum = d+m1+s1;
return sum;

}


int main(){
double deg;
double min;
double sec;
cout <<"Enter a lattitude in degrees, minutes, and seconds :\n";
cout <<"First, enter the degrees :";
cin >> deg;
cout << "Next, enter the minutes of the arc:";
cin >> min;
cout << "Finally, enter the seconds of the arc:";
cin>> sec;

cout<<deg <<" degrees, "<< min <<" minutes, " << sec <<" seconds = "<< lattodec(deg,min,sec)
<<" degrees"<<endl;

}
