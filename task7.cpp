# include <iostream>
using namespace std;
main()
{
int hour;
int min;
int examstartingth;
int studentarrivalth;
int examstartingtm;
int studentarrivaltm;
cout <<"enter exam starting time hour ";
cin >>examstartingth;
cout <<"enter student arrival time hour";
cin >>studentarrivalth;
cout <<"enter exam starting time minutes ";
cin >>examstartingtm;
cout <<"enter student arrival time minutes ";
cin >>studentarrivaltm;
int time1=examstartingth*60;
int time2=time1+examstartingtm;
int time3=studentarrivalth*60;
int time4=time3+studentarrivaltm;
int difference=time4-time2;
int difference2=time2-time4;
if(time4>time2)
{
 hour=difference/60;
 min=difference%60;
 cout <<"you are late"<<endl;
 cout<<hour<<":"<<min<<"minutes after start"<<endl;
}
if( time2>time4 || time2==time4 && difference2<=30)
{
 hour=difference/60;
 min=difference%60;
 cout <<"ontime"<<endl;
 cout <<min<<"minutes before start"<<endl;
}
if(difference2>30 && time2>time4   )
{
 hour=difference/60;
 min=difference%60;
 cout <<"early"<<endl;
 cout<<hour<<":"<<min<<endl;
}
}