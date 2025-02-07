bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;
        s += s;
        return (s.find(goal) != string::npos);
    }

/* python solution 
 #Function to check if two strings are rotations of each other or not.
    def areRotations(self,s1,s2):
        if len(s1) != len(s2):
            return false
        
        concat = s1 + s1
    
        if s2 in concat :
            return True 
        else: 
            return False
*/