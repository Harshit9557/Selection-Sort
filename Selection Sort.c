#include<stdio.h>
int main()
{
    int n,i,j,t,*p,min;
    printf("Enter Limit of Array :\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(*(p+min)>*(p+j))
                min=j;
        if(min!=i)
        {
            t=*(p+i);
            *(p+i)=*(p+min);
            *(p+min)=t;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    free(p);
    p=NULL;
    return 0;
}
