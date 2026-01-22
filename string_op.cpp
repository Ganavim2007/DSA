#include<iostream>
#include<string.h>
using namespace std;

class stringX{
    char p[50];
    int len;
public:
    stringX(){
        p[0]='\0';
        len=0;
    }
    stringX(const char *s){
        strcpy(p,s);
        len=strlen(s);
    }
    stringX(const stringX &s){
        strcpy(p,s.p);
        len=s.len;
    }
    stringX operator+(const stringX &s){
        stringX temp;
        strcpy(temp.p,p);
        strcat(temp.p,s.p);
        temp.len=strlen(temp.p);
        return temp;
    }
    int operator<=(const stringX &s){
        return len<=s.len;
    }
    void show(){
        cout<<p;
    }
};

int main(){
    stringX s1("hello");
    stringX s2("world");
    stringX c1=s1;
    stringX c2=s1+s2;
    cout<<"\ns1=";
    s1.show();
    cout<<"\ns2=";
    s2.show();
    cout<<"\ncopy of s1";
    c1.show();
    cout<<"\n concadination (s1+s2):";
    c2.show();
    cout<<"\ncomparator(s1<s2):";
    if(s1<=s2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    cout<<"\n";
    return 0;
}