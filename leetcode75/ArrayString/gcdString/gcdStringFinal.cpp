class Solution {
public:

    string gcdOfStrings(string str1, string str2) {

        if(str1 + str2 != str2 + str1)
        {
            return "";
        }else
        {
            int s1 = str1.size();
            int s2 = str2.size();

            string& smaller = (s1<s2)? str1 : str2;
            string& larger = (s1>s2)? str1 : str2;
            string temp = smaller;

            for(int i = smaller.length(); i>0; i--)
            {
                if(s1 % i == 0 && s2 % i == 0)
                {
                    return temp;
                }
                else 
                {
                    temp.pop_back();
                }
            }

            return "";
        }

    }
};

