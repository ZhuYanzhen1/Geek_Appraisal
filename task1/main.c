#include <stdio.h>

int main()
{
	double a = 1,x=0,y=0,t=0;
	float h = 0.001;
		y = a*(1-h);
		t = a - y;
		printf("x=%lf,y=%lf\n", x, y);
		while (t >= 0.001*h)
		{
			x += h;
			a = y;
			y = a * (1 - h);
			t = a - y;
			printf("x=%lf,y=%lf\n", x, y);
		}
		printf("微分方程的定态值为%f,此时x的取值为%f", x, y);


	return 0;
}
