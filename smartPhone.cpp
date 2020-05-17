#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,max=0,budged=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        budged=(n-i)*arr[i];
        if(budged>max)
        max=budged;
    }
    cout<<max<<endl;
    return 0;
}