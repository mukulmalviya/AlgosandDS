//Iterative approach for reversing a LL

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if(head == nullptr)
        return head;
    SinglyLinkedListNode* i = nullptr;
    SinglyLinkedListNode* j = head->next;
    while(head->next != nullptr)
    {
        head->next = i;
        i = head;
        head = j;
        j = j->next;
    }
    if(head->next == nullptr)
    {
        head->next = i;
    }
    return head;
}
