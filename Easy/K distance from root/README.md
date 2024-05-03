<h2><a href="https://www.geeksforgeeks.org/problems/k-distance-from-root/1">K distance from root</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree having <strong>n</strong> nodes and an integer <strong>k</strong>. Print all nodes that are at distance k from the root (root is considered at distance 0 from itself). Nodes should be printed from <strong>left to right</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>k = 0
&nbsp;     1
&nbsp;   /   \
&nbsp;  3     2<strong>
Output: <br></strong>1<br><strong>Explanation: <br></strong>1 is the only node which is 0 distance from the root 1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>k = 3
&nbsp;       1
&nbsp;      /
&nbsp;     2
&nbsp;      \
&nbsp;       1
&nbsp;     /  \
&nbsp;    5    3<strong>
Output: <br></strong>5 3<br></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation:  <br></strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">5 and 3 are the nodes which are at distance 3 from the root 3.<br>Here, returning 3 5 will be <strong>incorrect</strong>.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't have to take input. Complete the function&nbsp;<strong>Kdistance()&nbsp;</strong>that accepts&nbsp;<strong>root</strong> node<strong>&nbsp;</strong>and&nbsp;<strong>k&nbsp;</strong>as parameters and returns<strong> </strong>the&nbsp;value<strong>&nbsp;</strong>of the&nbsp;nodes<strong>&nbsp;</strong>that are at a distance k from the root.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>4</sup></span><br><span style="font-size: 18px;">0 &lt;= k &lt;= 30</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Ola Cabs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;