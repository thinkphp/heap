# Heap Advanced Data Structure 

A Heap is a type of data structure. One of the interesting things about
heaps is that they allow you to find the largest element in the heap
in O(1) time. Recall that in certain other data structures, likes arrays,
this operations takes O(n) time. Futhermore, extracting the largest element
from the Heap (i.e. finding and removing it) takes O(log n) time. These properties
make heaps very useful for implementing a priority queue.
Intuitive view of max heap:
You can view the max heap as a binary tree, where each node has two children (or fewer).
and the key of each node (i.e. the number inside the node) is greater than
the keys of its node. There is also min heaps, where each node is smaller than
its child nodes.
 
The root is stored at index 1, and if a node at index i, then:
 - its left child has index 2 i
 - its right child has index 2 i + 1
 - its parent has index [i / 2]
 
Time Complexity with Big O Notation:
 
- worst case time: O(n log n)
- average case time: O(n log n)
- best case time: O(n log n)

## In action

   https://ideone.com/axvTvs (C language)

   https://ideone.com/Od7HQP (Go language)
   
   https://ideone.com/ijwMPp (Python3 language)
   
   https://ideone.com/DAZ7Ez (Ruby language)

## References


   https://web.stanford.edu/class/archive/cs/cs161/cs161.1168/lecture4.pdf

