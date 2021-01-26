#include <bits/stdc++.h>

using namespace std;

int r,c;

const int m = 1000;
int room[m][m];
bool past_nums[m][m];

bool isValid(int row, int column)
{
    if (row <= r && row > 0 && column <= c && column > 0) {return true;};
    return false;
}

bool isLast(int row, int column)
{
    if (row == r && column == c) {return true;};
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> r >> c;
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            int a; cin >> a;
            room[i][j] = a; past_nums[i][j] = false;
        };
    };
    queue<pair<int,int>> points; points.push({1,1});
    while (!points.empty())
    {
        pair<int,int> p; 
        p = points.front(); int row = p.first,column = p.second; points.pop(); 
        if (past_nums[row-1][column-1]) {continue;};
        past_nums[row-1][column-1] = true;
        int num = room[row-1][column-1];
        for (int i=1;i<=sqrt(num);i++)
        {
            if (num % i == 0)
            {
                int newRow = i, newColumn = num/i;
                if (isValid(newRow,newColumn) && !past_nums[newRow-1][newColumn-1])
                {
                    if (isLast(newRow,newColumn)) {cout << "yes"; return 0;};
                    points.push({newRow,newColumn});
                    
                };
                if (isValid(newColumn,newRow) && !past_nums[newColumn-1][newRow-1])
                {
                    if (isLast(newColumn,newRow)) {cout << "yes"; return 0;};
                    points.push({newColumn,newRow});
                };
            };
        };
    };
    cout << "no";
    return 0;
};
