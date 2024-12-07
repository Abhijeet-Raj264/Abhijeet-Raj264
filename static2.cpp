#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    static int cnt;
    static int temp_id;
    int stu_id;
    public:
    Student(){
        cnt++;
        //stu_id=temp_id+1;
        temp_id++;
    }
    static void display(){
        cout<<"Number of object formed:"<<cnt<<endl;
        cout<<"Your student id is:"<<temp_id<<endl;
    }
    // void declare(){
    //     cout<<"Your student id is:"<<stu_id<<endl;
    // }    
};
int Student :: cnt;
int Student :: temp_id=1000;
int main(){
    Student s1;
    //Student :: display();
    s1.display();
    Student s2;
    s2.display();
    //s2.display();
    // s1.declare();
    // s2.declare();
    return 0;
}