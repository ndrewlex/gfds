#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row;
    col = row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col-(i+1);j++)
        {
            cout<<" ";
        }

        for(int c=0;c<i+1;c++)
        {
            cout<<"#";
        }

        cout<<"  ";

        for(int c=0;c<i+1;c++)
        {
            cout<<"#";
        }

        cout<<endl;
    }
}
