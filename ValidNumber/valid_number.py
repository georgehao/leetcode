#" *encoding=utf8

class Solution(object):
    def isNumber(self, s):
        INVALID=0; SPACE=1; SIGN=2; DIGIT=3; DOT=4; EXPONENT=5;
        transtionTable= [[-1, 0, 4, 1, 2, -1], #没有任何输入或者输入是space
                         [-1, 8, -1, 1, 3, 5], # 输入为数字
                         [-1, -1, -1, 3, -1, -1], #输入为dot, 但是dot前面没有数字
                         [-1, 8, -1, 3, -1, 5], #输入为dot, dot前面有数字，跟前不同是因为,这个后面可以跟空格或者E
                         [-1, -1, -1, 1, 2, -1], #输入为符号
                         [-1, -1, 6, 7, -1, -1], #输入为指数
                         [-1, -1, -1, 7, -1, -1], #输入为E+符号
                         [-1, 8, -1, 7, -1, -1], #输入为E+数字 
                         [-1, 8, -1, -1, -1, -1]]; #等待结束
        state = INVALID;
        i = 0;
        while i < len(s):
            inputType = INVALID;
            if s[i] == ' ':
                inputType = SPACE;
            if s[i] == '-' or s[i] == '+':
                inputType = SIGN;
            if s[i] == '.':
                inputType = DOT;
            if s[i] in '0123456789':
                inputType = DIGIT;
            if s[i] == 'E' or s[i] == 'e':
                inputType = EXPONENT;

            state = transtionTable[state][inputType];
            if state == -1:
                return False;
            else:
                i += 1;

        return state == 1 or state == 3 or state == 7 or state == 8;


if __name__ == "__main__":
    s = Solution();
    print s.isNumber("-1.e49046 ")


