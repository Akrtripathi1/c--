/* Question: Write a function to find greatest digit  in given number */ 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int highest(int a)
{
    int i,l =0,smallest=9,j;
while(a)
    {
        i=0;
        j=a%10;
        l = max(j,l);
        a=a/10;
        i++;
    }
    return l;
}
int main()
{
    int a,x;
    cin>>a;
    x=highest(a);
    cout<<x;
}