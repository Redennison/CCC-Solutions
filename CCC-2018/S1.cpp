#include <bits/stdc++.h>

using namespace std;

// CONSTANTS

const int INF = INT_MAX;
const int MXN = 100;
int N, arr[MXN];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    sort(arr, arr + N);
    double smallest_size = INF;
    for (int i=1;i<N-1;i++) {
        int left = (arr[i]-arr[i-1]);
        int right = (arr[i+1]-arr[i]);
        double neighborhood = left/2.0+right/2.0;
        smallest_size = fmin(smallest_size, neighborhood);
    }
    printf("%.1f", smallest_size);
}
