#include <iostream>
using namespace std;
/*
Input:
4
1 5 4 5
Output:
Explantation:(5-1)*(5-1)=16 biggest number made from input
16

Plan:

cal{
int n = number given;
for(){
n+a[i];
max(n)
}
return n;
}

main{
int n = input;
int a[n] = second input;
for(i = 0; n-1){
cin>>a[i];
}
for(int i = 0){
cal(a[i])
temp = max(cal)
}
cout<<temp;
}
*/

int cal(int n, int a[n], int j){
  int u = j;
  j = ((j-1)*(a[0]-1))-1;
  for(int i = 1; i<n-1; i++){
    int temp = (u-1)*(a[i]-1);
    j = max(temp, j);
  }
  return j;
}

int main() {
  int m = 0;
  int n = 0;
  cin>>n;
  int a[n];
  for(int i = 0; i<n-1; i++){
    cin>>a[i];
  }
  for(int i = 0; i<n-1; i++){
    int temp = cal(n, a, a[i]);
    m = max(temp, m);
  }
  cout<<m;
}