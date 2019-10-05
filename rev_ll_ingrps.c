#define NULL 0
struct node{
    int data;
    struct node *next;
}*head=NULL,*temp;
main()
{
    add(7);
    add(3);
    add(10);
    add(20);
    add(2);
    add(45);
    reverse_ingroups();
    display();
}
void add(int num){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    if(head==NULL){
        head = (struct node *)malloc(sizeof(struct node));
        head = temp;
    }
    else if(head->next == NULL) {
        head->next = temp;
    }
    else
    {
        struct node *start = head;
        while(start->next!=NULL){
            start = start->next;
        }
        start->next = temp;
    }
}
reverse_ingroups()
{
    struct node *prev=NULL,*currnode=head;
    while(currnode){
        head = head->next;
        currnode->next = prev;
        prev = currnode;
        currnode = head;
    }
    head = prev;
}
void display()
{
    struct node *start = head;
    while(start){
        printf("%d ",start->data);
        start = start->next;
    }
}
