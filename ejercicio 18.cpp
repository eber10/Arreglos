#include <iostream>

using namespace std;

bool balanceoParentesis(char frase[]) 
{
  int contador=0;
  for (int i=0; frase[i]!='\0'; i++) 
  {
    if(frase[i]=='(') 
	{
        contador++;
    }
	else 
	{
		if(frase[i]==')')
		{
			if(contador==0)
			{
				return false;
			}
			contador--;
		}
	}
  }
    return contador==0;
}

int main() 
{
    char frase[100];
    cout<<"ingrese la frase: "; cin>>frase;
    if(balanceoParentesis(frase))
	{
        cout<<"El balanceo de parentesis es correcto"<<endl;
    }
	else
	{
        cout<<"El balanceo de parentesis es incorrecto"<<endl;
    }
    return 0;
}
