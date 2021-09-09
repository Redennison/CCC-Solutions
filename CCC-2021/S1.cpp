#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    double total;

    cin >> N;
    vector<int> heights(N+1), widths(N);

    for (int i=0;i<N+1;i++) {
        cin >> heights[i];
    }

    for (int i=0;i<N;i++) {
        cin >> widths[i];
    }

    for (int i=0;i<N;i++) {
        total += widths[i] * (heights[i] + heights[i+1]) / 2.0;
    }

    printf("%.10f\n", total);
};
