#include <iostream>
using namespace std;

void swap(int& a,int& b){
    int tmp = a;
    a = b ;
    b = tmp;
}
void reverse(int* array,int start,int n){
    int count = n/2;
    for(int i=0;i<count;++i)
        swap(array[start+i],array[start+n-1-i]);
}
void rotate(int* array,int len,int k){
    int realk = k % len;
    if ( realk == 0 )
        return;

    reverse(array,0,len);
    reverse(array,0,realk);
    reverse(array,realk,len-realk);
}
int main()
{
  int array[]={1,2,3,4,5,6};
  for(int i=0;i<sizeof(array)/sizeof(int);++i){
      cout<<array[i]<<',';
  }
  cout<<'\n';
  rotate(array,6,5);
  for(int i=0;i<sizeof(array)/sizeof(int);++i){
      cout<<array[i]<<',';
  }
  cout<<'\n';
  return 0;
}
