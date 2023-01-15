# include <iostream>
using namespace std;
float shop(float price,string fruit,string day);
main()
{
float price;
string fruit;
string day;
cout <<" enter price ";
cin >>price;
cout <<" enter fruit ";
cin >>fruit;
cout <<" enter day ";
cin >>day;
float result1;
result1=shop( price, fruit, day);
cout <<result1;
}
float shop(float price,string fruit,string day)
{
    float result;
 if( day=="monday" || day=="tuesday" || day=="wednesday" || day=="fridayday"  )
  {
   if (fruit=="banana")
  {
    result=2.50* price;
    

  }
  else if (fruit=="apple")
  {
    result=1.20*price;
    
  }
   else if (fruit=="orange")
  {
    result=0.85*price;
  }
  else if (fruit=="grapefruit")
  {
    result=1.45*price;
  }
  else if (fruit=="kiwi")
  {
   result=2.70*price;
  }
   else if (fruit=="pineapple")
  {
    result=5.50*price;
  }
   else if (fruit=="grapes")
  {
    result=3.85*price;
  }
  else 
  {
   result=0.0;
  }

  }

  
  if( day=="saturday" || day=="sunday"  )
  {
   if (fruit=="banana")
  {
    result=2.70*price;
  }
  else if (fruit=="apple")
  {
    result=1.25*price;
  }
   else if (fruit=="orange")
  {
    result=0.90*price;
  }
  else if (fruit=="grapefruit")
  {
    result=1.60*price;
  }
  else if (fruit=="kiwi")
  {
    result=3.00*price;
  }
   else if (fruit=="pineapple")
  {
    result=5.60*price;
  }
   else if (fruit=="grapes")
  {
    result=4.20*price;
  }
  else 
  {

    result=0.0;
  }

  }
  
 return result;



}