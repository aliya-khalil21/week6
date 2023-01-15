# include <iostream>
using namespace std;
string classt(float per);
float calculation(int num1,int num2,int num3,int num4,int num5);
main()
{
 int num1,num2,num3,num4,num5;
 string name;
 cout <<"enter num1 ";
 cin >>num1;
 cout <<"enter num2 ";
 cin >>num2;
 cout <<"enter num3 ";
 cin >>num3;
 cout <<"enter num4 ";
 cin >>num4;
 cout <<"enter num5 ";
 cin >>num5;
 cout <<"enter name ";
 cin >>name;
 float per= calculation( num1, num2, num3, num4, num5);
 string grade1= classt(per);
 cout <<grade1;
 }
 float calculation(int num1,int num2,int num3,int num4,int num5)
 {
 float per;
 int num= num1+num2+num3+num4+num5;
 per = (num*100)/500; 
 return per;
 }
 string classt(float per)
 { 
   string grade;
 
    if (per>=90 && per<=100)
   {
    grade="Aplus";
   }
    else if (per>=80 && per<=90)
   {
     grade="A";
   }
   else  if (per>=70 && per<=80)
   {
    grade="Bplus";
   }
   else if (per>=60 && per<=70)
   {
    grade="B";
   }
    else if (per>=50 && per<=60)
   {
   grade="C";
   }
    else if (per>=40 && per<=50)
   {
   grade="D";
   }
    else if (per<=30 && per<=40)
   {
   grade="E";
   }


   return grade;
 }
   

 