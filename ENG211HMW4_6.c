#include<stdio.h>
int main(){
  float true_value=1104;
  float Approximation1=5286;
  float Approximation2_1=2565;
  float Approximation2_2=1821;
  float Approximation3=1754;
  float Approximation4=38175.75;
  float percent_error1, percent_error2_1, percent_error2_2, percent_error3, percent_error4;
  // Percent Relative Error = (True value-Approximation)/True Value *100
  percent_error1=(true_value-Approximation1)/true_value*-100;
  percent_error2_1=(true_value-Approximation2_1)/true_value*-100;
  percent_error2_2=(true_value-Approximation2_2)/true_value*-100;
  percent_error3=(true_value-Approximation3)/true_value*-100;
  percent_error4=(true_value-Approximation4)/true_value*-100;
  printf("Question 6\n");
  printf("a-)\nAnalytically=%.1f\n",true_value);
  printf("b-)\nTrue Value=%.1f\nApproximation=%.1f\nPercent Error=%f\n",true_value,Approximation1,percent_error1);
  printf("c-)\nFor n=2:\nTrue Value=%.1f\nApproximation=%.1f\nPercent Error=%f\n",true_value,Approximation2_1,percent_error2_1);
  printf("For n=4:\nTrue Value=%.1f\nApproximation=%.1f\nPercent Error=%f\n",true_value,Approximation2_2,percent_error2_2);
  printf("d-)\nTrue Value=%.1f\nApproximation=%.1f\nPercent Error=%f\n",true_value,Approximation3,percent_error3);
  printf("e-)\nTrue Value=%.1f\nApproximation=%.1f\nPercent Error=%f\n",true_value,Approximation4,percent_error4);


}
