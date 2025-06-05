//============================================================================
// 996A. Hit the Lottery - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University, CSE
// Description: Determines the minimum number of bills needed to make a given
//              amount using denominations of 100, 20, 10, 5, and 1.
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

// Debug (disable before submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main()
{
    FAST_IO;

    int n;
    cin>>n;

    int bills = 0;
    int denom[5] = {100,20,10,5,1};
    for(int i=0; i<5; i++)
    {
        bills += (n/denom[i]);
        n %= denom[i];
    }

    cout<<bills<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Input an integer `n`, the total amount of money.
  - Use greedy approach with denominations: {100, 20, 10, 5, 1}.
  - For each denomination:
      - Take as many of that bill as possible.
      - Subtract the equivalent value from `n`.
  - Sum all bills used and print the total.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
