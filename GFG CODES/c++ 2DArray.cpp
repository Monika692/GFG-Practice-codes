
vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>>v;
    
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            temp.push_back(a[j][i]);
        }
        v.push_back(temp);
    }
    return v;
}
