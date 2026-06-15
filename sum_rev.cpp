#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int temp = n;
    int sum = 0, r = 0;
    while(n>0){
        int ld = n%10;
        r = r*10;
        r = r+ld;
        n = n/10;
    }
    sum = temp + r;
    cout<<r<<endl<<sum;
}