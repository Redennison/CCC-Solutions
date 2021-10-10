#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, input, small=INT_MAX;
    cin >> N;

    vector<vector<int>> data(N);
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cin >> input; small = min(input,small);
            data[i].push_back(input);
        }
    }
    
    if (data[0][0] == small) {
        for (int i=0;i<N;i++) {
            for (int j=0;j<N;j++) {
                cout << data[i][j] << ' ';
            }
            cout << "\n";
        }
    } else if (data[0][N-1] == small) {
        for (int i=N-1;i>=0;i--) {
            for (int j=0;j<N;j++) {
                cout << data[j][i] << ' ';
            }
            cout << "\n";
        }
    } else if (data[N-1][0] == small) {
        for (int i=0;i<N;i++) {
            for (int j=N-1;j>=0;j--) {
                cout << data[j][i] << ' ';
            }
            cout << "\n";
        }
    } else {
        for (int i=N-1;i>=0;i--) {
            for (int j=N-1;j>=0;j--) {
                cout << data[i][j] << ' ';
            }
            cout << "\n";
        }
    }
}