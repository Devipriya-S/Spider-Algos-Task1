//Program 1 - Decompose binary string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int n, addOver=0, subOver=0;
    cin>>n;
    char x[n+1], y1[n+1], y2[n+1];
    cin>>x;
    strcpy(y1,x);
    strcpy(y2,x);
        
    //the binary number required is previous and next number of the given x.
    for(int i=(n-1); i>=0; i--)
    {
	//addOver remains 0 until there is carry, say 1+1 is 10 where there is carry of 1. 
	//It carries over until next '0' (where 0+1 becomes 1), and then sets addOver to 1 
	//(states no further calculation reequired
        if(addOver==0)
        {
            if (x[i]=='0')
            {
                y1[i]='1';
                addOver='1';
            }
            else
                y1[i]='0';
        }
        //SubOver remains 0 until there is borrow and then sets to 1 (states no further calculation required)
        if(subOver==0)
        {
            if(x[i]=='1')
            {
                y2[i]='0';
                subOver=1;
            }
            else
                y2[i]='1';
        }
 	if((addOver==1) && (subOver==1))
        	break;
    }
    //if all 1's or or 0's print -1
    if((addOver==0) || (subOver==0))
        cout<<"-1";
    else
        cout<<y2<<" "<<y1;    
    return 0;
}
