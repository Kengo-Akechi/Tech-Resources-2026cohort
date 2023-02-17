#include<iostream>
#include<string>
using namespace std;

int main (){
    int Num;
    cout<<"Enter the number"<<endl;
    cin>>Num;
    string X;
    X= to_string(Num);

    if ( 1<=X.length()< 10^9){
    cout<<X.length(); 
    }
    return 0;
}
