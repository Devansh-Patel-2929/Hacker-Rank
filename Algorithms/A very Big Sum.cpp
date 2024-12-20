long aVeryBigSum(vector<long> ar) {
  long sum = 0;
  int n = ar.size();
  for(int i = 0 ; i < n ; i++){
    sum = sum+ar[i];
  }
  return sum;
}