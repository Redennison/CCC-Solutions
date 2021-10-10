#include <bits/stdc++.h>

using namespace std;

bool isPermutation(map<char,int> fNeedle, map<char,int> fHaystack) {
    for (int i=0;i<26;i++) {
        char letter = 'a'+i;
        if (fNeedle[letter] != fHaystack[letter]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string needle, haystack;
    map<char,int> fNeedle, fHaystack;
    cin >> needle >> haystack;
    for (int i=0;i<needle.size();i++) {
        fNeedle[needle[i]]++;
    }
    map<size_t,bool> usedPerms;
    int numPerms = 0;
    for (int i=0;i<haystack.size()-needle.size()+1;i++) {
        string subHaystack = haystack.substr(i, needle.size());
        if (i == 0) {
            for (int j=0;j<subHaystack.size();j++) {
                fHaystack[subHaystack[j]]++;
            }
        } else {
            char add = subHaystack[subHaystack.size()-1], remove = haystack[i-1];
            fHaystack[add]++;
            fHaystack[remove]--;
        }
        hash<string> hasher;
        size_t hashedPerm = hasher(subHaystack);
        if ((!usedPerms[hashedPerm]) && (isPermutation(fNeedle, fHaystack))) {
            numPerms++;
            usedPerms[hashedPerm] = true;
        }
    }
    cout << numPerms << "\n";
    return 0;
}