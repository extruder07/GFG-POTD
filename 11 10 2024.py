#{ 
 # Driver Code Starts

# } Driver Code Ends
class Solution:
    def rearrange(self, arr):
        #Code here
        a = arr.copy()
        for i in range(len(arr)):
            x = arr[i]
            if 0 <= x and x < len(arr):
                a[x] = -2;
        
        for i in range(len(arr)):
            if a[i] != -2:
                arr[i] = -1;
            else:
                arr[i] = i;
        
        return arr;
        

#{ 
 # Driver Code Starts.
def main():
    t = int(input())
    for _ in range(t):
        input_str = input()
        arr = list(map(int, input_str.split()))
        solution = Solution()
        ans = solution.rearrange(arr)
        print(" ".join(map(str, ans)))

if __name__ == "__main__":
    main()
# } Driver Code Ends