#include <iostream>

using namespace std;

void rotar_vector(int vector[], int n) 
{
    int aux=vector[n-1];
    for(int i=n-1; i>0; i--)
	{
        vector[i]=vector[i-1];
    }
    vector[0]=aux;
}

int main() 
{
    int vector[5]={1, 2, 3, 4, 5};
    int n=5;
    system("pause");
    cout<<"Vector original: "<<endl;
    for(int i=0; i<n; i++)
	{
        cout<<vector[i]<<" ";
    }
    cout<<endl;
    rotar_vector(vector, n);
    cout<< "vector rotado: "<<endl;
    for (int i=0; i<n; i++) 
	{
        cout<<vector[i]<<" ";
    }
    cout<<endl;

    return 0;
}
