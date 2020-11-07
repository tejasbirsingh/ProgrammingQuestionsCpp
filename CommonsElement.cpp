 // O(N) Time and O(1) Space
 vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> res;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3){
                if(a[i] == b[j] && a[i] == c[k]){
                    if(find(res.begin(), res.end(), a[i]) == res.end())
                    {res.emplace_back(a[i]);}
                    i++;
                    j++;
                    k++;
                  }
                else if(a[i] < b[j]) i++;
                else if(b[j] < c[k]) j++;
                else k++;
            }
            return res;
        }
