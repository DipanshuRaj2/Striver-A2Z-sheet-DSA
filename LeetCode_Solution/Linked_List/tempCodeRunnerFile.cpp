Node* Detect_Loop(Node* head){
    Node* temp = head;
    unordered_map<Node*, int>ump;
    while(temp != nullptr){
        if(ump.find(temp) != ump.end()){
            return temp;
        }
        ump[temp]++;
        temp = temp -> next;
    }
    return nullptr;
}
