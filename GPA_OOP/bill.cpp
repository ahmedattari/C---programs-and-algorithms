 #include <iostream>

using namespace std;

int main()
 { int rooms,vip=10000,fancy=9000;
    char bill;
    int choice,days,total1;
    char AC,again;
    int c=1000;
    int single= 5000;
    int doubl=7000;
    int suit=8000;
    int time=24;
    int service=300;

    do
    {
    cout<<"Which kind of Room did the guest stayed in?  "<<endl;
    cout<<endl;
               cout<<" 1.Room with attach bath "<<endl;
               cout<<endl;
               cout<<" 2.Sea Facing "<<endl;
               cout<<endl;
               cout<<" 3.Ground "<<endl;
               cout<<endl;
               cout<<" 4.vip protocol "<<endl;
               cout<<endl;
               cout<<" 5.fancy decoration "<<endl;
               cout<<endl;

    cout<<"Select 1,2,3,4 or 5 . "<<endl;
    cout<<endl;
    cout<<"Enter Your CHoice Here_: ";
    cin>>choice;
    cout<<"__________________________________"<<endl;
    switch(choice)
    {
    case 1:
         cout<<"You have Selected room with attach bath. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;

              cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+single+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
          cout<<endl;
          cout<<"______________________________"<<endl;
}
         else if (AC == 'N' || AC == 'n')
 {
         total1=(single+time+service) * days;
         cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
      cout<<endl;
       cout<<"_______________________________"<<endl;
}
         break;
         case 2:
         cout<<"You Have Selected room with sea facing."<<endl;
          cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
        cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;

        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+doubl+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
cout<<endl;
 cout<<"__________________________________"<<endl;
}
         else if (AC == 'N' || AC == 'n')
 {
         total1=(doubl+time+service) * days;
         cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
        cout<<endl;
         cout<<"_______________________________________"<<endl;
}
         break;
         case 3:
         cout<<"You Have Selected ground floor room. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+suit+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
          cout<<endl;
           cout<<"_______________________________________"<<endl;
}
         else if (AC == 'N' || AC == 'n')
 {
         total1=(suit+time+service) * days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;

        cout<<endl;
       cout<<"__________________________________________"<<endl;
}
                  break;
                  case 4:
         cout<<"You Have Selected VIP protocol room. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+vip+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
          cout<<endl;
           cout<<"_______________________________________"<<endl;
           break;

           case 5:
         cout<<"You Have Selected Fancy decoration room. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl;
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+fancy+time+service)*days;
          cout<<"Your Total Total bill + service tax = ("<<total1<<" Rs.)"<<endl;
          cout<<endl;
           cout<<"_______________________________________"<<endl;
           break;
                 default:
                 cout<<"you have enter an invalid Choice "<<endl;
                 cout<<endl;
                 }
                 cout<<"Do you want to checkout for another room? (Y/N): ";
                 cin>>again;
                  cout<<"___________________________________"<<endl;
                 cout<<endl;
    }
      }} while(again == 'y' || again == 'Y');


 }