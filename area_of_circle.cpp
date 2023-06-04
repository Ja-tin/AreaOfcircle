#include <iostream>
using namespace std;

float Circlearea(int n){
  float area= 3.14*(n*n);
  return area;
}

int main(){
  float r;
  cout<<"Enter radius:-";
  cin>>r;

  float area= Circlearea(r);
  cout<<"Area of circle is:-"<<area<<endl;
}

