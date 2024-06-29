#include<iostream>

using namespace std;

int main()
{
	int x[100], n, aux, cont1=0, cont2=0;
	cout<<"ingrese la cantidad de datos: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese el elemento "<<i+1<<" : "; cin>>x[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(x[i]>x[j])
			{
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;
			}
		}
	}
	for(int h=0; h<n; h++)
	{
		if(x[n-1]==x[h])
		{
			cont1++;
		}
		if(x[0]==x[h])
		{
			cont2++;
		}
	}
	cout<<"el numero mayor es: " <<x[n-1]<<"\t"<<"se repite: " <<cont1<<endl;
	cout<<"el numero menor es: " <<x[0]<<"\t"<<"se repite: " <<cont2<<endl;
	
	return 0;
}
