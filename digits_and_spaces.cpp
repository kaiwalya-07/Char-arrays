#include<iostream>
#include<cstring>
using namespace std;

int main(){
char ch;
ch=cin.get();

int alphabets=0;
int space=0;
int digits=0;
while(ch!='\n'){

 if(ch>='0' && ch<='9'){
    digits++;
 }

 else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
    alphabets++;
 }
 else if(ch==' ' or ch=='\t'){
    space++;
 }

    ch=cin.get();
}

cout<<"Alphabets = "<<alphabets<<endl;
cout<<"Digits = "<<digits<<endl;
cout<<"Spaces = "<<space<<endl;

return 0;

}