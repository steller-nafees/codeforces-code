//============================================================================
// Problem  : 1850C - Word on the Paper (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Description:
//   You are given an 8×8 board consisting of characters '.' (dots) and
//   lowercase English letters. Each row contains either only '.' or a mix
//   where at least one character is a letter. By concatenating all the
//   non-dot characters row by row, reconstruct and print the hidden word.
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
    string out;
    for(int i=0; i<8; i++)
    {
        string in;
        cin >> in;
        if(in == "........")
            continue;

        for(char ch : in)
        {
            if(ch != '.')
                out += ch;
        }
    }
    cout << out << endl;
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
  💡 Solution Logic (1850C - Word on the Paper):
  - Read an 8×8 board.
  - Ignore rows containing only '.' characters.
  - From other rows, take all non-dot characters in order.
  - Concatenate them to form the hidden word.
  - Print the final reconstructed word.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
