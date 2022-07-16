#include <iostream>

using namespace std;

int main()
{

    string str;
    string strRevertida = "";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--)
    {
        strRevertida += str[i];
    }

    cout << strRevertida;

    return 0;
}
