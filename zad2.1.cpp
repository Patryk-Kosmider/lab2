#include <iostream>
using namespace std;


int main()
{
 //zad 1
    int n = 0;
    cin >> n;
    int suma = 0;


    for (int i = 1; i<=n; i++)
    {
        suma += i;
    }

    cout << suma;