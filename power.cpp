//SPOJ submission 22976166 (CPP)plaintext list.Status: AC, problem PA05_POT, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 01 17 : 16 : 13.
#include <iostream>

using namespace std;



int main()
{
    long int podst, wyk, z, prob;
    cin >> prob;
    for (int i = 1; i <= prob; i++)
    {

        cin >> podst >> wyk;

        if (wyk == 0)
            cout << 1 << endl;
        else
        {
            z = podst % 10;
            switch (z)
            {
            case 0:
                cout << 0 << endl;
                break;
            case 1:
                cout << 1 << endl;
                break;
            case 2:
                if (wyk % 4 == 1)
                    cout << 2 << endl;
                if (wyk % 4 == 2)
                    cout << 4 << endl;
                if (wyk % 4 == 3)
                    cout << 8 << endl;
                if (wyk % 4 == 0)
                    cout << 6 << endl;
                break;

            case 3:
                if (wyk % 4 == 1)
                    cout << 3 << endl;
                if (wyk % 4 == 2)
                    cout << 9 << endl;
                if (wyk % 4 == 3)
                    cout << 7 << endl;
                if (wyk % 4 == 0)
                    cout << 1 << endl;
                break;

            case 4:
                if (wyk % 2 == 1)
                    cout << 4 << endl;
                if (wyk % 2 == 0)
                    cout << 6 << endl;
                break;

            case 5:
                cout << 5 << endl;
                break;
            case 6:
                cout << 6 << endl;
                break;
            case 7:
                if (wyk % 4 == 1)
                    cout << 7 << endl;
                if (wyk % 4 == 2)
                    cout << 9 << endl;
                if (wyk % 4 == 3)
                    cout << 3 << endl;
                if (wyk % 4 == 0)
                    cout << 1 << endl;
                break;

            case 8:
                if (wyk % 4 == 1)
                    cout << 8 << endl;
                if (wyk % 4 == 2)
                    cout << 4 << endl;
                if (wyk % 4 == 3)
                    cout << 2 << endl;
                if (wyk % 4 == 0)
                    cout << 6 << endl;
                break;
            case 9:
                if (wyk % 2 == 1)
                    cout << 9 << endl;
                if (wyk % 2 == 0)
                    cout << 1 << endl;

            }
        }
    }

    return 0;
}
