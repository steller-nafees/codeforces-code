//============================================================================
// Problem: 1873A - Short sort (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given a string of length 3, determine whether it can be
//              transformed into "abc" by performing **at most one swap**
//              between any two characters.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string a = s;

        if (s == "abc")
        {
            cout << "YES" << endl;
        }
        else
        {
            swap(a[0], a[1]);
            if (a == "abc")
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                a = s;
                swap(a[1], a[2]);
                if (a == "abc")
                {
                    cout << "YES" << endl;
                    continue;
                }
                else
                {
                    a = s;
                    swap(a[0], a[2]);
                    if (a == "abc")
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case:
    - Read a string `s` of length 3.
    - Check if `s` is already "abc". If yes, print "YES".
    - Otherwise, try all 3 possible swaps:
        1. swap(s[0], s[1])
        2. swap(s[1], s[2])
        3. swap(s[0], s[2])
    - If any of those modified strings become "abc", print "YES".
    - If none work, print "NO".

  ✅ Time Complexity: O(1) per test case
  ✅ Space Complexity: O(1)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
