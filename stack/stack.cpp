#include<iostream>
#include<stack>
#include<string>
using namespace std;

// int main(){

//     stack<int> s;
//     s.push(2);
//     s.push(3);

//     //s.pop();
//     //cout<<a;

//     cout<<s.top()<<endl;
//     if(s.empty()){
//         cout<<"stack is empty";
//     }
//     else{
//         cout<<"not empty";
//     }
// }

/////////////////////////////////////////////////////////////////////////////
// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size){
//         this->size=size;
//         arr=new int[size];
//         top=-1;
//     }
//     void push(int element){
//         if(size-top>1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"stack overflow"<<endl;
//         }
//     }
//     int pop(){
//         if(top>=0){
//             int ans=arr[top];
//             top--;
//             return ans; 
//         }
//         else{
//             cout<<"stack underflow"<<endl;
//         }
//     }
//     int peek(){
//         if(top>=0){
//             return arr[top];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//     }
//     int empty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){

//     Stack st(5);
//     st.push(55);
//     st.push(22);
//     st.push(34);

//     cout<<st.peek()<<endl;
//     // cout<<st.empty();
//     cout<<st.pop()<<endl;
//     cout<<st.pop();
//     //cout<<st.peek();
// }


//insert 2 stack in one array
// class two_stack{
//     public:
//     int *arr;
//     int top1;
//     int top2;
//     int size;
//     two_stack(int size){
//         this->size=size;
//         top1=-1;
//         top2=size;
//         arr=new int[size];
//     }
//     void push1(int element){
//         //leave one empty space in between.
//         if(top2-top1>1){
//             top1++;
//             arr[top1]=element;
//         }
//         else{
//             cout<<"stack overflow";
//         }
//     }
//     void push2(int element){
//         //leave one empty space in between.
//         if(top2-top1>1){
//             top2--;
//             arr[top2]=element;
//         }
//         else{
//             cout<<"stack overflow";
//         }
//     }
//     int pop1(){
//         if(top1>=0){
//             int ans=arr[top1];
//             top1--;
//             return ans;
//         }
//         else{
//             cout<<"stack underflow";
//         }
//     }
//     int pop2(){
//         if(top2<size){  //agar equal hogya to index bahr chla jega;
//             int ans=arr[top2];
//             top2++;
//             return ans;
//         }
//         else{
//             cout<<"top2 is out of range"<<endl;
//         }
//     }
//     int peek1(){
//         if(top1>=0){
//             return arr[top1];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//     }
//     int peek2(){
//         if(top2<size){
//             return arr[top2];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//     }
// };
// int main(){
//     two_stack st(5);
//     st.push1(22);
//     st.push1(33);
//     cout<<st.peek1()<<" ";
//     cout<<st.pop1()<<endl;

//     st.push2(40);
//     st.push2(50);
//     cout<<st.peek2()<<" ";
//     cout<<st.pop2();
// }

//stack using linked list.
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }    
// };
// void push(Node* &head,int d){

//     Node* new_node=new Node(d);
//     new_node->next=head;
//     head=new_node;
// }
// void pop(Node* &head){
//     if(head==NULL){
//         cout<<"stack is underflow"<<endl;
//     }
//     else{
//         cout<<"pop element : "<<head->data<<endl;
//         head=head->next;
//     }
// }
// void display(Node* &head){
//     Node* temp=head;
//     if(temp==NULL){
//         cout<<"stack is underflow";
//     }
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next; 
//     }
// }
// int main(){
//     Node* node1=new Node(10);
//     Node* tail=node1;
//     Node* head=node1;

//     push(head,20);
//     push(head,30);
//     push(head,40);
//     display(head);
//     cout<<endl;

//     pop(head);
//     display(head);
// }


// reverse of string in stack.
// int main(){

//     string str="googy";
//     stack<char> s;
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         s.push(ch);
//     }
//     string ans="";
//     while(!s.empty()){
//         char ch=s.top();
//         ans=ans+ch;
//         s.pop();
//     }
//     cout<<ans;

// }


// reverse a sentence using stack.
// int main(){

//     string str="hello world";
//     stack<char> s;
//     for(int i=0;i<str.length();i++){
//         if(str[i]!=' '){
//             char ch=str[i];
//             s.push(ch);
//         }
//         else{
//             while(s.empty()==false){
//                 cout<<s.top();
//                 s.pop();
//             }
//             cout<<" ";
//         }
//     }
//     while(s.empty()==false){
//         cout<<s.top();
//         s.pop();
//     }
// }


// merge two stack.
// int main(){

//     stack<int> s1;
//     stack<int> s2;
//     s1.push(1);
//     s1.push(2);
//     s1.push(3);

//     s2.push(4);
//     s2.push(5);
//     s2.push(6);

//     stack<int> result1;
//     stack<int> result2;
//     stack<int> result;
//     while(!s1.empty()){
//         int r1=s1.top();
//         result1.push(r1);
//         s1.pop();
//     }
//     while(!s2.empty()){
//         int r2=s2.top();
//         result2.push(r2);
//         s2.pop();
//     }

//     while(!result1.empty()){
//         int r1=result1.top();
//         result.push(r1);
//         result1.pop();
//     }
//     while(!result2.empty()){
//         int r2=result2.top();
//         result.push(r2);
//         result2.pop();
//     }

//     while (!result.empty()) {
//         cout << result.top() << " ";
//         result.pop();
//     }
// }


// delete middle element.
// void delete_mid(stack<int>& s,int count,int size){
//     if(count==size/2){
//         s.pop();
//     }

//     int num=s.top();
//     s.pop();

//     delete_mid(s,count+1,size);

//     s.push(num);
// }
// void delte(stack<int>& s,int size){
//     int count=0;
//     delete_mid(s,count,size);
// }
// int main(){

//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     int size=0;
//     while(!s.empty()){
//         size++;
//         s.pop();
//     }
    
//     delte(s,size);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }


// valid parenthesis.
// int main(){

//     stack<char> st;
//     // string s="(([])}";
//     string s="()";
//     // string s="()[]{}";
//     // string s="(]";

//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//             st.push(s[i]);
//         }
//         else{

//             if(!st.empty()){
//                 if(st.top()=='(' && s[i]==')'){
//                     st.pop();
//                 }
//                 else if(st.top()=='[' && s[i]==']'){
//                     st.pop();
//                 }
//                 else if(st.top()=='{' && s[i]=='}'){
//                     st.pop();
//                 }
//             }
//         }
//     }
//     if(st.empty()){
//         cout<<"balanced";
//     }
//     else{
//         cout<<"not balanced";
//     }
// }


// insert element at bottom of stack.    //take a look.
// int main(){

//     int value=0;
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     stack<int> s2;
//     while(!s.empty()){
//         int t=s.top();
//         s2.push(t);
//         s.pop();
//     }

//     if(s.empty()==true){
//         s.push(value);
//     }

//     while(!s2.empty()){
//         int t=s2.top();
//         s.push(t);
//     }

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }


// sort a stack using temp. stack.
// int main(){

//     stack<int> s1;
//     stack<int> s2;
//     s1.push(34);
//     s1.push(3);
//     s1.push(31);
//     s1.push(98);
//     s1.push(92);
//     s1.push(23);

//     while(!s1.empty()){

//         int k=s1.top();
//         s1.pop();
//         while(!s2.empty() && s2.top()<k){
//             s1.push(s2.top());
//             s2.pop();
//         }
//         s2.push(k);
//     }
//     while(!s2.empty()){
//         cout<<s2.top()<<" ";
//         s2.pop();
//     }
// }


//reverse a number using stack. 
// int main(){

//     stack<int> s;
//     s.push(3);
//     s.push(7);
//     s.push(4);
//     s.push(9);

//     int reverse=0;
//     while(!s.empty()){

//         reverse=reverse*10+s.top();
//         s.pop();
//     }
//     cout<<reverse;
// }
