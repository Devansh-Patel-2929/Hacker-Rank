
int birthdayCakeCandles(vector<int> candles) {
  int count = 0;
  int max = 0;
  int n = candles.size();
  for(int i = 0 ; i < n ; i++){
    if(candles[i] > max){
      max = candles[i];
      count = 0;
    }
    if(candles[i] == max){
      count++;
    }
  }
  return count;
}
