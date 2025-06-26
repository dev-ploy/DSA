// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;
// int main(int argc, char** argv){
//     // int age=25;
//     // char grade='A';
//     // float PI=3.142f;
//     // bool isSafe=false;
//     // double price=100.99;
//     // cout<<age<<endl;
//     // cout<<grade<<endl;
//     // cout<<PI<<endl;
//     // cout<<isSafe<<endl;
//     // cout<<price<<endl;
//     // char grade='a';
//     // int value=grade;
//     // cout<<value<<endl;
//     // double price=100.99;
//     // int newPrice=(int)price;
//     // cout<<newPrice<<endl;
//     // double price;
//     // cout<<"Enter the price: ";
//     // cin>>price;
//     // cout<<"You entered the price as : "<<price<<endl;
//     // int a=5,b=2;
//     // cout<<"sum:" <<(a+b)<<endl;
//     // cout<<"difference:" <<(a-b)<<endl;
//     // cout<<"product:" <<(a*b)<<endl;
//     // cout<<"divide:" <<(a/b)<<endl;
//     // cout<<"remainder:" <<(a%b)<<endl;
//     // cout<<(a/(double)b)<<endl;
//     // cout<<(3 < 5)<<endl;
//     // cout<<(3 > 5)<<endl;
//     // cout<<(3 <= 3)<<endl;
//     // cout<<(3 >= 3)<<endl;
//     // cout<<(3 == 3)<<endl;
//     // cout<<(3 == 5)<<endl;
//     // cout<<(3 != 5)<<endl;
//     // cout<<(3 != 3)<<endl;
//     // cout<<!(3 < 1)<<endl;
//     // int a,b;
//     // cout<<"Enter value of a: ";
//     // cin>>a;
//     // cout<<"Enter value of b: ";
//     // cin>>b;
//     // int sum=a+b;
//     // cout<<"the sum of a and b: "<<sum<<endl;
//     // int a=10,b=++a;
//     // cout<<"value of b: "<<b<<endl;
//     // cout<<"value of a: "<<a<<endl;
//     // int a=10,b=a--;
//     // cout<<"b is : "<<b<<endl;
//     // cout<<"a is : "<<a<<endl;
//     // cout<<"hello: ";
//     // for(int i=0;i<argc;i++){
//     //     cout<<argv[2];
//     // }
//     // cout<<endl;
//     if(argc!=2){
//         cout<<"missing command line arguments:\n";
//         return 1;
//     }
//     cout<<"hello "<<argv[1];
//     return 0;
// }
// #include<iostream>
// // using namespace std;

// // int main(){

// //   int arr[5]={1,2,3,4,5};
// //   int n=5;
// //   int temp=arr[n-1];
// //   for(int i= n - 1 ; i>=0 ; i-- ){
// //     arr[i]=arr[i-1];
// //   }
// //   arr[0]=temp;
// //   for(int i=0;i <  n ;i++){
// //     cout<<arr[i]<<" ";
// //   }
// // //   cout<<endl;
// // //   return 0;
// // // }
// // #include<iostream>
// // using namespace std;

// // void rotateByOne(int arr[5],int size){
// //   int n=arr[0]/sizeof(int);
// //   int temp=arr[n-1];
// //   for(int i = n - 1;i>=0;i--){
// //     arr[i]=arr[i-1];
// //   }
// //   arr[0]=temp;
// //   for(int i=0;i < n ;i++){
// //     cout<<arr[i]<<" ";
// //   }
// //   cout<<endl;
// // }
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     int n=5;
// //     rotateByOne(arr,n);
// //     for(int val:arr){
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;

// // void rotateClockWise(int arr[],int n,int d){
// //     d=d % n;
// //     int temp[n];
// //     for(int i=0;i <n;i++){
// //         temp[(i+d) %n]=arr[i];
// //     }
// //     for(int i=0;i<n;i++){
// //         arr[i]=temp[i];
// //     }
// // }
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     int n=5;
// //     rotateClockWise(arr,n,3);
// //     for(int val:arr){
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// void odd(int n);
// void even(int n);
// void odd(int n){
//     if(n > 10)return;
//     cout<<n<<" ";
//     even(n+1);
// }
// void even(int n){
//     if(n> 10) return;
//     cout<<n<<" ";
//     even(n+1);

// }
// int main(){
//     odd(2);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int findCatalan(int n){
//     if(n<=1){
//         return 1;
//     }
//     int res=0;
//     for(int i=0;i<n;i++){
//         res+=findCatalan(i)*findCatalan(n-i-1);
//     }
//     return res;
// }
// int main(){
//     for(int i=0;i<10;i++){
//         cout<<findCatalan(i)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
int x=10;