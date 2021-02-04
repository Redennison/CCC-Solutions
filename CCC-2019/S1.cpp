#include <bits/stdc++.h>

using namespace std;

vector<int> grid = {1,2,3,4};

void vertical()
{
    int a = grid[0],b = grid[2];
    grid[0] = grid[1]; grid[2] = grid[3];
    grid[1] = a; grid[3] = b;
};

void horizontal()
{
    int a = grid[2],b = grid[3];
    grid[2] = grid[0]; grid[3] = grid[1];
    grid[0] = a; grid[1] = b;
};

int main()
{
    string seq; cin >> seq;
    for (int i=0;i<seq.length();i++)
    {
        if (seq[i] == 'H') {horizontal();};
        if (seq[i] == 'V') {vertical();};
    };
    cout << grid[0] << ' ' << grid[1] << endl;
    cout << grid[2] << ' ' << grid[3] << endl;
};
