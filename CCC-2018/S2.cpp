#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,a,small=0x3f3f3f3f; cin >> n;
    vector<vector<int>> data(n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin >> a; small = min(a,small);
            data[i].push_back(a);
        };
    };
    if (data[0][0] == small) {for (int i=0;i<n;i++) {for (int j=0;j<n;j++) {cout << data[i][j] << ' ';};cout << endl;};};
    if (data[0][n-1] == small) {for (int i=n-1;i>=0;i--) {for (int j=0;j<n;j++) {cout << data[j][i] << ' ';};cout << endl;};};
    if (data[n-1][0] == small) {for (int i=0;i<n;i++) {for (int j=n-1;j>=0;j--) {cout << data[j][i] << ' ';};cout << endl;};};
    if (data[n-1][n-1] == small) {for (int i=n-1;i>=0;i--) {for (int j=n-1;j>=0;j--) {cout << data[i][j] << ' ';};cout << endl;};};
};
