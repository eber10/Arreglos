#include<iostream>
using namespace std;

void mistrcat(char *str1, char *str2) 
{
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main() 
{
    char str1[100];
    char str2[100];
    cout<<"ingrese un texto: "; cin>>str1;
    cout<<"ingrese un texto: "; cin>>str2;
    mistrcat(str1, str2);
    cout<<endl;
    cout<<str1;
  return 0;
}

