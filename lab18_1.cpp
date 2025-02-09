#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
	double r1R = r1.x + r1.w;
	double r1B = r1.y - r1.h;
	double r2R = r2.x + r2.w;
	double r2B = r2.y - r2.h;
	
	double X = min(r1R,r2R)- max(r1.x,r2.x);
	double Y = min(r1.y,r2.y)- max(r1B,r2B);
	if (X>0 && Y>0)	{
		return X * Y;}
	else return 0;
}
