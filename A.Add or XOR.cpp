//============================================================================
// 2119A - Make a Equal to b - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two non-negative integers a and b, you can apply two types
//              of operations on a any number of times in any order:
//
//              1) a ← a + 1 with cost x
//              2) a ← a ⊕ 1 (bitwise XOR with 1) with cost y
//
//              Find the minimum total cost to make a equal to b or report -1 if impossible.
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
    cin>>t;

    while(t--)
    {
        ll a,b,x,y;
        cin>>a>>b>>x>>y;

        if(a > b)
        {
            ll cost = ((a^1) == b ) ? y : -1;
            cout<<cost<<endl;
        }
        else if(a == b)
        {
            cout<< 0 <<endl;
        }
        else
        {
            ll ans = 0;
            while(a != b)
            {
                if(a % 2 == 0)
                {
                    if( y <= x && (a^1) <= b)
                    {
                        a = a^1;
                        ans += y;
                    }
                    else
                    {
                        a++;
                        ans += x;
                    }
                }
                else
                {
                    a++;
                    ans += x;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

/*
  ## 💡 Solution Logic:
  - We want to transform integer a into integer b using two operations:
    1) Increment a by 1 at cost x
    2) XOR a with 1 at cost y
  - The goal is to minimize the total cost of operations.
  - If a > b, the only way to reduce a is by XOR with 1 once, but only if (a ^ 1) == b.
    Otherwise, it is impossible.
  - If a ≤ b, we can increase a by increments and/or XOR with 1 steps.
  - When a is even, XOR flips the last bit to odd; it might be cheaper than increments.
  - When a is odd, only increments can move a towards b.
  - We greedily apply XOR when it is cheaper and valid, else increment.
  - If no sequence can produce b from a, print -1.
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
