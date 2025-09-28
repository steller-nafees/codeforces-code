//============================================================================
// 266B. Queue at the School - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Simulates a school queue where boys ('B') let girls ('G') pass
//              ahead of them over a given number of seconds (iterations).
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

int main()
{
    FAST_IO;

    int n, t;
    cin >> n >> t;

    string data;
    cin >> data;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (data[j] == 'B' && data[j + 1] == 'G')
            {
                data[j] = 'G';
                data[j + 1] = 'B';
                j++; // skip next position to avoid re-swapping
            }
        }
    }
    cout << data << endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Boys ('B') allow girls ('G') to move ahead of them in the queue every second.
  - For each second (t iterations), scan the string:
      - If "BG" is found, swap them to become "GB" and skip the next index.
  - Output the final arrangement of the queue after t seconds.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
