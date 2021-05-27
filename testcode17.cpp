#include <iostream>
#include <algorithm>

using namespace std;

int find(int k, int *a, int start,int end)
{
    while (start <= end)
    {
        int mid = start+(end-start)/2; //tranh tran so
        if (a[mid] < k) start = mid+1; //re phai
        else if (a[mid] > k) end = mid -1; //re trai
        else return mid;
    }
    return -1;
}

int main()
{
    int n;
    int a[10000];
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        int j= find(-a[i],a,i+1,n-1);
        if (j>0) cout << a[i] << " " << a[j] << endl;
    }
    return 0;
}
