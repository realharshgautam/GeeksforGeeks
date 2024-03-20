<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1">Sum of nodes on the longest path from root to leaf node</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary tree having <strong>n</strong> nodes. Find the sum of all nodes on the longest path from root to any leaf node. If two or more paths compete for the longest path, then the path having maximum sum of nodes will be considered.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> 
        4        
       /  \       
      2   5      
     / \   /  \     
    7  1 2  3    
      /
     6
<strong>Output:</strong> <br>13
<strong>Explanation:</strong>
        <strong>4</strong>        
       /  \       
      <strong>2</strong>   5      
     / \   /  \     
    7  <strong>1</strong> 2  3 
      /
     <strong>6</strong>
The highlighted nodes <strong>(4, 2, 1, 6)</strong> above are part of the longest root to leaf path having sum = (4 + 2 + 1 + 6) = 13</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>
&nbsp;         1
&nbsp;       /   \
&nbsp;      2    3
&nbsp;     / \    /  \
&nbsp;    4   5 6   7
<strong>Output: <br></strong>11<br><strong>Explanation:</strong><br>Use path 1-&gt;3-&gt;7, with sum 11.</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:</strong></span><br><span style="font-size: 14pt;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sumOfLongRootToLeafPath</strong><strong>()&nbsp;</strong>which takes root node of the tree as input parameter and returns an integer denoting the sum of the longest root to leaf path of the tree.</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= n</span><span style="font-size: 14pt;"> &lt;= 10<sup>5</sup><br><span style="font-size: 14pt;">0 &lt;= d</span><span>ata of each node &lt;= 10<sup>4</sup></span><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Traversal</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;