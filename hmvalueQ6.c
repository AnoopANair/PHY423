#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void timekeeper(int a, int b){
cout<<"Time: "<< a<<":"<<b<<endl;
}
int main(){

int hours;
int mins;
cout << "Enter the number of hours: ";
cin>>hours;
cout<<"Enter the number of minutes: ";
cin >> mins;

timekeeper(hours,mins);
}
