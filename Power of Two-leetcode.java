public class Solution {
    public boolean isPowerOfTwo(int n) {
        
        for( int i = 0; i < 31; i++){
            int powerOfTwo = 1<<i;
            if( n == powerOfTwo ) return true;
        }
        
        return false;
    }
}
