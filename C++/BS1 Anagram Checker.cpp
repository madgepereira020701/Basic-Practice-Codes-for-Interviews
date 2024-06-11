#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    int f[256] = {0}, s[256] = {0}, c = 0, flag = 0;

    cout << "1";
    gets(str1);
    cout << "2";
    gets(str2);

    while (str1[c] != '\0')
    {
        f[str1[c]]++;
        c++;
    }

    c = 0;
    while (str2[c] != '\0')
    {
        s[str2[c]]++;
        c++;
    }

    for (c = 0; c < 256; c++)
    {
        if (f[c] != s[c])
            flag = 1;
    }

    if (flag == 0)
    {
        cout << "Anagram";
    }
    else
    {
        cout << "No Anagram";
    }

    return 0;
}