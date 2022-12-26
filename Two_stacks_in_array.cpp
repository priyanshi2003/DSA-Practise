#include<iostream>
#include<stack>
using namespace std;
class TwoStack{

    public:
    int *arr;
    int top1;
    int top2;
    int size;
    

    TwoStack(int size){
    this->size=size;
    arr= new int[size];
    top1=-1;
    top2=size;
    }
  //Push in stack1
  void push1(int num){
    if(top2-top1>1){
        top1++;
        arr[top1]=num;
    }
    else{
        cout<<"Stack Overflow";
    }
  }
  //Push in stack2
  void push2(int num){
       if(top2-top1>1){
        top2--;
        arr[top2]=num;
       }
       else{
        cout<<"Stack Overflow"<<endl;
       }
  }
  int pop1(){
 if(top1>=0){
        int ans= arr[top1];
        top1--;
        return ans;
    }
    else{
        return -1;
    }
  }
  int pop2(){
    if(top2<=size){
        int ans = arr[top2];
        top2++;
        return ans;
    }
    else{
        return -1;
    }
  }
};

int main(){
  TwoStack st(5);
 st.push1(2);
 st.push2(3);
 st.pop1();
 
    return 0;
}