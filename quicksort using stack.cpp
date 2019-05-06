#include <iostream>
 #include <cstdlib>
 using namespace std;
 template<class Item>
 class STACK{
 private:
     Item *a;int n;
 public:
     STACK(int maxN){

         a=new Item[maxN];
         n=0;
     }
     int empty()const {
         return n==0;

     }
     void push(Item item){
         a[n++]=item;
         }
    Item pop() {
         return a[--n];

    }


 };
 template<class Item>
 int partition (Item a[],int l,int r){

     int i=l-1;
     int j=r;
     Item v=a[r];
      for (;;){

           while (a[++i]<v);
           while (v<a[--j])  if (j==i) break;
            if (i>=j) break;
             Item t=a[i];
             a[i]=a[j];
             a[j]=t;
      }

       Item s=a[i];
        a[i]=a[r];
        a[r]=s;
        return i;
        }
 inline void push2(STACK<int>&s,int a,int b){
     s.push(b);
     s.push(a);
     }



 template<class Item>
 void quicksort(Item a[],int l,int r){

     STACK<int> s(50);
     push2(s,l,r);
     while (!s.empty()){
    int l=s.pop();
    int r=s.pop();
       if (r<=l) continue;
       int i=partition(a,l,r);
        if(i-1>r-1)
        { push2(s,l,i-1);  push2(s,i+1,r);
        }
        else{
            push2(s,i+1,r);
            push2(s,l,i-1);

        }
     }
 }

 int main(){

     int a[]={45,12,30,67,11,17,50,78};
     int n=sizeof(a)/sizeof(a[0]);
     quicksort(a,0,n-1);
      for (int i=0;i<n;i++)
          cout<<a[i]<< "  ";
      return 0;

 }
