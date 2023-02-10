//Numeric Half Pyramid...
//row0-> 1
//row1-> 1 2
//row2-> 1 2 3 
//row3-> 1 2 3 4 
//row4-> 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+1;
        }
        cout<<endl;
    }
    return 0;
}
