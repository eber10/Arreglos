#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string nombres[100];
	int num_nombres;
	
    cout<< "Ingrese el numero de nombres: "; cin>>num_nombres;

    for (int i = 0; i < num_nombres; i++)
	 {
	 	cout<<"ingrese el nombre "<<i+1<<" :"; cin>>nombres[i];
        
    }
    // ordenar los nombres alfabéticamente
    for (int i = 0; i < num_nombres - 1; i++) 
	{
        for(int j=i+1; j<num_nombres; j++) 
		{
            if (nombres[i]>nombres[j])
			 {
                string aux=nombres[i];
                nombres[i]=nombres[j];
                nombres[j]=aux;
            }
        }
    }

    cout<<endl;
    cout<<"Nombres ordenados alfabeticamente"<<endl;
    cout<<"*********************************"<<endl;
    for (int i=0; i<num_nombres; i++)
	{
        cout<<nombres[i]<<endl;
    }

    return 0;
}
