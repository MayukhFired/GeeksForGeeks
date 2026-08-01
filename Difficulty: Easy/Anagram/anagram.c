bool areAnagrams(char *s1, char *s2) {
    // code here
    int count[256] = {0};
    if(strlen(s1) != strlen(s2)){
        return false;
    }
    
    for(int i = 0; s1[i] != '\0'; i++){
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    
    for(int i = 0;i < 256; i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}