// 0 1 1 2 3 5 8 13....


#include<bits/stdc++.h>
using namespace std;
 
 int fibo(int n)
 {
if (n==2||n==3)
{
    return 1;
}

else if(n==1)
{
 return 0;   
}

else{
    return fibo(n-1)+fibo(n-2);
}


}

 

int main()
{int n;
    cout<<"enter the a number to calculate fibonacci"<<endl;
    cin>>n;
    cout<<"fibonacci is "<<fibo(n)<<endl;
return 0;
}