#include<bits/stdc++.h>
using namespace std;

void getPermutations(vector<string> &arr,int idx,vector<vector<string>> &ans){
    if(idx==arr.size()){
        ans.push_back({arr});
        return;
    }
    for(int i=idx;i<arr.size();i++){
        swap(arr[idx],arr[i]);
        getPermutations(arr,idx+1,ans);
        swap(arr[idx],arr[i]);
    }
}
    vector<vector<string>> permutate(vector<string> &nums){
        vector<vector<string>> ans;
        getPermutations(nums,0,ans);
        return ans;
    }
    int main(){
        vector<string> arr={"a","b","c"};
        vector<vector<string>>ans=permutate(arr);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }