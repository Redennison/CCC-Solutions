#include </Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/bits/stdc++.h>


using namespace std;

int N;
vector<int> P, W, D;

int getTime(c) {
    seconds = 0
    for (int i=0;i<N;i++) {
        seconds += W[i] * (abs(P[i] - c) - D[i]);
    }
    return seconds;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int l = INT_MAX, r = INT_MIN, mid, shortest_time;
    cin >> N;

    P.resize(N);
    W.resize(N);
    D.resize(N);

    // P = position
    // W = 1 metre per Wi seconds
    // D = distance can hear from (metres)

    for (int i=0;i<N;i++) {
        cin >> P[i] >> W[i] >> D[i];
        l = min(l, P[i]);
        r = max(r, P[i]);
    }

    while (l <= r) {
        mid = l + (r - l) / 2;

        int time = getTime(mid);
        int timePlusOne = getTime(mid+1);
        int timeMinusOne = getTime(mid-1);
        if ((time < timePlusOne) && (time < timeMinusOne) {
            shortest_time = time;
        } else if (time > timePlusOne) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << shortest_time << "\n";
};
