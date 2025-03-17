#include<stdio.h>
int main()
{
	 float a,b;
	 scanf("%f %f",&a,&b);
	 float shuzu[20]={b};
	 for(int c=1;c<a;c++){
	 	shuzu[c]=shuzu[c-1]*(-1)*b*b/((2*c)*(2*c+1))*1.0;
	 }
	 float sum;
	 for(int d=0;d<a;d++){
	 	sum+=shuzu[d];
	 }
	 printf("%.4f",sum);
	 return 0;
}
