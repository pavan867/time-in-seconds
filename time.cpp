#include <iostream>

using namespace std;
class time
{
    public:
        int Hours;
        int minutes;
        int seconds,sum;

        public:


           void enterdetails()
           {


               cout<<"The time is:\n";
               cout<<"Enter the Hours:";
               cin>>Hours;
               cout<<"Enter the minutes:";
               cin>>minutes;
               cout<<"Enter the seconds:";
               cin>>seconds;


           }

        void displayresult()
        {
           cout<<"the time format is:"<<Hours<<":"<<minutes<<":"<<seconds;


        }
        void convertintoseconds()
        {
            sum=Hours*3600+minutes*60+seconds*1;
            cout<<"\nthe time in seconds is :"<<sum;

        }

};




int main()
{

    time t;
    t.enterdetails();


    t.displayresult();
    t.convertintoseconds();

    return 0;
}
