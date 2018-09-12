#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int a, int b){
	if((a>=b) && (a%b==0))
	return b;
	else
	gcd(b,(a%b));
}
int main(int argc, char** argv) {
	int a,b,HCF;
	
	cout<<"Enter your first integer number:";
	
	cin>>a;
	
	cout<<"Enter your second integer number:";
	
	cin>>b;
	
	HCF=gcd(a,b);
	
	cout<<" Greatest Common Divisor of "<<a<<  "  and  " <<b<< " is " <<HCF;
	
	return 0;
	
}
