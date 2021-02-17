#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a; cin >> n; 
    vector<int> meas;
    for (int i=0;i<n;i++)
    {
        cin >> a; meas.push_back(a);
    };
    sort(meas.begin(),meas.end());
    if (n%2 != 0)
    {
        cout << meas[n/2] << ' ';
        for (int i=0;i<n/2;i++)
        {
            cout << meas[n/2+1+i] << ' ' << meas[n/2-1-i] << ' ';
        };
    }
    else
    {
        for (int i=0;i<n/2;i++)
        {
            cout << meas[n/2-1-i] << ' ' << meas[n/2+i] << ' ';
        };
    };
};
