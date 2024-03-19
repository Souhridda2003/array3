#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void repeat(vector<int>&a,int size){
    int i=0;
    int j=0;
    while(i<size){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    repeat(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
