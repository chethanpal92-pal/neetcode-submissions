class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     //row check
     for(int i=0;i<9;i++)
     {
        unordered_set<char>a;
        for(int j=0;j<9;j++)
        {
        char c=board[i][j];
        if(c=='.')continue;
        if(a.find(c)==a.end())a.insert(c);
        else return false;
     
      }
     }

    //coloumn check
     for(int i=0;i<9;i++)
     {
        unordered_set<char>a;
        for(int j=0;j<9;j++)
        {
        char c=board[j][i];
        if(c=='.')continue;
        if(a.find(c)==a.end())a.insert(c);
        else return false;
     
        }
     }
     //subgrid check
    for(int row=0;row<9;row+=3)
     {
     for(int column=0;column<9;column+=3)
    {
        unordered_set<char>a;
        for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
        char c=board[row+k][column+l];
        if(c=='.')continue;
        if(a.find(c)==a.end())a.insert(c);
        else return false;
        }
       }
   }
  }
  return true;
 }
};