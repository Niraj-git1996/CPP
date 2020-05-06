
//Driver Code Starts
#include <bits/stdc++.h>
# define ll long long int
#define N 10000
using namespace std;
long long int sum_of_XOR(int arr[], int n);
int main()
{
    int arr[N];

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        cout<< sum_of_XOR(arr,n) << endl;
    }
	return 1;
}// } Driver Code Ends
long long int sum_of_XOR(int arr[], int n)
{
    int i,j;
    long long int ex[n],sum=0,exor=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        ex[i]=arr[i];
        for(j=i+1;j<=n;j++)
        {
            ex[i]^=arr[j];
        }

    }
    for(i=0;i<n;i++)
    {
        exor=exor+ex[i];
    }
    return exor+sum;
}
