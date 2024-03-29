#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
string s;
     for(int i=0;i<n;i++){
    char a;
    cin>>a;
    s=s+a;
  }
 
    int c=0;
   
   int i=0;
   if(s[0]=='0')
   {
        while(i<s.size())
        {
            if(s[i]=='1')
            c++;
            i+=2;

        }
        i=1;
        while(i<s.size())
        {
            if(s[i]=='0')
            c++;
            i+=2;
        }
   }
   
   i=0;
     if(s[0]=='1')
   {
        while(i<s.size())
        {
            if(s[i]=='0')
            c++;
            i+=2;

        }
        i=1;
        while(i<s.size())
        {
            if(s[i]=='1')
            c++;
            i+=2;
        }
   }
   cout<<c<<endl;
   }

   
}
