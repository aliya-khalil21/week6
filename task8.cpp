# include <iostream>
using namespace std;
main()
{
int x;
int y;
int h;
cout <<" enter x";
cin >>x;
cout <<"enter y";
cin >>y;
cout <<"'enter h";
cin >>h;
int inside;
int border;
int outside;
if ((x>=0*h && x>=3*h )&&(y==0*h || y==1*h))
{
    cout <<"border"<<border;
}
if ((x==0*h || x==1*h || x==2*h ||x==3*h)&& (y>=0*h &&y<=1*h))
{
    cout <<"border"<<border;
}
if ((x>0*h && x<1*h )||( x>1*h && x<2*h) ||( x>2*h && x<3*h  )&&(y>0*h && y<1*h) ) 
{
    cout <<"inside"<<inside;
} 
if ((x>=1*h && x<=2*h)&&(y==1*h||y==2*h||y==h*3 || y==h*4))
 {
    cout <<"border"<<border;
  {
    cout <<"border"<<border;
  }
  if (( x>1*h && x<2*h)||(y>2*h && y<3*h)||(y>3*h &&y<4*h))
  {
    cout <<"inside"<<inside;
  }
else
{
  cout<<"outside"<<outside;
}
}
 



















