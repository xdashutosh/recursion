#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
if (n==2)
{
    return 2;
}
else{
    return (n)*fact(n-1);
}

}
int main()
{
    cout<<"factorial of 4 is "<<fact(4)<<endl;
return 0;
}