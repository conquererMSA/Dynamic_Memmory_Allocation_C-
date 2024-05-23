#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arPointer=new int[n];
    for(int i=0; i<n; i++){
        cin>>arPointer[i];
    }
    for(int i=0; i<n; i++){
        cout<<" "<<arPointer[i];
    }
    return 0;
}