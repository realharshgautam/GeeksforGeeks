<h2><a href="https://www.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1">Diagonal sum in binary tree</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Consider Red lines of slope -1 passing between nodes (in following diagram). The diagonal sum in a binary tree is the sum of all node datas lying between these lines. Given a Binary Tree of size <strong>n</strong>, print all diagonal sums.</span></p>
<p><span style="font-size: 18px;">For the following input tree, output should be 9, 19, 42.<br>9 is sum of 1, 3 and 5.<br>19 is sum of 2, 6, 4 and 7.<br>42 is sum of 9, 10, 11 and 12.</span></p>
<p><a href="https://media.geeksforgeeks.org/wp-content/uploads/diagonal-sum-in-a-tree.jpg"><img style="height: 403px; width: 600px;" src="https://media.geeksforgeeks.org/wp-content/uploads/diagonal-sum-in-a-tree.jpg" alt="DiagonalSum"></a></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">&nbsp;        4
&nbsp;      /   \
&nbsp;     1     3
&nbsp;          /
&nbsp;         3</span><strong><span style="font-size: 18px;">
Output: <br></span></strong><span style="font-size: 18px;">7 4&nbsp;</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">&nbsp;          10
&nbsp;        /    \
&nbsp;       8      2
&nbsp;      / \    /
&nbsp;     3   5  2</span><strong><span style="font-size: 18px;">
Output: <br></span></strong><span style="font-size: 18px;">12 15 3&nbsp;</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to take input. Just complete the function<strong>&nbsp;diagonalSum()&nbsp;</strong>that takes root <strong>node</strong> of the tree&nbsp;as parameter and returns an array containing the diagonal sums for every diagonal present in the tree with slope -1.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(nlogn).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br></span><span style="font-size: 18px;">0 &lt;= data of each node &lt;= 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;