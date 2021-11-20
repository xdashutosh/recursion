#include<bits/stdc++.h>
using namespace std;
void counting(int n)
{
   if (n==0)
    {
    return;
    }
else
{
    //this is work or data-process case
// counting(n-1); //first call then print is tail recursion..and head is vice-versa
cout<<n<<endl;
counting(n-1);
}

    
}


int main()
{
  counting(5);
   
return 0;
}