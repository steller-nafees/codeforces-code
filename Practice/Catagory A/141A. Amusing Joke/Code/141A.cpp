//============================================================================ 
// 141A. Amusing Joke - Codeforces 
// Author: H M Nafees N Islam
// Institution: North South University, CSE
// Description: Checks if the third string (pile) is an anagram of the
//              concatenation of the first two strings (guest + host).
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() 
{
    FAST_IO;

    string guest, host, pile;
    cin >> guest >> host >> pile;

    int freq1[26] = {0};
    int freq2[26] = {0};

    // Count frequency of guest + host
    for (char c : guest)
        freq1[c - 'A']++;
    
    for (char c : host)
        freq1[c - 'A']++;

    // Count frequency of pile
    for (char c : pile)
        freq2[c - 'A']++;

    // Compare the two frequency arrays
    bool flag = true;
    for (int j = 0; j < 26; j++) {
        if (freq1[j] != freq2[j]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  - Combine `guest` and `host`, count letter frequencies.
  - Count letter frequencies in `pile`.
  - If both frequencies match, output "YES"; otherwise, "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
