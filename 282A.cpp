//A. Bits++ - Codeforce

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x=0;

    while (n--)
    {
        string str;
        cin>>str;

        //Condition for ++x
        if(str[0]=='+' && str[1] == '+')
        {
            ++x;
        }
        //Condition for x++
        else if(str[1]=='+' && str[2] == '+')
        {
            x++;
        }
        //Condition for --x
        else if(str[0]=='-' && str[1] == '-')
        {
            --x;
        }
        //Condition for x--
        else if(str[1]=='-' && str[2] == '-')
        {
            x--;
        }
        else
        {
            continue;
        }


    }
    cout<<x<<endl;


    return 0;
}


/*

## 💡 Solution Logic

take 3 inputs and sum should be equal or greater that 2 for increment in solved
*/
