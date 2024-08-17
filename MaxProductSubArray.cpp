#include <iostream>
#include<limits.h>
#include <vector>
using namespace std;
int findMaxPSubArray(vector<int>arr){
vector<int>MaxSubArray;
int sum = 1;
int result = INT_MIN;
for(int i = 0;i<arr.size();i++){
	for(int j =i;j<arr.size();j++){
	sum *= arr[j];	
	}
	MaxSubArray.push_back(sum);
	sum = 1;
}
for(int j = 0;j<MaxSubArray.size();j++){
	if(MaxSubArray[j]>result){
        result = MaxSubArray[j];
    }
}
cout<<result;
}

int main()
{
	vector<int> arr = {2,3,-2,4};
	findMaxPSubArray(arr);
	return 0;
}