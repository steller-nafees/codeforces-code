//============================================================================
// 427A. Police Recruits - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Simulates crime events and police hiring to count how many
//              crimes go untreated due to lack of available officers.
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
    int n;
    cin >> n;

    int p[n];
    int crime = 0;
    int police = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] > 0)
        {
            police += p[i]; // Recruit officers
        }
        else if (police > 0)
        {
            police--; // Assign officer to solve crime
        }
        else
        {
            crime++; // No officer available -> crime untreated
        }
    }

    cout << crime << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - Input `n` events: positive integers represent officer recruitment, -1 means a crime occurred.
  - Track the number of available officers (`police`) and the number of crimes that go untreated.
  - If a crime occurs and no officer is available, increment the `crime` counter.
  - Output the number of untreated crimes.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
