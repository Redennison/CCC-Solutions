#include <bits/stdc++.h>

using namespace std;

/*
- Escape factory without getting caught
- N by M grid (robot move up, down, left, right)
- Each cell (empty, wall, camera, conveyor, initial position)
- Robot only walk on . cells
- First row, last row, first column, last column consists of walls (W)
- May be walls in other cells
- Conveyers cause robot to move in direction (L, R, U, D)
- Robot can get stuck forever
- Cameras can see in all directions (cannot see through walls)
- Robot caught if in same cell as camera or is seen by camera while on an empty cell
- Conveyors slightly elevated, robot cannot be caught while on a conveyer
- Cameras can see empty cells on the other side of conveyers
- Robot at cell S, exit at any of empty cells
- For each empty cell, determine the min number of steps needed for robot to move there without being caught or determine that it is impossible to move there
- Step consists of moving once up, down, left or right
- Being moved by a conveyor does not count as a step
*/

const int MXN = 100;
int N, M, num_empty = 0;
char arr[MXN][MXN];

int main()
{
    cin >> N >> M;
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
                num_empty++;
        }
    }
    
}
