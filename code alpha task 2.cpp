// code alphaa task 2 
// MAHAM ANJUM
#include<iostream>
using namespace std;
int main()
{
int c=0;
char b11='.',b12='4',b13='.',b14='.',b15='.',b16='.',b21='5',b22='2',b23='1',b24='4',b25='6',b26='.',b31='2',b32='3',b33='4',b34='6',b35='5',b36='.',b41='.',b42='.',b43='.',b44='3',b45='.',b46='.',b51='.',b52='6',b53='.',b54='.',b55='1',b56='.',b61='.',b62='.',b63='5',b64='.',b65='.',b66='.';


cout<<"Welcome to suduko\n";

cout<<"|"<<b11<<"|";cout<<"|"<<b12<<"|";cout<<"|"<<b13<<"|";cout<<"|"<<b14<<"|";cout<<"|"<<b15<<"|";cout<<"|"<<b16<<"|\n";//row 1

cout<<"|"<<b21<<"|";cout<<"|"<<b22<<"|";cout<<"|"<<b23<<"|";cout<<"|"<<b24<<"|";cout<<"|"<<b25<<"|";cout<<"|"<<b26<<"|\n";//row 2

cout<<"|"<<b31<<"|";cout<<"|"<<b32<<"|";cout<<"|"<<b33<<"|";cout<<"|"<<b34<<"|";cout<<"|"<<b35<<"|";cout<<"|"<<b36<<"|\n";//row 3

cout<<"|"<<b41<<"|";cout<<"|"<<b42<<"|";cout<<"|"<<b43<<"|";cout<<"|"<<b44<<"|";cout<<"|"<<b45<<"|";cout<<"|"<<b46<<"|\n";//row 4

cout<<"|"<<b51<<"|";cout<<"|"<<b52<<"|";cout<<"|"<<b53<<"|";cout<<"|"<<b54<<"|";cout<<"|"<<b55<<"|";cout<<"|"<<b56<<"|\n";//row 5

cout<<"|"<<b61<<"|";cout<<"|"<<b62<<"|";cout<<"|"<<b63<<"|";cout<<"|"<<b64<<"|";cout<<"|"<<b64<<"|";cout<<"|"<<b66<<"|\n";//row 6



cout<<"\n Enter missing numbers in row";

cout<<"\n For row 1:";
cin>>b11>>b13>>b14>>b15>>b16;
cout<<"\n For row 2:";
cin>>b26;
cout<<"\n For row 3:";
cin>>b36;
cout<<"\n For row 4:";
cin>>b41>>b42>>b43>>b45>>b46;
cout<<"\n For row 5:";
cin>>b51>>b53>>b54>>b56;
cout<<"\n For row 6:";
cin>>b61>>b62>>b64>>b65>>b66;







if(b11!=b12&&b11!=b13&&b11!=b14&&b11!=b15&&b11!=b16&&b11!=b21&&b11!=b22&&b11!=b23&&b11!=b31&&b11!=b41&&b11!=b51&&b11!=b61)
{cout<<"|"<<b11<<"|";c=c+1;}
else
{cout<<"|"<<b11<<"|";c=c-1;}

cout<<"|"<<b12<<"|";

if(b13!=b11&&b13!=b12&&b13!=b14&&b13!=b15&&b13!=b16&&b13!=b21&&b13!=b22&&b13!=b23&&b13!=b33&&b13!=b43&&b13!=b53&&b13!=b63)
{cout<<"|"<<b13<<"|";c=c+1;}
else
{cout<<"|"<<b13<<"|";c=c-1;}

if(b14!=b11&&b14!=b12&&b14!=b13&&b14!=b15&&b14!=b16&&b14!=b24&&b14!=b25&&b14!=b26&&b14!=b34&&b14!=b44&&b14!=b54&&b14!=b64)
{cout<<"|"<<b14<<"|";c=c+1;}
else
{cout<<"|"<<b14<<"|";c=c-1;}

if(b15!=b11&&b15!=b12&&b15!=b13&&b15!=b14&&b15!=b16&&b15!=b24&&b15!=b25&&b15!=b26&&b15!=b35&&b14!=b45&&b14!=b55&&b14!=b65)
{cout<<"|"<<b15<<"|";c=c+1;}
else 
{cout<<"|"<<b15<<"|";c=c-1;}

if(b16!=b11&&b16!=b12&&b16!=b13&&b16!=b14&&b16!=b15&&b16!=b24&&b16!=b25&&b16!=b26&&b16!=b36&&b16!=b46&&b16!=b56&&b16!=b66)
{cout<<"|"<<b16<<"|\n";c=c+1;}
else
{cout<<"|"<<b16<<"|\n";c=c-1;}//row1

cout<<"|"<<b21<<"|";
cout<<"|"<<b22<<"|";
cout<<"|"<<b23<<"|";
cout<<"|"<<b24<<"|";
cout<<"|"<<b25<<"|";

if(b26!=b21&&b26!=b22&&b26!=b23&&b26!=b24&&b26!=b25&&b26!=b14&&b26!=b15&&b26!=b16&&b26!=b36&&b26!=b46&&b26!=b56&&b26!=b66)
{cout<<"|"<<b26<<"|\n"; c=c+1;}
else
{cout<<"|"<<b26<<"|\n"; c=c-1;}//row2



cout<<"|"<<b31<<"|";
cout<<"|"<<b32<<"|";
cout<<"|"<<b33<<"|";
cout<<"|"<<b34<<"|";
cout<<"|"<<b35<<"|";
 
 if(b36!=b31&&b36!=b32&&b36!=b33&&b36!=b34&&b36!=b35&&b36!=b24&&b36!=b25&&b36!=b26&&b36!=b46&&b36!=b56&&b26!=b66&&b26!=b16)
{cout<<"|"<<b36<<"|\n";c=c+1;}
else
{cout<<"|"<<b36<<"|\n";c=c-1;}//row3

if(b41!=b42&&b41!=b43&&b41!=b44&&b41!=b45&&b41!=b46&&b41!=b31&&b41!=b32&&b41!=b33&&b41!=b11&&b41!=b21&&b41!=b51&&b41!=b61)
{cout<<"|"<<b41<<"|";c=c+1;}
else
{cout<<"|"<<b41<<"|";c=c-1;}


if(b42!=b41&&b42!=b43&&b42!=b44&&b42!=b45&&b42!=b46&&b42!=b31&&b42!=b32&&b42!=b33&&b42!=b12&&b42!=b22&&b42!=b52&&b42!=b62)
{cout<<"|"<<b42<<"|";c=c+1;}
else
{cout<<"|"<<b42<<"|";c=c-1;}

cout<<"|"<<b43<<"|";

if(b44!=b41&&b44!=b42&&b44!=b43&&b44!=b45&&b44!=b46&&b44!=b34&&b44!=b35&&b44!=b36&&b44!=b14&&b44!=b24&&b44!=b54&&b44!=b64)
{cout<<"|"<<b44<<"|";c=c+1;}
else
{cout<<"|"<<b44<<"|";c=c-1;}

if(b45!=b41&&b45!=b42&&b45!=b43&&b45!=b44&&b45!=b46&&b45!=b34&&b45!=b35&&b45!=b36&&b45!=b15&&b45!=b25&&b45!=b55&&b45!=b65)
{cout<<"|"<<b45<<"|";c=c+1;}
else
{cout<<"|"<<b45<<"|";c=c-1;}

if(b46!=b41&&b46!=b42&&b46!=b43&&b46!=b44&&b46!=b45&&b46!=b34&&b46!=b35&&b46!=b36&&b46!=b16&&b46!=b26&&b46!=b56&&b46!=b66)
{cout<<"|"<<b46<<"|\n";c=c+1;}
else
{cout<<"|"<<b46<<"|\n";c=c-1;}//row4

if(b51!=b52&&b51!=b53&&b51!=b54&&b51!=b55&&b51!=b56&&b51!=b61&&b51!=b62&&b51!=b63&&b51!=b11&&b51!=b21&&b51!=b31&&b51!=b41)
{cout<<"|"<<b51<<"|";c=c+1;}
else
{cout<<"|"<<b51<<"|";c=c-1;}


cout<<"|"<<b52<<"|";

if(b53!=b51&&b53!=b52&&b53!=b54&&b53!=b55&&b53!=b56&&b53!=b61&&b53!=b62&&b53!=b63&&b53!=b13&&b53!=b23&&b53!=b33&&b53!=b43)
{cout<<"|"<<b53<<"|";c=c+1;}
else
{cout<<"|"<<b53<<"|";c=c-1;}

if(b54!=b51&&b54!=b52&&b54!=b53&&b54!=b55&&b54!=b56&&b54!=b64&&b54!=b65&&b54!=b66&&b54!=b14&&b54!=b24&&b54!=b34&&b54!=b44)
{cout<<"|"<<b54<<"|";c=c+1;}
else
{cout<<"|"<<b54<<"|";c=c-1;}

if(b55!=b51&&b55!=b52&&b55!=b53&&b55!=b54&&b55!=b56&&b55!=b64&&b55!=b65&&b55!=b66&&b55!=b15&&b55!=b25&&b55!=b35&&b55!=b45)
{cout<<"|"<<b55<<"|";c=c+1;}
else
{cout<<"|"<<b55<<"|";c=c-1;}

if(b56!=b51&&b56!=b52&&b56!=b53&&b56!=b54&&b56!=b55&&b56!=b64&&b56!=b65&&b56!=b66&&b56!=b16&&b56!=b26&&b56!=b36&&b56!=b46)
{cout<<"|"<<b56<<"|\n";c=c+1;}
else
{cout<<"|"<<b56<<"|\n";c=c-1;}//row5

if(b61!=b62&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63&&b61!=b63)
{cout<<"|"<<b61<<"|";c=c+1;}
else
{cout<<"|"<<b61<<"|";c=c-1;}

if(b62!=b61&&b62!=b63&&b62!=b64&&b62!=b65&&b62!=b66&&b62!=b51&&b62!=b52&&b62!=b53&&b62!=b12&&b62!=b22&&b62!=b32&&b62!=b42)
{cout<<"|"<<b62<<"|";c=c+1;}
else
{cout<<"|"<<b62<<"|";c=c-1;}

cout<<"|"<<b63<<"|";

if(b64!=b61&&b64!=b62&&b64!=b63&&b64!=b65&&b64!=b66&&b64!=b54&&b64!=b55&&b64!=b56&&b64!=b14&&b64!=b24&&b64!=b34&&b64!=b44)
{cout<<"|"<<b64<<"|";c=c+1;}
else
{cout<<"|"<<b64<<"|";c=c-1;}

if(b65!=b61&&b65!=b62&&b65!=b63&&b65!=b64&&b65!=b66&&b65!=b54&&b65!=b55&&b65!=b56&&b65!=b15&&b65!=b25&&b65!=b35&&b65!=b45)
{cout<<"|"<<b65<<"|";c=c+1;}
else
{cout<<"|"<<b65<<"|";c=c-1;}

if(b66!=b61&&b66!=b62&&b66!=b63&&b66!=b64&&b66!=b65&&b66!=b54&&b66!=b55&&b66!=b56&&b66!=b16&&b66!=b26&&b66!=b36&&b66!=b46)
{cout<<"|"<<b66<<"|";c=c+1;}
else
{cout<<"|"<<b66<<"|";c=c-1;}//row6

if(c==20)
{cout<<"Congratulations! You won!";}
else
{cout<<"You LOSE:(";}

return 0;
}
