/*
   * * * * *
   *       *
   * * * * *
*/

#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;

    for(int row=0;row<n;row++)
    {
        if(row==0 || row==n-1)
            {
                for(int col=0;col<2*n-1;col++)
                {
                    cout<<"*";
                }
            }

            //  else(row==2)
            else
            {
                cout<<"*";
                 for (int i = 0; i < 3; i++)
                 {
                     cout<<"-";
                 }
                 cout<<"*";
            }
        cout<<endl;
    }
}