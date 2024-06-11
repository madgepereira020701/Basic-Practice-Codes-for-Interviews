#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100];
    int f[256] = {0}, c = 0;

    cout << "1";
    gets(str1);

    while (str1[c] != '\0')
    {
        f[str1[c]]++;
        c++;
    }

    for (c = 0; c < 256; c++)
    {
        if (f[c] == 1)
        {
            cout << char(c);
        }
    }

    return 0;
}