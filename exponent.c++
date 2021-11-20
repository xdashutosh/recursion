#include<bits/stdc++.h>
using namespace std;
int expo(int base,int power)
{
    if (base==0)
    {
        return 0;
    }
    else if (power==0){
        return 1;
    }
    else{
        return base*expo(base,power-1);
    }
}
int main()
{int base,power;
    cout<<"enter base value"<<endl;
    cin>>base;
    cout<<"enter power value"<<endl;
    cin>>power;
    cout<<"expo is "<<expo(base,power)<<endl;

return 0;
}