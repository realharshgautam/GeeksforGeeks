<h2><a href="https://www.geeksforgeeks.org/problems/find-shortest-safe-route-in-a-matrix/1">Find shortest safe route in a matrix</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix <strong>mat[][] with r </strong>rows and <strong>c </strong>columns, where some cells are landmines <strong>(marked as 0)</strong> and others are safe to traverse. Your task is to <strong>find the shortest safe route</strong> from <strong>any cell</strong> in the leftmost column to <strong>any cell</strong> in the rightmost column of the <strong>mat</strong>. <strong>You cannot move diagonally</strong>, and you must <strong>avoid both the landmines</strong> and <strong>their adjacent</strong> cells (up, down, left, right), as they are also <strong>unsafe</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">mat = [1, 0, 1, 1, 1],
      [1, 1, 1, 1, 1],
      [1, 1, 1, 1, 1],
      [1, 1, 1, 0, 1],
      [1, 1, 1, 1, 0]</span>
<strong><span style="font-size: 18px;">Output: <br></span></strong><span style="font-size: 18px;">6</span>
<strong><span style="font-size: 18px;">Explanation: </span></strong>
<span style="font-size: 18px;">We can see that length of shortest</span>
<span style="font-size: 18px;">safe route is 6</span>
<span style="font-size: 14pt;">[1 0 1 1 1]<br>[1 1 <span style="color: #236fa1;"><strong>1</strong> <strong>1</strong> <strong>1</strong></span>]<span style="color: #236fa1;"><br></span>[<span style="color: #236fa1;"><strong>1</strong></span> <span style="color: #236fa1;"><strong>1</strong></span> <span style="color: #236fa1;"><strong>1</strong></span> 1 1]
[1 1 1 0 1] 
[1 1 1 1 0]
</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;">
mat = [1, 1, 1, 1, 1],
      [1, 1, 0, 1, 1],
      [1, 1, 1, 1, 1]</span><strong><span style="font-size: 18px;">
Output: <br></span></strong><span style="font-size: 18px;">-1</span><strong><span style="font-size: 18px;">
Explanation: </span></strong><span style="font-size: 18px;">There is no possible path from
first column to last column.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findShortestPath()&nbsp;</strong>which takes the matrix as an input parameter and returns an integer denoting the shortest safe path from <strong>any cell</strong> in the leftmost column to <strong>any cell </strong>in the rightmost column of <strong>mat</strong>. If there is no possible path, return <strong>-1</strong>.&nbsp;<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(r * c)<br><strong>Expected Auxiliary Space:</strong> O(</span><span style="font-size: 18px;">r * c</span><span style="font-size: 18px;">)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= r, c &lt;= 10</span><sup><span style="font-size: 15px;">3<br>0 &lt;= mat[][] &lt;= 1</span></sup></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;