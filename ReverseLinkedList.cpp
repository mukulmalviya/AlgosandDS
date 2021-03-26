//takes linkedlist head and reverses the linkedlist recursively.

void reversePrint(SinglyLinkedListNode* head) {
    if(head == nullptr)
        return;
    //if(head->next == nullptr)
    //    return;
    static SinglyLinkedListNode* prevnode = nullptr;
    static SinglyLinkedListNode* activenode = head;
    static SinglyLinkedListNode* nextnode = head->next;
    
    
    activenode->next = prevnode;
    
    if(nextnode==nullptr)
    {
        while(head != nullptr)
        {
            cout<<head->data<<endl;
            head = head->next;  
        }
        return;
    }
    
    prevnode = activenode;
    activenode = nextnode;
    nextnode = nextnode->next;
    head =activenode;
    
    reversePrint(head);
    
}
