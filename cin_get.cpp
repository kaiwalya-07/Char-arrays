#include<iostream>
#include<cstring>
using namespace std;

int main(){
char sentence[1000];
char temp=cin.get();

int len =1;

while(temp!='\n'){
sentence[len++]=temp;


temp=cin.get();
}

sentence[len]='\0';

cout<<"length is "<<len<<endl;

cout<<sentence<<endl;

return 0;

}