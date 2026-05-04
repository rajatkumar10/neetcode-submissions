/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void insertintbetween(Node*head){
   Node* temp = head;
    while(temp != NULL){
        Node* nextElement = temp->next;
        // Create a new node with the same data
        Node* copy = new Node(temp->val);  
        copy->next = nextElement; 
        temp->next = copy;         
        // Move to the next original node
        temp = nextElement;         
    }
}
void connectrandom(Node*head){
    Node* temp = head;
    while(temp != NULL){
        // Access the copied node
        Node* copyNode = temp->next;    
        if(temp->random){   
            copyNode->random = temp->random->next; 
        }
        else{
            copyNode->random = NULL;   
        }
         // Move to the next original node
        temp = temp->next->next;   
    }
}
Node*getdeepcopy(Node*head){
   Node* temp = head;
     // Create a dummy node
    Node* dummyNode = new Node(-1);   
    // Initialize a result pointer
    Node* res = dummyNode;             
    while(temp != NULL){
        res->next = temp->next;
        res = res->next;
        temp->next = temp->next->next;
        temp = temp->next;
    }
     // Return the deep copy of the
     // list starting from the dummy node
    return dummyNode->next;   
}
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        insertintbetween(head);
        connectrandom(head);
        return getdeepcopy(head);
    }
};