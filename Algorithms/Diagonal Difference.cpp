int diagonalDifference(vector<vector<int>> arr) {
    int TL = 0; 
    int TR = 0;
    int n = arr.size();
    
    for(int i = 0; i < n; i++) {
        TL += arr[i][i];
        TR += arr[i][n - i - 1];
    }
    int diff = abs(TL - TR);
    return diff;
}
