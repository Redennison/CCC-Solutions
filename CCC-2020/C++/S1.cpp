#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> arr;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, time, dist;
    double maxSpeed = INT_MIN;
    cin >> N;
    for (int i=0;i<N;i++) {
        cin >> time >> dist;
        arr.push_back({time,dist});
    }
    sort(arr.begin(), arr.end());
    for (int i=1;i<N;i++) {
        int distance = abs(arr[i].second-arr[i-1].second);
        int time = abs(arr[i].first-arr[i-1].first);
        double speed = (double)distance/(double)time;
        maxSpeed = fmax(maxSpeed, speed);
    }
    cout << maxSpeed << "\n";
    return 0;
}