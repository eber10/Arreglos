#include<iostream>

using namespace std;

int main()
{
	int vector[100], aux[100], n;
	cout<<"ingrese el tamano del vector: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese el elemento "<<i+1<<" : "; cin>>vector[i];
	}
	cout<<endl;
	cout<<"vector original"<<endl;
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			cout<<"[\t";
		}
		cout<<vector[i]<<"\t";
		if(i==n-1)
		{
			cout<<"]";
		}
	}
	cout<<endl;
	for(int j=0; j<n; j++)
	{
		aux[j]=vector[n-1-j];
	}
	for(int k=0; k<n; k++)
	{
		vector[k]=aux[k];
	}
	cout<<endl;
	cout<<"vector invertido"<<endl;
	for(int h=0; h<n; h++)
	{
		if(h==0)
		{
			cout<<"[\t";
		}
		cout<<vector[h]<<"\t";
		if(h==n-1)
		{
			cout<<"]";
		}
	}
	return 0;
}
