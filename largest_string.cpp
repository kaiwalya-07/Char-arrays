#include<iostream>
#include<cstring>
using namespace std;

int main(){
int n;
cin>>n;

cin.get();
char sentene[1000];
char largest[1000];

int largest_len=0;

while(n--){
    cin.getline(sentene,1000);

    int len = strlen(sentene);
    if(len>largest_len){
        largest_len=len;
        strcpy(largest,sentene);
    }
}

cout<<"Largest string is --"<<largest<<endl;
return 0;

}