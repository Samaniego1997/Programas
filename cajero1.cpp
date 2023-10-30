//programa:cajero automatico 
//autor:Samaniego Denis
//fecha:12-10-2023
//archivo:cajeroautomatico.cpp
#include<iostream>
using namespace std;
int main()
{
	int c1,c2,c3,c01=22,c02=50,c03=30;
	float valor,saldodisponible=10000;
	cout<<"ingrese c1 c2 c3:";cin>>c1>>c2>>c3;
	if(c1==c01){
		if(c2==c02){
			if(c3==c03){
				cout<<"ingrese el valor retirrar:";cin>>valor;
				saldodisponible=saldodisponible-valor;
		}else{
				cout<<"contraseña c3 invalida"<<endl;
			}
		}else{
			cout<<"contraseñac2 incorrecto"<<endl;
			}
	}else{
cout<<"contraseña c1 incorrecto"<<endl;
	}
return(0);
}
