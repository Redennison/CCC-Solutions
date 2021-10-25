#include<bits/stdc++.h>

using namespace std;

int hour = 12;
int minute = 0;
int numSeq = 0;

bool checkArithmetic(string time) {
    if (time.size() == 4) {
        int d1 = int(time[1])-int(time[0]);
        int d2 = int(time[2])-int(time[1]);
        int d3 = int(time[3])-int(time[2]);
        if (d1 == d2 == d3) 
            return true;
    } else {
        int d1 = int(time[1])-int(time[0]);
        int d2 = int(time[2])-int(time[1]);
        if (d1 == d2)
            return true;
    }
    return false;
}

int main() {
    int d;
    cin >> d;

    int hour, minute, numSeq;
    hour = 12;
    minute = 0;
    numSeq = 0;

    string time;

    for (int i=0;i<d+1;i++) {
        time = "";
        if (minute < 9) {
            minute++;
            time = to_string(hour) + "0" + to_string(minute);
        } else if (minute == 59) {
            if (hour == 12)
                hour = 1;
            else
                hour++;
            time = to_string(hour) + "00";
            minute = 1;
        } else {
            minute += 1;
            time = to_string(hour)+to_string(minute);
        }

        if (checkArithmetic(time)) {
            numSeq++;
        }
    }

    cout << numSeq;

    return 0;
}

