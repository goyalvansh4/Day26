#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
long long int power(int n,int m){
  if(m==0){
    return 1;
  }
  
  long long int X=power(n,m/2);
  if(m%2==0){
    return X*X;
  }
  else{
    return X*X*n;
  }
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    long long int ans=power(n,m);
    cout<<ans<<endl;
}
