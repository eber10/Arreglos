#include <iostream>
#include <string>

using namespace std;

bool verificar_apellido(string nombre_completo, string apellido) 
{
  for (int i=0; nombre_completo[i]!='\0'; i++) 
  {
        if(nombre_completo[i]>='A'and nombre_completo[i]<='Z') 
		{
            nombre_completo[i]+='a'-'A';
        }
  }
  for(int i=0; apellido[i]!='\0'; i++)
  {
        if(apellido[i]>='A'and apellido[i]<='Z') 
		{
            apellido[i]+='a'-'A';
        }
  }
  int pos=0;
  while(nombre_completo[pos]!='\0' and apellido[0]!='\0') 
  {
        if(nombre_completo[pos]==apellido[0])
		{
            int j = 1;
            while (apellido[j] != '\0' && nombre_completo[pos + j] != '\0') 
			{
                if(nombre_completo[pos+j]!=apellido[j]) 
				{
                    break;
                }
                j++;
            }
            if(apellido[j]=='\0'and (pos==0 or nombre_completo[pos-1]==' ')) 
	        {
                return true;
            }
        }
        pos++;
  }
  return false;
}

int main() 
{
    string nombre_completo;
    string apellido;
    cout<<"ingrese el nombre completo (nombres y apellidos): "; getline(cin, nombre_completo);
    cout<<"ingrese el apellido: "; getline(cin, apellido);
    bool resultado=verificar_apellido(nombre_completo, apellido);
    if(resultado) 
	{
        cout<<"El apellido "<<apellido<<" si pertenece a "<<nombre_completo<<endl;
    } 
	else 
	{
        cout<<"El apellido "<<apellido<<" no pertenece a "<<nombre_completo<<endl;
    }
    return 0;
}
