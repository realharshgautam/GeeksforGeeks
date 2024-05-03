<h2><a href="https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1">Construct Binary Tree from Inorder and Postorder</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given <strong>inorder </strong>and <strong>postorder</strong> traversals of a binary tree(having <strong>n</strong> nodes) in the arrays <strong>in[]</strong> and <strong>post[]</strong> respectively. The task is to construct a binary tree from these traversals.</span></p>
<p><span style="font-size: 18px;">Driver code will print the preorder traversal of the constructed tree.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 8
in[] = {4, 8, 2, 5, 1, 6, 3, 7}
post[] = {8, 4, 5, 2, 6, 7, 3, 1}
<strong>Output: <br></strong>1 2 4 8 5 3 6 7<strong>
Explanation: <br></strong>For the given postorder and inorder traversal of tree the&nbsp; resultant binary tree will be
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; &nbsp;  \
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; 3
&nbsp;&nbsp; /&nbsp; \      /  \
&nbsp; 4&nbsp;&nbsp; 5&nbsp;&nbsp;  6&nbsp;&nbsp;&nbsp;7
&nbsp;&nbsp;&nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp;8</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
in[] = {9, 5, 2, 3, 4}
post[] = {5, 9, 3, 4, 2}
<strong>Output: <br></strong>2 9 5 4 3<strong>
Explanation: &nbsp;
</strong>The&nbsp; resultant binary tree will be
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;2
&nbsp; &nbsp; &nbsp; &nbsp; /&nbsp;  &nbsp; \
&nbsp; &nbsp; &nbsp;&nbsp; 9&nbsp; &nbsp; &nbsp; 4
       &nbsp;\     /
     &nbsp; &nbsp; 5   3</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything.&nbsp;Complete the function <strong>buildTree() </strong>which takes the inorder, postorder traversals and the number of nodes in the tree as input parameters and returns the root node of the newly constructed Binary Tree.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n<sup>2</sup>)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= n &lt;= 10<sup>3</sup><br>1 &lt;= in[i], post[i] &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Hike</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Recursion</code>&nbsp;