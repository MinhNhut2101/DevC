#include<stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    int a,r,t=0,b;
     cin >> a;
    for(b=a;a!=0;a=a/10){
         r=a%10;
         t=t*10+r;
    }
    if(b==t)
         cout << "So doi xung";
    else
         cout << "So khong doi xung";
    return 0;
}
