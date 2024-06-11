#include <iostream>
using namespace std;

int Bubble(int n, int arr[]);
int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Bubble(n, arr);
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}

int Bubble(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}