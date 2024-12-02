class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        goal+=goal;
        int a=0;
        int b=0;
        int prev=0;
        while(a<s.size() && b<goal.size()){
            if(s[a]==goal[b]){
                a++;
                if(a>=s.size())return true;
            }
            else{
                a=0;
                b= prev;
                prev++;
            }
        b++;
        }
       return false ;
        
    }
};