void plusMinus(vector<int> arr) {
  float positive = 0;
  float negative = 0;
  float zero = 0;
  int n = arr.size();
  for( int i = 0 ; i < n ; i++){
    if(arr[i] > 0){
      positive++;
    }
    else if(arr[i] < 0){
      negative++;
    }
    else{
      zero++;
    }
  }
  positive = (positive/n);
  cout<<positive<<"\n";
  negative = (negative/n);
  cout<<negative<<"\n";
  zero = (zero/n);
  cout<<zero;
}
