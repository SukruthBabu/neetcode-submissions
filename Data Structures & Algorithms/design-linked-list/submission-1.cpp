struct ListNode
{
    int val = 0; 
    ListNode* next;

    ListNode(int value, ListNode* nextNode = nullptr, ListNode* prevNode = nullptr)
    {
        val = value;
        next = nextNode;
    }
};


class MyLinkedList 
{
    ListNode* dummy;
    int size = 0;

public:
    MyLinkedList() 
    {
        dummy = new ListNode(0);
    }

    ~MyLinkedList()
    {
        size = 0;
    }
    
    int get(int index) 
    {
        // first node will be next of the dummy node
        ListNode* cur = dummy->next;
        if (index < 0 || index >= size)
        {
            // retunrn -1 as it is invalid
            return -1;
        }

        // iterate till the index, cur->next will point to the pos of the index'th element
        for(int i = 0; i < index; ++i)
        {
            cur = cur->next;
        }

        // return its value;
        return cur->val;
    }
    
    void addAtHead(int val) 
    {
        addAtIndex(0, val);    
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) 
    {
        if(index < 0 || index > size)
        {
            return;
        }

        ListNode* prev = dummy;

        // Find the node before the insertion position 
        for(int i = 0; i < index; ++i)
        {
            prev = prev->next;
        }

        // create a new node 
        ListNode* newNode = new ListNode(val);

        newNode->next = prev->next; 
        prev->next = newNode; 

        ++size;
    }

    void deleteAtIndex(int index) 
    {
        if(index < 0 || index >= size)
        {
            return; 
        }

        ListNode* prev = dummy;

        // Find the node before the deletion position 
        for(int i = 0; i < index; ++i)
        {
            prev = prev->next;
        }

        // Node to delete 
        ListNode* nodeToDelete = prev->next;
        prev->next = nodeToDelete->next;
        
        delete nodeToDelete;
        --size;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */