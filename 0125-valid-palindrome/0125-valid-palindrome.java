class Solution {

    public char toLower(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        }

        return (char)(ch - 'A' + 'a');
    }

    public boolean isValid(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }

        return false;
    }

    public boolean isPalindrome(String s) {

        int start = 0;
        int end = s.length() - 1;

        while (start < end) {

            if (!isValid(s.charAt(start))) {
                start++;
                continue;
            }

            if (!isValid(s.charAt(end))) {
                end--;
                continue;
            }

            if (toLower(s.charAt(start++)) !=
                toLower(s.charAt(end--))) {
                return false;
            }
        }

        return true;
    }
}