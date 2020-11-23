//O(N) Time and O(N) Space
bool ispar(string x)
{
    stack<char> s;
    for(auto it:x)
    {
        if(it=='(' or it=='{' or it=='[') s.push(it);
        else if(!s.empty())
        {   if(it==')' and s.top()=='(') s.pop();
            else if(it=='}' and s.top()=='{') s.pop();
            else if(it==']' and s.top()=='[')  s.pop();
            else   return 0;
        }
        else   return 0;
      
    }
    if(s.empty()) return 1;
    return 0;
}
