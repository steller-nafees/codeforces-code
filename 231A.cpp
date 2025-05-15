//============================================================================
// 231A. Teams - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Count how many problems were solved by the team
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

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main() {
    FAST_IO;

    int n;
    cin >> n;
    int solved = 0;

    while (n--) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            solved++;
        }
    }

    cout << solved << '\n';
    return 0;
}

/*
  ## 💡 Solution Logic
  Take 3 inputs representing each team member's confidence (1 or 0).
  If the sum is 2 or more, the team is confident enough to solve the problem.
  Increment `solved` for each such case.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
