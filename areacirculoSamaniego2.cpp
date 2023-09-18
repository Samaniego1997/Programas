#include<iostream>
using namespace std;
#define pi 3.1416
float areacirculo(float);
int main ()
{
	float a,r;
	cout<<"ingresa el radio:";
	cin>>r;
	a=areacirculo(r);
	cout<<"el area es:";
	cout<<a;
	return(0);
}
float areacirculo(float x)
{
	return pi*x*x;
}

