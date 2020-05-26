#include<stdio.h>
int main(){
  float true_value=0.7815452766702095;
  float Approximation1=0.6838521170865;
  float Approximation2=0.574505;
  float percent_error1, percent_error2;
  // Percent Relative Error = (True value-Approximation)/True Value *100
  percent_error1=(true_value-Approximation1)/true_value*100;
  percent_error2=(true_value-Approximation2)/true_value*100;

  printf("Question 4\n");
  printf("a-)\nAnalytically=%f\n",true_value);
  printf("b-)\nTrue Value=%.1f\nApproximation=%.1f\nPercent Error=%f\n",true_value,Approximation1,percent_error1);
  printf("c-)\nFor n=3:\nTrue Value=%f\nApproximation=%f\nPercent Error=%f\n",true_value,Approximation2,percent_error2);



}
