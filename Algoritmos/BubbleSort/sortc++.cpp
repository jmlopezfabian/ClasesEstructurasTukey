#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums = {4,3,2,1};

    nums.push_back(5);

    cout<<*nums.begin()<<endl;
    
    for(int i=0; i<4; i++){
        cout<<nums[i]<<" ";
    }

    sort(nums.begin(), nums.end()); //Merge Sort O(nlogn)

    cout<<endl;
    for(int i=0; i<4; i++){
        cout<<nums[i]<<" ";
    }
}