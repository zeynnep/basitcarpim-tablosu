#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, j, n;

    cout << "Cikarilacak carpim tablosu uzunlugunu giriniz: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << i*j << "\t";
        }
        cout << endl;
    }

    return 0;
}

