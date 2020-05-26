#include<stdio.h>
int main(){
  float true_value=0.1227105451389082;
  float Approximation1=-0.8238;
  float Approximation2=0.54975;
  float Approximation3_1=-5.2974;
  float Approximation3_2=7.4399;
  float percent_error1, percent_error2, percent_error3_1, percent_error3_2;
  // Percent Relative Error = (True value-Approximation)/True Value *100
  percent_error1=(true_value-Approximation1)/true_value*100;
  percent_error2=(true_value-Approximation2)/true_value*100;
  percent_error3_1=(true_value-Approximation3_1)/true_value*-100;
  percent_error3_2=(true_value-Approximation3_2)/true_value*100;
  printf("Question 5\n");
  printf("a-)\nAnalytically=%f\n",true_value);
  printf("b-)\nTrue Value=%f\nApproximation=%f\nPercent Error=%f\n",true_value,Approximation1,percent_error1);
  printf("c-)\nFor Simpson's1/3 Rule:\nTrue Value=%f\nApproximation=%f\nPercent Error=%f\n",true_value,Approximation2,percent_error2);
  printf("For Simpson's3/8 Rule:\nTrue Value=%f\nApproximation=%f\nPercent Error=%f\n",true_value,Approximation3_1,percent_error3_1);
  printf("d-)\nTrue Value=%f\nApproximation=%f\nPercent Error=%f\n",true_value,Approximation3_2,percent_error3_2);



}
