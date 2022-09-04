#include<iostream>
#include<cstring>
using namespace std;

int main(){
char a[1000]="Great";
char b[1000];

strcpy(b,a);
cout<<b<<endl;

cout<<strcmp(a,b)<<endl;


char web[]="https://";
char domain[]="abcd.com";

cout<<strcat(web,domain)<<endl;

strcpy(b,strcat(web,domain));
cout<<b<<endl;


cout<<strcmp(a,b)<<endl;
return 0;

}