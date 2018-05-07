#include<stdio.h>
main()
{

    int units,custom_no;
    double charges;
    printf("enter your customar no. & units:\n");
    scanf("%d %d",&custom_no,&units);
    if(units<=200)
    {
        charges=0.5*units;
    }
    else if(units<=400)
    {
        charges=100+0.65*(units-200);
    }
    else if(units<=600)
    {
        charges=230+0.80*(units-400);
    }
    else
    {
        charges=390+1*(units-600);
    }
    printf("\nfor customar no:%d: total bill is=%lf\n",custom_no,charges);

}
