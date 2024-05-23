#include<bits/stdc++.h>
using namespace std;
int main(){
    int* a=new int[3];
    int* b=new int[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    delete []a;
    //ekahne Heap memory te thaka arraye delete kora hoyeche kintu static memory te thaka pointer delete hoy ni. ebong caile abar size re-assign kora zabe
    a=new int[5];
    for(int i=0; i<3; i++){
        a[i]=b[i];
    }
    delete []b;
    a[3]=20;
    a[4]=30;
for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    delete []a;
    //ekhane delete korar por heap memory te array er kuno value exist korbe na . tai access kora zabe na.
    // for(int i=0; i<5; i++){
    //     cout<<a[i]<<" ";
    // }

    return 0;
}