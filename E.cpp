#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double pi=3.141592653589793;

double C(double x1,double y1,double x2,double y2,double x3,double y3){
	double l1,l2,l3;
	l1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	l2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	l3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	double p=(l1+l2+l3)/2;
	double s=sqrt(p*(p-l1)*(p-l2)*(p-l3));
	double r=l1*l2*l3/4/s;
	return (2*pi*r);
} 

int main(){
	double x1,y1,x2,y2,x3,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		cout.setf(ios::fixed);
		cout<<setprecision(2)<<C(x1,y1,x2,y2,x3,y3)<<endl;
	}
	return 0;
}
