#include <iostream>

using namespace std;

int main()
{
    string anio[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    double ventas[12];
    double venta_total=0.0, venta_promedio=0.0;
    int conteo_min=0, conteo_regular=0, conteo_excelente=0;
    cout<<"BIENVENIDO AL SISTEMA LA MILAGROSA "<<endl;
    for (int i=0; i<12; ++i) 
	{
        cout<<"ingrese las ventas del mes de "<<anio[i]<< ": "; cin>>ventas[i];
        venta_total+=ventas[i];
    }
    venta_promedio=venta_total/12;
    for (int i = 0; i < 12; ++i)
	{
        if(ventas[i]<0.4*venta_promedio)
		{
            conteo_min++;
        }
		else
		{
			if(ventas[i]<=0.75*venta_promedio)
			{
				conteo_regular++;
			}
			else
			{
				conteo_excelente;
			}
		}
    }
    cout<<"RESULTADOS "<<endl;
    cout<<"***********"<<endl;
    cout<<endl;
    cout<<"Valor de la venta mensual promedio: " <<venta_promedio<<endl;
    cout<<"Porcentaje de meses con ventas minimas: " <<(conteo_min*100.0/12)<< "%" <<endl;
    cout<<"Porcentaje de meses con ventas regulares: " <<(conteo_regular*100.0/12)<< "%" <<endl;
    cout<<"Porcentaje de meses con ventas excelentes: " <<(conteo_excelente*100.0/12)<< "%" <<endl;
    cout<<endl;
    cout<<"Meses con ventas excelentes: "<<endl;
    cout<<"****************************"<<endl;
    for (int i=0; i<12; ++i)
	{
        if(ventas[i]>0.75*venta_promedio)
		{
            cout<<anio[i]<<endl;
        }
    }
    cout<<endl;
    return 0;
}
