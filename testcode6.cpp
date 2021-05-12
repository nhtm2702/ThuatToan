#include <iostream>
#include <string>

using namespace std;

int UCLN(int a,int b)
{
    int r;
    do
    {
        r = a%b;
        a=b;
        b=r;
    }
    while (b!=0);
    return a;
}

int BCNN(int a,int b)
{
    return a*b/UCLN(a,b);
}
int main(int argc,char** agrv)
{
    int n,m;
    cin >> n >> m;
    int so,Max = 0,kq = 0;
    int a[n],b[m];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<m;i++) {cin >> b[i];Max = max(Max,b[i]);}
    so = a[0] * a[1] / UCLN(a[0],a[1]);
    for (int i=2;i<n;i++) so = BCNN(so,a[i]);
    int j = 1;
    while (so * j <= Max)
    {
        int flag = 0, temp = so*j;
        for (int i=0;i<m;i++)
            if (b[i] % temp != 0) flag = 1;
        if (flag == 0) kq++;
        j++;
    }
    cout << kq;
    return 0;
}
