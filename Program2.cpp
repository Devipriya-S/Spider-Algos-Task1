//Program 2 - Find degree of symmetry
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int degCount(string str, int n)
{
    if (str.length()==1)
        return 0;
    
    int mid = n/2;
    //slice string to half and then compare if both are same
    //increment if same and recursively call function with next half
    string s1 = str.substr(0, (mid));
    string s2 = str.substr(mid, n);
    
    if (s1.compare(s2)==0)
    {
        return (degCount(s1, (n/2))+1);
    }
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    cout<<degCount(s, n);
    return 0;
}