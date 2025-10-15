#include <stdio.h>
#include <math.h>

double ln_1_minus_x(double x, double epsilon) {
	double cn = x;
	double sum = cn;
	int n = 1;

	for (n = 1; fabs(cn) > epsilon; n++) {
		cn = cn * x * n / (n + 1);
		sum += cn;

	}
	return -sum;
}
//int main() {
//	double X_start = -0.9;
//	double X_end = 0.9;
//	double X_step = 0.1;
//	double epsilon = 0.0001;
//	for (double x = X_start; x <= X_end; x += X_step) {
//		double sum = ln_1_minus_x(x, epsilon);
//		printf("%lf %lf\n", x, sum);
//
//	}
//}