#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        int j, x = 1;
        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (; j <= n; j++)
        {
            cout << x++;
        }
        cout << '\n';
    }

    return 0;
}