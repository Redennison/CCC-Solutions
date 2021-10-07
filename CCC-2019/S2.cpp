#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    for (int i=2;i<=sqrt(num);i++)
    {
        if (num%i == 0) {return false;};
    };
    return true;
};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a,b; cin >> a;
    vector<int> nums;
    for (int i=0;i<a;i++)
    {
        cin >> b; nums.push_back(b);
    };
    for (int i=0;i<a;i++)
    {
        int n = nums[i];
        for (int j=3;j<=n-1;j++)
        {
            if (isPrime(j) && isPrime((n*2)-j))
            {
                cout << j << ' ' << (n*2)-j << endl; 
                break;
            };
        };
    };
};