class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        
        
        /*pair<int,int>p;
        
        p.first = b;
        p.second = a;
        
        return p;*/
        
        //this approach is using XOR
        
        int x = a;
        int y = b;
        x = x ^ y, y = x ^ y, x = x ^ y;
        pair<int,int>p;
        
        p.first = x;
        p.second = y;
        return p;
    }
};