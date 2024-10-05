
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int target=skill[0]+skill[skill.size()-1];
        long long sum=0;
        int i=0;
       int  j=skill.size()-1;
        while(i<j){
            if(skill[i]+skill[j]==target)
            sum+=skill[i]*skill[j];
            else return -1;
            j--;
            i++;
        }
        return sum;
    }
};