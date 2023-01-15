# include <iostream>
using namespace std;
string checkspeed(float speed );
main()
{
float speed;
cout <<"enter speed";
cin >> speed;
string s;
s=checkspeed(speed);
cout <<s;

}
string checkspeed(float speed)
{
    string s;
if (speed<=10)
{
  s="slow";
}
else if (speed>10 && speed<=50)
{
    s="average";
}
else if (speed>50 && speed<=150)
{
    s= "fast";
}
else if (speed>150 && speed<=1000)
{
    s= "etremelyfast";
}
return s;
}
