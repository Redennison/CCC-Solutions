#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int M, N, K, n;
    char c;
    cin >> M >> N >> K;
    unordered_set<int> rows;
    unordered_set<int> cols;

    for (int i=0;i<K;i++) {
        cin >> c >> n;

        if (c == 'R') {
            if (rows.find(n) == rows.end()) {
                rows.insert(n);
            } else {
                rows.erase(n);
            }
        } else {
            if (cols.find(n) == cols.end()) {
                cols.insert(n);
            } else {
                cols.erase(n);
            }
        }
    }

    int rows_size = rows.size();
    int cols_size = cols.size();

    int num_black = (rows_size * N + cols_size * M) - rows_size * cols_size * 2;

    cout << num_black << "\n";
};
