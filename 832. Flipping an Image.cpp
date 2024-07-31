class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<n; i++) {
            reverse(image[i].begin(),image[i].end());
            for(int j=0; j<m; j++) {
                int a=image[i][j];
                if(a==0) {
                    image[i][j]=1;
                }
                else {
                    image[i][j]=0;
                }
            }
        }
        return image;        
    }
};