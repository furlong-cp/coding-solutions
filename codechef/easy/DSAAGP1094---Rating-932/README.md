# DSAAGP1094 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Problem

Given a sorted array of  **distinct**  integers $A$ and a target value $K$, return the index if the target is found. If not, return the index where it would be if inserted in order.

Complete the function and use Binary Search to solve this Problem.

### Video Explanation

 **Note:**  Do not write anything outside the function.

### Input Format
- The first line of input contains two space-separated integers $N$ and $Q$ denoting the number of elements in the array $A$ and Q queries to search the given target element.
- The second line contains $N$ space-separated integers denoting the elements in the array $A$.
- The next $Q$ lines contain the elements for which we need to find the search index positions
### Output Format
- For each query Q: Output position of $K$ or the position where $K$ is to be inserted.
### Sample 1:
Input
Output

```
9 1
1 3 6 7 10 13 20 25 27 
7

```

```
3
```

### Explanation:

$7$ is present at the index $3$.

### Sample 2:
Input
Output

```
9 1
1 3 6 7 10 13 20 25 27 
9
```

```
4
```

### Explanation:

$9$ when inserted, would be present at index $4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T15:03:50.034Z  

```c_cpp
int search_insert_position(int arr[], int n, int k){
    //Complete this function to return the correct position for element k
    int low = 0 ; int high  = n - 1 ;
    while (low<=high){
        int mid  = low + (high-low)/2 ;
        if (arr[mid]==k){
            return mid ;
        }
        else if (arr[mid] < k) low = mid+1 ;
        else high = mid-1 ; 
    }
    return low ; 
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DSAAGP1094)