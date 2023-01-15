#include <iostream>
using namespace std;
float totalincome( int r,int c,string screen,float price);
main()
{
    
    int r;
    int c;
    float price;
    string screen;
    cout <<"enter screen";
    cin >>screen;
    cout << "enter rows";
    cin >>r;
    cout <<"enter coloum";
    cin >>c;
    cout <<"enter price in EUR";
    cin >>price;
float ticket;
ticket=totalincome( r, c, screen, price);
cout <<ticket;


}
float totalincome( int r,int c,string screen,float price)
{
    float ticket;
if (screen=="premiere" && price== 12.00)
{
    ticket=r*c*price;
}
if (screen=="normal" && price==7.50)
{
    ticket=r*c*price;
}
if ( screen=="discount" && price ==5.00)
{
    ticket =r*c*price;
}
return ticket;

}



