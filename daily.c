#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {
    int p,q,r,min,mil,sum;
    scanf("%d %d %d",&p,&q,&r);
    if( p<=q && p<=r)
    {
        min=p;
        if(q<=r)
        {
           mil=q;
        }
        else
        {
           mil=r;
        }
    }
    else if( q<=p && q<=r)
    {
        min=q;
        if(p<=r)
        {
           mil=p;
        }else
        {
            mil=r;
        }
    }
    else if( r<=q && r<=p)
    {
        min=r;
        if(q<=p)
        {
           mil=q;
        }else
        {
           mil=p;
        }
    }

    sum=min+mil;
    printf("\n%d",sum);        
    return 0;
}
