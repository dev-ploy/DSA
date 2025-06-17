#include<iostream>
#include<string>
using namespace std;

// class Teacher{
//  //properties or attributes  
// private:
//     double salary;
// public:
//     string name;
//     string dept;
//     string sub;

//     Teacher() { // non parameterized constructor
//        dept="Computer Science";
//     }

//     Teacher(string name,string dept,string sub,double salary){ // parameterized constructor
//         this->name=name;
//         this->dept=dept;
//         this->sub=sub;
//         this->salary=salary;
//     }
//     //copy constructor
//     Teacher(Teacher &orgObj){ //pass by reference 
//         cout<<"this is custom copy constructor\n";
//         this->name=orgObj.name;
//         this->dept=orgObj.dept;
//         this->sub=orgObj.sub;
//         this->salary=orgObj.salary;

//     }
    

//     //methods or memeber functions 
//     void changeDept(string newDept){
//         dept=newDept;
//     }
//     //setter
//     // void setSalary(double s){
//     //     salary=s;
//     // }
//     // //getter
//     // double getSalary(){
//     //     return salary;
//     // }
//     void getInfo(){
//         cout<<"name: "<<name<<"\n";
//         cout<<"subject: "<<sub<<"\n";
//     }
// };
// class Account{
// private:
//     double balance;
//     string password;//data hiding
// public:
//     string account_id;
//     string username;
// }
// class Student{
// public:
//     string name;
//     double* cgpaPtr;

//     Student(string name,double cgpa){
//         this->name=name;
//         cgpaPtr=new double;
//         *cgpaPtr=cgpa;
//     }
//     // Student(Student &obj){
//     //     this->name=obj.name;
//     //     cgpaPtr=new double;
//     //     *cgpaPtr=*obj.cgpaPtr;
//     // }

    //destructor
//     ~Student(){
//         cout<<"i de-allocate memory for an object\n";
//         delete cgpaPtr; //memory leak  system's memory is being wasted
//     }
//     void getInfo(){
//         cout<<"name: "<<name<<"\n";
//         cout<<"cgpa: "<<*cgpaPtr<<"\n";
//     }
// };
// class Person{
// public:
//     string name;
//     int age;

//     Person(string name,int age){
//         this->name=name;
//         this->age=age;
//     }
//     // Person(){
//     //     cout<<"parent construtor"<<"\n";

//     // }
//     // ~Person(){
//     //     cout<<"this is parent class destructor "<<"\n";
//     // }
// };
// class Student:public Person{ //inheritance
// public:
//     int rollno;
//     Student(string name,int age,int rollno):Person( name, age){
//        this->rollno=rollno;
//     }
//     // ~Student(){
//     //     cout<<"this is child class destructor "<<"\n";
//     // }
//     void getInfo(){
//         cout<<"name:" <<name<<"\n";
//         cout<<"age:" <<age<<"\n";
//         cout<<"rollno:" <<rollno<<"\n";
//     }
// };
// class Person{
//     public:
//         string name;
//         int age;
// };
// class Person{ // class name is declared in captial letters for consistency
// public:
//     string name;
//     int age;
// };
// class Student:public Person{
//     public:
        
//         int rollno;
// };
// class Teacher:public Person{
// public:
//     string subject;
//     // double salary;
// };
// class TA:public Student,public Teacher{
    
// };
// class Student{
// public:
//     string name;
//     Student(){
// //         cout<<"non-parameterized constructor\n";
// //     }
// //     Student(string name){
// //         this->name=name;
// //         cout<<"parameterized constructor\n";
// //     }
// // };
// // class Print{
// // public:
// //     void show(int x){
// //         cout<<"int x:"<<x<<"\n";
// //     }
// //     void show(char ch){
// //         cout<<"character ch: "<<ch<<"\n";
// //     }
// // };
// class Parent{
// public:
//     void getInfo(){
//         cout<<"parent class: \n";
    // }
    // virtual void hello(){
    //     cout<<"Hello from parent\n";
//     }
// };
// class Child:public Parent{
//     public:
//     void getInfo(){
//         cout<<"child class\n";
//     }
//     void hello(){
//         cout<<"Hello from child\n";
//     }
// };
// class Shape{//asbstarct class 
//     virtual void draw()=0; //pure virtual functions 

// };
// class Circle:public Shape{
//     public:
//         void draw(){
//             cout<<"drawing a circle\n";
//         }
// };
// void fun(){
//     static int x=0;//initialization statement -1 run
//     cout<<x<<"\n";
//     x++;
// }
// class A{
// public:
//     int x=0;
//     void incX(){
//         x++;
//     }
// };
class ABC{
public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"destructor\n";
    }
};
int main(){
    // int x=5;
    // Teacher t1("Paul","Computer Science","C++",25000);//internally constructor is being called
    // // cout<<t1.name<<" ";
    // // cout<<t1.getSalary()<<" ";
    // // t1.getInfo();

    // Teacher t2(t1); //default copy constructor is invoked or called 
    // t2.getInfo();
    // Student s1("Rahul Kumar",8.9);
    // // Student s2(s1);
    // s1.getInfo();
    // *(s2.cgpaPtr)=9.2;
    // s2.name="neha";
    // s1.getInfo();
    // s2.getInfo();
    // Student s1("rahul kumar",21);
    // s1.rollno=1234;
    // s1.getInfo();
    // GradStudent s1;
    // s1.name="tony stark";
    // s1.researchArea="quantum physics";
    // cout<<s1.name<<"\n";
    // cout<<s1.researchArea<<"\n";
    // TA t1;
    // t1.name="tony stark";
    // t1.subject="engineering";
    // cout<<t1.name<<"\n";
    // cout<<t1.subject<<"\n";
    // Student s1("tonystark");
    // Print p1;
    // p1.show(101);
    // p1.show('&');
    // Child c1;
    // // c1.hello();
    // Circle cir;
    // cir.draw();
    // fun();
    // fun();
    // fun();
    // A obj1;
    // A obj2;
    // obj1.x=100;
    // obj2.x=200;
    // cout<<obj1.x<<endl;
    if(true){
        static ABC obj;
    }
    cout<<"end of main function: ";
    return 0;
}