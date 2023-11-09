#include<stdio.h>
int main(){
	//khai bao va khoi tao canh hinh vuong, chieu dai va chieu rong hinh chu nhat, ban kinh duong tron
	float square_edge = 6.0;
	float rectangular_length = 7.0; 
	float rectangular_width = 5.0; 
	float circular_radius = 4.0;
	const float PI = 3.14;
	// tinh chu vi va dien tich hinh vuong
	float square_circumference,square_area;
	square_circumference = 4*square_edge;
	square_area = square_edge*square_edge;
	//tinh chu vi va dien tich hinh chu nhat
	float rectangular_circumference,rectangular_area;
	rectangular_circumference = 2*(rectangular_length + rectangular_width);
    rectangular_area = rectangular_length * rectangular_width ;
    //tinh chu vi vaf dien tich hinh tron
    circumference = 2*PI*circular_radius;
    circular_area = PI*circular_radius*2;
	printf(f"chu vi hinh vuong la{square_circumference}, dien tich hinh vuong{square_area}");
    printf(f"chu vi chu nhat la{rectangular_circumference}, dien tich hinh vuong la{rectangular_area}");
    printf(f"chu vi hinh tron la{circumference}, dien tich hinh tron la{circumference}");
} 
    

