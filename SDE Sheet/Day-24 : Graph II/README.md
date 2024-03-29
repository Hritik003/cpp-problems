# Geek tips
## Dijkstras Algorithm
### Why not Queue? but PQ and set
by using a **queue**, there may be chances of unecessary paths being included which just escalates the job of increasing the number of iterations. 
<br>
by using **PQ** or a **Set**, we keep prioritizing the shortest path and hence decreasing the cost of number of iterations.

### Time complexity
$O(E log(V))$

### Note:
Dijkstras Algorithm doesn't work with negative weighted cycle.

## Printing the shortest path via Dijkstras Algo
It is just the same process of the previous algo, instead we keep track of the path using Parent array.
### Time Complexity
$E log(V) + O(n)$
<br>

## Bellman Ford Algorithm
This algorithm works for a graph with negative weights and negative weighted cycle unlike dijkstras algorithm

### Time Complexity
$$O(E * V)$$

## Flyod Marshall Algorithm
This algorithm works as well for detecting negative weighted cycles. This is more like a bruteforce approach, also known as the Multi-Source Approach

### Time Complexity
$$O(n^3)$$

