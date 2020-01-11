#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const int sm =60;
const int mh =60;
const int hd =24;

int converter(long int secs){
float days;
float mins;
float sec;
days = secs/(sm*mh*hd);
mins = ((secs%(sm*mh*hd))%(mh*sm))/sm;
sec =(secs%(sm*mh*hd))%sm;
cout<<secs<< " seconds = "<<(int)days<< " days, "<<(int)mins<< " minutes, "<< (int)sec << " seconds";}

int main(){

long int secs1;
cout << "Enter the number of seconds:";
cin>>secs1;
converter(secs1);
}
