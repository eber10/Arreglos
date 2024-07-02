#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

double calcular_media(int arreglo[])
{
	
	int suma=0;
	for(int i=0; i<30; i++)
	{
		suma=suma+arreglo[i];
	}
	return suma/30.0;
}
double calcular_mediana(int arreglo[])
{
	int aux;
	for(int i=0; i<30-1; i++)
	{
		for(int j=i+1; j<30; j++)
		{
			if(arreglo[i]>arreglo[j])
			{
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	return (arreglo[14]+arreglo[15])/2.0;
}

int calcular_moda(int arreglo[])
{
    int moda=0;
    int maximaFrecuencia=0;
    for(int i=0; i<30 ; i++)
    {
        int frecuencia = 0;
        for(int j=0; j<30 ;j++)
        {
            if(arreglo[i] == arreglo[j])
            {
                frecuencia++;
            }
        }
        if(frecuencia > maximaFrecuencia)
        {
            maximaFrecuencia = frecuencia;
            moda = arreglo[i];
        }
    }
    
    return moda;
}

int main()
{
	int arreglo[30];
	srand(time(0));
	for(int i=0; i<30; i++)
	{
		arreglo[i]=rand()%900+100;
	}
	cout<<"los datos no agrupados son: "<<endl; 
	for(int j=0; j<30; j++)
	{
		cout<<arreglo[j]<<"  ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"la media es: " <<calcular_media(arreglo)<<endl;
	cout<<"la mediana es: " <<calcular_mediana(arreglo)<<endl;
	cout<<"la moda es: " <<calcular_moda(arreglo)<<endl;
	return 0;
}
