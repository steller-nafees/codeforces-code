//============================================================================
// Codeforces Div-3 June 8, 2025
// A. False Alarm - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Simulates a door unlocking mechanism with a single-use button
//              and checks if all doors can be opened under the rules.
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

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        bool flag = true;
        bool button = true;

        int doors[n];

        for (int i = 0; i < n; i++)
        {
            cin >> doors[i];
        }

        if (n <= x)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (doors[i] == 0)
                continue;
            else
            {
                if((n-i)<=x)
                {
                    flag = true;
                    break;
                }
                else
                {
                    i+=x;
                    x=0;
                }
                if (doors[i] == 1)
                {
                    flag = false;
                    break;
                }
                else
                {
                    flag = true;
                }
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of test cases.
  - For each test case, read `n` (doors) and `x` (jump power).
  - Read door states: 0 (open) or 1 (closed).
  - Traverse the array:
      - If door is closed, use the jump to skip `x` positions.
      - If the landing position is also closed, print "NO".
  - Otherwise, if all closed doors can be jumped over safely, print "YES".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
