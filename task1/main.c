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
		printf("΢�ַ��̵Ķ�ֵ̬Ϊ%f,��ʱx��ȡֵΪ%f", x, y);


	return 0;
}
