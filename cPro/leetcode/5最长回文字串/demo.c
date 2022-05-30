
// 给你一个字符串 s，找到 s 中最长的回文子串
char* longestPalindrome(char * s){

}
int main(int argc, char** argv){

}

char * longestPalindrome(char * s){
    int pLeft = 0;
    int pRight = 0;
    int n = strlen(s);
    int len = -1;
    for (int i = 0; i < 2 * n - 1; i++) {
        int left = i / 2;
        int right = i / 2 + i % 2;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if ((right - left + 1) > len) {
                len = right - left + 1;
                pLeft = left;
                pRight = right;
            }
            left--;
            right++;
        }
    }
    char *ans = (char*)calloc(len + 1, sizeof(char));
    //printf("len:%d pLeft:%d pRight:%d\r\n", len, pLeft, pRight);
    int z = 0;
    for (int j = pLeft; j < pRight + 1; j++) {
        ans[z++] = s[j];
    }
    return ans;
}
