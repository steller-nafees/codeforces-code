//============================================================================
// A. Do Not Be Distracted! (Codeforces 1520A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: For each test case, given a string of tasks (capital letters),
//              determine if a task was ever started again after being
//              interrupted by a different task. Print "YES" if no such
//              distraction occurs, otherwise print "NO".
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Use a boolean array to keep track of seen tasks.
    // 'A' to 'Z' are 26 characters.
    vector<bool> seen(26, false);
    bool isSus = false;

    for(int i = 0; i < n; ++i)
    {
        int task_index = s[i] - 'A';

        // If the current task has already been seen...
        if(seen[task_index])
        {
            // ...but it's not a continuation of the same task from the
            // previous day, it's a distraction.
            if(i > 0 && s[i] != s[i-1]) {
                isSus = true;
                break;
            }
        }

        // Mark the current task as seen.
        seen[task_index] = true;
    }

    // Output the result.
    cout << (isSus ? "NO" : "YES") << endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic for 1520A
  - Input the number of test cases.
  - For each test case:
      • Read the number of tasks 'n' and the string 's'.
      • Initialize a boolean array `seen` to track previously performed tasks.
      • Iterate through the string of tasks.
      • If a task `s[i]` is not a continuation of the same task (`s[i-1]`)
        and has been `seen` before, it's a distraction, and the answer is "NO".
      • Otherwise, mark the current task as `seen`.
      • If the loop completes without finding a distraction, the answer is "YES".
  - Complexity: O(n) per test case, where n is the length of the task string.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
