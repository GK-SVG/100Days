#include<iostream>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,m,count=0;
        cin>>n>>m;
        int arr[n],tarr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        for (int i = m; i<n; i++)
        {
            /* code */
            tarr[count]=arr[i];
            count++;
        }
        for (int i = 0; i <=m; i++)
        {
            /* code */
            tarr[count]=arr[i];
            count++;
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<tarr[i]<<" ";
        }
        
        
    }
    
	return 0;
 }