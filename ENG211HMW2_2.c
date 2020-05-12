#include<stdio.h>
#include<math.h>
int main(){
float i;
float x;
float z=0;
float n=1;
float e=3269017.37;
float total;
for(i=0;i<50;i++){
n=n*z;
  if(n==0){
    n=1;
  }
  x+=pow(15,i)/n;
  z++;
}
printf("True Value=%f\n",e);
printf("Approximation=%f\n",x);
total=(e-x)/e*100;
printf("True Error=True Value-Approximation=%f\n",e-x);
printf("True Error/True Value*100=True Relative Percent Error=%f\n",total);

  return 0;

}
