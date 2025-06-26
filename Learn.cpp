#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iomanip>
#include<cmath>
#include<ctime>
// template <typename T>
using namespace std;
// typedef vector<std::pair<std::string,int>>pairList_t;
// typedef string text_t; 
// using text_t=std::string;
// using number_t=int;
// typedef int number_t;
// void happyBirthday(string name,int age);
// namespace first{
//     int x=1;
// }
// namespace second{
//     int x=2;
// }
// double square(double length);
// double cube(double length);
// string concatStrings(string str1,string str2);
// void bakePizza();
// void bakePizza(string topping1);
// // void printNum(int myNum);
// int myNum=3;
// void printNum();
// void showBalance(double balance);
// double deposit();
// double withdraw(double balance);
// char getUserChoice();
// char getComputerChoice();
// void showChoice(char choice);
// void chooseWinner(char player,char computer);
// double getTotal(double prices[],int size);
// int searchArray(string numbers[],int size,string element);
// void sort(int array[],int size);
// void swap(string x,string y);
// void printInfo(const string name,const int age);
// int getDigit(const int number);
// int sumOddDigits(const string cardNumber);
// int sumEvenDigits(const string cardNumber);
// void drawBoard(char *spaces);
// void playerMove(char *spaces,char player);
// void computerMove(char *spaces,char player,char computer);
// bool checkWinner(char *spaces,char player,char computer);
// bool checkTie(char *spaces);
// void walk(int steps);
// int factorial(int num);
// T max(T x,T y){
//     return (x>y)?x:y;
// }
// struct student{
//     std::string name; //members of struct
//     double gpa;
//     bool enrolled;
// };
// struct Car{
//     string model;
//     int year;
//     string color;
// };
// void printCar(Car car);
// void paintCar(Car &car,string color);
//enum - a user defined data type that consists of a set of named integer constants
// enum Day{sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6};
// class Human{
//     public:
//         string name="Rick";
//         string occupation="Scientist";
//         int age=70;

//         void eat(){
//             cout<<"This person is eating\n";
//         }
//         void drink(){
//             cout<<"This person is drinking\n";
//         }
//         void sleep(){
//             cout<<"This person is sleeping\n";
//         }
// };
// class Car{
//     public:
//         string make;
//         string model;
//         int year;
//         string color;
//         void accelerate(){
//             cout<<"You step on the gas\n";
//         }
//         void brake(){
//             cout<<"You step on the brakes\n";
//         }
// };
// class Car{
//     public:
//     string make;
//     string model;
//     int year;
//     string color;
//     Car(string make,string model,int year,string color){
//         this->make=make;
//         this->model=model;
//         this->year=year;
//         this->color=color;
//     }
// };
// class Stove{
//     private:
//         int temperature=0;
//     public:
//     int getTemperature(){
//         return temperature; // getter method makes method readble
//     }
//     Stove(int temperature){
//         setTemperature(temperature);
//     }
//     void setTemperature(int temperature){ //setter method makes method more writable
//         if(temperature<0){
//             this->temperature=0;
//         }else if(temperature>=10){
//             this->temperature=10;
//         }else{
//         this->temperature=temperature;
//     }
//     }
// };
// class Pizza{
//     public:
//     string topping1;
//     string topping2;
//     Pizza(string topping1){
//         this->topping1=topping1;
//     }
//     Pizza(string topping1,string topping2){
//         this->topping1=topping1;
//         this->topping2=topping2;
//     }
//     Pizza(){
        
//     }
// };
// inheritance - a class can receive attributes from parent class
// class Animal{
//     public:
//     bool alive=true;
//     void eat(){
//         cout<<"NOM NOM NOM\n";
//     }
// };
// class Dog:public Animal{
//     public:
//     bool alive=true;
//     void bark(){
//         cout<<"the dog goes woof\n";
//     }
// };
// class Cat:public Animal{
//     public:
//     void meow(){
//         cout<<"the cat goes meow\n";
//     }
// };
// class Student{
//     public:
//     string name;
//     int age;
//     double gpa;
//     Student(string name,int age,double gpa){
//         this->name=name;
//         this->age=age;
//         this->gpa=gpa;
//     }
// };
// class Shape{
//     public:
//     double area;
//     double volume;
// };
// class Cube:public Shape{
// public:
// double side;
// Cube(double side){
//     this->side=side;
//     this->area=side*side*6;
//     this->volume=side*side*side;
// }
// };
// class Sphere :public Shape{
//     public:
//     double radius;
// Sphere(double radius){
//     this->radius=radius;
//     this->area=4*3.14159*(radius*radius);
//     this->volume=(4/3.0)*3.14159*(radius*radius*radius);
// }
// };
// int main(){
//     Cube cube(10);
//     Sphere sphere(5);
//     cout<<"Area:"<<cube.area<<"\n";
//     cout<<"Volume:"<<cube.volume<<"\n";
//     cout<<"Area:"<<sphere.volume<<"\n";
//     cout<<"Volume:"<<sphere.volume<<"\n";
    // Dog dog;
    // Cat cat;
    // cout<<dog.alive<<"\n";
    // cout<<cat.alive<<"\n";
    // cat.eat();
    // cat.meow();
    // dog.eat();
    // dog.bark();
    // Stove stove(0);
    // // stove.setTemperature(5);
    // cout<<stove.getTemperature()<<"\n";
    // Pizza pizza1("pepperoni");
    // Pizza pizza2("mushroom","peppers");
    // Pizza pizza3;
    // cout<<pizza1.topping1<<"\n"; // overloaded constructors
    // cout<<pizza2.topping2<<"\n";
    // Car car1("Ford","Mustang",2023,"red");
    // Car car2("Chevy","Corvette",2022,"blue");
    // cout<<car1.make<<"\n";
    // cout<<car1.model<<"\n";
    // cout<<car1.year<<"\n";
    // cout<<car1.color<<"\n";
    // cout<<car2.make<<"\n";
    // cout<<car2.model<<"\n";
    // cout<<car2.year<<"\n";
    // cout<<car2.color<<"\n";
    // Student student1("John",21,2.5);
    // Student student2("Patrick",25,3.2);
    // cout<<student1.name<<"\n";
    // cout<<student1.age<<"\n";
    // cout<<student1.gpa<<"\n";
    // cout<<student2.name<<"\n";
    // cout<<student2.age<<"\n";
    // cout<<student2.gpa<<"\n";
    // this is a comment
    /*
    this is a multi-line comment 
    */
    // cout<<"I like pizza"<<"\n";
    // cout<<"It's really good!"<<"\n";
    // int x; // declaration 
    // x = 5;
    // int y=6; // assignment
    // int sum=x+y;
    // cout<<x<<"\n";
    // cout<<y<<"\n";
    // cout<<sum<<"\n";
    // int age=21; // integer whole number
    // int year=2023;
    // int days=7.5; //decimal position is truncated
    // cout<<days<<"\n";

    // double (number including decimal)
    // double price=10.99;
    // double gpa=2.5;
    // double temperature=25.1;

    // cout<<price<<"\n";
    // char to store single character
    // char grade='A';
    // char initial='B'; // ist cannot store inital='BC'
    // char currency='$';
    // cout<<initial<<"\n"; 
    // boolean (true or false)

    // bool isStudent=true;
    // bool poweredOn=false;
    // bool forSale=true;

    //string a object to represnts a sequence of text
    // std::string name="Bro";
    // string food="pizza";
    // string address="123 Main St";
    // cout<<"Hello "<<name<<" I am eating "<<food;

    //const keyword to declare a constant variable 

    // 
    
    // const double PI=3.14;
    // const int LIGHT_SPEED=299792458;
    // const int WIDTH=1920;
    // const int HEIGHT=1080;

    //namespace provides a solution for preventing name conflicts

    
    // cout<<second::x<<"\n";
    //typedef is used to create an alias for data you can get a identifier if you need 
    // //using keyword is used to create a nickname for datatype
    // pairList_t pairList;
    // text_t firstName="John";
    // cout<<firstName<<"\n";
    // number_t age=23;
    // cout<<age<<"\n";
    // int students=20;

    // students+=2;
    // students++;
    // students--;
    // students*=2;
    // students/=3;
    // int remainder=students%2;

    //type conversion a conversion of value of one data type to another 

    // double x=(int)(3.14);
    // cout<<x<<"\n";
    // char x=100;
    // cout<<x<<"\n";

    // cout<<(char)100;
    // int correct=8;
    // int questions=10;
    // double score= correct/(double)questions*100;
    // cout<<score<<"%";

    // cout<< (insertion operator)
    //cout<<(extraction opearator)

    // string name;
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // cout<<"Enter your fullname name: ";
    // std::getline(cin >> std::ws,name);
    // cout<<"hello there "<<name<<"\n";
    // cout<<"you are  "<<age<<" years old";

    // cout<<students<<"\n";

    // double x=3;
    // double y=4;
    // double z;
    // z=max(x,y);
    // cout<<z<<"\n";
    // z=sqrt(9);
    // cout<<z<<"\n";
    // z=abs(-3);
    // cout<<z<<"\n";
    // z=round(x);
    // // cout<<z<<"\n";
    // z=ceil(x);
    // cout<<z<<"\n";
    // z=floor(x);
    // cout<<z<<"\n";
    // double a,b,c;
    // cout<<"enter the side a ";
    // cin>>a;
    // cout<<"enter the side b ";
    // cin>>b;
    // a=pow(a,2);
    // b=pow(b,2);
    // c=sqrt(a+b);
    // cout<<"the hypotenuse is "<<c<<"\n";
    //if statements do something if a condition is true if not then don't do it
    // int age;
    // cout<<"enter your age: ";
    // cin>>age;

    // if(age<=18){
    //     cout<<"welcome to the site\n";
    // }else if(age<0){
    //     cout<<"you haven't been borm yet\n";
    // }else if(age>=100){
    //     cout<<"you are too old to be here\n";
    // }
    // else{
    //     cout<<"you are not old enough to enter\n";
    // }
    //switch case 
//     int month;
//     cout<<"enter the month: ";
//    cin>>month;
//     switch(month){
//         case 1:
//         cout<<"January\n";
//         break;
//         case 2:
//         cout<<"febuary\n";
//         break;
//         case 3:
//         cout<<"march\n";
//         break;
//         case 4:
//         cout<<"april\n";
//         break;
//         case 5:
//         cout<<"may\n";
//         break;
//         default:
//         cout<<"enter only numbers \n";
//     }  
// char op;
// double num1,num2,result;
// cout<<"Calculator\n";
// cout<<"ener (+,-,*,/): ";
// cin>>op;
// cout<<"enter numbr 1: ";
// cin>>num1;
// cout<<"enter number 2: ";
// cin>>num2;
// switch(op){
//     case '+':
//     result=num1+num2;
//     cout<<"Result :"<<result<<"\n";
//     break;
//     case '-':
//     result=num1-num2;
//     cout<<"Result :"<<result<<"\n";
//     break;
//     case '*':
//     result=num1*num2;
//     cout<<"Result :"<<result<<"\n";
//     break;
//     case '/':
//     result=num1/num2;
//     cout<<"Result :"<<result<<"\n"; 
//     break;
//     default:
//     cout<<"invalid operator\n";
//     break;
// }
// ternary operator ?: replacement to an if/else stament
//condition?expression1:expression2
// int grade=75;
// grade>=60?cout<<"you passed\n":cout<<"you failed\n";
// int number=8;
// number%2==1?cout<<"odd number\n":cout<<"even number\n";
// bool hungry=false;
// hungry?cout<<"you are hungry\n":cout<<"you are full\n";
// bool hungry=false;
// cout<<(hungry?"You are hungry\n":"You are full\n"); 
//logical operators
// int temp;
// cout<<"enter the temperature: ";
// cin>>temp;
// bool sunny=false;

// temp>0 && temp<30?cout<<"the temperature is good\n":cout<<"the temperature is bad\n";
// temp>0 || temp>=30?cout<<"the temperatue is bad\n":cout<<"the temperature is good\n";
// !sunny?cout<<"it is sunny outside\n":cout<<"it is cloudy outside\n";
// double temp;
// char unit;
// cout<<"temperature converter\n";
// cout<<"enter the unit for conversion: ";
// cin>>unit;
// if(unit=='F'|| unit=='f'){
//     cout<<"enter the temperature in celsius:";
//     cin>>temp;
//     temp=(1.8*temp)+32.0;
//     cout<<"the temperature is"<<temp<<"F\n";
// }else if(unit=='C'||unit=='c'){
//     cout<<"enter the temperature in fahrenheit:";
//     cin>>temp;
//     temp=(temp-32)/1.8;
//     cout<<"The temperatur is "<<temp<<"C\n";
// }else{
// cout<<"invalid unit\n";
// }
// string name;
// cout<<"enter your name: ";
//  std::getline(std::cin,name);
// name.length()>12?cout<<"your name is too long\n":cout<<"welcome "<<name<<"\n";
// name.empty()?cout<<"your name is empty\n":cout<<"hello "<<name<<"\n";
// name.clear();
// name.append("@gmail.com");
// cout<<"your name is "<<name<<"\n";
// cout<<name.at(1)<<"\n";
// name.insert(1,"@");
// cout<<name;
// cout<<name.find(' ');
// name.erase(0,3);
// cout<<name<<"\n";
// string name;

//do-while loop -do some block of code first then repeat again if condition is true

// int number;
// do{
//     cout<<"enter a positive number: ";
//     cin>>number;
// }while(number<0);
// cout<<"the number is "<<number<<"\n";
// for(int i=10;i>=0;i-=3){
//     cout<<i<<"\n";
// }
// cout<<"Happy new year!\n";
//break out of loop
//continue skip the current iteration
// for(int i=1;i<=20;i++){
//     if(i==13) break;
//     cout<<i<<"\n";
// }
// for(int i=1;i<=3;i++){
// for(int j=1;j<=10;j++){
//     cout<<j<<' ';
// }
// cout<<endl;
// }
// int rows;
// int cols;
// char symbol;
// cout<<"how many rows: ";
// cin>>rows;
// cout<<"how many columns: ";
// cin>>cols;
// cout<<"enter the symbol: ";
// cin>>symbol;
// for(int i=0;i<=rows;i++){
//     for(int j=1;j<=cols;j++){
//         cout<<symbol;
//     }
//     cout<<endl;
// }
//pseudo-random not truly random but close
// srand(time(NULL));
// int num1=rand()%6+1;
// int num2=rand()%6+1;
// int num3=rand()%6+1;
// cout<<num1<<"\n";
// cout<<num2<<"\n";
// cout<<num3<<"\n";
// int num1=rand()%10+1;
// cout<<num1<<"\n";
// srand(time(NULL));
// int num1=(rand()%6)+1;
// int num2=(rand()%6)+1;
// int num3=(rand()%6)+1;
// cout<<num1;
// cout<<num2;
// cout<<num3;
// srand(time(0));
// int randNum=rand()%5+1;
// switch(randNum){
//     case 1:
// //     cout<<"You win a bumper sticker!\n";
// //     break;
// //     case 2:
// //     cout<<"You win a t-shirt!\n";
// //     break;
// //     case 3:
// //     cout<<"You win a free lunch!\n";
// //     break;
// //     case 4:
// //     cout<<"You win a free trip!\n";
// //     break;
// //     case 5:
// //     cout<<"You win a free car!\n";
// //     break; 
// //     default:
// //     cout<<"You win nothing!\n";
// //     break; 
// // }
// int num;
// int guess;
// int tries;
// srand(time(NULL));
// num=(rand()%100)+1;
// cout<<"guess a number between 1 and 100 ";
// do{
//     cout<<"enter a guess between (1-100): ";
//     cin>>guess;
//     tries++;
//     if(guess<num){
//         cout<<"too low\n";
//     }else if(guess>num){
//         cout<<"too high\n";
//     }else{
//         cout<<"correct # of tries "<<tries<<endl; 
//     }
//     cout<<"----\n";
// }while(guess!=num);
//function a block of reusable code 
// string name="Bro";
// int age=21;
// happyBirthday(name,age);
//return returns a value nack to the spot where the function was called
// double length=5.0;
// double area=square(length);
// double volume=cube(length);
// cout<<"the area of the square is "<<area<<"cm^2\n"; 
// cout<<"the volume of the square is "<<area<<"cm^3\n";
// string firstName="Bro";
// string lastName="Code";
// string fullName=concatStrings(firstName,lastName);
// cout<<"Hello "<<fullName<<"\n"; 
// bakePizza("pepperoni");
// local variable is a variable that is declared inside a function
//global variable is a variable that is declared outside of all functions
// int myNum=1;
// // cout<<myNum<<"\n";
// printNum(myNum);
// :: scope resolution operator 
// int myNum=1;
// printNum();
// global variables are less secure and pollutes the global space 
// cout<<::myNum<<"\n";
// double balance=0.0;
// int choice=0;
// do{
// cout<<"enter your choice: ";
// cout<<"1. show balance\n";
// cout<<"2. deposit money\n";
// cout<<"3. withdraw money\n";
// cout<<"4. exit\n";
// cin>>choice;
// cin.clear(); // reset any error flags
// fflush(stdin); //clear the input buffer 
// switch(choice){
//     case 1:
//     showBalance(balance);
//     break;
//     case 2:
//     balance+=deposit();
//     showBalance(balance);
//     break;
//     case 3:
//     balance-=withdraw(balance);
//     showBalance(balance);
//     break;
//     case 4:
//     cout<<"thank you for using our service\n";
//     break;
//     default:
//     cout<<"invalid choice\n";
//     break;
// }
// }while(choice!=4);
// char player;
// char computer;
// player=getUserChoice();
// cout<<"your choice: ";
// showChoice(player);
// computer=getComputerChoice();
// cout<<"computer choice: ";
// showChoice(computer);
// chooseWinner(player,computer);

//array a static data structure that can hold multiple values 

// string car[3];
// car[0]="Camaro";
// car[1]="Mustang";
// car[2]="Camry";
// cout<<car[0]<<"\n";
// cout<<car[1]<<"\n";
// cout<<car[2]<<"\n";
// double prices[]={10.99,20.55,30,40.15,50.751};
// cout<<prices[0]<<"\n";
// cout<<prices[1]<<"\n";
// cout<<prices[2]<<"\n";
// cout<<prices[3]<<"\n";
// cout<<prices[4]<<"\n";
//sizeof() -detemines the size in bytes of a varaible data type class objects
// string name="Bro Code ";
// double gpa=2.5;
// char grade='A';
// bool student=true;
// char grades[]={'A','B','C','D','E','F'};
// string students[]={"John","Mary","Bob","Patrick","Sandy"};
// cout<<sizeof(students)/sizeof(string)<<" elements\n";
// string students[]={"John","Bob","Patrick","Sandy","Lion"};
// char grades[]={'A','B','C','D'};
// for(int i=0;i<sizeof(grades)/sizeof(char);i++){
//     cout<<grades[i]<<"\n";
// }
//for each loop loop that erases the traversal over an iterable data set
// string students[]={"John","Bob","Patrick"};
// int grades[]={65,72,81,93};
// for(int grade:grades){
//     cout<<grade<<"\n";
// }
// double prices[]={49.99,15.05,75,9.99};
// int size=sizeof(prices)/sizeof(double);
// double total=getTotal(prices,size);
// cout<<"$"<<total;
// int numbers[]={1,2,3,4,5,6,7,8,9,10};
// string foods[]={"pizza","burger","fries","hotdog"};
// int size=sizeof(foods)/sizeof(foods[0]);
// int index;
// string myFood;
// cout<<"enter the element to search for "<<"\n";
// getline(cin,myFood);
// index=searchArray(foods,size,myFood);
// if(index!=-1){
//     cout<<myFood<<" is at index "<<index<<"\n";
// }else{
//     cout<<myFood<<" is not in the array\n";
// }
// int array[]={3,4,5,2,1};
// int size=sizeof(array)/sizeof(array[0]);
// sort(array,size);
// for(int element:array){
//     cout<<element<<" ";
// }
// fill() -fills a range of elements in specified value fill(begin,end,value)
// const int SIZE=9;
// string foods[SIZE];
// fill(foods,foods + (SIZE/3),"pizza");
// fill(foods+(SIZE/3),foods+ (SIZE/3)*2,"hamburger");
// fill(foods+(SIZE/3)*2,foods+ SIZE,"hotdog");
// for(string str:foods){
//     cout<<str<<"\n";
// }
// string foods[5];
// int size=sizeof(foods)/sizeof(foods[0]);
// string temp;
// for(int i=0;i<size;i++){
//     cout<<"enter the food or q to quit: "<<i<<" : ";
//     getline(cin,temp);
//     if(temp=="q"){
//         break;
//     }else{
//         foods[i]=temp;
//     }
// }
// cout<<"you like the following foods\n";
// for(int i=0;!foods[i].empty();i++){
//     cout<<foods[i]<<"\n";
// }
// string cars[][3]={{"ford","mustang","escape"},
// {"corvette","equinox","silverado"},
// {"challenger","durango","ram-1500"}};
// int rows=sizeof(cars)/sizeof(cars[0]);
// int cols=sizeof(cars[0])/sizeof(cars[0][0]);
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<cars[i][j]<<" ";
//     }
//     cout<<endl;
// } 
// string questions[]={"1.what is year was C++ created? ",
//     "2.who invented c++? ",
// "    3.what is the predecessor of c++?",
// "    4.is the earth flat?"};
// string options[][4]={{"A:1969","B:1975","C:1985","D:1989"},
// {"A:Gudio van Rossum","B:Borjune Stroustrup","C:James Gosling","D:Linus Torvalds"},
// {"A:C","B:Java","C:Python","D:Pascal"},
// {"A:yes","B:no","C:sometimes","D:what's earth?"}};
// char answerKey[]={'C','B','A','B'};
// int size=sizeof(questions)/sizeof(questions[0]);
// char guess;
// int score;
// for(int i=0;i<size;i++){
//     cout<<questions[i]<<"\n";
//     for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
//         cout<<options[i][j]<<"\n";
//     }
//     cin>>guess;
//     guess=toupper(guess);
//     if(guess=answerKey[i]){
//         cout<<"correct\n";
//         score++;
//     }else{
//         cout<<"Wrong\n";
//         cout<<"Answer "<<answerKey[i]<<"\n";
//     }
// } 
// cout<<"Results\n";
// cout<<"Correct guess "<<score<<'\n';
// cout<<"# of questions "<<size<<"\n";
// cout<<"score: "<<(score/(double)size)*100<<"%";
//memory address location in memoery where data is stored & address of operator
// string name="Bro";
// int age=21;
// bool student=true;
// cout<<&name<<"\n";
// cout<<&age<<"\n";
// cout<<&student<<"\n";
//pass by value and pass by reference
// string x="Kool-Aid";
// string y="Water";

// cout<<"X: "<<&x<<"\n";
// cout<<"Y: "<<&y<<"\n";
// swap(x,y);
//const parameter-parameter that is effectively for read-only
// string name="milan";
// int age=21;
// printInfo(name,age);
//luhn algorithm
// string cardNumber;
// int result=0;
// cout<<"enter a card: ";
// cin>>cardNumber;
// result=sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);
// if(result%10==0){
//     cout<<"it is a valid number "<<cardNumber;
// }else{
//     cout<<"it is not a valid number "<<cardNumber;
// }
//pointers variables that stores a memory address of another variable sometimes it is easier to work with an address 
//&address of and * derefernce operator
// string name="Bro";
// int age=21;
// string freePizzas[5]={"pizz1","pizz2","pizz3","pizz4","pizz5"};
// string *pFreePizzas=freePizzas;
// string *pName=&name;
// int *pAge=&age;
// cout<<*pName<<"\n";
// cout<<*pAge<<"\n";
// cout<<*pFreePizzas<<"\n";
//null value - a special value that does not have any value
//nullptr -keyword that respresents a null pointer literal
// int *pointer=nullptr;
// int x=123;
// pointer=&x;
// if(pointer==nullptr){
//     cout<<"address was not assigned\n";
// }else{
//     cout<<"address was assigned\n";
// }
// char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
// char player='X';
// char computer='O';
// bool running=true;
// drawBoard(spaces);
//dynamic memory -new keyword
// int *pNum=NULL;
// pNum=new int;
// *pNum=21;
// cout<<"address stored within the pointer "<<pNum<<"\n";
// cout<<"value stored within the pointer "<<*pNum<<"\n";
// delete pNum;
// char *pGrades=NULL;
// int size;
// cout<<"grades to enter: ";
// cin>>size;
// pGrades=new char[size];
// for(int i=0;i<size;i++){
//     cout<<"enter grade "<<i+1<<" ";
//     cin>>pGrades[i];
// }
// for(int i=0;i<size;i++){
//     cout<<pGrades[i]<<" ";
// }
// delete[] pGrades;
// //function templates 
// cout<<std::max(1.1,2.2)<<"\n";
//struct -a structure that group related variables under one name
// student student1;
// student1.name="John"; //class memeber access operator
// student1.gpa=2.5;
// student1.enrolled=true;
// std::cout<<student1.name<<" ";
// std::cout<<student1.gpa<<" ";
// std::cout<<student1.enrolled<<" ";
// student student2;
// student2.name="Patrick"; //class memeber access operator
// student2.gpa=1.5;
// student2.enrolled=true;
// std::cout<<student2.name<<" ";
// std::cout<<student2.gpa<<" ";
// std::cout<<student2.enrolled<<" ";
// student student3;
// student3.name="Mark"; //class memeber access operator
// student3.gpa=3.5;
// student3.enrolled=false;
// std::cout<<student3.name<<" ";
// std::cout<<student3.gpa<<" ";
// std::cout<<student3.enrolled<<" ";
//& reference operator to make changes to the original variable
// Car car1;
// Car car2;
// car1.model="Ford";
// car1.year=2023;
// car1.color="red";
// car2.model="Chevy";
// car2.year=2024;
// car2.color="blue";
// paintCar(car1,"silver");
// paintCar(car2,"gold");
// cout<<&car1<<"\n";
// printCar(car1);
// printCar(car2);
// Day today=friday;
// switch(today){
//     case 0:
//     cout<<"it is a sunday\n";
//     break;
//     case 1:
//     cout<<"it is a monday\n";
//     break;
//     case 2:
//     cout<<"it is a tuesday\n";
//     break;
//     case 3:
//     cout<<"it is a wednesday\n";
//     break;
//     case 4:
//     cout<<"it is a thursday\n";
//     break;
//     case 5:
//     cout<<"it is a friday\n";
//     break;
//     case 6:
//     cout<<"it is a saturday\n";
//     break;
// }
// //object - a collection of attributes and methods 
// Human human1;
// Human human2;
// cout<<human1.name<<"\n";
// cout<<human1.occupation<<"\n";
// cout<<human1.age<<"\n";
// cout<<human2.name<<"\n";
// cout<<human2.occupation<<"\n";
// cout<<human2.age<<"\n";
// Car car1;
// Car car2;
// car1.make="Ford";
// car1.model="Mustang";
// car1.year=2023;
// car1.color="silver";
// cout<<car1.make<<"\n";
// cout<<car1.model<<"\n";
// cout<<car1.year<<"\n";
// cout<<car1.color<<"\n";
// car1.accelerate();
// car1.brake();
//constructor - special member function of a class that is automatically called when an object of the class is created 
return 0;
}
// void printCar(Car car){
//     cout<<&car<<"\n";
//     cout<<car.model<<"\n";
//     cout<<car.year<<"\n";
//     cout<<car.color<<"\n";
// }
// void paintCar(Car &car,string color){
//     car.color=color;
// }
// int factorial(int num){
//     if(num>1){
//         return num*factorial(num-1);
//     }else{
//         return 1;
//     }
// }

// void walk(int steps){
//     if(steps>0){
//         cout<<"you take a step\n";
//         walk(steps-1);
//     }
    
// }
// void drawBoard(char *spaces){
//     cout<<"     |     |    "<<"\n";
//     cout<<"  "<<spaces[0]<< "  |   " <<spaces[1]<<"   |    "<<spaces[2]<<"\n";
//     cout<<"_____|_____|______"<<"\n";
//     cout<<"  "<<spaces[3]<< "  |   " <<spaces[4]<<"   |    "<<spaces[5]<<"\n";
//     cout<<"_____|_____|______"<<" | " <<"\n";


    
// }
// void playerMove(char *spaces,char player){
    
// }
// void computerMove(char *spaces,char player,char computer){

// }
// bool checkWinner(char *spaces,char player,char computer){
//     return 0;
// }
// bool checkTie(char *spaces){
//     return 0;
// }
// int getDigit(const int number){
    
//     return number%10+(number/10%10); 
// }
// int sumOddDigits(const string cardNumber){
//     int sum=0;
//     for(int i=cardNumber.size()-1;i>=0;i-=2){
//         sum+=cardNumber[i]-'0';
//     }
//     return sum;
// }
// int sumEvenDigits(const string cardNumber){
//     int sum=0;
//     for(int i=cardNumber.size()-2;i>=0;i-=2){
//         sum+=getDigit((cardNumber[i]-'0')*2);
//     }
//     return sum;
// }
// void printInfo(const string name,const int age){
//     cout<<name<<"\n";
//     cout<<age<<"\n";
// }
// void swap(string &x,string &y){
// string temp;
// temp=x;
// x=y;
// y=temp;
// cout<<"X: "<<&x<<"\n";
// cout<<"Y: "<<&y<<"\n";
// }
// void sort(int array[],int size){
//     int temp;
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(array[j]<array[j+1]){
//                 temp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//             }
//         }
//     }   
// }

// int searchArray(string numbers[],int size,string element){
//     for(int i=0;i<size;i++){
//         if(numbers[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
// double getTotal(double prices[],int size){
//     double total=0;
//     for(int i=0;i<size;i++){
//         total+=prices[i];
//     }
//     return total;
// }
// char getUserChoice(){
//     char player;
//     cout<<"rock paper scissors game\n";
//     do{
//         cout<<"choose one of the following options\n";
//     cout<<"r for rock\n";
//     cout<<"p for paper\n";
//     cout<<"s for scissors\n";
//     cin>>player;
//     }while(player!='r' && player!='p' && player!='s');
//     return player;
// }
// char getComputerChoice(){
//     srand(time(NULL));
//     int num=rand()%3+1;
//     switch(num){
//         case 1: return 'r';
//         case 2: return 'p';
//         case 3: return 's';
//     }
//     return 0;
// }
// void showChoice(char choice){
//     switch(choice){
//         case 'r':
//         cout<<"Rock\n";
//         break;
//         case 'p':
//         cout<<"Paper\n";
//         break;
//         case 's':
//         cout<<"Scissors\n";
//         break;
//     }

// }
// void chooseWinner(char player,char computer){
//     switch(player){
//         case 'r':
//         if(computer=='r'){
//             cout<<"tie\n";
//         }else if(computer=='p'){
//             cout<<"you lose\n";
//         }else{
//             cout<<"you win\n";
//         }
//         break;
//         case 'p':
//         if(computer=='r'){
//             cout<<"you win\n";
//         }else if(computer=='p'){
//             cout<<"tie\n";
//         }else{
//             cout<<"you lose\n";
//         }
//         break;
//         case 's':
//         if(computer=='r'){
//             cout<<"you lose\n";
//         }else if(computer=='p'){
//             cout<<"you win\n";
//         }else{
//             cout<<"tie\n";
//         }
//         break;
//     }

// }
// void showBalance(double balance){
//     cout<<"your balance is : $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";
// }
// double deposit(){
//     double amount=0;
//     cout<<"enter the amount to be deposited ";
//     cin>>amount; 
//     if(amount>0){
//         return amount;
//     }else{
//         cout<<"invalid amount\n";
//         return 0;
//     }
// }
// double withdraw(double balance){
//     double amt=0;
//     cout<<"enter amount to be withdrawn: ";
//     cin>>amt;
//     if(amt>balance){
//         cout<<"insufficient funds\n";
//         return 0;
//     }else if(amt<0){
//         cout<<"invalid amount\n";
//         return 0;
//     }else{
//             return amt;

//     }
//     }
// void printNum(){
//     int myNum=2;
//     cout<<::myNum<<"\n";
// }
// double square(double length){
    
//     return length*length;
// }
// double cube(double length){
//     return length*length*length;
// }
// string concatStrings(string str1,string str2){
//     return str1+str2;
// }
// void happyBirthday(string name,int age){
//     cout<<"Happy Birthday to "<<name<<"\n";
//     cout<<"Happy Birthday to you "<<name<<"\n";
//     cout<<"Happy Birthday dear "<<name<<"\n";
//     cout<<"Happy Birthday to "<<name<<"\n";   
//     cout<<"You are "<<age<<" years old"<<"\n";   
// }
// void bakePizza(){
//     cout<<"here is your pizza\n";
// }
// void bakePizza(string topping1){
//     cout<<"here is your "<<topping1<<" pizza\n";
// }
