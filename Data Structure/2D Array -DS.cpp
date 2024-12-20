int hourglassSum(vector<vector<int>> arr) {
  int Max_sum = -1000;
  for (int i = 0 ; i < 4 ; i++ ){
    for(int j = 0 ; j < 4 ; j++){
      int sum = 0;
      sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
      if(sum > Max_sum){
        Max_sum = sum;
      }
    }
  }
  return Max_sum;
}