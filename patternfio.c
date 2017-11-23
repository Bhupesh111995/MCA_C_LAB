#include<stdio.h>
#include<math.h>
void main()
{
 	double num =1234;

	for(int i=4;i>0;i--){
	double p=pow(10,i);
		printf("%.lf\n",fmod(num,p));
		
	}
}
/*OUTPUT:-
bhupesh@linux ~/Documents/Ctry/211 $ ./patternfio 
1234
234
34
4

*/















/*printf("%d\n",num);
	printf("%-4.3d\n",num);
	printf("%-4.2d\n",num);
	printf("%-4.1d\n",num);*/


