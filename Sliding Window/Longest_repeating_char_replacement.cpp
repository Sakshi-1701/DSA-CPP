//https://leetcode.com/problems/longest-repeating-character-replacement/description/

class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m;  //alphabet and their count
        vector<int>count;
        int maxFreq=0,result=0;
        int left=0,right;
        int length;
        


        for(int right=0;right<s.size();right++){
            m[s[right]]++; //storing count of each alphabet
            maxFreq=max(maxFreq,m[s[right]]);
            length=right-left+1; 

            if(length-maxFreq>k){
                //reduce the count of the alphabet since we no longer consider it
                m[s[left]]--; 
                left++;  //slide the window
                continue;
            }
            result=max(result, length);
        }
        return result;
    }
};
