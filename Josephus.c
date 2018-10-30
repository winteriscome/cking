#include <stdio.h>
typedef struct node* link;
struct node {int item;link next;};

//git test
main(int argc,char *argv[]){
   int i,N=atoi(argv[1]), M =atoi(argv[2]);

   link t = malloc(sizeof *t), x= t;
   t->item = 1;
   t->next = t;

   for(i=2;i<=N;i++){
       x = (x->next = malloc(sizeof *x));
       x->item = i; x->next = t;
   } 

   while(x!= x->next){
       for(i=1;i<M;i++){
          x = x->next;
       }
        printf("%d\n",x->next->item);
        x->next = x->next->next;
        N--;
   }

   printf("%d\n",x->item);
}



//功能1

int a(){
       printf("333");
}


int dev(){
       printf("333");
}

//日志1
//日志2


//日志3

