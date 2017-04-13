class Solution {
public:
    string reverseWords(string s) {
    int nStartPos=0;
    int nEndPos=0;
    while(1)
    {
        nEndPos=s.find(' ',nStartPos);
       
        if(nEndPos==nStartPos)
        s=s.erase(nEndPos,1);
        
        else if(nEndPos>nStartPos)
        {
            std::reverse(s.begin()+nStartPos,s.begin()+nEndPos);
            nStartPos=nEndPos+1;
        }
        
        
        else if(nEndPos==string::npos)
        {
            std::reverse(s.begin()+nStartPos,s.end());
            break;
        }
    }
    return s;
  }
};
