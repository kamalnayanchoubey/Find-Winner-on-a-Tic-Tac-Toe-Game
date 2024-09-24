class Solution {
public:
      string check(vector<vector<int>>& tictoc){
        string ans;
        if(tictoc[0][0]==tictoc[0][1] && tictoc[0][1]==tictoc[0][2] && tictoc[0][0]!=0){
            ans=tictoc[0][0]==1?"A":"B";
            return ans;
        }
        else if(tictoc[1][0]==tictoc[1][1] && tictoc[1][1]==tictoc[1][2] && tictoc[1][0]!=0){
            ans=tictoc[1][0]==1?"A":"B";
            return ans;
        }
        else if(tictoc[2][0]==tictoc[2][1] && tictoc[2][1]==tictoc[2][2] && tictoc[2][0]!=0){
            ans=tictoc[2][0]==1?"A":"B";
            return ans;
        }
        else if(tictoc[0][0]==tictoc[1][0] && tictoc[1][0]==tictoc[2][0] && tictoc[0][0]!=0){
            ans=tictoc[0][0]==1?"A":"B";
            return ans;
        }
        else if(tictoc[0][1]==tictoc[1][1] && tictoc[1][1]==tictoc[2][1] && tictoc[0][1]!=0){
            ans=tictoc[0][1]==1?"A":"B";
            return ans;
        }
        else if(tictoc[0][2]==tictoc[1][2] && tictoc[1][2]==tictoc[2][2] && tictoc[0][2]!=0){
            ans=tictoc[0][2]==1?"A":"B";
            return ans;
        }
        else if(tictoc[0][0]==tictoc[1][1] && tictoc[1][1]==tictoc[2][2] && tictoc[0][0]!=0){
            ans=tictoc[0][0]==1?"A":"B";
            return ans;
        }
        else if(tictoc[0][2]==tictoc[1][1] && tictoc[1][1]==tictoc[2][0] && tictoc[0][2]!=0){
            ans=tictoc[0][2]==1?"A":"B";
            return ans;
        }
        else return "Draw";
    }
    string tictactoe(vector<vector<int>>& moves) {
        if(moves.size()<5)return "Pending";
        vector<int>col(3,0);
        vector<vector<int>>matrix(3,col);
        //unordered_map<int,pair<int,int>map{{1,{0,0}},{2,{0,1}},{3,{0,2}},{4,{1,0}},{5,{1,1}},{6,{1,2}},{7,{2,0}},{8,{2,1}},{9,{2,2}}};
        bool temp=1;
        for(int i=0;i<moves.size();i++){
            int row=moves[i][0];
            int col=moves[i][1];
            if(temp){
                matrix[row][col]=1;
            }
            else{
                matrix[row][col]=2;
            }
            temp^=1;
        }
        string ans=check(matrix);
        if(ans=="Draw" && moves.size()<9)
        return "Pending";
        return ans;
    }
};

