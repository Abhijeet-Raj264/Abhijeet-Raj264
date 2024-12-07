#include<bits/stdc++.h>
using namespace std;
class Demo{
    private:
    char name[20];
    int age;
    public:
    void getData(){
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your age:"<<endl;
        cin.ignore();//to fix input buffer.
        cin>>age;
    }
    void storeData(){
        ofstream out;
        out.open("my file.txt",ios::app|ios::binary);//app means append mode.it is used for writting and it stores all the previous input that is given.
        out.write((char*)this,sizeof(*this));
        out.close();
    }
    void viewAllData(){
        ifstream ch;
        ch.open("my file.txt",ios::in|ios::binary);//in=read only data.it means it read the data in the file.
        if(!ch){
            cout<<"File not found";
        }
        else{
            ch.read((char*)this,sizeof(*this));
            while(!ch.eof()){
                cout<<"Your name is:"<<name<<" and age is:"<<age<<endl;
                ch.read((char*)this,sizeof(*this));
            }
        }
        ch.close();
    }
};
int main(){
    Demo obj;
    // obj.getData();
    // obj.storeData();
    obj.viewAllData();
    return 0;
}
