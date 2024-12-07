#include<bits/stdc++.h>
using namespace std;
class Demo{
    public:
    int x;
    static int i;
};
int Demo::i;//this means i is initializes with 0 value.
int main(){
    cout<<Demo::i<<endl;//we can also write in this way.Not compulsary to make object to call static data member.
    Demo o1,o2;
    o1.x=10;
    o1.i=20;
    o2.x=30;
    o2.i=50;
    cout<<"x: "<<o1.x<<endl;
    cout<<"x: "<<o2.x<<endl;
    cout<<"---------"<<endl;
    cout<<"i: "<<o1.i<<endl;
    cout<<"i: "<<o2.i<<endl;
    cout<<"i: "<<Demo::i;
    return 0;
}
//copy of non static member is formed but static member do not form their copy.
//Once the value of static member is changed then the value will be change for entire class.
//see by running the program.