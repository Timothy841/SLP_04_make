int sumFibonnaci(int n){//one
  int a = 1;
  int b = 1;
  int sum = 0;
  int tempsum = 0;
  while (tempsum<n){
    if (tempsum%2==0){
      sum+=tempsum;
    }
    tempsum = a+b;
    a=b;
    b=tempsum;
  }
  return sum;
}

int squareSum(int n){//six
  int a = (n*(n+1))/2;
  int b = n*(n+1)*(2*n+1)/6;
  return a*a-b;
}
