#include <stdio.h>
int main()
{
	int year,month,day,d=0,totalday=0;
	scanf("%d %d %d",&year,&month,&day);

    //判断是否为闰年，x代表判断值
    int x=0;
    if(year%400==0){
        x++;
    } else if(year%100!=0&&year%4==0) {
        x++;
    }


	if(x==1)
	{
		switch(month)
		{
			case 1:
            d=0;
            break;

			case 2:
            d=31;
            break;

			case 3:
            d=60;
            break;

			case 4:
            d=91;
            break;

			case 5:
            d=121;
            break;

			case 6:
            d=152;
            break;

			case 7:
            d=182;
            break;

			case 8:
            d=213;
            break;

			case 9:
            d=244;
            break;

			case 10:
            d=274;
            break;

			case 11:
            d=305;
            break;

			case 12:
            d=335;
            break;
			
		
		}
	}
	else
	{
		switch(month)
		{
			case 1:
            d=0;
            break;

			case 2:
            d=31;
            break;

    		case 3:
            d=59;
            break;

			case 4:
            d=90;
            break;

			case 5:
            d=120;
            break;

			case 6:
            d=151;
            break;

			case 7:
            d=181;
            break;

			case 8:
            d=212;
            break;

			case 9:
            d=243;
            break;

			case 10:
            d=273;
            break;

			case 11:
            d=304;
            break;

			case 12:
            d=334;
            break;
			
		
		}
		
		
		
	}
	totalday=d+day;
	printf("%d\n",totalday);
	return 0;
}
