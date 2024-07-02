#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string frase) 
{
  for(int i=0; i<frase.length(); i++)
  {
    frase[i]=tolower(frase[i]);
    if(!isalnum(frase[i]))
	{
      frase.erase(i, 1);
      i--;
    }
  }
  string fraseInvertida=string(frase.rbegin(), frase.rend());
  return frase==fraseInvertida;
}

int main() 
{
  string frase;
  cout<<"ingrese una oración: "; getline(cin, frase);
  if (esPalindromo(frase)) 
  {
    cout<<"es palindromo"<<endl;
  }
  else 
  {
    cout<<" no es palindromo"<<endl;
  }
  return 0;
}

