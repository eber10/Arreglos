#include<iostream>

using namespace std;


int main()
{
	bool aux=true;
	char num1[100];
	cout<<"ingrese un numero de 10 cifras: "; cin>>num1;
	char num2[100];
	for(int i=0; i<10; i++)
	{
		num2[i]=num1[10-1-i];
	}
	for(int j=0; j<10; j++)
	{
		if(num1[j]!=num2[j])
		{
			aux=false;
		}
	}

	if(aux)
	{
		cout<<"el numero es capicua ";
	}
	else
	{
		cout<<"el numero no es capicua";
	}
	return 0;
}
