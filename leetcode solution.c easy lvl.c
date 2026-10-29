# LeetCode 167 — Two Sum II (C)
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;

    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            result[0] = left + 1;
            result[1] = right + 1;
            return result;
        }
        else if (sum > target) {
            right--;
        }
        else {
            left++;
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}
## Approach

- Start with one pointer at each end of the sorted array.
- If the sum is too large, move the right pointer left.
- If the sum is too small, move the left pointer right.
- When the sum matches the target, return both **1-based indices**.
