#include <iostream>
using namespace std;
struct node{
    struct node* left;
    struct node* right;
    char info;
};
struct node* head=NULL;
struct node* tail=NULL;

void Insert(char info){
struct node *p;
p= new(struct node);
if(head==NULL && tail==NULL){
p->info=info;
p->right=NULL;
p->left=NULL;
head=p;
tail=p;
}
else{
p->info=info;
p->right=NULL;
tail->right=p;
p->left=tail;
tail=p;
}
}

void Delete_last(){
    if(head==NULL && tail==NULL){
        cout<<"List empty,nothing to display"<<endl;
        return;
    }
    else{
        tail=tail->left;
        tail->right=NULL;
    }
}

void Delete_element(char value){
        if(head==NULL && tail==NULL){
        cout<<"List empty,nothing to display"<<endl;
        return;
    }
    else{
        struct node* s;
        s=head;
        if(head->info==value){
            head=head->right;
            head->left=NULL;
            return;
        }
        else{
        while(s->right->right!=NULL){
            if(s->right->info==value){
                struct node* temp;
                temp=s->right;
                temp->right->left=s;
                s->right=temp->right;
                delete(temp);
                return;

            }
            s=s->right;
        }
        }
    }
}

void Print_List(){
        struct node *q;

    if (head == NULL)

    {

        cout<<"List empty,nothing to display"<<endl;

        return;

    }

    q = head;

    cout<<"The Doubly Link List is :"<<endl;

    while (q != NULL)

    {

        cout<<q->info<<" <-> ";

        q = q->right;
    }
}

int main() {
    int choice;
    char element, position;
int i=5;
    while (i>0)

    {
        cout<<endl<<"----------------------------"<<endl;
        cout<<endl<<"Operations on Doubly linked list"<<endl;
        cout<<endl<<"----------------------------"<<endl;
        cout<<"1.Create Node"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"8.Quit"<<endl;
                cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>element;
            Insert(element);
            cout<<endl;
            break;
        case 4:
            if (head == NULL)
            {
                cout<<"List empty,nothing to delete"<<endl;
                break;
            }
            cout<<"Enter the element for deletion: ";
            cin>>element;
            Delete_element(element);
            cout<<endl;
            break;
        case 5:
            Print_List();
            cout<<endl;
            break;
        default:
            cout<<"Wrong choice"<<endl;
}
i--;
    }

    return 0;

}
