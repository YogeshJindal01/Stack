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

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }    
};
void push(Node* &head,int d){

    Node* new_node=new Node(d);
    new_node->next=head;
    head=new_node;
}
void pop(Node* &head){
    if(head==NULL){
        cout<<"stack is underflow"<<endl;
    }
    else{
        cout<<"pop element : "<<head->data<<endl;
        head=head->next;
    }
}
void display(Node* &head){
    Node* temp=head;
    if(temp==NULL){
        cout<<"stack is underflow";
    }
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next; 
    }
}
int main(){
    Node* node1=new Node(10);
    Node* tail=node1;
    Node* head=node1;

    push(head,20);
    push(head,30);
    push(head,40);
    display(head);
    cout<<endl;

    pop(head);
    display(head);
}