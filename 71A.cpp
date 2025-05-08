//A. Way Too Long Words - Codeforce

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string w;
        cin >> w;

        int len = w.length();

        if (len > 10)
        {
            int mid_len = len - 2;
            char start_letter = w[0];
            char end_letter = w[len - 1];

            cout<<start_letter<<mid_len<<end_letter<<endl;
        }
        else
        {
            cout<<w<<endl;
        }

    }

    return 0;
}


/*

## 💡 Solution Logic

To abbreviate a word that's too long:
- If the word length is **greater than 10**, we compress it to:
  - First letter
  - Number of letters between the first and last
  - Last letter

### ✅ Abbreviation Format:
```cpp
first_letter + (length - 2) + last_letter
*/
