#include<iostream>

using namespace std;

int main()
{
	int arreglo[100], sum_par=0, sum_impar=0, n;
	cout<<"ingrese la cantidad de datos: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese el elemento "<<i+1<<" :"; cin>>arreglo[i];
	}
	
	for(int j=0; j<n; j++)
	{
		if(j%2==0)
		{
			sum_par=sum_par+arreglo[j];
		}
		else
		{
			sum_impar=sum_impar+arreglo[j];
		}
	}
	cout<<"la suma de los elementos de indice par es: " <<sum_par<<endl;
	cout<<"la suma de los elementos de indice impar es: " <<sum_impar<<endl;
	return 0;
	
}
