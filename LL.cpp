// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
    
//         Node(int val){
//             data=val;
//             next=NULL;
//         }
// };
// class LinkedList{
//     Node* head;
//     Node* tail;
// public:
//     LinkedList(){
//         head=tail=NULL;
//     }
//     void pop_front(){
//         if(head==NULL){
//             cout<<"LL is empty\n";
//             return;
//         }
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     void pop_back(){
//         if(head==NULL){
//             cout<<"LL is empty\n";
//             return;
//         }
//         Node*temp=head;
//         while(temp->next!=tail){
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         delete tail;
//         tail=temp;
//     }
//     void insert(int val,int pos){
//         if(pos<0){
//             cout<<"Invalid pos: "<<"\n";
//             return;
//         }
//         if(pos==0){
//             push_front(val);
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<pos-1;i++){
//             if(temp==NULL){
//                 cout<<"invalid pos\n";
//                 return;
//             }
//             temp=temp->next;
//         }
//         Node* newNode=new Node(val);
//         newNode->next=temp->next;
//         temp->next=newNode;
//     }
//     void push_front(int val){
//         Node* newNode=new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//             return;
//         }else{
//             newNode->next=head;
//             head=newNode;
//         }
//     }
//     void print_list(){
//         Node*temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL "<<endl;
//     }
//     bool hasCycle(){
//         Node* slow=head,fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 return;
//             }
//         }
//     return false;

// }
//     int search(int key){
//         Node* temp=head;
//         int idx=0;
//         while(temp!=NULL){
//             if(temp->data==key){
//                 return idx;
//             }
//             temp=temp->next;
//             idx++;
//         }
//         return -1;
//     }
// };
// int main(){
//     LinkedList ll;
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.insert(4,0);
//     ll.print_list();
//     cout<<ll.search(5)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int Josh(int N,int k){
//     int i=1,ans=0;
//     while(i<=N){
//         ans=(ans+k)%i;
//         i++;
//     }
//     return ans+1;
// }
// int main(){
//     int N=7,k=3;
//     cout<<Josh(N,k)<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// vector<int>duplicateCount(vector<int>&arr){
//     unordered_map<int,int>freqMap;
//     int n=arr.size();
//     vector<int> result;
//     for(int i=0;i<n;i++){
//         freqMap[arr[i]]++;
//     }
//     for(auto &entry:freqMap){
//         if(entry.second>1){
//             result.push_back(entry.first);
//         }
//     }
//     if(result.empty()){
//             result.push_back(-1);
// //         }
// //     return result;
// // }

// // int main(){
// //     vector<int> arr={1,2,2,3,3,4};
// //     vector<int>ans=duplicateCount(arr);
// //     for(int val:ans){
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
// //     return 0;
// // }
// // #include<iostream>
// // #include<stack>
// // using namespace std;

// // // bool isParenthesis(string s){
// // //     stack<char> st;
// // //     for(int i=0;i<s.length();i++){
// // //         if(s[i]=='(' && s[i]=='{' && s[i]=='['){
// // //             st.push(s[i]);
// // //         }else{
// // //             if(st.empty()! && ((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']'))){
// // //                 st.pop();
// // //             }else{
// // //                 return false;
// // //             }
// // //         }
// // //     }
// // //     return st.empty();
// // // }
// // int main(){
// //     string balanced="{([])}";
// //     if(isParenthesis(balanced)){
// //         cout<<"true";
// //     }else{
// //         cout<<"false";
// //     }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// int main(){
//     int cols;
//     cin>>cols;
//     for(int r=1;r<=3;r++){
//         for(int c=1;c<=cols;c++){
//             if((r==1 && c%4==3) || (r==2 && c%2==0) || (r==3 && c%4==1)){
//                 cout<<"* ";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
    
