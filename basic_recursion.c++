#include<bits/stdc++.h>
using namespace std;
void reverse(int n)
{

  //calling of a function to itself is recursion
    //it used to break large problem into small problems

    /*containes-
    1.base case - where calling terminates
    2.work or data-process-where actual logic implemented
    */


//this is base case:
    if (n==0)
    {
    return;
    }
else
{
    //this is work or data-process case
cout<<n<<endl;
reverse(n-1);
}

    
}

int main()
{
  reverse(5);
   
return 0;
}