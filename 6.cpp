# include <iostream>
using namespace std;
float lowestprice(int distance,string time);
main()
{
int distance;
string time;
cout <<"enter distance";
cin >>distance;
cout <<"enter time";
cin >>time;
float price;
price= lowestprice(distance, time);
cout <<price;

}
float lowestprice(int distance,string time)
{
float price;
if ( distance < 20 && time=="day")
{
    price=0.70+(0.79*distance);

}
else if  ( distance<20 && time=="night")
{
    price=0.70+(0.90*distance);
}
if ( distance >= 20 && distance<100)
{
    price=0.09*distance;
}
if(distance>=100)
{
    price=distance*0.06;
} 
return price;
}











