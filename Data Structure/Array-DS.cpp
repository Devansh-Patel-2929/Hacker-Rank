vector<int> reverseArray(vector<int> a) {
  vector<int> n;
  for(int i = (a.size()-1); i >= 0 ; i--){
    n.push_back(a[i]);
  }
  return  n;
}
