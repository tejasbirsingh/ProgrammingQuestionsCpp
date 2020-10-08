 // O(N) Time and O(1) Space if res array is not considered 
 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0) return {};
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> res;
        
        int dirFlag=0;
        int top=0,down=n-1,left=0,right=m-1;
        
        while(top<=down && left<=right){
            
            if(dirFlag==0){
                for(int i=left;i<=right;i++){
                    res.emplace_back(matrix[top][i]);
                }
                top++;
            }
            else if(dirFlag==1){
                for(int i=top;i<=down;i++){
                    res.emplace_back(matrix[i][right]);
                }
                right--;
            }
            else if(dirFlag==2){
                for(int i=right;i>=left;i--){
                    res.emplace_back(matrix[down][i]);
                }
                down--;
            }
            else if(dirFlag==3){
                for(int i=down;i>=top;i--){
                    res.emplace_back(matrix[i][left]);
                }
                left++;
            }
            dirFlag = (dirFlag+1)%4;
        }
        
        return res;
    }
