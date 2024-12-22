void staircase(int n) {
 string space = " ";
 string hash = "#";
 
 for(int i = 1 ; i <= n ; i++){
  for(int j = 0 ; j < (n-i) ; j++ ){
    cout<<space;
  }
  for(int k = (n-i) ; k < n ; k++){
    cout<<hash;
  }
  cout<<"\n";
 }
}
