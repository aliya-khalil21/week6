# include<iostream>
using namespace std;
main()
{
string temperature;
string humidity;
cout <<"enter temperature";
cin >>temperature;
cout <<"humidty";
cin >>humidity;
if (temperature=="warm" && humidity=="dry" )
{
    cout <<"play tennis";  
}
if (temperature=="warm" && humidity=="humid")
{
      cout <<" swim";
}
if (temperature=="cold" && humidity=="dry")
{
      cout <<"play basketball";
}
if (temperature=="cold" && humidity=="humid")
{
      cout <<"watch tv";
}


}