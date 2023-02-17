#include<iostream>
#include<string>
using namespace std;

void RevNum (string Num){

  int D = Num.length();
  for (int i =D-1; i > (-1) ; i--)
  {
    cout<<Num[i]<<endl;
  }
  
}
int main (){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    string X;
    X = to_string(n);

    if (1<=X.length()<10^9)
    {
         RevNum(X);
    }
   
    return 0;
}
