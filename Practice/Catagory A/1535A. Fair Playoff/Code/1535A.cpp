//============================================================================
// 1535A. Fair Playoff - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University, CSE
// Description: Determines if the two strongest players (among four) are in
//              different semifinals, so they can face off in the final.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n = 4;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int semifinal_1 = max(s[0], s[1]);
    int semifinal_2 = max(s[2], s[3]);

    sort(s.begin(), s.end());

    if ((semifinal_1 == s[2] || semifinal_1 == s[3]) &&
        (semifinal_2 == s[2] || semifinal_2 == s[3]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Input four player skills.
  - The first two are semifinal 1, the last two are semifinal 2.
  - Extract the winners from both semifinals.
  - If the two strongest players are the winners of different semifinals,
    then they can meet in the final — output "YES", else "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
