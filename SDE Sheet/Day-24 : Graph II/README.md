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
