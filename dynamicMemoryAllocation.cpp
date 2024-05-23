#include<bits/stdc++.h>
using namespace std;
void fun(){
    int* aPointer=new int;
    //ekahne new keyword diye Heap/Runtime/Dynamic Memory te integer data type er ekta variable create hoyeche. Heap memory te thake sei variable er memory address, static memory te create hoaya aPointer namok variable e sytore ache.
    *aPointer=34;
    //ekhane static mempry er aPointer variable dereference kore Heap memory te thaka variable er value 34 assign hoy.
    return aPointer;
    //ekahne aPointer variable er value orthat Heap memory te thaka variable er adrdress return kora hoyeche. return korar sathe sathe static memory te thaka aPointer soho fun function sob kichu delete hoye zabe. kintu Heap memory te create hoa variable ebong er address theke zabe. karon Static/Stack memory return korle auto clear hoye zay. kintu Heap memory auto clear hoy na. User ke delete korte hoy.
}
int main(){
    
    return 0;
}