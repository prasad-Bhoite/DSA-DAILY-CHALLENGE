//Find unique element in the array...v.imp
#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> arr)
    {
        int ans = 0;
        //XOR All elements with answer...    
        for (int i = 0; i < arr.size(); i++)
        {
            ans = ans^arr[i]; 
        }
        return ans;
        
    }
int main()
{
    int n;
    int ans=0;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    
    vector<int> arr(n);

    cout<<"Enter "<<n<<" Element:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int uniqueElement = find(arr);
  
    cout<<"Unique element = "<<uniqueElement<<endl;
    
    return 0;
}
