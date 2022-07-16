#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int entrada, temp1, temp2;

    cin >> entrada;

    temp1 = 5 * entrada * entrada + 4;
    temp2 = 5 * entrada * entrada - 4;

    int raiz1 = sqrt(temp1);
    int raiz2 = sqrt(temp2);

    if ((raiz1 * raiz1 == temp1) || (raiz2 * raiz2 == temp2))
    {
        cout << entrada << " faz parte da sequência de fibonacci." << endl;
    }
    else
    {
        cout << entrada << " não faz parte da sequência de fibonacci." << endl;
    }

    return 0;
}
