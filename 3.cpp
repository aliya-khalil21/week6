# include <iostream>
using namespace std;
string checktitle(float age,char gender);
main()
{
    char gender;
float age;
cout <<"enter age";
cin >>age;
cout <<"enter gender ";
cin >>gender;
string title;
title=checktitle( age, gender);
cout <<title;

}
string checktitle(float age,char gender)
{
    string title;
if (age >=16 && gender == 'm')
{
  title="Mr.";  
}
else if (age<16 && gender=='m')
{
    title="master";
}
else if (age>=16 && gender=='f')
{ 
    title="Ms";


}
else if (age<16 && gender== 'f')
{
    title="Miss";
}
return title;
}