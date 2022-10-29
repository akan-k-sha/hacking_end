class Solution {
public:
    bool canPlace(int row, int column,vector<string>&ds,int n){
        int r=row,c=column;
        while(r>=0 && c>=0){
            if(ds[r][c]=='Q'){
                return false;
            }
            r--;
            c--;
        }
        r=row,c=column;
        while(c>=0){
            if(ds[r][c]=='Q'){
                return false;
            }
            c--;
        }
        r=row,c=column;
        while(r<n&&c>=0){
            if(ds[r][c]=='Q'){
                return false;
            }
            c--;
            r++;
        }
        return true;
    }
public:
    void rec(int column,vector<string>&ds,vector<vector<string>>&ans,int n){
        if(column==n){
            ans.push_back(ds);
            return;
        }
        for(int row=0;row<n;row++){
            if(canPlace(row,column,ds,n)){
                ds[row][column]='Q';
                rec(column+1,ds,ans,n);
                ds[row][column]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        string a="";
        for(int i=0;i<n;i++){
            a+=".";
        }
        vector<string>ds(n,a);
        vector<vector<string>>ans;
        rec(0,ds,ans,n);
        return ans;
    }
};
