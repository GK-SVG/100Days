#include<iostream>
using namespace  std;
int main()
{
    int i,j,k,count1=0;
    cin>>i>>j>>k;
    for (int count = i; count <= j; count++)
    {
        /* code */
        int temp=count,sum=0,rem;
        while (temp>0)
        {
            rem=temp%10;
            sum=sum*10+rem;
            temp/=10;
        }
    
        if((count-sum)%k==0)
       { 
    
        count1++;}
    }
    cout<<count1;
    return 0;
} 
