int divisibleSumPairs(int n, int k, vector<int> ar) {
  int pair = 0;
  stable_sort(ar.begin(), ar.end());
  for(int i = 0 ; i < n ; i++){
    for(int j = (i+1) ; j < n ; j++){
      if((ar[i] + ar[j]) % k == 0){
        pair++;
      }
    }
  }
  return pair;
}
