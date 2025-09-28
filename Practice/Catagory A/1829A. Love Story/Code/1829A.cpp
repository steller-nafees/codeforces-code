//============================================================================
// Problem: 1829A - Love Story (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given a string of length 10, count how many characters differ
//              from the corresponding characters in the string "codeforces".
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
    int t; cin>>t;
    while(t--)
    {
        string s;
        string c = "codeforces";
        cin>>s;
        int count = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != c[i])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of test cases `t`.
  - For each test case:
    - Read string `s` of length 10.
    - Compare each character with the same index in "codeforces".
    - Count how many positions differ.
    - Print the mismatch count.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
