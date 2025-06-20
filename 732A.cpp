//============================================================================
// 732A. Buy a Shovel - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the minimum number of shovels to buy such that the total
//              price either ends in 0 or equals the friend's coin value.
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

    int k, r;
    cin >> k >> r;

    for(int i=1;;i++)
    {
        int total = i * k;
        if(total % 10 == 0 || total%10 == r)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Iterate from 1 upwards:
    - Multiply `i * k` (total price of i shovels).
    - If last digit is 0 or equal to `r`, output `i`.
  - This ensures Petya can pay exactly using the `r` coin or without change.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
