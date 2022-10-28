class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        coins.sort()
        
        
        store = [[0 for _ in range(amount+1)] for _ in range(len(coins)+1)]
        
        
        for row in range(len(store)):
            for col in range(len(store[0])):
                if col == 0:
                    store[row][col] = 0
                elif row == 0:
                    store[row][col] = float("inf")
                elif coins[row-1] > col:
                    store[row][col] = store[row-1][col]
                else:
                    store[row][col] = min(
                        1 + store[row][col - coins[row - 1]],
                        store[row - 1][col]
                    )

        return store[-1][-1] if store[-1][-1] <= amount else -1