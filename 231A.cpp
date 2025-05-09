//A. Teams - Codeforce

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int solved=0;

    while (n--)
    {
        int a,b,c;
        a=b=c=0;
        cin>>a>>b>>c;
        if(a+b+c >= 2)
        {
            solved++;
        }
    }

    cout<<solved<<endl;


    return 0;
}


/*

## 💡 Solution Logic

take 3 inputs and sum should be equal or greater that 2 for increment in solved
*/
