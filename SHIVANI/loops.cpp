 

Node* getStartingNode(Node* head) {
//loop kaunse node se shuru horha h wo pta krne ke lye

    if(head == NULL) //jab koi bhi node naaho
        return NULL;

    Node* intersection = floydDetectLoop(head);  //intersection slow k index store karega where loop happened 
    
    if(intersection == NULL)   //agar intersection null ko equal hooote tho return null karo
        return NULL;
    
    Node* slow = head; //ek naya pointer bnao slow ke naam pe jo head ko point karega

    while(slow != intersection) {   //jab tak wo slow pointer intersection wale point mein naa pahunch rhaa iterate karte raho
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

Node *removeLoop(Node *head)
{
    //remove krna h loop
    //agar head mein koi node nahi hai tho return null krna karo 
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head); //loop jis node se shuru hoota h wo start of loop mein rahega
    
    if(startOfLoop == NULL)  //agar wo null h tho head return karega
        return head;
    
    Node* temp = startOfLoop;  //temp ek pointer bnao wo loop k start mein jo node h usko point krta ho

    while(temp -> next != startOfLoop) {
        temp = temp -> next; //phir usko iterate karao jab tak wo phirse wahi nahi pahunchjaata
    } 

    temp -> next = NULL; //phir usske next ko null kardo
    return head;   //linked list wapas kardo
}