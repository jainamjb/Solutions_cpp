# include<stdio.h>

void knapsack(long n, float weight[], float profit[], float capacity) {
   float x[1000000], tp = 0;
   long i, j, u;
   u = capacity;

   for (i = 0; i < n; i++)
      x[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }
    if (i < n)
      x[i] = u / weight[i];

   tp = tp + (x[i] * profit[i]);
   printf("%.4f", tp);

}

int main() {
   float weight[2000000], profit[2000000], capacity;
   long num, i, j;
   float ratio[2000000], temp;
   scanf("%ld", &num);
   scanf("%f", &capacity);
   for (i = 0; i < num; i++) {
      scanf("%f %f", &profit[i],&weight[i]);
   }



   for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
   }

   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }

   knapsack(num, weight, profit, capacity);
   return(0);
}
