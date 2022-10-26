#include <stdio.h>

int main() {
	double y = 2;
	double x = 0;
	printf("Please enter something\n");
	
	printf("       x          y\n");

	
	while( y -y*0.9990005> 0.000001){
		x = x+0.000001;
		y = y*0.9990005;
		printf("   %f     %f\n",x,y);
	}
		
	printf("The final stationary state is%f\n",y);
	return 0;
}

