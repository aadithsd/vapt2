#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 3

struct acl
{
    char name[20];
    int r,w,x;
};

struct acl acl[MAX] =
{
    {"aadi",1,1,1},
    {"vp",1,1,0},
    {"dans",0,1,0}
};

int main()
{
    char name[10],op[2];
    int i,f=0;
    printf("enter name of user: ");
    scanf("%s",name);

    for(i=0;i<MAX;i++)
    {
        if(strcmp(name,acl[i].name)==0)
        {
            f=1;
            printf("\n enter operation: (r/w/x)");
            scanf("%s",op);

            if((strcmp(op,"r")==0  && acl[i].r) ||
               (strcmp(op,"w")==0 && acl[i].w) ||
               (strcmp(op,"x")==0 && acl[i].x)
               )

               printf("user: %s has permission to %s.\n",name,op);
            else
                printf("user: %s does not have permission to %s.\n",name,op);

            break;
        }
    }
    if(!f)
        printf("user does not exist.");
    return 0;
}
