//============================================================================
// Problem: 1985A - Creating Words (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two length-3 strings, swap their first characters.
//============================================================================

//============================================================================
// Problem: 1985A - Creating Words (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two length-3 strings, swap their first characters.
//============================================================================

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
    cin >> t;

    while (t--)
    {
        string a,b;
        cin >> a >> b;

        string new_a = a, new_b = b;
        new_a[0] = b[0];
        new_b[0] = a[0];

        cout<<new_a<<" "<<new_b;
        cout<<endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of test cases `t`.
  - For each test case:
    - Read two strings `a`, `b` of length 3.
    - Swap their first letters.
    - Print the modified `a` and `b`.
*/


/*
  ## 💡 Solution Logic
  - Read number of test cases `t`.
  - For each test case:
    - Read two strings `a`, `b` of length 3.
    - Swap their first letters.
    - Print the modified `a` and `b`.
*/
