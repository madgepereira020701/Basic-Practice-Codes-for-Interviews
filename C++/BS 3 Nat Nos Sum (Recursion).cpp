#include <iostream>
using namespace std;

int getSum(int num);
int main()
{
    int num;
    cout << "Enter no";
    cin >> num;
    int c = getSum(num);
    cout << c;
    return 0;
}
int getSum(int num)
{
    if (num == 0)
        return num;
    return num + getSum(num - 1);
}