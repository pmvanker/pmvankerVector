#include <stdio.h>
#include <stdlib.h>

struct st
{
    unsigned int result :1;
    int rollno,marks;
    char *name;
    struct date
    {
        int day,month,year;
    }dob,doj;
};
int main()
{
    int i,j,ele;
    printf("Enter the Ele\n");
    scanf("%d",&ele);
    struct  st *s[ele],*temp;
    for(i=0;i<ele;i++)
    {
        s[i]=malloc(sizeof(struct st));
        s[i]->name=malloc(20);
    }
    for(i=0;i<ele;i++)
    {
        printf("Enter the rollno\n");
        scanf("%d",&s[i]->rollno);
        printf("Enter the name\n");
        scanf("%s",s[i]->name);
        printf("Enter the DOB\n");
        scanf("%d%d%d",&s[i]->dob.day,&s[i]->dob.month,&s[i]->dob.year);
        printf("Enter the marks\n");
        scanf("%d",&s[i]->marks);
        if(s[i]->marks<35)
            s[i]->result=0;
        else
            s[i]->result=1;
    }


    printf("rollno\tname\tDOB\t\tResult\n");
    for(i=0;i<ele;i++)
    {
        printf("%d\t%s\t%d:%d:%d\t\t",s[i]->rollno,s[i]->name,s[i]->dob.day,s[i]->dob.month,s[i]->dob.year);
        (s[i]->result)?printf("Pass\n"):printf("Fail\n");
    }
    for(i=0;i<ele-1;i++)
    {
        for(j=0;j<ele-1-i;j++)
        {
            if(s[j]->rollno > s[j+1]->rollno)
            {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
            }
        }
    }

    printf("rollno\tname\tDOB\t\tResult\n");
    for(i=0;i<ele;i++)
    {
        printf("%d\t%s\t%d:%d:%d\t\t",s[i]->rollno,s[i]->name,s[i]->dob.day,s[i]->dob.month,s[i]->dob.year);
        (s[i]->result)?printf("Pass\n"):printf("Fail\n");
    }
return 0;
}

