class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         char *pt1;
        char *pt2;
        pt1 =&word1[0][0];
        pt2 =&word2[0][0];
        int i=0,j=0;
        for (;i<word1.size() && j<word2.size(); ){
            if(*pt1 == '\0')
                pt1 =&word1[i][0];
            if(*pt2 == '\0')
                pt2 =&word2[j][0];
            while (*pt1 != '\0' && *pt2 !='\0'){
                if(*pt1!=*pt2)
                    return false;
                pt1++;
                pt2++;
            }
            if(*pt1 == '\0')
                i++;

            if(*pt2 == '\0')
                j++;

        }
        if(*pt1 == '\0' && i<word1.size())
            pt1 =&word1[i][0];
        if(*pt2 == '\0' && j<word2.size())
            pt2 =&word2[j][0];
            
        if(*pt1 != '\0')
            return false;

        if(*pt2 != '\0')
            return false;

        return true;
    }
};