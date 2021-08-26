#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    string name;

    void setdata();
    void getdata();
};
void student:: setdata(){
    cout<<"enter the name"<<endl;
    cin>>name; 
    cout<<"enter the mark"<<endl;
    cin>>marks;
}

void student:: getdata(){
    cout<<"the student name = "<<name<<endl;
    cout<<"marks = "<<marks <<endl;
}
                              //member function and data members is accesed by using dot . operator with object 

int main(){
    int count; 
    cout<<"enter the no student "<<endl;
    cin>>count; 

    if(count>0){
        student studentarray[count]; // here class name is student && obiect name is studentarray[].                                    
        for(int i=0;i<count;i++){    
            cout<<"for student"<<i+1<<endl;
            studentarray[i].setdata();
        }
cout<<"***************************************************"<<endl;
cout<<"your entered data "<<endl;

        for(int i=0;i<count;i++){            
        studentarray[i].getdata();
        }
    }
else{
cout<<"enter the valid number"<<endl;
}
return 0;
}
