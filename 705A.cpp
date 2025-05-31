//============================================================================
// 705A. Hulk - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Prints a phrase that alternates between "I hate" and "I love"
//              for a given number of iterations, ending with "it".
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

    string a = "I hate ";
    string b = "I love ";
    string c = "that ";
    string d = "it";

    int n;
    cin>>n;

    for(int i=1 ; i<=n; i++)
    {
        if(i%2 == 0)
        {
            cout<<b;
        }
        else
        {
            cout<<a;
        }
        if(i == n)
        {
            cout<<d;
        }
        else
        {
            cout<<c;
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Given an integer `n`, output a sentence following this pattern:
      "I hate that I love that I hate ... it"
  - Use "I hate" for odd positions and "I love" for even ones.
  - Append "that" after each phrase, except the last one which ends with "it".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
