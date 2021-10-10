#include <bits/stdc++.h>

using namespace std;

int grid[1005][1005];
int taken[1005][1005];
vector<vector<pair<int, int>>> vals(1000005);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int M, N;
    cin >> M >> N;
    for (int i=0;i<M;i++) {
        for (int j=0;j<N;j++) {
            cin >> grid[i][j];
            vals[grid[i][j]].push_back({i+1,j+1});
        }
    }
    queue<pair<int,int>> points;
    points.push({N,M});
    while (!points.empty()) {
        auto point = points.front();
        points.pop();
        int row = point.first;
        int column = point.second;
        for (auto p : vals[row*column]) {
            if (p.first == 1 && p.second == 1) {
                cout << "yes";
                return 0;
            } if (!taken[p.first][p.second]) {
                points.push(p);
                taken[p.first][p.second] = true;
            }
        }
    }
    cout << "no";
    return 0;
}