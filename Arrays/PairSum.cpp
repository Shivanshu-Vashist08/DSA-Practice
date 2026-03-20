// Use 2 Pointer Approatch
// Set start pointer on 0th index and Set end Pointer on last index.
// Then compare st,end Sum to Target Value :
// -> if sum<target (Move start pointer becuase we need more high sum and end pointer cant move on high value )
// -> if sum>target (Reduce end pointer becuase we need smallest sum and end pointer is making that sum high so we have to reduce end pointer )
// -> And Last condition is that when we get target by their sum So now push them into ans & Return it.
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>&nums,int target){
int n=nums.size();
vector<int>ans;
int st=0;
int end=n-1;
while(st<end){
    if(nums[st]+nums[end]<target){
        st++;
    }
    else if(nums[st]+nums[end]>target){
        end--;
    }
    else{
        ans.push_back(st);
        ans.push_back(end);
        return ans;
    }
}
return ans;
}
int main(){
vector<int>vec={1,2,3,4,5,6};
vector<int>ans=pairSum(vec,11);
cout<<ans[0]<<" "<<ans[1]<<endl;
return 0;
}
