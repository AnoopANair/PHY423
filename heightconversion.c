#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

const int factor= 12;


int main(){
int hinches;
double feet;
double inchesl;
cout<<"Enter you height in inches :";
cin>>  hinches;
feet = hinches / factor;
inchesl = hinches % factor;

cout << "the height is "<< (int)feet <<" feet and "<< (int)inchesl << " inches"<< endl;
}



