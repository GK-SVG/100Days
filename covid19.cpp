#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            /* code */
        }
        int min=444442,max=0,count=1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            count=0;
            for(int j = i; j>=0; j--)
            {
                /* code */
                if(j-1>=0){
                if(arr[j]-arr[j-1]<=2){
                   count++;
                }
                else
                break;}
            }
            for (int j = i; j < n; j++)
            {
                /* code */
                if(j+1<n){
                if(arr[j+1]-arr[j]<=2){
                   count++;
                }
                else
                break;}
            }
            if(count<min){
                min=count;
            }
            if(count>max){
                max=count;
            }
        }
        cout<<min+1<<" "<<max+1<<endl;
    }
    return 0;
}