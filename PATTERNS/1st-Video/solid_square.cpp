/***********************************************
     col1 col2 col3 col4 col5
row0  *    *    *    *    *
row1  *    *    *    *    *
row2  *    *    *    *    *

*********************************************/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;//number of rows...
    for (int row = 0; row < n; row++)
    {
         for (int col = 0; col < 2*n-1; col++)
         {
               cout<<"*"<<" ";
         }
         cout<<endl;
    }
    return 0;
}