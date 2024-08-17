#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
int rotetion(vector<int>&arr,int rotetion){
 reverse(arr.begin(),arr.end());
 reverse(arr.begin(),arr.begin()+rotetion);
 reverse(arr.begin()+rotetion,arr.end());
}
void rotetionwithSpace(vector<int>&arr,int rotetion){
    int size = arr.size();
    int k = rotetion%size;

    vector<int>newArray(size);
    for(int i = 0;i<size;i++){
        newArray[(i+k)%size] = arr[i];
    }
arr= newArray;
}

int main()
{   vector<int> array= {1,2,3,4,5,6,7}; 
    int k = 3;
    rotetionwithSpace(array,k);
 for(int j : array){
    cout<<j<<" ";
 }
    return 0;
}