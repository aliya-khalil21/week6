# include <iostream>
using namespace std;
string sign(int date,string month);
main()
{
 int date;
 string month;
 cout <<"enter date";
 cin >>date;
 cout <<"month";
 cin >>month;
 string zodic;
 zodic=sign(date, month);
 cout << zodic;
}
string sign(int date,string month)
{
  string zodic;
  if ((month=="march" && date>=21 && date>0 && date<=31 ) || (month=="april" && date<=19 && date>0  ))
  {
    zodic="aries";
  }
  if ((month=="april" && date<=20 && date>0 && date<=30 ) || (month=="may" && date>=20 && date>0  ))
  {
    zodic="taurus";
  }
  if ((month=="may" && date>=21 && date>0 && date<=31 ) || (month=="june" && date<=20 && date>0  ))
  {
    zodic="gemini";
  }
  if ((month=="june" && date>=21 && date>0 && date<=30 ) || (month=="july" && date>=22 && date>0  ))
  {
    zodic="cancer";
  }
  if ((month=="july" && date>=23 && date>0 && date<=31 ) || (month=="august" && date>=22 && date>0  ))
  {
    zodic="leo";
  }
  if ((month=="august" && date>=23 && date>0 && date<=31 ) || (month=="september" && date<=22 && date>0  ))
  {
    zodic="virgo";
  }
  if ((month=="september" && date>=23 && date>0 && date<=30 ) || (month=="october" && date<=22 && date>0  ))
  {
    zodic="libra";
  }
  if ((month=="october" && date>=23 && date>0 && date<=31 ) || (month=="november" && date<=21 && date>0  ))
  {
    zodic="scorpio";
  }
  if ((month=="november" && date>=22 && date>0 && date<=30 ) || (month=="december" && date<=21 && date>0  ))
  {
    zodic="sagittarius";
  }
  if ((month=="december" && date>=22 && date>0 && date<=31 ) || (month=="january" && date<=19 && date>0  ))
  {
    zodic="capricon";
  }
  if ((month=="january" && date>=20 && date>0 && date<=31 ) || (month=="february" && date<=18 && date>0  ))
  {
    zodic="aquarius";
  }
  if ((month=="february" && date>=19 && date>0 && date<=28 ) || (month=="march" && date<=20 && date>0  ))
  {
    zodic="pisces";
  }
 return zodic;

}


