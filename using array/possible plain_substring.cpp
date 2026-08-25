
    string temp,ans="";
    for (int i = 0; i < s.size(); i++) {

        // Odd-length palindrome
        int left = i;
        int right = i;

        while (left>=0&&right<s.length()&& s[left]==s[right]) {

    
            temp=s.substr(left,right-left+1);
            left--;
        right++;
        
        



        }
        ans=(temp.length()>ans.length())?temp:ans;
        
        // Even-length palindrome
        temp = "";
     left = i;
     right = i+1;

        while (left>=0&&right<s.length()&& s[left]==s[right]) {

    
            temp=s.substr(left,right-left+1);
            left--;
        right++;
        
        



        }
        ans=(temp.length()>ans.length())?temp:ans;


        
    }
    return ans;
