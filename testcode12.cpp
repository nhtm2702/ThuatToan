#include <iostream>
using namespace std;
int main()
{
    int n,q,m,x,y;
    cin >> n >> q;
    int a[n];
    int b[100][100];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        for (int j=0;j<a[i];j++) cin >> b[i][j];
    }
    for (int i=0;i<q;i++)
    {
        cin >> x >> y;
        cout << b[x][y] << endl;
    }
    return 0;
}
