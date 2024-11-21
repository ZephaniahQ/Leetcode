#include<vector>
#include<string>
using namespace std;

class Solution {
public:

int compress(vector<char>& chars)
{
    int idx = 0;

    for(int i = 0; i<chars.size();i++)
    {
       char ch = chars[i]; 
        int count = 0;
       while(i < chars.size() && chars[i] == ch)
       {
           i++;
           count++;
       }

       if(count == 1)
           chars[idx++] = ch;
       else
       {
           chars[idx++] = ch;
           for(auto& c : to_string(count))
               chars[idx++] = c;
       }
       i--;
    }

    chars.resize(idx);
    return idx;
}
};
