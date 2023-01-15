# include <iostream>
using namespace std;
float worldcup(float budget,string category,float number);
main()
{
float price;
float budget;
float number;
string category;
cout <<"enter budget";
cin >>budget;
cout <<"enter number of peoplr in group";
cin >>number;
cout <<"enter category";
cin >>category;
float r4= worldcup(budget, category, number);
cout <<r4;

 if(r4>0)
 {
    cout<<"yes!you have r4 left"<<r4;
 }
 if (r4<0)
 {
    cout <<"not enough money!you need "<<-r4<<"QR";
 }
}
 float worldcup(float budget,string category,float number)
 {

    float r1;
    float r2;
    float r3;
    float r4;
 if( number>=1 && number<=4)
 {
      if(category=="vip")
 {
 r1= (budget*0.75);
 r2=budget-r1;
 r3=(number*499.99);
 r4=r2-r3;
 
 }
 else if (category=="normal")
 {
 r1=(0.75*budget);
 r2=budget-r1;
 r3=(number*249.99);
 r4=r2-r3;
 } 
 }   
 if( number>=5 && number<=9)
 {
      if(category=="vip")
 {
 r1=(0.60*budget);
 r2=budget-r1;
 r3=(number*499.99);
 r4=r2-r3;

 }
 else if (category=="normal")
 {
 r1=(0.60*budget);
 r2=budget-r1;
 r3=(number*249.99);
 r4=r2-r3;

 } 
 } 
 if( number>=10 && number<=24)
 {
      if(category=="vip")
 {
 r1=(0.5*budget);
 r2=budget-r1;
 r3=(number*499.99);
 r4=r2-r3;
 
 }
 else if (category=="normal")
 {
 r1=(0.5*budget);
 r2=budget-r1;
 r3=(number*249.99);
 r4=r2-r3;
 
 }
 }    
 if( number>=25 && number<=49)
 {
      if(category=="vip")
 {
 r1=(0.4*budget);
 r2=budget-r1;
 r3=(number*499.99);
 r4=r2-r3;

 
 }
 else if (category=="normal")
 {
 r1=(0.4*budget);
 r2=budget-r1;
 r3=(number*249.99);
 r4=r2-r3;

 
 }    
 }
 if( number>=50)
 {
      if(category=="vip")
 {
 r1= (0.25*budget);
 r2=budget-r1;
 r3=(number*499.99);
 r4=r2-r3;
 
 }
 else if (category=="normal")
 {
 r1=(0.25*budget);
 r2=budget-r1;
 r3=(number*249.99);
 r4=r2-r3;
 
 }
 }      
 return r4;


}
