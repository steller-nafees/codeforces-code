//============================================================================
// Codeforces Div-3 - August 21, 2025
// A. Homework
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: August 21, 2025
//
// Problem Statement:
// Vlad and Dima are given two strings a and b. They must append all characters
// of b to a in any order. The distribution of who appends each character is
// given in string c, where:
//   • If c[i] = 'V', then Vlad appends b[i] to the **beginning** of the word.
//   • If c[i] = 'D', then Dima appends b[i] to the **end** of the word.
// The characters are appended in the order they appear in b.
//
// Input:
//  - t (1 ≤ t ≤ 1000), number of test cases
//  For each test case:
//    - n (1 ≤ n ≤ 10), length of string a
//    - string a
//    - m (1 ≤ m ≤ 10), length of strings b and c
//    - string b
//    - string c (consisting of 'V' and 'D')
//
// Output:
//  - For each test case, output the resulting string after Vlad and Dima
//    append all characters.
//
// Constraints:
//  - Time limit: 1 second
//  - Memory limit: 256 MB
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

void solve()
{
    int n; cin >> n;
    string a; cin >> a;
    int m; cin >> m;

    string b, c;
    cin >> b >> c;

    string D, V;
    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'D')
            D += b[i];
        else
            V += b[i];
    }

    reverse(V.begin(), V.end()); // Vlad’s insertions go to the beginning
    string out = V + a + D;
    cout << out << "\n";
}

int main()
{
    FAST_IO;

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic:
  - Iterate through b and c simultaneously.
  - If c[i] = 'D', append b[i] to the right string (Dima).
  - If c[i] = 'V', append b[i] to the left string (Vlad).
  - Since Vlad’s characters go to the beginning, reverse V at the end.
  - Final string = V + a + D.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
