#include <iostream>
using namespace std;


int main()
{
    //zad 1
    cout << "Podaj n: " << endl;
    int n = 0;
    cin >> n;
    int suma = 0;
    int wynik = 0;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
        wynik += suma;
    }

    cout << wynik;
    return 0;
}
