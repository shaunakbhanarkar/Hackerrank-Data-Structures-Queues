#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> active,passive;


    int q;
    cin>>q;
    while (q--)
    {
        int type;
        cin>>type;
        if (type==1)
        {
            int x;
            cin>>x;
            active.push(x);
        }

        else if (type == 2)
        {
            if(passive.empty())
            {
              while (active.empty() == false) 
              {
                passive.push(active.top());
                active.pop();
              }
            }
            passive.pop();
            
        }
        
        else if (type==3)
        {
          if (passive.empty())
          {
            while (active.empty() == false) 
            {
              passive.push(active.top());
              active.pop();
            }
          }
          cout<<passive.top()<<endl;
          
        }
    }   
    return 0;
}
