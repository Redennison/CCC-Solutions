#include <bits/stdc++.h>

using namespace std;

string grid[105];
vector<pair<int,int>> points;
bool pastPoints[105][105];
int steps[105][105];
queue<pair<int,int>> cur_points;

void checkEscape(int row, int column, int newRow, int newColumn) {
    if (!pastPoints[row][column]) {       
        if (grid[newRow][newColumn] == '.') {
            steps[newRow][newColumn] = steps[row][column]+1;
            pastPoints[newRow][newColumn] = true;
            cur_points.push({newRow,newColumn});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // Get grid size
    int N, M;
    cin >> N >> M;

    /*
    Get grid values
    Push starting point to queue
    Push each point to vector
    */
    for (int i=0;i<N;i++) {
        cin >> grid[i];
        for (int j=0;j<M;j++) {
            if (grid[i][j] == 'S') {
                cur_points.push({i,j});
                steps[i][j] = 0;
            } else if (grid[i][j] == '.')
                points.push_back({i,j});
        }
    }

    while (!cur_points.empty()) {
        // Get row/column of current point
        pair<int,int> point = cur_points.front();
        cur_points.pop();
        int row = point.first, column = point.second;

        // Check up, down, right, left
        if (row+1 < N) 
            checkEscape(row, column, row+1, column);
        if (row-1 >= 0)
            checkEscape(row, column, row-1, column);
        if (column+1 < M)
            checkEscape(row, column, row, column+1);
        if (column-1 >= 0)
            checkEscape(row, column, row, column-1);
    }

    for (int i=0;i<points.size();i++) {
        pair<int,int> point = points[i];
        int row = point.first, column = point.second;
        if (!steps[row][column]) 
            cout << "-1" << "\n";
        else
            cout << steps[row][column] << "\n";
    }

    return 0;
}