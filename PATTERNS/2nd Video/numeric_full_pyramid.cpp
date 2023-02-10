//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5
//Numeric Full pyramid

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
      {
          //for spaces...
        for(int col=0;col<n-row-1;col++)
         {
             cout<<"-";
         }

        for(int col=0;col<row+1;col++)
         {
            cout<<row+1;
         }
         cout<<endl;
         
      }
}