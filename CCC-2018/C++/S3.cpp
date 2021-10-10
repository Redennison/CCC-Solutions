#include <bits/stdc++.h>

using namespace std;

string factory[105];
bool pastPoints[105][105];
int steps[105][105]; // set steps[i][j] = number of steps
queue<pair<int,int>> points;
map<pair<int,int>,int> foundPoints; // save point to numsteps (set it to -1 at start)

void checkEscape(int row, int column) {
    if (factory[row][column] == '.') {
        points.push({row,column});
        pastPoints[row][column] = true;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++) {
        cin >> factory[i];
        for (int j=0;j<M;j++) {
            if (factory[i][j] == 'S')
                points.push({i,j});
            else if (factory[i][j] == '.') 
                foundPoints[{i,j}] = -1;
        }
    }
    while (!points.empty()) {
        pair<int,int> point = points.front();
        points.pop();
        int row = point.first, column = point.second;
        if (pastPoints[row][column])
            continue;
        if (row-1 >= 0) { 
            if (factory[row-1][column] == '.') {
                steps[row-1][column] = steps[row][column]+1;
                foundPoints[{row-1,column}] = steps[row-1][column];
                points.push({row-1,column});
                pastPoints[row-1][column] = true;
            }
        } if (row+1 < N) {
           if (factory[row+1][column] == '.') {
                steps[row+1][column] = steps[row][column]+1;
                foundPoints[{row+1,column}] = steps[row+1][column];
                points.push({row+1,column});
                pastPoints[row+1][column] = true;
            }
        } if (column-1 >= 0) {
           if (factory[row][column-1] == '.') {
                steps[row][column-1] = steps[row][column]+1;
                foundPoints[{row,column-1}] = steps[row][column-1];
                points.push({row,column-1});
                pastPoints[row][column-1] = true;
            }
        } if (column+1 < M) {
           if (factory[row][column+1] == '.') {
                steps[row][column+1] = steps[row][column]+1;
                foundPoints[{row,column+1}] = steps[row][column+1];
                points.push({row,column+1});
                pastPoints[row][column+1] = true;
            }
        }
    }
    // map<pair<int,int>,int>::iterator it = foundPoints.begin();
    for (pair<pair<int,int>,int> element : foundPoints) {
        cout << foundPoints[element] << "\n";
    }
    return 0;
}