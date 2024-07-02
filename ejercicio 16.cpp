#include <iostream>

using namespace std;

int main() 
{
  char arreglo[100];
  int n=0;
  cout<<"ingrese una linea de texto: ";
  cin.getline(arreglo, sizeof(arreglo));

  // Recorrer la l�nea caracter por caracter
  for (int i = 0; arreglo[i] != '\0'; i++) {
    // Verificar si el caracter es un d�gito
    if (isdigit(arreglo[i])) {
      // Convertir el d�gito en entero y acumular en n
      n = n * 10 + (arreglo[i] - '0');
    }
  }

  // Sumar 2 a n
  n += 2;

  // Imprimir el valor de n
  cout << "Valor final: " << n << endl;

  return 0;
}

