int simpleArraySum(vector<int> ar) {
  int n = ar.size();
  int sum = 0;
  for(int i = 0 ; i < n ; i++){
    sum = sum+ar[i];
  }
  return sum;
}