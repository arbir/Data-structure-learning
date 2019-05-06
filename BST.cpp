
#include<bits/stdc++.h>
using namespace std;
class BST
{
public:
    int info,s;
    BST *left,*right;


};

BST *root=NULL;

void bst_creation(int data)
{
    BST *ptr;
    ptr=new BST();
    ptr->info=data;
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->s=1;
    if(root==NULL)
    {
        root=ptr;
    }
    else
    {
        BST *srt;

        for(srt=root;;)
        {
            if(srt->info>ptr->info)
            {
                if(srt->left==NULL)
                {
                    srt->left=ptr;
                    break;
                }

                else
                    srt=srt->left;
            }
            else if(srt->info<ptr->info)
            {
                if(srt->right==NULL)
                {
                    srt->right=ptr;
                    break;
                }
                else
                    srt=srt->right;
            }
           else
            {

                srt->s+=1;
                //srt->right=ptr;
                break;


            }




        }
    }







}
int in_order(BST *b)
{
    if(b==NULL)
    {
        return 0;
    }
    in_order(b->left);

    cout<<b->info;
    cout<<"the number of times: ";
    cout<<b->s<<endl;;
    in_order(b->right);
}





int main()
{
    int n,item;

    cout<<"enter the number of item :"<<endl;
    cin>>n;
    cout<<"enter the item:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        bst_creation(item);
    }
    in_order(root);



    return 0;

}
