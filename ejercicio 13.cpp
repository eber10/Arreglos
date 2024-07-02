#include<iostream>

using namespace std;

void mistrcpy(char *str1, char *str2) 
{
    while (*str2 != '\0') 
	{
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main()
{
	char str1[100];
    char str2[100];
    cout<<"ingrese un texto: "; cin>>str2;
    mistrcpy(str1, str2);
    cout<<endl;
    cout<<"la copia es: " <<str1<<endl;
    return 0;
}

