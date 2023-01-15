# include <iostream>
using namespace std;
float checkcost(string product,string city,int number);
main()
{
string product;
string city;
int number;
cout <<"enter product";
cin >>product;
cout <<"'enter city";
cin >>city;
cout <<"enter number of product";
cin >>number;
float price;
price= checkcost( product, city,number);
cout <<price;

}
float checkcost(string product,string city,int number)
{
    float price;
 if(city=="sofia" )
 {
    if(product=="coffee")
    {
     price=0.50*number;
    }
   else if(product=="water")
    {
     price=0.80*number;
    } 
 else if(product=="beer")
    {
     price=1.20*number;
    }
 else if(product=="sweets")
    {
     price=1.45*number;
    }
 else if(product=="peanuts")
    {
     price=1.60*number;
    } 
  
  }
 if(city=="plovdiv" )
 {
     if(product=="coffee")
    {
     price=0.40*number;
    }
   else if(product=="water")
    {
     price=0.70*number;
    } 
   else if(product=="beer")
    {
    price=1.15*number;
    } 
    else if(product=="sweets")
    {
    price=1.30*number;
    } 
    else if(product=="peanuts")
    {
     price=1.50*number;
    } 
   
 }
    
 if(city=="varna" )
 {
     if(product=="coffee")
    {
     price=0.45*number;
    }
   else if(product=="water")
    {
     price=0.70*number;
    } 
    else if(product=="beer")
    {
     price=1.10*number;
    } 
    else if(product=="sweets")
    {
     price=1.35*number;
    }
 else if(product=="peanuts")
    {
     price=1.55*number;
    } 
 }
 
  return price;
}





