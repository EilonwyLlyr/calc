#include <math.h>
#define PI 3.14159265359

double triangleArea(double b, double h){
	return b * h * 0.5;
}
double triangleArea_angle(double b, double a, double angle){
	return 0.5 * b * a * sin(angle * (PI / 180));
}
double circleArea(double r){
	return PI * r * r;
}
double circleCircumference(double r){
	return 2 * PI * r;
}

double circleSectorArea(double r, double angle){
	return .5 * r * r * (angle * (PI/180));
}
double circleSectorCircumference(double r, double angle){
	return r * (angle * (PI/180));
}
double sphereVolume(double r){
	return (4.0/3.0) * PI * r * r * r;
}
double sphereArea(double r){
	return 4 * PI * r * r;
}
double cylinderVolume(double r, double h){
	return PI * r * r * h;
}
double cylinderArea(double r, double h){
	return 2 * circleArea(r) + circleCircumference(r) * h;
}
double coneVolume(double r, double h){
	return (1.0/3.0) * PI * r * r * h;
}
double coneArea(double r, double h){
	return PI * r * sqrt(r*r + h*h);
}
