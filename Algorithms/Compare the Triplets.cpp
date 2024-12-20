vector<int> compareTriplets(vector<int> a, vector<int> b) {
  vector<int> resutls;
  int count1 = 0;
  int count2 = 0;
  for(int i = 0 ; i < 3 ; i++ ){
    if(a[i] > b[i]){
      count1++;
    }
    else if (a[i] < b[i]) {
      count2++;
    }
  }
  resutls.push_back(count1);
  resutls.push_back(count2);
  
  return resutls;
}