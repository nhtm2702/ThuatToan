#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int flag[n];
    for (int i=0;i<n;i++)
    {
        cin >> m;
        int a[m],left[m+1],right[m+1];
        for (int j=0;j<m;j++) cin >> a[j];
        left[-1]=0;right[m]=0;
        for (int j=0;j<m;j++) left[j] = left [j-1] + a[j];
        for (int j=m-1;j>=0;j--) right[j] =right[j+1] + a[j];
        int k=0;
        for (int j=0;j<m;j++)
        {
            k++;
            if (left[j-1] == right[k]) flag[i] = 1;
        }
    }
    for (int i=0;i<n;i++)
        if (flag[i] == 1) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    return 0;
}
