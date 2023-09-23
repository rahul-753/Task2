#include<iostream>
using namespace std;
class Myclass{
    private:
        int a,b;
    public:   
        void setdata(int x,int y){
            a=x;
            b=y;
        }

        void addition(){
            int res = a+b;
            cout<<"Addition of "<<a<<" & "<<b<<" is : "<<res<<endl;
        }
};
int main(){

    Myclass obj;

    obj.setdata(10,20);
    obj.addition();

    obj.setdata(50,100);
    obj.addition();
 
    return 0;
}