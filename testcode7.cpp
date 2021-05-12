#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,flag = 0;
    cin >> n;
    double nam[n],nu[n];
    for (int i=0;i<n;i++) cin >> nam[i] >> nu[i];
    sort(nam,nam+n);
    sort(nu,nu+n);
    for (int i=0;i<n;i++)
        if (nam[i] < nu[i]) flag = 1;
    if (flag == 0) cout << "Yes";
    else cout << "No";
    return 0;
}
