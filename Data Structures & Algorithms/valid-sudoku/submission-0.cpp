class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       for(int i =0;i<9;i++){
        unordered_set<int>s;
        for(int j =0;j<9;j++){
            if(board[i][j]=='.'){
                continue;
            }
            else if(s.find(board[i][j])!= s.end()){
                return false;
            }
            else{
                s.insert(board[i][j]);
            }
        }
       }
       for(int i=0;i<9;i++){
        unordered_set<int>t;
    for(int j =0;j<9;j++){
        if(board[j][i]=='.'){
            continue;
        }
        else if(t.find(board[j][i])!=t.end()){
            return false;
        }
        t.insert(board[j][i]);
    }
       }
    for(int boxrow=0;boxrow<9;boxrow= boxrow+3){
        for(int boxcol=0;boxcol<9;boxcol=boxcol+3){
            unordered_set<int>box;
            for(int i =boxrow;i<boxrow+3;i++){
                for(int j =boxcol;j<boxcol+3;j++){
                    if(board[i][j]=='.'){
                        continue;
                    }
                    else if(box.find(board[i][j])!=box.end()){
                        return false;
                    }
                    box.insert(board[i][j]);
                }
            }
        }
    }
return true;
    }
};
