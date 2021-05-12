#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int *a = new int [n];
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for (int i=0;i<n-2;i++)
        for (int j=i+1;j<n-1;j++)
            for (int k=j+1;k<n;k++)
        if (a[i]+a[j]+a[k] == 0) cout << a[i] << " " << a[j] << " " << a[k] << endl;
    return 0;
}
