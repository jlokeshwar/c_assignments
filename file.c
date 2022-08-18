
  #include<stdio.h>
  
 

int main(){
	 int  radius; // r is int here, going to give only integr values, r is auto riable and has GV now 
	 const float PI = 3.14;//PI is consant value and doesnt change nd so const needs to be used 
	 //	printf("radius  of circle : %d",pi);
	float cir_val; // this cannt be int as 3.14 is going tobe multiplied by 2* radius 
	float area;// auto vriable and so GV  is sot initialized 
	printf("Enter radius of circle");
	scanf("%d",&radius);
	area= PI* radius * radius ;
	printf("Area of circle : %.3f",area);
	return 0;

}

//  print only upto 3 decimal values  -->  %f
