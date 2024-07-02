#include<iostream>

using namespace std;

int main()
{
	int n, arreglo[100], sum1=0, sum2=0;
	cout<<"ingrese el tamano del arreglo: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese el elemento "<<i+1<<": "; cin>>arreglo[i];
	}
	cout<<endl;
	cout<<"los elementos del arreglo son: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arreglo[i]<<" ";
	}
	for(int i=0; i<n; i++)
	{
		if(arreglo[i]>0)
		{
			sum1=sum1+arreglo[i];
		}
		else
		{
			sum2=sum2+arreglo[i];
		}
	}
	cout<<endl;
	cout<<"la suma de los elementos positivos es: "<<sum1<<endl;
	cout<<"la suma de los elementos negativos es: "<<sum2<<endl;
	return 0;
	

	
	
}
