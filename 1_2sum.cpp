#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // first we declared our hashmap
        /*
         what i did is that: first i add all the values inside the hashmap and
         then procded to look for it in the array in the case of 3 , 2 ,4 where
         the target value is 6 i was getting the value : mtlb mera ans (ans
         [0,1,2]){ i need a way to remove this 0; so what the plan is that
             rather than adding all the values b4 to both these task
         simulataneously

         }
        */
        int compliment;
        for (int i = 0; i < nums.size(); i++) {
            compliment = target - nums[i];
            if (m.count(compliment)) // m.counts give 1 if exist and 0 if it
                                     // doesnt exist in the hashmap (the key left hand side wala)
            {
                // we will return the ans as a vector (for obvi reason)
                return {m[compliment], i};

                // m[compliment] is equal or contains the place where the
                // element is located in the hashmap and i returns the current i
            }
            // if this "if condition" doesnt execute we simply add the current
            // element n value in the hashmap
            m[nums[i]] = i;
        }
        return {}; //if it doesnt execute;
    }
};

/*
324=array target = 6;
since first iteration 
its not the hashmap 
so 
hashmap {3,0}
hashmap {4,1}

dry run kar surya samaj ajayega
*/
 int main (){
    return 0;
 }