//============================================================================
// A. Rook - Chessboard Moves
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given the position of a rook on an empty 8x8 chessboard,
//              print all possible squares where the rook can move.
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

int main()
{
    FAST_IO;
    int t;
    cin >> t;

    while(t--)
    {
        string pos;
        cin >> pos;

        int row = pos[1] - '0';  // Convert row character to integer
        char col = pos[0];        // Column character

        // Print all squares in the same column except current row
        for (int i = 1; i <= 8; i++)
        {
            if (i != row)
                cout << col << i << endl;
        }

        // Print all squares in the same row except current column
        for (char ch = 'a'; ch <= 'h'; ch++)
        {
            if (ch != col)
                cout << ch << row << endl;
        }
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - A rook moves any number of squares vertically or horizontally.
  - Given a position (column + row), we:
      • Print all positions in the same column (vertical moves), skipping the current row.
      • Print all positions in the same row (horizontal moves), skipping the current column.
  - Maximum of 14 moves per test case (7 vertical + 7 horizontal).
  - Complexity: O(1) per test case (constant time and memory).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
