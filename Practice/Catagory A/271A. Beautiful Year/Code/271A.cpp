//============================================================================
// 271A. Beautiful Year - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the next year after a given input with all distinct digits.
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
    int y;
    cin >> y;

    for (int i = y + 1;; i++)
    {
        //To reset the variables we need for each value, declared inside the loop
        int digit;
        bool flag = true;
        int dig[10] = {0};
        int temp = i;

        while (temp > 0)
        {
            digit = temp % 10;
            dig[digit]++;
            if (dig[digit] > 1)
            {
                flag = false;
                break;
            }
            temp /= 10;
        }
        if (flag == true)
        {
            cout << i << endl;
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Start from the year after the given input year.
  - For each year, count the digits and check if all are unique.
  - Use an array to keep track of digit occurrences.
  - Print the first year that has all distinct digits.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
