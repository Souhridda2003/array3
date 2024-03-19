#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int counttriplets(int arr[],int n,int x){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int sum;
    cout<<"enter the target: ";
    cin>>sum;
    int n;
    cout<<"enter number of char in array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<counttriplets(a,n,sum);
}
