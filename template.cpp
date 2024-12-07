#include<bits/stdc++.h>
using namespace std;
template <class A>
class Demo{
    private:
    A num1,num2;
    public:
    Demo(A num1,A num2){
        this->num1=num1;
        this->num2=num2;
    }
    void show(){
        if(num1>num2)
        cout<<num1<<" "<<"is the largest number";
        else
        cout<<num2<<" "<<"is the largest number";
    }
};
int main(){
    Demo <int>obj1(8,3);
    obj1.show();
    return 0;
}