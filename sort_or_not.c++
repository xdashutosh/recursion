#include<bits/stdc++.h>
using namespace std;

int checksort(int arr[],int i)
{
if (i>5)
{
    return 1;
}


else if(arr[i]>arr[i+1])
{
    return 0; 
}

else if(arr[i]<=arr[i+1])
{
return checksort(arr,i+1);
}
}
 



int main()
{ int arr[]={1,2,2,4,5};
    if (checksort(arr,0)==1)
    {
        cout<<"sorted array"<<endl;
    }
    else
    {
    cout<<"not sorted array"<<endl;
    }
    

    
    

return 0;
}