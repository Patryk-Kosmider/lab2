#include <iostream>
using namespace std;


int main()
{
    int liczba;
    cout << "Podaj liczbe od 1 do 12: " << endl;
    cin >> liczba;

    if(liczba >=1 && liczba <=12)
    {
        switch (liczba)
        {
        case 1:
            cout << "Styczen" << endl;
            cout << "Ilosc dni: 31" << endl;
            cout << "Jest pochmurno" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            cout << "Ilosc dni: 28" << endl;
            cout << "Jest pochmurno" << endl;
            break;

        case 3:
            cout << "Marzec" << endl;
            cout << "Ilosc dni: 31" << endl;
            cout << "Jest pochmurno" << endl;
            break;
        case 4:
            cout << "Kwiecień" << endl;
            cout << "Ilosc dni: 30" << endl;
            cout << "Jest slonecznie" << endl;
            break;
        case 5:
            cout << "Maj" << endl;
            cout << "Ilosc dni: 31" << endl;
            cout << "Jest slonecznie" << endl;
            break;
        case 6:
            cout << "Czerwiec" << endl;
            cout << "Ilosc dni: 30" << endl;
            cout << "Jest slonecznie" << endl;
            break;
        case 7:
            cout << "Lipiec" << endl;
            cout << "Ilosc dni: 31" << endl;
            cout << "Jest slonecznie" << endl;
            break;
        case 8:
            cout << "Sierpien" << endl;
            cout << "Ilosc dni: 31" << endl;
            cout << "Jest slonecznie" << endl;
            break;
        case 9:
            cout << "Wrzesien" << endl;
            cout << "Ilośc dni: 30" << endl;
            cout << "Jest slonecznie" << endl;
            break;
        case 10:
            cout << "Pazdziernik" << endl;
            cout << "Ilośc dni: 31" << endl;
            cout << "Jest pochmurno" << endl;
            break;
        case 11:
            cout << "Listopad" << endl;
            cout << "Ilośc dni: 30" << endl;
            cout << "Jest pochmurno" << endl;
            break;
        case 12:
            cout << "Grudzien" << endl;
            cout << "Ilośc dni: 31" << endl;
            cout << "Jest pochmurno" << endl;
            break;
        }
    } else
    {
        cout << "Podana liczba/cyfra nie nalezy do danego przedzialu." << endl;
    }

   








    return 0;
}