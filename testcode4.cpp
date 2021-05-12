#include <iostream>

using namespace std;

int main()
{
    int n;
    int d[100];
    for (int i=1;i<101;i++) d[i] = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        d[a[i]] ++;
    }
    int Max = d[1];
    for (int i=2;i<101;i++)
        Max= max(Max,d[i]);
    cout << n-Max;
    return 0;
}
