#include<bits/stdc++.h>
using namespace std;
class Marks{
    int mark;
    public:
    Marks(){
        mark=0;
    }
    Marks(int m){
        mark=m;
    }
    void display(){
        cout<<"Your Marks is:"<<mark<<endl;
    }
    void operator +=(int bonus){
        mark+=bonus;
    }
    friend void operator -=(Marks &curObj, int redmark);
};
void operator -=(Marks &curObj, int redmark){
    curObj.mark=curObj.mark - redmark;
}
int main(){
    Marks m1(40);
    m1.display();
    m1+=20;
    m1.display();
    m1-=30;
    m1.display();
    return 0;
}
