#include<iostream>
#include<string>
using namespace std;

int main (){
    int Num;
    string X= to_string(Num);

    if (1<X.length()<10^9)
    {
        
        cout<<"Enter the number"<<endl;
       
        cin>>Num;

        cout<<X.length();
    }

    return 0;
}
