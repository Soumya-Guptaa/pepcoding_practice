// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int solution(vector<string>&words , vector<int>&score , int index , unordered_map<char ,int>&mp)
{
    if(index == words.size())
    return 0;
    
int not_inc = 0 + solution(words , score , index+1 , mp);
int inc = 0;
string word = words[index];
bool possible = 1;
for(int i = 0 ; i < word.length() ; i++)
{
   char ch = word[i] ;
   if(mp[ch] == 0)
   possible = 0 ;
   mp[ch]--;
   inc += score[ch-'a'];
}
int sc = INT_MIN ;
if(possible ==1 )
 sc = inc + solution(words , score , index+1 , mp) ;
for(int i = 0 ; i < word.length() ; i++)
{
   char ch = word[i] ;

   mp[ch]++;
  
}
return max(sc ,not_inc);

}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
vector<string>words = {"dog" , "cat" , "dad" , "good"};
vector<int>score = {1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0} ;
vector<char>freq = {'a' , 'b' , 'c' , 'd' , 'd' , 'd' , 'g' , 'o' , 'o' } ;
unordered_map<char , int>mp ;
for(int i = 0 ; i < freq.size() ; i++)
{
    mp[freq[i]] ++;
}
int ans = solution(words , score ,  0, mp);
cout << ans ;
    return 0;
}