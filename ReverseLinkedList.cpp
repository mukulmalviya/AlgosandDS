//takes linkedlist head and reverses the linkedlist recursively.

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
     if(head == nullptr)
        return head;
    //if(head->next == nullptr)
    //    return;
    static SinglyLinkedListNode* prevnode = nullptr;
    static SinglyLinkedListNode* activenode = head;
    static SinglyLinkedListNode* nextnode = head->next;
    
    
    activenode->next = prevnode;
    
    if(nextnode==nullptr)
    {
        return head;
    }
    
    prevnode = activenode;
    activenode = nextnode;
    nextnode = nextnode->next;
    head = activenode;
    
    return reverse(head);

}
