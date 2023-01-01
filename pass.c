#include <stdio.h>
int main()
{
    int phy ;
    int chem ;
    int math ;
    float total;
    float per;

    printf("enter your physics marks \n");
    scanf("%d",&phy);
    printf("enter your chemistry marks \n");
    scanf("%d",&chem);
    printf("enter your maths marks \n");
    scanf("%d",&math);
    total = phy + chem + math;
    per = (total*100)/300;
     
    if(phy >= 33 && chem >= 33 && math >= 33 && total >= 40 ){
        printf("your total percentage is %f and you are pass\n",per) ;
    }
    else{
        printf("your total percentage is %f and you are fail \n",per);
    }
    return 0;
}