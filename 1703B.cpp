//============================================================================
// 1703B. ICPC Balloons - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the total number of balloons distributed in an ICPC
//              contest based on the order of solved problems.
//              - Each problem solved gives 1 balloon.
//              - First team to solve a problem gets 1 extra balloon.
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

    int t; cin >> t;

    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        int arr[26] = {0};

        int balloons = 0;//one additional ballon
        for(int i=0; i<n; i++)
        {
            char a = s[i];
            int v = s[i] - 'A';
            balloons += 2 - arr[v];
            arr[v] = 1;
        }
        cout<<balloons<<endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case:
    - Read the string of solved problems.
    - Initialize a 26-element array to track which problems have been solved before.
    - Iterate over the string:
      - If the problem is solved for the first time: add 2 balloons.
      - Otherwise: add 1 balloon.
    - Output the total balloon count.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
