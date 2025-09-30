//============================================================================
// Platform      : Codeforces 
// Problem Title : 2065A. Skibidus and Amog'u
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : September 30, 2025 
//
// Problem Statement:
//   Skibidus lands on a foreign planet, where the local Amog tribe speaks the 
//   Amog'u language. In Amog'u, nouns have two forms: singular and plural.
//
//   - Singular form: root + "us"
//   - Plural form  : root + "i"
//
//   Given a transcribed Amog'u noun in singular form (which always ends with "us"),
//   you must convert it into its plural form.
//
// Input:
//   - The first line contains an integer t (1 ≤ t ≤ 100), the number of test cases.
//   - Each of the next t lines contains a string W, the singular form of the noun.
//     * W consists of lowercase English letters.
//     * 1 ≤ |W| ≤ 10
//     * W always ends with "us".
//
// Output:
//   For each test case, print the plural form of the noun.
//
// Constraints:
//   - 1 ≤ t ≤ 100
//   - 1 ≤ |W| ≤ 10
//   - Each W ends with "us"
//   - Time limit: 1 second
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    // remove the last two characters "us" and append "i"
    string plural = s.substr(0, n - 2) + "i";
    cout << plural << "\n";
}

int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}

/*
  💡 Solution Logic:
  - We are guaranteed that every input string W ends with "us".
  - For each test case:
      * Remove the last two characters ("us").
      * Append 'i' at the end.
      * Print the resulting plural form.
  - Example:
      Input: "amogus"
      Process: remove "us" → "amog" → add "i" → "amogi"
      Output: "amogi"
  - Complexity:
      * Each operation is O(|W|), with |W| ≤ 10, so extremely efficient.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
