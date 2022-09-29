

We need a way to store nodes. That will be a class called Node. After that, well create an algorithm that produces a well-balanced BST. We will start with one that can handle sets of size 2^{n}-1, which are the easiest. 
2^{n}-1=2(2^{n-1}-1)+1

Node: 
Properties: Node p, Node lc, Node rc, int value

BST:
Create BST. 
Values: root
Return minimal value: lcr. Start with the root. Look left until you cant. Once you cant go left, return the current nods value.  
Return successor:
(we will obtain the kth minimal value by looking for the successor of the minimum)
 
Remove by key.
