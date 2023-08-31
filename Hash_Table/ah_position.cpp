//
// Created by AAA on 2023/8/31.
//

#include "ah_position.h"
bool isAnagram(std::string s, std::string t)
{
    int res[26] = {0};
    for(int i = 0; i < s.size() ;i++)
    {
        res[s[i] - 'a']++;
    }

    for(int i = 0; i < t.size() ;i++)
    {
        res[t[i] - 'a']--;
    }

    for(int i = 0; i < 26 ;i++)
    {
        if(res[i]!=0)
            return false;
    }
    return true;
    return true;
}
