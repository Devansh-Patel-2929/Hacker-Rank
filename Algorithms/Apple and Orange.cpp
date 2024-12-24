
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
  int apple = 0 ;
  int orange = 0;
  int apl = apples.size();
  int org = oranges.size();
  
  for(int i = 0 ; i < apl ; i++){
    if((a + apples[i]) >= s && (a + apples[i]) <= t){
      apple++;
    }
  }
  
  for(int i = 0 ; i < org ; i++){
    if((b + oranges[i]) >= s && (b + oranges[i]) <= t){
      orange++;
    }
  }
  
  cout<<apple<<"\n";
  cout<<orange;
}
