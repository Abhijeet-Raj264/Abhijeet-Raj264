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
        cout<<"Marks Obtained:"<<mark<<endl;
    }
    Marks operator ++(int){
        Marks duplicate(*this);
        mark+=1;
        return duplicate;
    }
    friend Marks operator --(Marks&,int);
};
Marks operator --(Marks&m,int){
    Marks duplicate(m);
    m.mark-=1;
    return duplicate;    
}
int main(){
    Marks mohit(91);
    mohit.display();
    (mohit++).display();
    mohit.display();
    // (mohit--).display();
    // mohit.display();
    return 0;
    
}
