#include<iostream>
Using namespace std;
bool check prime (int n);
int main (){
int n,i;
bool flag=false;
Cout <<"Enter a positive integer:"<<endl;
Cin>>n;
for(i=2;i<=n/2;++i){
if(check prime (i)){
if(check prime(n-i)){
Cout<<n<<"="<<i<<"+"<<n-i<<endl;
flag=true;
}
}
}
if(!flag){
Cout<<n<<"cant be expressed as sum of two prime numbers."<<endl;
}
Return 0;
}
//check prime number
bool check prime(int n){
int i;
bool is prime= true;
//0&1 are not prime numbers
if(n==0||n==1){
is prime =false;
}
else{
for(i=2;i<=n/2;++i){
if(n%i==0){
is prime=false;
break;
}
}
}
return is prime;
}
