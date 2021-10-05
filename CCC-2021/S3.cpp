#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> P, W, D;

long long get_time(int pos) {
    long long seconds = 0;
    for (int i=0;i<N;i++) {
        long long distance = abs(P[i] - pos) - D[i];
        if (distance > 0)
            seconds += W[i] * distance;
    }
    return seconds;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int l = INT_MAX, r = INT_MIN, mid;
    long long shortest_time;

    cin >> N;
    P.resize(N);
    W.resize(N);
    D.resize(N);

    for (int i=0;i<N;i++) {
        cin >> P[i] >> W[i] >> D[i];
        if (P[i] < l)
            l = P[i];
        if (P[i] > r)
            r = P[i];
    }

    while (l <= r) {
        mid = l + (r - l) / 2;

        long long time = get_time(mid);
        long long timePlusOne = get_time(mid+1);
        long long timeMinusOne = get_time(mid-1);

        if ((time <= timePlusOne) && (time <= timeMinusOne)) {
            shortest_time = time;
            break;
        } else if (time < timePlusOne) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << shortest_time << "\n";
    return 0;
};
