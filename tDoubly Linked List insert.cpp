/* Function to insert a node at the
beginning of the tDoubly Linked Lis */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* since we are adding at the beginning,
    prev is always NULL */
    new_node->prev = NULL;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
