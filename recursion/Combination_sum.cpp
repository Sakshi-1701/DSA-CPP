//LEETCODE QUES
//https://leetcode.com/problems/combination-sum/description/

class Solution {

public:
  void findAllCombinations(int index, int target, vector<int>&arr, vector<vector<int>>&result, vector<int>&dataStr){
      //base case
      if(index==arr.size()){
          if(target==0)
          result.push_back(dataStr);
          return;
      }
      //rec case
      if(arr[index]<=target){
          dataStr.push_back(arr[index]);
          findAllCombinations(index,target-arr[index],arr,result,dataStr);
          dataStr.pop_back();
      }
      findAllCombinations(index+1, target, arr, result,dataStr);
  }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int>dataStr;
        findAllCombinations(0,target,candidates,result,dataStr);
        return result;
    }
};
