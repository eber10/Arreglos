#include<iostream>

using namespace std;

char* ponermayusculas(char cadena[])
{
    int n=0;
    while (cadena[n]!='\0')
	{
        n++;
    }
    cadena[0]=toupper(cadena[0]);
    for (int i=1; i<n; i++) 
	{
		if(cadena[i]==' ')
		{
			cadena[i+1] = toupper(cadena[i+1]); 
		}
    }
    return cadena;
}

int main()
{
    char texto[]="caceres patrimonio de la humanidad";
    int m=0;
    while(texto[m]!='\0')
    {
    	m++;
	}
	for(int i=0; i<m; i++)
	{
		cout<<texto[i];
	}
	cout<<endl;
	cout<<endl;
	cout<<"para convertir las iniciales a mayuscula ";
    system("pause");
    cout<<endl;
    cout << ponermayusculas(texto) << endl;
    return 0;
}
