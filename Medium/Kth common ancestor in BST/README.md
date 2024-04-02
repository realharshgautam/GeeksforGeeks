<h2><a href="https://www.geeksforgeeks.org/problems/kth-common-ancestor-in-bst/1">Kth common ancestor in BST</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a BST with <strong>n (n&gt;=2)</strong> nodes, find the <strong>kth</strong> common ancestor of nodes <strong>x</strong> and <strong>y</strong> in the given tree. Return <strong>-1</strong> if kth ancestor does not exists.<br></span></p>
<p><span style="font-size: 14pt;">Nodes x and y will always be present in input BST, and x <strong>!=</strong> y.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>
Input tree
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/861883/Web/Other/blobid0_1709054479.png" alt="" width="351" height="245"><br>k = 2, x = 20, y = 30 <br><strong>Output:</strong><br>10<br><strong>Explanation:</strong><br>LCA of 20 and 30 is 40 and their 2nd common ancestor is 10.</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong><br>Input tree
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/861883/Web/Other/blobid1_1709055216.png" alt="" width="402" height="219"><br>k = 2, x = 70, y = 60<br><strong>Output:</strong><br>-1<br><strong>Explanation:</strong><br>LCA of 70 and 60 is 80, which is root itself. There does not exists 2nd common ancestor in this case.<br></span></pre>
<div><span style="font-size: 14pt;"><strong>Your task :</strong></span></div>
<div><span style="font-size: 14pt;">You don't have to read input or print anything. Your task is to complete the function&nbsp;<strong>kthCommonAncestor</strong><strong>()</strong> that takes the <strong>root</strong> of the tree, <strong>k</strong>, <strong>x</strong> and <strong>y</strong> as input and returns the kth common ancestor of x and y.<br></span></div>
<div>&nbsp;</div>
<div><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(Height of the BST)</span></div>
<div><span style="font-size: 14pt;"><strong>Expected Space Complexity:&nbsp;</strong>O(Height of the BST)</span></div>
<div>&nbsp;</div>
<div><span style="font-size: 14pt;"><strong>Your Task :</strong></span></div>
<div><span style="font-size: 14pt;">1 &lt;= n, k &lt;= 10<sup>5</sup><br>1 &lt;= node-&gt;data, x, y &lt;= 10<sup>9</sup></span></div></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Recursion</code>&nbsp;<code>Traversal</code>&nbsp;<code>Data Structures</code>&nbsp;