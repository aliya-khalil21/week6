# include <iostream>
using namespace std;
char grade(int marks);
main()
{
int marks;
cout <<"enter marks";
cin >>marks;
char result;
result=grade(marks);
cout <<result;



}
char grade(int marks)
{
    int result;
    if (marks<50 && marks>=0)
    {
    result='f';
    }
  else if (marks>=51 && marks<=60 )
    {
        result='E';
 
   }
else if (marks >=61 && marks <=70)
    {
        result ='D';
    }
    else if (marks >=71 && marks <=80)
    {
        result ='C';
    }
    else if (marks >=81 && marks <=90)
    {
        result ='B';        

    }
    else if (marks <=91 && marks<=100 )
 {  
    result ='A';
 }
 return result;

 }












