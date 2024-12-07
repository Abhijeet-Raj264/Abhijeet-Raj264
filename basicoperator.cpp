#include<bits/stdc++.h>
using namespace std;
class Marks{
    int intmark;
    int extmark;
    public:
    Marks(){
        intmark=0;
        extmark=0;
    }
    Marks(int im, int em){
        intmark=im;
        extmark=em;        
    }
    void display(){
        cout<<"Your internal marks is:"<<intmark<<endl<<"Your external marks is:"<<extmark<<endl;
    }
    //HERE,RETURN TYPE IS Marks BECAUSE m3 HAS Marks RETURN TYPE.
    Marks operator + (Marks m3){//m2 will be pass here whereas m1 will pass automatically.
        Marks temp;//m2=m.intmark,that will be passed here.
        temp.intmark=intmark+m3.intmark;//m1=intmark,that will be passed automatically
        temp.extmark=extmark+m3.extmark;
        return temp;
    }
    Marks operator -(Marks m3);

};
//ReturnType Class ScopeResolution
Marks Marks :: operator-(Marks m3){//IF I USE FRIEND FUNCTION,THEN I WILL BE PASS TWO PARAMETER HERE.
    Marks temp;
    temp.intmark=intmark-m3.intmark;
    temp.extmark=extmark-m3.extmark;
    return temp;
}
int main(){
    Marks m1(20,30),m2(30,40);
    Marks m3=m1 + m2;//RETURN TYPE IS Marks.
    m3.display();
    Marks m4=m2-m1;
    m4.display();
    return 0;
}