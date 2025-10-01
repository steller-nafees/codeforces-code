//============================================================================
// Platform      : Codeforces 
// Problem Title : 1915B - Not Quite Latin Square
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 01, 2025 
//
// Problem Statement:
//   A Latin square is a 3×3 grid made up of the letters A, B, and C such that:
//     - In each row, the letters A, B, and C each appear once.
//     - In each column, the letters A, B, and C each appear once.
//   You are given a Latin square where one letter was replaced with a question mark '?'. 
//   Find the letter that was replaced.
//
// Input:
//   - The first line contains an integer t (1 ≤ t ≤ 10^8) — number of test cases.
//   - Each test case consists of three lines of three characters ('A', 'B', 'C', or '?').
//
// Output:
//   - For each test case, output the letter that was replaced.
//
// Constraints:
//   - Time limit: 1 second
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
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
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
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
    vector<string> grid(3);
    for(int i=0; i<3; i++) {
        cin >> grid[i];
    }
    for(int i=0; i<3; i++)
    {
        bool hasQuestionMark = false;
        for(char ch : grid[i]) {
            if(ch == '?') {
                hasQuestionMark = true;
                break;
            }
        }
        if(hasQuestionMark)
        {
            set<char> letters;
            for(char ch : grid[i]) {
                if(ch != '?') {
                    letters.insert(ch);
                }
            }

            for(char ch : {'A', 'B', 'C'})
            {
                if(!letters.count(ch))
                {
                    cout<<ch<<endl;
                    break;
                }
            }

        }
    }
}

int main()
{
    FAST_IO;
    int t; cin>>t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Each test case has exactly one '?' in a 3×3 Latin square.
  - For the row containing '?', collect the two known letters.
  - The missing letter is the one not present among 'A', 'B', 'C'.
  - Print the determined missing letter.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
