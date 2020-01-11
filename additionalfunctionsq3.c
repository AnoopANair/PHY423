#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int fun1(){
cout << "Three blind mice\n";
}

int fun2(){
cout << "See how they run\n";
}

int main(){
for (int i=0;i<=1;i++){fun1();}
for (int i=0;i<2;i++){fun2();}
}
