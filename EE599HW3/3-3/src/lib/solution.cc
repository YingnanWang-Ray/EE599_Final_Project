#include "solution.h"
#include<iostream>
SinglyLinkedList::SinglyLinkedList(){
    head_=NULL;
}
SinglyLinkedList::SinglyLinkedList(const std::vector<int> inputs, int i){
    ListNode *p = new ListNode(0);
    int size = inputs.size();
    head_ = p;
    for (int n = 0; n < size-1; n++)
    {   
        p->val = inputs[n];
        ListNode *newp = new ListNode(0);
        p->next = newp;
        //p = newp;
        p = p->next; 
    }
    p->val=inputs[size-1];
    if ( i == -1)
    {
        p->next = nullptr;
    }
    else if (i >= size)
    {
        p->next = nullptr;
    }
    else
    {
        ListNode *temp = head_;
        for(int j = 0; j!=i; j++)
        {
            temp = temp->next;
        }
        p->next = temp;
    }
}

bool SinglyLinkedList::empty(){
    if(head_->next==NULL)
    {
        return true;
    }    
    else
    {
        return false;
    }
}

int SinglyLinkedList::size(){
    ListNode *p = head_;
    int size = 0;
    while(p!=NULL){
        size++;
        p = p->next;
    }
    return size;
}

void SinglyLinkedList::push_back(int i){
    ListNode *p = new ListNode(0);
    p->val = i;
    p->next = nullptr;
  
    ListNode *current_node = head_;              
    if (head_ == NULL) {           
        head_ = p;
    }
    else                          
    {
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = p;
    }
}

void SinglyLinkedList::push_front(int i){
    ListNode *p = new ListNode(0);
    p->val = i;
    p->next = head_;
    head_ = p;
}

void SinglyLinkedList::insert_after(ListNode *p, int i){
    if(head_==NULL){                               
        head_ = p; 
        p->val = i;                
        return;                
    }
    ListNode *current_node = head_;  
    if(current_node->val==p->val){      
        p -> val = i;
        head_->next = p;    
        p -> next = nullptr;      
        return;
    }
    while(current_node ->val != p->val){
        current_node = current_node -> next;          
    }
    if(current_node->val == p->val){            
        p -> next = current_node -> next;
        p -> val = i;
        current_node -> next = p;
    }
}

void SinglyLinkedList::erase(ListNode* p){
    if(head_==NULL){
        return;       
    }
    ListNode *current_node = head_;                         
    if(current_node->val==p->val){
        head_ = head_->next;     
        delete current_node;   
        return;
    }
    while(current_node -> next->val != p->val){ 
        current_node = current_node -> next;            
    }
    if(current_node -> next ->val == p -> val){            
        ListNode *delete_node = current_node -> next;     
        current_node -> next = current_node -> next -> next;
        delete delete_node;      
    }
 
}

void SinglyLinkedList::pop_front(){
    if(head_==NULL){
        return;       
    }
    head_->val = head_->next->val;
    head_->next = head_->next->next;

}

void SinglyLinkedList::pop_back(){
    if(head_==NULL){
        return;       
    }
    ListNode *current_node = head_;                         
    while(current_node -> next -> next != NULL){ 
        current_node = current_node -> next;            
    }
    if(current_node -> next -> next == NULL){                
        current_node -> next = NULL;     
    }    
}

int SinglyLinkedList::back(){
    if(head_==NULL){                                              
        return 0;                
    }
    ListNode *p = head_;
    while(p->next != NULL){
        p = p->next;
    }
    return p->val;

}

int SinglyLinkedList::front(){
    return head_->val;
}
ListNode* SinglyLinkedList::GetBackPointer(){
    if(head_ == NULL){
        return head_;       
    }
    ListNode *current_node = head_;                         
    while(current_node -> next != NULL){ 
        current_node = current_node -> next;            
    }
    if(current_node -> next == NULL){                
        return current_node;     
    }    

}
ListNode* SinglyLinkedList::GetIthPointer(int i){
    if(head_ == NULL){
        return head_;       
    }
    ListNode *current_node = head_; 
    int n = 0;                        
    while(n!=i-1){ 
        current_node = current_node -> next;
        n++;            
    }              
    return current_node;     
  
}

void SinglyLinkedList::print(){
    if(head_==NULL){
        return;       
    }
    ListNode *current_node = head_;                         
    while(current_node -> next != NULL){ 
        std::cout<<current_node->val<<" "; 
        current_node = current_node -> next;
    }
    if(current_node -> next == NULL){            
        std::cout<<current_node->val<<" "<<std::endl;    
    }
     
}
