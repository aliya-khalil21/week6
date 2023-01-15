# include <iostream>
using namespace std;
float classt(int num,string name);
float calculation(int num1,int num2,int num3,int num4,int num5);
main()
{
 int num1,num2,num3,num4,num5;
 string name;
 cout <<"enter num1";
 cin >>num1;
 cout <<"enter num2";
 cin >>num2;
 cout <<"enter num3";
 cin >>num3;
 cout <<"enter num4";
 cin >>num4;
 cout <<"enter num5";
 cin >>num5;
 cout <<"enter name";
 cin >>name;
 float per= calculation( num1, num2, num3, num4, num5);
 cout <<per;
 float grade= classt(num, name);
 cout <<grade;

 }
 float calculation(int num1,int num2,int num3,int num4,int num5)
 {
 float per;
  float num=num1+num2+num3+num4+num5;
 per=num/500*100; 
 return per;
 }
float classt(int num,string name)
 { float per;
 float grade;
 float Aplus;
 float A;
 float Bplus;
 float B;
 float C;
    if (per<90 && per>=100)
   {
    grade=Aplus;
   }
    if (per<80 && per>=90)
   {
    grade=A;
   }
    if (per<70 && per>=80)
   {
    grade=Bplus;
   }
    if (per<60 && per>=70)
   {
  grade=B;
   }
    if (per<50 && per>=60)
   {
   grade=C;
   }
   return grade;
   

}

 