//titulo del programa:redta y comparacion
//nombre del programa;saldo.cpp
//autor:Samaniego Denis
//fecha creacion:2023-09-11
//description:resta de doa numeros y presenta el saldo
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a>>b;
	c=a-b;
	if(c<0)
	{
		cout<<"Negativo";
	}else{
		cout<<"Positivo";
	}
	return 0;
}

