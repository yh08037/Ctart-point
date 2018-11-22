#include <stdio.h>
#include <math.h>

struct ThreeDime {
	double x;
	double y;
	double z;
};

typedef struct ThreeDime ThreeDime;

double Distance1(ThreeDime*a){
	double d;
	d = sqrt(a->x * a->x + a->y * a->y + a->z * a->z);
	return d;
}

double Distance2(ThreeDime*a, ThreeDime*b){
	double d;
	d = sqrt((a->x-b->x)*(a->x-b->x)+(a->y-b->y)*(a->y-b->y)+(a->z-b->z)*(a->z-b->z));
	return d;
}

ThreeDime SymOri(ThreeDime*a){
	a->x = -a->x;
	a->y = -a->y;
	a->z = -a->z;
	return *a;
}

int main(void)
{
	double dOA, dAB;
	ThreeDime A, B, C;
	
	printf("3차원 점 A의 x, y, z 좌표를 입력하시오 : ");
	scanf("%lf %lf %lf", &A.x, &A.y, &A.z);
	
	printf("3차원 점 B의 x, y, z 좌표를 입력하시오 : ");
	scanf("%lf %lf %lf", &B.x, &B.y, &B.z);
	
	dOA = Distance1(&A);
	
	dAB = Distance2(&A, &B);
	
	C = SymOri(&A);
	
	printf("\n점 A와 원점의 거리는 %.2lf이다.\n", dOA);
	printf("점 A와 점 B의 거리는 %.2lf이다.\n", dAB);
	printf("점 A을 원점에 대칭시킨 점은 x : %.2lf, y : %.2lf, z : %.2lf이다.\n", C.x, C.y, C.z); 
	
	return 0;
}
