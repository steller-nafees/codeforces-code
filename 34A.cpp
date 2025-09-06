//============================================================================
// A. Reconnaissance 2 (Codeforces 34A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given the heights of n soldiers standing in a circle,
//              find two neighboring soldiers such that the difference
//              of their heights is minimal. Output their 1-based indices.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minH = INT_MAX;
    int i1 = 0, i2 = 0;

    // Check all adjacent pairs (circular)
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n; // circular adjacency
        int diff = abs(a[i] - a[j]);
        if (diff < minH) {
            minH = diff;
            i1 = i;
            i2 = j;
        }
    }

    cout << i1 + 1 << " " << i2 + 1 << endl;
}

int main() {
    FAST_IO;
    solve();
    return 0;
}

/*
  💡 Solution Logic
  - Soldiers stand in a circle, so we consider pairs (i, i+1) and (n-1, 0).
  - Compute the absolute difference in heights for each pair.
  - Track the pair with the minimum difference.
  - Print their indices in 1-based format.
  - Complexity: O(n).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
