// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     cout<<"the special number from 10 to 100 ";
//     for(int num=10;num<=99;num++){
//         int x=num/10;
//         int y=num%10;
//         if((x + y + (x*y))==num){
//             cout<<num<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(( n & 1)==0){
//         cout<<"number is even ";
//     }else if((n & 1)!=0){
//         cout<<"number is odd : ";
//     }
//     return 0;
// }

// hamming weight of a number
// int n=45 
// #include<iostream>
// using namespace std;
// int main(){
//     int n; // this is for input 
//     cin>>n;
//     int count=0; // initialize the counter variable to keep track of the number 1s in binary form
//     while(n>0){ 
//         if(n & 1){ // checks for least significant bit rightmost bit
//             count++;// if true increment count by 1 
//         }
//         n=n>>1;
//     }
//     cout<<"the hamming weight is : "<<count<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int a=10,b=20;
//     a=a^b;
//     b=b^a;
//     a=a^b;
//     cout<<"a is : "<<a<<endl;
//     cout<<"b is : "<<b<<endl;
//     return 0;
// }
/*