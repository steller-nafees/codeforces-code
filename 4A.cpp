//A. Watermelon - Codeforce

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>>w;

    if(w>2 && w % 2 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

/*

## 💡 Solution Logic

To divide the watermelon into two positive even numbers:
- `w` must be **even**
- `w` must be **greater than 2** (since 2 cannot be split into two positive even numbers)

### ✅ Condition:
```cpp
if (w > 2 && w % 2 == 0)
    cout << "YES";
else
    cout << "NO";
*/
