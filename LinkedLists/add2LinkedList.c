#define NULL 0
struct node{
    int data;
    struct node *next;
}*head=NULL;
main()
{
    //add(4);
    add(4);
    add(5);
    int num1 = convert();
    printf("%d\n",num1);
    add(3);
    add(4);
    add(5);
    int num2 = convert();
    printf("%d\n",num2);
    int sum = num1+num2;
    while(sum!=0)
    {
        add(sum%10);
        sum/=10;
    }
    display();
}
add(int num){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    if(head==NULL){
        head = (struct node*)malloc(sizeof(struct node));
        head = temp;
    }
    else if(head->next==NULL){
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
int convert()
{
    struct node *start = head;
    int num=0;
    while(start)
    {
        //printf("%d ",start->data);
        num = (num*10) + (start->data);
        start=start->next;
    }
    head=NULL;
    return num;
}
void display()
{
    struct node *temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
