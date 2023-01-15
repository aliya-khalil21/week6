# include <iostream>
using namespace std;
int discout(string day, string month,int amount);
main()
{
    int amount;
string day;
string month;
cout <<"enter day";
cin >>day;
cout <<"enter month";
cin >>month;
cout <<"enter amount";
cin>> amount;
int dis;
dis=discout( day,  month, amount);
cout <<dis;


}
int discout(string day, string month,int amount)
{
int dis;
if (day=="sunday" && (month== "october" || month=="march" || month == "august"))
{
    dis=amount -(amount*10)/100;
}
if (day=="monday"( && month =="november" || month=="december"))
{
    dis=amount-(amount*5)/100;
}
else 
{
    dis=amount;
}
return dis;
}




