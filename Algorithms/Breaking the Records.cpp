vector<int> breakingRecords(vector<int> scores) {
  int min = scores[0];
  int max = scores[0];
  int mincount = 0;
  int maxcount = 0;
  vector<int> count;
  int n = scores.size();
  for(int i = 1; i < n ; i++){
    if(scores[i] > max){
      maxcount++;
      max = scores[i];
      
    }
    else if(scores[i] < min){
      mincount++;
      min = scores[i];
    }
  }
  count.push_back(maxcount);
  count.push_back(mincount);
  
  return count;
}
