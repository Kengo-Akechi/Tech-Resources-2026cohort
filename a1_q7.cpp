#include<iostream>
using namespace std;

void RevNum (string Num){

  int D = Num.length();
  for (int i =D-1; i > (-1) ; i--)
  {
    cout<<Num[i]<<endl;
  }
  
}
int main (){
    string n;
    cout<<"enter the number"<<endl;
    cin>>n;
    RevNum(n);
    return 0;
}
