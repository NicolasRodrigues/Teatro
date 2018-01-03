#include <iostream>
#include "contador.h"
#include "teatro.h"

using namespace std;

int main()
{
    int nlin, ncol;

    cout << "Entre com o numero de LINHAS: " << endl;
    cin >> nlin;
    cout << "Entre com o numero de COLUNAS: " << endl;
    cin >> ncol;

    Teatro t(nlin, ncol);

    /*
    int nlin = 3;
    int ncol = 5;
    */

    for (int i = 0; i < t.tamanho; i++)
    {
        cout << "= " << t.v[i] << endl;
    }

    /*
    int *matl = new int[t.tamanho];

    for (int i = 0; i < nlin; i++)
    {
        for (int j = 0; j < t.col; j++)
        {
            matl[i * t.col + j] = i * t.col + j;
        }
    }

    for (int i = 0; i < t.lin; i++)
    {
        for (int j = 0; j < t.col; j++)
        {
           cout << matl[i * t.col + j] << " ";
        }
        cout << endl;
    }

    delete matl;

    */

    return 0;
}
