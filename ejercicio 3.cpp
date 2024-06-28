#include<iostream>

using namespace std;

int main() 
{
    char entrada[1000];
    char letra;
    int n=0, cont=0;
    cout<<"ingrese un texto: "; cin>>entrada;
    cout<<"ingrese la letra a verificar: "; cin>>letra;
    while(entrada[n]!='\0')
	{
        n++;
    }
    for(int i=0; i<n; i++)
    {
    	if(entrada[i]==letra)
    	{
    		cont++;
		}
	}
	cout<<"la ocurrencia de la letra "<<letra<<" es: "<<cont;
	
    return 0;
}
