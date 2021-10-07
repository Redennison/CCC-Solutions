#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double n,a,b,max_speed = -1; cin >> n; 
    vector<pair<double,double>> rec;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        rec.push_back({a,b});
    };
    sort(rec.begin(),rec.end());
    for (int i=1;i<n;i++)
    {
        double speed = (abs(rec[i].second-rec[i-1].second))/(abs(rec[i].first-rec[i-1].first));
        max_speed = max(max_speed,speed);
    };
    cout << max_speed;
};