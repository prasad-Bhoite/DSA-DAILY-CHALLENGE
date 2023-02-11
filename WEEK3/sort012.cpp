//Dutch national flag problem...
//sort012
#include<iostream>
#include<vector>
using namespace std;

// int sort012(vector<int> arr[]){
//     vector<int> ans;
//     int low=0;
//     int high=arr.size()-1;
// }

void printVector(vector<int> arr)
{
    //print the vector...
    for (auto value : arr)
    {
        cout<<value<<" ";
    }
}
int main()
{
    vector<int> arr = {2,1,0,1,2,0,1,0,1,2,0,1,0};
    int low=0;
    int mid=0;
    int end=arr.size()-1;

    while (mid<=end)
    {
        if(arr[mid]==0)
         {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
         }

        else if(arr[mid]==1)
         {
            mid++;
         }

         else if(arr[mid]==2)
         {
            swap(arr[mid],arr[end]);
            //mid++ karayche nahi...
            end--;
         }
    }
    
    printVector(arr);
    return 0;
}
