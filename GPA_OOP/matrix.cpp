#include <iostream>
using namespace std;

    // Write C++ code to multplay 3X3 matrix
    int main()
    {
        int A[3][3],B[3][3],pro[3][3];
        int sum=0;

        cout<<"Enter Values in 3X3 matrix\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<"Enter Values in 3X3 matrix\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>B[i][j];
            }
        }

        cout<<"Matrix A\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Matrix B\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<B[i][j]<<" ";
            }
            cout<<endl;
        }

        //Product of Matrix A & Matrix B
        cout<<"Product of Matrix A & Matrix B\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                    {
                         sum = sum + A[i][k] * B[k][j];
                         pro[i][j] =sum;
                    }
                    sum=0;
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<pro[i][j]<<" ";
            }
            cout<<endl;
        }
           return 0;
    }