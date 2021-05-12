#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i=1;i<=n;i++) a[i]=1;
    int i=2;
    while (i <= n)
    {
        int j = 2;
        if (a[i] == 1)
        {
            while (i*j <= n)
            {
                a[i*j] = 0;
                j++;
            }
        }
        i++;
    }
    for (int i=2;i<n;i++)
        if (a[i] == 1) cout << i << " ";
}
