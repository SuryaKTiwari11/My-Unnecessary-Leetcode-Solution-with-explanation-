#include <bits/stdc++.h>
#include <iostream>
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        /*we will create a hashmap in which the key is string
        and the values are vector , what will do is that we will sort the given
        strs = ["eat","tea","tan","ate","nat","bat"]
        eat becomes aet and use this a key n add the current word which is
        stored in temp as its value; there wont be a new value for tea or others because
        its a hashmap
        {
        "aet": ["eat", "tea", "ate"],
        "ant": ["tan", "nat"],
        "abt": ["bat"]
        }

        */
        unordered_map<string, vector<string>> map;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            map[strs[i]].push_back(temp);
        }
        /* now that we have to return it into a string of string (vector)
        push all the values of the map in the it
        */
        vector<vector<string>> result;
        for (auto itr : map)
        {
            result.push_back(itr.second);
        }
        return result;
    }
};
using namespace std;
int main()
{
    return 0;
}