#include <iostream>
using namespace std;

int main()
{
    int arr[100], visited[100], n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (visited[i] != 1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            if (count == 1)
            {
                cout << arr[i] << "";
            }
        }
    }
    return 0;
}