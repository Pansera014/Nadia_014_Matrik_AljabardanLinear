#include <iostream>
using namespace std;

int main()
{
    cout << "Perkalian Skalar dan Matriks\n";

    int bilangan[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan Angka Matriks A ke " << i + 1 << "," << j + 1 << ": ";
            cin >> bilangan[i][j];
        }
        cout << endl;
    }

    cout << "=====\n";
    for (int k = 0; k < 4; k++)
    {
        if (k < 4)
        {
            cout << " ";
        }

        for (int l = 0; l < 3; l++)
        {
            cout << " " << bilangan[k][l] << "\t";
        }

        if (k < 4)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << "=====\n";

    int hasil[4][3];
    int k;

    cout << "Masukkan Nilai K: ";
    cin >> k;
    cout << "\n";
    cout << "Hasil Dari Perkalian Skalar \n";
    cout << "=====\n";

    for (int m = 0; m < 4; m++)
    {
        if (m < 4)
        {
            cout << " ";
        }
        for (int n = 0; n < 3; n++)
        {
            hasil[m][n] = k * bilangan[m][n];
            cout << " " << hasil[m][n] << "\t";
        }
        if (m < 4)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << "=====\n";
    cout<<"\ndevelop @nadiapansera014__";
    return 0;
}
