// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // //     cout<<"Hello,World!"<<endl; // or std::cout<<"Hello,World!"<<endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>

// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     int x=5;
// // // // // // // // // // // // //     int y=6;
// // // // // // // // // // // // //     int sum=x+y;

// // // // // // // // // // // // //     std::cout<<"x value: "<<x<<std::endl;
// // // // // // // // // // // // //     std::cout<<"y value: "<<y<<std::endl;
// // // // // // // // // // // // //     std::cout<<"sum of x and y : "<<sum<<std::endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // //     int num1=10,num2;
// // // // // // // // // // // // //     num2=num1;
// // // // // // // // // // // // //     cout<<num2<<endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     const double PI=3.14159;
// // // // // // // // // // // // //     double radius=10;
// // // // // // // // // // // // //     double circumference=2*PI*radius;
// // // // // // // // // // // // //     std::cout<<circumference<<std::endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>

// // // // // // // // // // // // // int global=5;// global variable

// // // // // // // // // // // // // //function used to accessed variable
// // // // // // // // // // // // // void display(){
// // // // // // // // // // // // //     std::cout<<global<<std::endl;
// // // // // // // // // // // // // }

// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // //     display();
// // // // // // // // // // // // //     //changing the value of global from main function i.e that global=5 to global=10;
// // // // // // // // // // // // //     global=10;
// // // // // // // // // // // // //     display();
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // //     int a=10;//declaring an auto variable 
// // // // // // // // // // // // //     float b=3.10f;
// // // // // // // // // // // // //     string c="geeksforgeeks";
// // // // // // // // // // // // //     cout<<a<<"\n"; // printing auto variables
// // // // // // // // // // // // //     cout<<b<<"\n";
// // // // // // // // // // // // //     cout<<c<<"\n";
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // extern int x;
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     cout<<x<<endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // int func(){

// // // // // // // // // // // // //     static int count=0;
// // // // // // // // // // // // //     count++;
// // // // // // // // // // // // //     return count;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     cout<<func()<<"\n";
// // // // // // // // // // // // //     cout<<func();
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // //     register char geek='G';
// // // // // // // // // // // // //     cout<<geek<<"\n";
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // class A{
// // // // // // // // // // // // //     public:
// // // // // // // // // // // // //         int x;
// // // // // // // // // // // // //         mutable int y;
// // // // // // // // // // // // //         A():x(4),y(10){}
// // // // // // // // // // // // // };
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     const A a;
// // // // // // // // // // // // //     a.y=200;
// // // // // // // // // // // // //     cout<<a.y<<"\n";
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // #include<thread>
// // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // thread_local int threadVar=10;

// // // // // // // // // // // // // void modify(){
// // // // // // // // // // // // //     threadVar+=5;
// // // // // // // // // // // // //     cout<<"value is: "<<threadVar<<endl;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     cout<<"initial value is: "<<threadVar<<endl;

// // // // // // // // // // // // //     thread t1(modify);
// // // // // // // // // // // // //     t1.join();
// // // // // // // // // // // // //     cout<<"value after thread t1 execution: "<<threadVar<<endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // namespace first{
// // // // // // // // // // // // //     int x=1;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // namespace second{
// // // // // // // // // // // // //     int x=2;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // //     cout<<second::x<<endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // #include<vector>
// // // // // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // typedef vector<pair<string,int>> pairlist_t;

// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     pairlist_t pairList;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // #include<string>
// // // // // // // // // // // // // typedef std::string text_t;
// // // // // // // // // // // // // typedef int num_t;
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     num_t age=24;
// // // // // // // // // // // // //     text_t firstName="Bro";
// // // // // // // // // // // // //     std::cout<<firstName<<std::endl;
// // // // // // // // // // // // //     std::cout<<age<<std::endl;
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     unsigned int unsigned_int = -10;
// // // // // // // // // // // // //     cout<<unsigned_int<<"\n";
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     int correct=8;
// // // // // // // // // // // // //     int questions=10;
// // // // // // // // // // // // //     double score=correct/(double)questions*100;
// // // // // // // // // // // // //     cout<<score<<"%"<<"\n";
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // int main(){
// // // // // // // // // // // //     double PI=3.148;
// // // // // // // // // // // //     int sum=static_cast<int>(PI+1);
// // // // // // // // // // // //     cout<<sum<<endl;
// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }
// // // // // // // // // // // #include<iostream>
// // // // // // // // // // // using namespace std;
// // // // // // // // // // // //cout (insertion operator)
// // // // // // // // // // // //cin (extraction operator)
// // // // // // // // // // // int main(){
// // // // // // // // // // //     string name;
// // // // // // // // // // //     int age;
// // // // // // // // // // //     cout<<"what's your age? ";
// // // // // // // // // // //     cin>>age;
// // // // // // // // // // //     cout<<"what's your full name? ";
// // // // // // // // // // //     getline(cin>>ws,name);//elimates any whitespaces ws
// // // // // // // // // // //     cout<<"Hello: "<<name<<"\n";
// // // // // // // // // // //     cout<<"you are "<<age<<" years old "<<"\n";
// // // // // // // // // // // }
// // // // // // // // // // #include<iostream>
// // // // // // // // // // using namespace std;

// // // // // // // // // // int main(){

// // // // // // // // // //     int students=20;
// // // // // // // // // //     int remainder=students%3;
// // // // // // // // // //     cout<<remainder<<endl;
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // // //parenthesis multiplication divison and addition subtraction
// // // // // // // // // #include<iostream>
// // // // // // // // // #include<cmath>
// // // // // // // // // int main(){
// // // // // // // // //     double x=3.99,y=4;
// // // // // // // // //     double z;
// // // // // // // // //     //z=std::min(x,y)
// // // // // // // // //     //z=std::max(x,y)
// // // // // // // // //     // z=pow(2,3);
// // // // // // // // //     // z=sqrt(9);
// // // // // // // // //     // z=abs(-3);
// // // // // // // // //     // z=round(x);
// // // // // // // // //     // z=ceil(x); increases the rounding off
// // // // // // // // //     // z=floor(x); decreases the rounding off
// // // // // // // // //     std::cout<<z<<std::endl;
// // // // // // // // //     return 0;
// // // // // // // // // }
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;

// // // // // // // // int main(){
// // // // // // // //     int age;
// // // // // // // //     cout<<"enter your age: "<<endl;
// // // // // // // //     cin>>age;
// // // // // // // //     if(age>=100){
// // // // // // // //         cout<<"you are too old to enter this site "<<endl;
// // // // // // // //     }
// // // // // // // //     else if(age>=18){
// // // // // // // //         cout<<"welcome to the site: "<<endl;
// // // // // // // //     }else if(age<0){
// // // // // // // //         cout<<"you haven't been born yet: "<<endl;
// // // // // // // //     }

// // // // // // // //     return 0;   
// // // // // // // // }
// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     int month;
// // // // // // //     cout<<"enter the month: ";
// // // // // // //     cin>>month;
// // // // // // //     switch(month){
// // // // // // //         case 1:
// // // // // // //         cout<<"it is January";
// // // // // // //         break;
// // // // // // //         case 2:
// // // // // // //         cout<<"it is febuary";
// // // // // // //         break;
// // // // // // //         case 3:
// // // // // // //         cout<<"it is march";
// // // // // // //         break;
// // // // // // //         case 4:
// // // // // // //         cout<<"it is april";
// // // // // // //         break;
// // // // // // //         case 5:
// // // // // // //         cout<<"it is may";
// // // // // // //         break;
// // // // // // //         case 6:
// // // // // // //         cout<<"it is june";
// // // // // // //         break;
// // // // // // //         case '7':
// // // // // // //         cout<<"it is july";
// // // // // // //         break;
// // // // // // //         case '8':
// // // // // // //         cout<<"it is august";
// // // // // // //         break;
// // // // // // //         default:
// // // // // // //         cout<<"please enter numbers 1-8";
// // // // // // //     }
// // // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;

// // // // // // int main(){

// // // // // //     char grade;
// // // // // //     cout<<"what letter grade: "<<endl;
// // // // // //     cin>>grade;
// // // // // //     switch(grade){
// // // // // //         case 'A':
// // // // // //         cout<<"you did great!"<<endl;
// // // // // //         break;
// // // // // //         case 'B':
// // // // // //         cout<<"you did good "<<endl;
// // // // // //         break;
// // // // // //         case 'C':
// // // // // //         cout<<"you did okay "<<endl;
// // // // // //         break;
// // // // // //         case 'D':
// // // // // //         cout<<"you did not too good"<<endl;
// // // // // //         break;
// // // // // //         case 'F':
// // // // // //         cout<<"you failed"<<endl;
// // // // // //         break;
// // // // // //         default:
// // // // // //         cout<<"please only enter in a letter grade a-f";
// // // // // //     }
// // // // // // }
// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // int main(){
// // // // //     //condition?expression1:expression2;
// // // // //     // int grade=50;
// // // // //     // (grade>=60)?cout<<"You pass":cout<<"You fail!";
// // // // //     // int number=10;
// // // // //     // (number % 2==1)?cout<<"it is odd":cout<<"it is even"; 
// // // // //     bool hungry=true;
// // // // //     cout<<(hungry?"you are hungry":"you are full");
// // // // //     return 0;
// // // // // }
// // // // #include<iostream>
// // // // using namespace std;

// // // // int main(){

// // // //     int temp;
// // // //     bool sunny=false;
// // // //     cout<<"enter the temperature: ";
// // // //     cin>>temp;
// // // //     if(temp<=0 || temp>=30){
// // // //         cout<<"The temperature is bad: "<<"\n";
// // // //     }else{
// // // //         cout<<"the temeprature is good"<<"\n";
// // // //     }
// // // //     if(!sunny){
// // // //         cout<<"it is cloudy outside"<<"\n";
// // // //     }else{
// // // //         cout<<"it is sunny outside"<<"\n";
// // // //     }
// // // // }
// // // #include<iostream>
// // // using namespace std;

// // // int main(){
// // //     // string name;
// // //     // cout<<"enter your name: ";
// // //     // getline(cin,name);
// // //     // if(name.length()>12){ //length of string 
// // //     //     cout<<"you are name can't be over 12 characters";
// // //     // }else{
// // //     //     cout<<"welcome: "<<name;
// // //     // }
// // //     // if(name.empty()){// to check string is empty or not
// // //     //     cout<<"you didn't enter your name";
// // //     // }else{
// // //     //     cout<<"hello "<<name;
// // //     // }
// // //     // name.clear();//clear the string
// // //     // cout<<"hello "<<name<<endl;
// // //     // name.append("@gmail.com");// to add a string
// // //     // cout<<"your gmail account is: "<<name;
// // //     // cout<<name.at(0);// to check the index of character in string
// // //     // name.insert(2,"@");// to insert a character in particular position in string
// // //     // cout<<name;
// // //     // cout<<name.find(" ");
// // //     // name.erase(0,3);
// // //     // cout<<name;
// // //     string name;
// // //     while(name.empty()){
// // //         cout<<"enter your name: ";
// // //         getline(cin,name);
// // //     }
// // //     cout<<"hello: "<<name;
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     do{
// //     cout<<"enter a postive number: ";
// //     cin>>n;
// //     }while(n<0);
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     //break is to break out of a loop
// //     for(int i=1;i<=20;i++){
// //         if(i==13){
// //             continue;//skip the current iteration
// //         }
// //         cout<<i<<"\n";
// //     }

// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int rows,columns;
// //     char symbol;
// //     cout<<"how many rows: ";
// //     cin>>rows;
// //     cout<<"how many columns: ";
// //     cin>>columns;
// //     cout<<"enter a sybmol to use: ";
// //     cin>>symbol;
// //     for(int i=1;i<=rows;i++){
// //     for(int j=1;j<=columns;j++){
// //         cout<<symbol;
// //     }
// //     cout<<"\n";
// // }
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // void happyBirthday(string name,int age);//function declaration
// // int main(){
// //     //function - a block of reusable code 
// //     string name="Bro";
// //     int age=21;
// //     happyBirthday(name,age);
// //     return 0;
// // }
// // void happyBirthday(string name,int age){
// //     cout<<"happy birthday to "<<name<<"\n";
// //     cout<<"happy birthday to dear "<<name<<"\n";
// //     cout<<"happy birthday to you "<<name<<"\n";
// //     cout<<"you are  "<<age<<" year's old"<<"\n";
// // }
// #include<iostream>
// using namespace std;

// int main(){
//     // string cars[]={"Corvette","Mustang","Cambry"};
//     // cars[0]="Camaro";
//     // cout<<cars[0]<<"\n";
//     // cout<<cars[1]<<"\n";
//     // cout<<cars[2]<<"\n";
//     double prices[]={5.00,7.50,9.99,15.00};
//     cout<<prices[0]<<"\n";
//     cout<<prices[1]<<"\n";
//     cout<<prices[2]<<"\n";
//     cout<<prices[3]<<"\n";

//     return 0;
// }