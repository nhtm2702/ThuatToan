#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<n;j++)
            if ( (i+j) % n == 0) cout << n << " ";
            else cout << (j+i)%n << " ";
        cout << endl;
    }
}

