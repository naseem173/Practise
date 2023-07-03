#include<iostream>
using namespace std;

// int main(){
//     for(int i=0;i<10;i++){
//     cout<<"hello world!"<<endl;
//     }
// }

int main(){
    int res;
    cout<<"Enter percentage";
    cin>>res;
    if(res>=50 && res<75){
        cout<<"average"<<endl;
    }
    else if(res>=75){
        cout<<"First Class"<<endl;
    }
    else
        cout<<"Failed"<<endl;
    return 0;
}