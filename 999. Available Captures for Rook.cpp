class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int m,n;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    m=i;
                    n=j;
                    break;
                }
            }
            }
        int c=0;
        for(int i=m;i<8;i++){
            if(board[i][n]=='p'){
                c++;
                break;
            }
            else if(board[i][n]=='B'){
                break;
            }
        }
        for(int i=m;i>=0;i--){
            if(board[i][n]=='p'){
                c++;
                break;
            }
            else if(board[i][n]=='B'){
                break;
            }
        }
        for(int i=n;i<8;i++){
            if(board[m][i]=='p'){
                c++;
                break;
            }
            else if(board[m][i]=='B'){
                break;
            }
        }
        for(int i=n;i>=0;i--){
            if(board[m][i]=='p'){
                c++;
                break;
            }
            else if(board[m][i]=='B'){
                break;
            }
        }
        return c;
        }   
};
