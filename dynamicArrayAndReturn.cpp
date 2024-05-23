#include<bits/stdc++.h>
using namespace std;
int* dynamicArray(){
    int n;//static
    cin>>n;
    //static  dynamic
    int* a=new int[n];
    //dynamic array create korte static length use kora zay.
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    return a;//a er value heap memory er first element er memory address.

}
int main(){
    // 1 create dynamic array
    // int n;
    // cin>>n;
    // int* arPointer=new int[n];
    // for(int i=0; i<n; i++){
    //     cin>>arPointer[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<" "<<arPointer[i];
    // }
    
    // 2 recieve dynamic array
    // int p; //error
    // cin>>p; //error
    int *a=dynamicArray();
    for(int i=0; i<3; i++){
        cout<<" "<<a[i];
    }
    return 0;
}