#include<iostream>
#include<cstring>
using namespace std;

int main(){
char a[]={'a','b','c','d','\0'};
char b[]="abcdefgh";
cout<<a<<endl;


cout<<strlen(b)<<endl;
cout<<sizeof(b)<<endl;  //+1

return 0;

}