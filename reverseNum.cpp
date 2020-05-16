

//-------------------------------------DAY1 CODING---------------------------------------------------------------


#include<iostream>
#include <fstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        /* code */
        int num,rev=0,reminder,count=1;
        cin>>num;
        while (num>0)
        {
            /* code */
            reminder=num%10;
            rev=rev*count+reminder;
            count*=10;
            num/=10;       
        }
        cout<<rev<<endl;
    }
    return 0; 
}