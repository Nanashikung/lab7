#include<iostream>

using namespace std;

int adiff(int A,int B){
  int C,n,m;
  n = A/360;
  m = B/360;
  A = A-(360*n);
  B = B-(360*m);
  

  if(A > B){
    C = A-B;
  }else if(B > A){
    C = B-A;
  }else{
    C = 0;
  }

  if(C > 180){
    C = 360-C;
  }

  return C;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45)<< endl;
  cout << adiff(0,360)<< endl;
  cout << adiff(10,350)<< endl;
  cout << adiff(95,260)<< endl;
  cout << adiff(90,-90)<< endl;
  cout << adiff(1000,280)<< endl;
  cout << adiff(60,244)<< endl;
}
