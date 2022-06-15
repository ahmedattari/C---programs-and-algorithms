#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int min = 1000;
    int acc;
    char type;
    int CB; // variable for current balance
    int len;
    int i;
    int size;

    cout<< "Enter 5 digits account number"<<endl;
    cin>>acc;

    if ((size = trunc(log10(acc)) + 1) == 5)
    {
        cout<<"Enter account type S for Saving account or C for Current account:  ";
        cin>>type;

        cout<< "Enter current balance amount"<<endl;
        cin>>CB;

        if(CB>0 || CB <0)
        {
            switch(type)
        {
        case 'S':

            if (CB>=min)
            {
                i = (CB/100)*4;
                cout<<"Your interest amount is 4% of Current Balance: "<<i<<endl;
                cout<<"Your Current Balance is: "<<CB+i;
            }
            else
            {
                cout<<"You have to pay $10 for service charge";
            }

            break;
        case 's':

            if (CB>=min)
            {
                i = (CB/100)*4;
                cout<<"Your interest amount is 4% of Current Balance: "<<i<<endl;
                cout<<"Your Current Balance is: "<<CB+i;
            }
            else
            {
                cout<<"You have to pay $10 for service charge";
            }

            break;

        case 'C':
            if (CB>=min)
            {
                if(CB>=5000)
                {
                    i = (CB/100)*5;
                cout<<"Your interest amount is 5% of Current Balance: "<<i<<endl;
                cout<<"Your Current Balance is: "<<CB+i;
                }

                else
                {
                    i = (CB/100)*3;
                cout<<"Your interest amount is 3% of Current Balance: "<<i<<endl;
                cout<<"Your Current Balance is: "<<CB+i;
                }
            }
            else
            {
                cout<<"You have to pay $25 for service charge";
            }

            break;

         case 'c':
            if (CB>=min)
            {
                if(CB>=5000)
                {
                    i = (CB/100)*5;
                cout<<"Your interest amount is 5% of Current Balance: "<<i<<endl;
                cout<<"Your Current Balance is: "<<CB+i;
                }

                else
                {
                    i = (CB/100)*3;
                cout<<"Your interest amount is 3% of Current Balance: "<<i<<endl;
                cout<<"Your Current Balance is: "<<CB+i;
                }
            }
            else
            {
                cout<<"You have to pay $25 for service charge";
            }
            break;

         default:
             cout<<"INVALID ACCOUNT TYPE";
        }
        }
        else
        {
            cout<<"INVALID ACCOUNT BALANCE!!!";
        }
    }
    else
    {
        cout<<"INVALID ACCOUNT NUMBER!!!";
    }

    return 0;
}