class Solution {
public:
    bool judgeCircle(string moves) {
        int z=0;
        int y=0;
        for(char x:moves){
            if(x=='U'){
                y++;
            }
            else if(x=='D'){
                y--;
            }
            else if(x=='L') z--;
            else{
                z++;
            }
        }
        return (z==0 and y==0);
    }
};
