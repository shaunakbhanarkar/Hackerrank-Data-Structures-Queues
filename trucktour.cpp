#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;
    int index = 0;

    for (int i = 0 ; i < n ; i++)
    {
        int x,y;
        cin>>x>>y;

        sum = sum + x - y;
        if (sum < 0)
        {
            sum = 0;
            index = i + 1;
        }
    }
    cout<<index<<endl;
    return 0;
}
