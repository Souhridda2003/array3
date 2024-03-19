#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void repeat(vector<int>a,int size){
    bool flag=false;
    for(int i=0;i<size;i++){
        int j;
        for(j=0;j<size;j++){
            if(i!=j && a[i]==a[j]){
                break;
            }
        }
        if(j==size){
                cout<<a[i]<<" is the first non repeating element";
                flag=true;
                break;
            }
    }
    if(flag==false)cout<<"there is no non repeating element";
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    repeat(a,n);
}
