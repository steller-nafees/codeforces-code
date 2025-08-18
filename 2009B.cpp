//============================================================================
// Problem  : 2009B - osu!mania (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Description:
//   You're given a beatmap layout of n rows and 4 columns. Each row has exactly
//   one note, marked by '#'. Notes closer to the bottom are processed first.
//   The task: For each test case, output the 1-based column index of each note
//   in order from bottommost row to topmost row.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
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
    int n; cin>>n;
    vector<int> o(n);
    for(int i= 0; i<n; i++)
    {
        string s; cin>>s;
        for(int j=0 ; j<4;j++)
        {
            if(s[j] == '#')
            {
                o[i] = j+1;
                break;
            }
        }
    }
    for(int val = n-1 ; val >= 0; val--)
        cout<<o[val]<<" ";
    cout<<endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic (2009B – osu!mania):
  1. Read t test cases.
  2. For each test case:
     - Read n (number of rows).
     - For each of the next n rows (from top to bottom), find the position of '#'.
     - Store the 1-based column index.
  3. After reading all rows, output the stored column indices **in reverse order**—
     starting from the bottommost row to the topmost.
  This reversal matches the requirement that notes closer to the bottom are played first.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
