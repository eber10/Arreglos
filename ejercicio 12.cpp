#include<iostream>

using namespace std;

bool calcular_orden(int arreglo[], int n)
{
	int copia[n], aux;
	for(int i=0; i<n; i++)
	{
		copia[i]=arreglo[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(copia[i]>copia[j])
			{
				aux=copia[i];
				copia[i]=copia[j];
				copia[j]=aux;
			}
		}
	}
	for(int k=0; k<n; k++)
	{
		if(arreglo[k]!=copia[k])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout<<"ingrese el tamano del arreglo: "; cin>>n;
	int arreglo[n];
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese el elemento "<<i+1<<" : "; cin>>arreglo[i];
	}
	if(calcular_orden(arreglo, n))
	{
		cout<<" esta ordenado";
	}
	else
	{
		cout<<"no esta ordenado";
	}
	return 0;
	
	
}
