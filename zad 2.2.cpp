#include <iostream>
using namespace std;


int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << "Pobrano liczby a == " << a << " oraz b == " << b << endl;

    cout << "Wiersz o dlugosci a: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "*";
    }
    cout << "" << endl;

    cout << "Kolumna o dlugosci b: " << endl;
    for (int i = 0; i < b; i++)
    {
        cout << "*" << endl;
    }

    cout << "Prostokat o wymiarach a na b: " << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    cout << "Obwod prostokatu o wymiarach a na b:" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i > 0 && i < a - 1) {
                if (j > 0 && j < b - 1) {
                    cout << " ";

                }
                else
                {
                    cout << "*";
                }
            }else
            {
                cout << "*";
            }
        }
        cout << "" << endl;
    }

    cout << "Trojkat prostokatny o rownaramienny z katem prostym w lewym rogu: " << endl;

    int counter = a;
	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < counter; i++)
		{
            cout << "*";
		}
        counter -= 1;
	}



    return 0;
}