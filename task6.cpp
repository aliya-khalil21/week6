# include <iostream>
using namespace std;
float hs(float stay,float rent,string month);
float as(float stay,float rent,string month);
main()
{
float stay;
string month;
cout <<"enter stay ";
cin >>stay;
cout <<"enter month";
cin >>month;
float rent;
float studio = hs( stay, rent, month);
cout <<"studio"<<studio;
float apartment=as( stay, rent, month);
cout <<"apartment"<<apartment;

}

   
float hs(float stay,float rent,string month)
{
    float r;
    float dis;
 
    

     if( month=="may" || month =="october" )
      { 
     
       if (stay>7)
        {
        rent=stay*50.0;
        dis=rent*0.05;
        r=rent-dis;
        }
     
     if (stay>14)
       {
        rent=stay*50;
        dis=rent*0.30;
        r=rent-dis;
       }
     else if (stay>0)
       {
       rent=stay*50.0;
       r=rent;
       }
      }     
     
     if( month=="june" || month =="september" )
     { 
       if (stay>0)
      {
          rent=stay*75.20;
          r=rent;
      }
     

      if (stay>14)
      {
        rent=stay*75.20;
        dis=rent*0.20;
        r=rent-dis;
      }
      }
       if(month =="july" || month=="august")
     
      { 
      if (stay>0)
      {
        rent=stay*76.0;
        r=rent;
      }
     }return r;
}
 float as(float stay,float rent,string month)
{ 
 float r1;
 float dis;
     if( month=="may" || month =="october" )
     { 
     

      if (stay>10)
      {
        rent=stay*65.0;
        dis=rent*0.10;
        r1=rent-dis;
      }
      else if (stay>0)
   {
       rent=stay*50.0;
       r1=rent;
    }
   }     
     
      if( month=="june" || month =="september" )
     { 
       if (stay>0)
      {
          rent=stay*68.70;
          r1=rent;
      }
     

      if (stay>14)
      {
        rent=stay*68.70;
        dis=rent*0.10;
        r1=rent-dis;
      }
    }
     if(month =="july" || month=="august")
     
      { 
      if (stay>0)
       {
        rent=stay*77.0;
        r1=rent;
      }
     }
 return r1;
  

 
}
    





