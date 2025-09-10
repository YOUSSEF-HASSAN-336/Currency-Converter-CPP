#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
using namespace std;
int main (){
int t=1;
while (t!=0)
{

float SR= 12.82 , DLOAR= 48.10, YEN= 0.33;
float number  ;
string chang , typeOfMany;
cout<<"Enter Number"<<endl;
cin>>number;
cout<<"chose the type of the many "<<endl;
cout<<"the type of many (EG , SR , DLOAR , YEN) "<<endl;
cin>>typeOfMany;
cout<<"chose the you need tranformatino"<<endl;
cin>>chang;
if (typeOfMany!="EG")
{   
    // We convert all currencies to Egyptian pounds
    if (typeOfMany=="SR")  number*=SR;
    else if (typeOfMany=="DLOAR") number*=DLOAR;
    else if (typeOfMany=="YEN") number*=YEN;
}

//all number == EG
if (chang=="EG")
{
    cout<<number<<" EG"<<endl;
}
else if(chang=="SR")
{
    cout<<number/SR<<" "<<chang<<endl;
}
else if(chang=="DLOAR")
{
    cout<<number/DLOAR<<" "<<chang<<endl;
}
else if(chang=="YEN")
{
    cout<<number*YEN<<" "<<chang<<endl;
}


cout<<"if you need end enter 0 else enter 1"<<endl;
cin>>t;
}
}
