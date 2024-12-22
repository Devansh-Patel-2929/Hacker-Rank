void miniMaxSum(vector<int> arr) {
  vector<long> sums;
  int n = arr.size();
  long sum = 0;
  for(int i = 0 ; i < n ; i++){
    sum += arr[i];
  }
  for(int i = 0 ; i < n ; i++){
    sums.push_back(sum-arr[i]);
  }
  stable_sort(sums.begin(), sums.end());
  cout<<sums[0]<<" "<<sums[n-1];
}
