#include<stdio.h>
int main()
{
    double Unit,Bill,a,Bill1,Bill2,Bill3,addBill;
    scanf("%lf",&Unit);

    if(Unit>=0&&Unit<=150)
    {
        Bill = Unit*4.5;
    }

    else if(Unit>150&&Unit<=450)
    {
        a = Unit -150;
        Bill1 = 150*4.5;
        Bill2 = a*5.5;
        Bill = Bill1+Bill2;
    }

    else if(Unit>450)
    {
        a = Unit -450;
        Bill1 = 150*4.5;
        Bill2 = 300*5.5;
        Bill3 = a*7;
        Bill = Bill1+Bill2+Bill3;
        if(Bill>10000)
        {
             printf("Before Addtional surcharge Net bill: %.3lf\n",Bill);
            addBill = Bill*(15/(double)100);
            printf("Net bill: %.3lf\n",addBill);
            Bill = Bill + addBill;
        }
    }
    printf("Net bill: %.3lf\n",Bill);
    return 0;
}
