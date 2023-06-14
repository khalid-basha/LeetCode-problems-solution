class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n % 2 != 0 and n != 1:
            return False
        
        i=0
        while True:
            if 2**i == n:
                return True
            
            if 2**i > n:
                return False
            i+=1

        return True