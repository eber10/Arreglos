#include<iostream>

using namespace std;

int main() 
{
    char entrada[1000];
    int i=0;
    cout<<"ingrese un texto: "<<endl;
	cin>>entrada;
    while(entrada[i]!='\0')
	{
        i++;
    }
    entrada[i]='\0';
    char palabra[1000];
    int j=0;
    bool espacio = true;
    for (i=0; entrada[i] !='\0'; i++) 
	{
        if (entrada[i]==' ' or entrada[i]=='\t' or entrada[i]=='\n') 
		{
            if (!espacio) 
			{
                palabra[j]='\0';
                for(int k=0; palabra[k]!='\0'; k++) 
				{
                    cout<<palabra[k];
                }
                cout<<endl;
                j = 0;
                espacio=true;
            }
        }
		 else
		{
            palabra[j]=entrada[i];
            j++;
            espacio=false;
        }
    }
    if(!espacio) 
	{
        palabra[j]='\0';
        for (int k=0; palabra[k]!='\0'; k++)
		{
            cout<<palabra[k];
        }
        cout<<endl;
    }

    return 0;
}
