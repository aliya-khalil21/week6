# include <iostream>
using namespace std;
float company(int minutes,string time,string service);
main()
{
int minutes;
string service;
float overtime;
string time;
cout<<"enter minutes";
cin >>minutes;
cout <<"enter service";
cin >>service;
cout <<"enter time";
cin >>time;
float price=company( minutes, time, service);
cout <<price;


}
float company(int minutes,string time,string service)
{ float price;
float overtime;

 if (service=="regular")
 {
    if (minutes>50)
    {
        overtime=minutes-50;
        price=(overtime*0.20)+10;
        
    }
   else 
  {
    price=10;
  }

 }

else if (service=="premium" && time == "day" )
 {  
    if(minutes>75)
    {
    overtime=minutes-75;
    price=(overtime*0.10)+25.00;
    }
 else 
{
    price=25.00;
 }
 }
else   if (service =="premium"&& time=="night")
  { 
    if (minutes>100)
    {
        overtime=minutes-100;
        price=(overtime*0.05)+25.00;
    }
    else
    {
        price=25.00;
    }
  }
  return price;
 }
 
 
 



