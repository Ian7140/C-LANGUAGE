#include <stdio.h>

int digit_sum(int n) {
   if(n == 0) return 0;
   return n % 10 + digit_sum(n/10);
}

int main() {
   int n, i, max = 0, temp, data, sum, max_sum;
   scanf("%d", &n);
   for(i=1;i<=n;i++) {
      scanf("%d", &data);
      sum = digit_sum(data);
      max_sum = digit_sum(max);
      if(sum > max_sum) max = data;
      else if(sum == max_sum) max = data > max ? data : max;
   }
   
   printf("%d", max);
   return 0;
}
