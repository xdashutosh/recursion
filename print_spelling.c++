#include<bits/stdc++.h>
using namespace std;
void spelling(int n)
{ int r;
string spell[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
if (n==0)
{
    return;
}
else{
r=n%10;
spelling(n/10);
cout<<spell[r]<<" ";

}

}


int main()
{int num;
    cout<<"enter a number to get its spelling"<<endl;
    cin>>num;
    spelling(num);
return 0;
}