#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

double  lytoau(double x){

	return 63240*x;

}

int main(){

	double a;
	cout << "Enter the number of light years :" ;
	cin >> a;
	cout << a << " light years = "<< lytoau(a) << " astronomical units \n";
}
