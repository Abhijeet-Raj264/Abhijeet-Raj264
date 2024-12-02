#include<bits/stdc++.h>
using namespace std;
//IN THIS WAY, I CAN MAKE VOID OR Marks FUNCTIONS.
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
    Marks operator ++(){
        mark+=1;
        return *this;                
    }
    // void operator ++(){
    //     mark+=1;                
    // }
    //friend void operator --(Marks&);
    friend Marks operator --(Marks&);
};
// void operator --(Marks&m){
//     m.mark-=1;
// }
Marks operator --(Marks&m){
    m.mark-=1;
    return m;
}
int main(){
    Marks mohit(89);
    mohit.display();
    (++mohit).display();
    (--mohit).display();
    // ++mohit;
    // mohit.display();   
    // --mohit;
    // mohit.display();

    return 0;    
}