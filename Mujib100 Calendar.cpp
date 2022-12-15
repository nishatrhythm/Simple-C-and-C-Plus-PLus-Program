#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;
int days[]= {31,28,31,30,31,30,31,31,30,31,30,31};
int mujib_days[]= {31,30,31,30,31,31,30,31,30,31,31,28};
string month_name[]= {"Shadhinota","Shopoth","Betarjuddho","Juddho","Shok","Kousholjuddho","Akash_juddho","Jail-hotta","Bijoy","Fire-asha","Nobojatra","Vasha"},buffer;


int main()
{

    int month,day,cnv_month=0,mujib_day=0,total_days=0;


    cout<<"Enter Gregorian month No (Enter 1 for JAN, 2 for FEB and so on... ): ";
    cin>>month;
    if(!(month<=12 && month>0))
    {
        cout<<"INVALID MONTH"<<endl;
        exit(0);
    }


    cout<<"Enter Gregorian date: ";
    cin>>day;
    if(!(day>=0&&day<=days[month-1]))
    {
        cout<<"INVALID DATE"<<endl;
        exit(0);
    }


    for(int i=0; i<month-1; i++)
    {
        total_days+=days[i];
    }
    total_days+=day;
    total_days-=75;


    if(total_days<=0)
        total_days+=365;


    int i=0;
    while(total_days>mujib_days[i])
    {
        total_days-=mujib_days[i];
        cnv_month++;
        i++;
    }


    cout<<"The converted date is: ";
    cout<<month_name[cnv_month]<<" "<<total_days<<endl;
    cout<<endl<<endl<<"Press any key and then enter to EXIT"<<endl;
    cin>>buffer;


    getchar();
    return 0;
}
