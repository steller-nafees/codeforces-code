//============================================================================
// Codeforces Div-3 June 8, 2025
// A. Only One Digit - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given an integer x, find the smallest non-negative integer y
//              such that x and y share at least one common digit.
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
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        vector<int> n;

        if(x >= 1 && x <= 9)
        {
            cout << x << endl;
            continue;
        }
        else
        {
            int temp = x;
            while(temp != 0)
            {
                int digit = temp % 10;
                temp /= 10;
                n.push_back(digit);
            }
            sort(n.begin(), n.end());
            cout << n[0] << endl;
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic:
  - Read the number of test cases.
  - For each test case, read integer x.
  - If x is a single-digit number (1 to 9), output x.
  - Otherwise, extract all digits of x, sort them, and output the smallest digit.
  - This works because the smallest digit of x is always the smallest integer
    that shares at least one digit with x.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
