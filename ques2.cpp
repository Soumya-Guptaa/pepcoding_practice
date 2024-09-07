#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int winner(int n , int k)
{
    if(n==0)
    return 0 ;
    int ans = winner(n-1 , k) ;
    ans = (ans +k)%n;
    return ans ;
}

int main() {
    // Write C++ code here
   int ans = winner(1 , 3);
   cout << ans ;
    return 0;
}