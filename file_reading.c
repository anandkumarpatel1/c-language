#include <stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("anand.txt","r");
if (ptr == NULL)
{
    printf("This file is not avaliable\n");
}
else
{
int n1;
int n2;
int n3;
fscanf(ptr,"%d %d %d",&n1,&n2,&n3);
fclose(ptr);
printf("the vlaue is: %d \n",n1);
printf("the vlaue is: %d \n",n2);
printf("the vlaue is: %d \n",n3);

}
return 0 ;
}