//============================================================================
// Codeforces Div-3 August 10, 2025
// A. Lever - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two integer arrays a and b of length n, simulate the
//              Lever's process:
//                1. In each iteration, if there exists an index i with a[i] > b[i],
//                   decrease one such a[i] by 1.
//                2. Then, if there exists an index i with a[i] < b[i],
//                   increase one such a[i] by 1.
//                3. Stop when step 1 is skipped (no a[i] > b[i]).
//              Output the number of iterations before the process stops.
//============================================================================
/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())


// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

void solve()
{
    int iteration = 0;
    int n; cin>>n;
    vector<int> a(n), b(n);
    INPUT_ARRAY(a,n);
    INPUT_ARRAY(b,n);
    while(true)
    {
        bool dec = false, inc = false;
        for(int i=0; i<n; i++)
        {
            if(a[i] > b[i])
            {
                a[i]--;
                dec = true;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i] < b[i])
            {
                a[i]++;
                inc = true;
                break;
            }
        }
        iteration++;

        if(dec == true)
            continue;
        else
            break;



    }
    cout<<iteration<<endl;
}

int main()
{
    FAST_IO;

    int t; cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}


/*
  💡 Solution Logic:
  - Read t test cases.
  - For each test case:
      - Read n, array a, and array b.
      - Initialize iteration counter to 0.
      - Repeat:
          • Step 1: Find first index with a[i] > b[i]; decrement it by 1.
            If not found, break out of loop.
          • Step 2: Find first index with a[i] < b[i]; increment it by 1
            (if any).
          • Increment iteration counter.
      - Output the iteration count.
  - Since n ≤ 10 and values ≤ 10, direct simulation is efficient.
*/
/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
