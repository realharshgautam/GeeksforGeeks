<h2><a href="https://www.geeksforgeeks.org/problems/minimum-travel-time/1?page=1&difficulty=Hard&sortBy=accuracy">Minimum travel time</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an&nbsp;<code>n x n</code>&nbsp;integer matrix&nbsp;<code>grid</code>&nbsp;where each value&nbsp;<code>grid[i][j]</code> represents the height of the&nbsp;cell&nbsp;<code>(i, j).</code></span></p>
<p><span style="font-size: 18px;">You can travel from a cell to another 4-directionally adjacent cell if and only the height of both the cells are at most T. </span><span style="font-size: 18px;">You can travel infinite distances in zero time but&nbsp;you must stay within the boundaries of the grid during your travel.</span></p>
<p><span style="font-size: 18px;">You are currently at cell (0, 0) and the value of T is 0 and you wish to go to cell (n-1,m-1).</span></p>
<p><span style="font-size: 18px;">Find the&nbsp;minimum time it will take to reach the cell (n, m) if the value of T increase by 1 every second.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<div style="background: #eeeeee; border: 1px solid #cccccc; padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: #222426; --darkreader-inline-border-top: #3e4446; --darkreader-inline-border-right: #3e4446; --darkreader-inline-border-bottom: #3e4446; --darkreader-inline-border-left: #3e4446;"><span style="font-size: 18px;"><strong>Input:</strong><br>2<br>0 2<br>1 3<br><br><strong>Output:</strong><br>3<br><br><strong>Explanation:</strong><br><span style="font-family: arial,helvetica,sans-serif;">At time 0, you are in grid location (0, 0).<br>You cannot go anywhere else because 4-directionally adjacent neighbors have a higher elevation than t = 0.<br>You cannot reach point (1, 1) until time 3.<br>When time T&nbsp;is 3, we can swim anywhere inside the grid.</span></span></div>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<div style="background: #eeeeee; border: 1px solid #cccccc; padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: #222426; --darkreader-inline-border-top: #3e4446; --darkreader-inline-border-right: #3e4446; --darkreader-inline-border-bottom: #3e4446; --darkreader-inline-border-left: #3e4446;"><span style="font-size: 18px;"><strong>Input:</strong><br>4<br>0 1 2 4<br>12 13 14 9<br>15 5&nbsp;11 10<br>3 6 7 8&nbsp;<br><br><strong>Output:</strong><br>10</span></div>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function <strong>Solve()</strong> which takes an integer n denoting no. of rows and columns&nbsp;of the grid and a matrix grid[][] denoting the grid and return the maximum group of connected group of 1s.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span></p>
<ul>
<li><span style="font-size: 18px;">1 &lt;= n&lt;= 50</span></li>
<li><span style="font-size: 18px;">0 &lt;= grid[i][j] </span></li>
<li><span style="font-size: 18px;">Each value in grid is unique</span></li>
</ul>
<p>&nbsp;</p></div>