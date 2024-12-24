vector<int> gradingStudents(vector<int> grades) {
  int n = grades.size();
  for(int i = 0 ; i < n ; i++ ){
    int temp = grades[i];
    for(int j = 0 ; j < 3 ; j++){
      if(temp%5 == 0 && temp > 38){
        grades[i] = temp;
      }
      temp++;
    }
  }
  return grades;
}
