#include<iostream>
#include<algorithm>
using namespace std;
//New Length Logic 
int removeduplicate(int array[],int &size){
  int i = 0;
   for(int j = 1;j<size;j++){
    if(array[i]!=array[j]){
        i++;
    }
    array[i] = array[j];
   }
   size = i+1;
   return i+1;
}
int main()
{
     int array [] = {20,30,52,20,30,45,10};
     int size = sizeof(array)/sizeof(array[0]);
    sort(array,array+size);
    removeduplicate(array,size);
    for(int i = 0;i<size;i++){
       cout<<array[i]<<" ";
    }
    return 0;
}