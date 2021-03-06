#include <cmath>
#include <cstdio>

const double PI = acos(-1.0);

int main(void)
{
	int re;
	double D, L, HA, HB, ERR;
	double a1, a2, a3, a4;
	double ha, hb;

	scanf("%d", &re);
	scanf("%lf%lf%lf%lf%lf", &D, &L, &HA, &HB, &ERR);
	for (int ri = 1; ri <= re; ri++) {
		scanf("%lf%lf%lf%lf", &a1, &a2, &a3, &a4);
		printf("%d ", ri);
		a4 = 180 - a4;
		if (a1 <= 0 || a1 >= 90 || a2 <= 0 || a2 >= 90 || a3 <= 0 || a3 >= 90 || a4 <= 0 || a4 >= 90) {
			printf("DISQUALIFIED\n");
		}
		else {
			a1 *= PI / 180;
			a2 *= PI / 180;
			a3 *= PI / 180;
			a4 *= PI / 180;
			ha = HA + D * sin(a4) / sin(PI - a3 - a4) * tan(a1);
			hb = HB + D * sin(a3) / sin(PI - a3 - a4) * tan(a2);
			if (fabs(ha - hb) > ERR) {
				printf("ERROR\n");
			}
			else {
				printf("%.0lf\n", (ha + hb) / 2.0);
			}
		}
	}

	return 0;
}

//# 		Problem 	Verdict 	Language 	Run Time 	Submission Date
//805994 	3916 	Model Rocket Height 	Accepted 	C++ 	0.020 	2011-05-23 16:47:33

/*
id => 1174179
pid => 3916
pname => Model Rocket Height
status => Accepted
lang => C++
time => 0.009
date => 2012-12-14 17:34:17
*/
