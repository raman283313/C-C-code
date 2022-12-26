#include<iostream.h>
#include<string.h>

using namespace std;
class Parent
{
    string name;
    int age;
 public:
    Parent(string name,int age){
    name=name;
    age=age;
    
 }
 void show(){
    cout<<"player name is "<<name<<"\nAge is "<<age;
 }

};
int main(){
    Parent obj;
    obj.show();
    return 0;
}