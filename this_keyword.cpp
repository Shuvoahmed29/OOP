#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name;
    student(string name){
        this-> name=name;
    }
    void display(){
        cout<<name<<endl;
    }
};
int main(){
    student s1("Shuvo Ahmed");
    s1.display();
}