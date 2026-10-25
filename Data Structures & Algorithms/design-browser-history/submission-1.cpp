struct Node
{
    string val;
    Node* next;
    Node* prev;

    Node(string value, Node* nextValue = nullptr, Node* prevValue = nullptr)
    {
        val = value;
        next = nextValue; 
        prev = prevValue;
    }
};


class BrowserHistory 
{
    Node* head;
    Node* current;

public:
    BrowserHistory(string homepage) 
    {
        head = new Node(homepage);
        current = head;
    }
    
    void visit(string url) 
    {
        // main thing is need to visit a new page, it is not already there in the history!!
        // A<>B<>C<>D. Currently at B, need to visit E

        Node* node = current->next;
        // node at C 
        // clear the node C and D 
        while(node)
        {
            Node* next = node->next;
            delete node;
            node = next;
        }

        // now we have A<>B, current is at B 
        // create a new url 
        Node* newPage = new Node(url);
        current->next = newPage;
        // link the newPage
        newPage->next = nullptr;
        newPage->prev = current;
        // update the current page 
        current = newPage;
    }
    
    string back(int steps) 
    {
        for(int i = 0; i < steps; ++i)
        {
            if(current->prev == nullptr)
            {
                break;
            }
            Node* backPage = current->prev;
            current = backPage;
        }
        return current->val;
    }
    
    string forward(int steps) 
    {
        for(int i = 0; i < steps; ++i)
        {
            if (current->next == nullptr)
            {
                break;
            }
            Node* nextPage = current->next;
            current = nextPage;
        }    

        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */