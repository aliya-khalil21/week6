# include <iostream>
# include <cmath>
using namespace std;

float volleyball(int holidays,int weekend,string year,float tplay);
float  calculation(int holidays,int weekend);
main()
{
int holidays;
int weekend;
int totalweekend;
string year;
cout <<"enter number of holidays";
cin >> holidays;
cout << "enter number of weekend";
cin >> weekend;
cout <<"enter type of year";
cin >>year;
float tplay=calculation( holidays, weekend);
cout <<tplay<<endl;
float tplay1=volleyball( holidays, weekend, year,tplay);
cout <<tplay1<<endl;

}
float  calculation(int holidays,int weekend)
{
float pholiday=(holidays*2)/3;

float rweekend=48-weekend;

float psofia=(rweekend*3)/4;

float tplay=pholiday+psofia;
tplay=round(tplay);
return tplay;


}
float volleyball(int holidays,int weekend,string year,float tplay)
{
 float p;
 
 if(year=="normal")
 {  
    
    p=tplay;
    
 }
 else if (year=="leap")
 { 

 p=(tplay*15)/100;
 
 }

 cout <<p<<endl;
 
 return p;
}
