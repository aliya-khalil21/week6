# include <iostream>
using namespace std;
int isgreater(int num1,int num2,int num3);
main()
{
      int integer;   
    int num1;
    int num2;
    int num3;
    cout <<"enter num1";
    cin >>num1;
    cout <<"enter num2";
    cin >>num2;
    cout <<"enter num3";
    cin >>num3;
   graetest=isgreater(num1,num2,num3);
   cout <<graetest;


}
isgreater(int num1,int num2,int num3)
{ 
    int greatest
    if (num3>num2 && num3>num1)
{
    greatest=num3;
}    
 if (num2>num3 && num2>num1)
{
    greatest=num2;
}    
 if (num1>num2 && num1>num3)
{
    greatest=num1;
}  
else
{greatest=num1;
}  
return graetest;
}