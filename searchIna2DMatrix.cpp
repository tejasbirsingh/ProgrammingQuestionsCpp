 //O(Log(MN)) Time and O(1) Space
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;        
        int r = matrix.size();
        int c = matrix[0].size();         
        if (r==0 || c== 0)  return false; 
        
        int l=0, h= (r*c -1);
        
        while(l<=h){
            int mid = l + (h-l)/2 ;
            
            int row = mid /c ;
            int col = mid % c;
            
            int s = matrix[row][col];
           
            if (s == target){
                return true;                
            }
            if (s < target)  l = mid +1;                  
            
            else h = mid -  1;          
       
            
        }
        return false;
        
    }
