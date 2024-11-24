#include<iostream>
#include<string>
#include<map>
using namespace std;

bool isSubSeq(string s, string t)
{
   if(s.size() == t.size())
   {
        if(s == t)
           return true;
        return false;
   }
   
   if(s.size() == 0)
       return true;

   for(int i =0; i<s.size() && t.size() != 0; i++)
   {
     if(s[i] != t[i])
         t.erase(i);
   }
   cout << t << endl;
   return true;
}

int main()
{
    while(true)
    {
        string s = "abc";
        string t = "abcde";

        cout << "Enter s: " << endl;
        cin >> s;
        cout << "Enter t: " << endl;
        cin >> t;

        cout << boolalpha << isSubSeq(s,t) << endl;
    }
}
