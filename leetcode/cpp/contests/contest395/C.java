package leetcode.contests.contest395;

public class C {
    public long minEnd(int n, int x) {
        if (n == 1) {
            return x; // 如果数组只有一个元素，那么它就是x
        }

        int lastElement = x;
        while (n > 1) {
            // 找到x中最右边的0所在的位置
            int rightMostZeroBit = findRightMostZeroBit(lastElement);
            // 将最右边的0变为1，并且将这个位之后的所有位都变为0
            lastElement += (1 << rightMostZeroBit);
            lastElement &= ~((1 << (rightMostZeroBit + 1)) - 1);
            n--;
        }

        return lastElement;
    }

    public int findRightMostZeroBit(int number) {
        int bitPosition = 0;
        while (number > 0) {
            if ((number & 1) == 0) {
                break;
            }
            number >>= 1;
            bitPosition++;
        }
        return bitPosition;
    }


    public static void main(String[] args) {
        C c = new C();
        System.out.println(c.minEnd(3, 4));
    }
}
