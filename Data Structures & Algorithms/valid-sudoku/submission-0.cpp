class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //row check
        for(int i=0;i<9;i++){
            unordered_set<char>a;
            for(int j=0;j<9;j++){
              char c=board[i][j];
              if(c=='.')continue;
            if(a.find(c)==a.end())a.insert(c);
            else return false;
           
            }
        }
          //coloumn check
        for(int i=0;i<9;i++){
            unordered_set<char>a;
            for(int j=0;j<9;j++){
              char c=board[j][i];
              if(c=='.')continue;
            if(a.find(c)==a.end())a.insert(c);
            else return false;
             }
            }
            //subgrid check
            for(int rowstart=0;rowstart<9;rowstart+=3){
              for(int colstart=0;colstart<9;colstart+=3){
                unordered_set<char>a;
                 for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        char c=board[rowstart+k][colstart+l];
                          if(c=='.')continue;
                            if(a.find(c)==a.end())a.insert(c);
                                else return false;
                }
            }
        }
    }
 }
};