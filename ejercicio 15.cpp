#include<iostream>

using namespace std;

int mistrcmp(char *str1, char *str2)
{
  int i=0;
  while(str1[i]!='\0'&& str2[i]!='\0') 
  {
        if (str1[i]>str2[i]) 
		{
            return 1;
        } 
		else 
		{
			if(str1[i]<str2[i])
			{
				return -1;
			}
		}
		i++;
  }
  if(str1[i]=='\0')
  {
        if(str2[i]!='\0') 
		{
            return -1; 
        }
		else 
		{
            return 0;
        }
  } 
  else 
  {
        return 1;
  }
}

int main() 
{
	int resultado;
  char str1[100];
  char str2[50];
  cout<<"ingrese un texto: "; cin>>str1;
  cout<<"ingrese un texto: "; cin>>str2;

  resultado=mistrcmp(str1,str2);

  switch (resultado) 
  {
    case 0:
      cout<<"las cadenas son iguales ";
      break;
    case 1:
      cout<<"str1 es mayor que str2 ";
      break;
    case -1:
      cout<<"str2 es mayor que str1 ";
      break;
  }
  return 0;
}

