#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
using namespace std;

vector<char> compress(vector<char>& chars)
{
    //plan:
    //first of all detect unique char
    //then go further until different char
    //count the prev ones, 
    //delete the prev ones and replace with count+unique char
    
    for(auto& ch : chars)
        cout << ch << " ";
    cout << endl;
    
    int read = 0;
    int write = 0;
    int count;
    char prev = '\0';
    
    while(read<chars.size())
    {
       if(chars[read] != prev || read == chars.size()-1)
       {
           if(read == 0)
           {
               prev = chars[read];
               count = 1;
           }
           else
           {
               if(read == chars.size()-1)
               {
                   count++;
                   read++;
               }
               chars[write] = prev;
               chars[write+1] = count+'0';
               int len = read - (write+2);
               chars.erase(chars.begin() + (write+2),chars.begin() + read);
               read-=len;
               write = read;
               prev = chars[read];
               write = read;
               count = 1;
           }
       }
       else
       {
           count++;
       }
       read++;
    }

   return chars; 
}

int main()
{
    while(true)
    {
        string str;
        cout << "Enter string to compress: " << endl;
        cin >> str;
        vector<char> vec(str.begin(), str.end());
        vector<char> retVec= compress(vec);
        string compressed(retVec.begin(), retVec.end());
        cout << compressed << endl;
    }
}
