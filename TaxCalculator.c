#include<stdio.h>


void main()
{
    
    float mp, bp, con, pr ;
    printf("Base Pay: ");
    scanf("%f", &bp);
    printf("%.3f", bp);
    
    if(bp<300000 )
    {
        con=0;
        pr = 0;
        mp = bp;
    }
    else if(bp>=300000 && bp<600000)
    {
        con=0;
        pr = 0.05*bp;
        mp = bp-pr;
    }
    else if(bp>=600000 && bp<900000)
    {
        con=15000;
        pr = 0.1*bp;
        mp = bp-pr-con;
    }
    else if(bp>=900000 && bp<1200000)
    {
        con=45000;
        pr = 0.15*bp;
        mp = bp-pr-con;
    }
    else if(bp>=1200000 && bp<1500000)
    {
        con=90000;
        pr = 0.2*bp;
       mp = bp-pr-con;
    }
    else if(bp>=1500000)
    {
        con=150000;
        pr = 0.3*bp;
        mp = bp-pr-con;
    }
    printf("\nBase Pay after deductions (Monthly): %.3f \nYearly: %.3f\nTax deduced (Yearly): %.3f", mp/12, mp, bp-mp );
    
}