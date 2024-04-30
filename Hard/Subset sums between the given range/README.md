<h2><a href="https://www.geeksforgeeks.org/problems/subset-sums-between-the-given-range/1?page=1&difficulty=Hard&sortBy=accuracy">Subset sums between the given range</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>A[]</strong>&nbsp;of&nbsp;<strong>N</strong>&nbsp;integers and two integers&nbsp;<strong>L</strong>&nbsp;and&nbsp;<strong>R</strong>. The task is to return the total subsets of array&nbsp;<strong>A</strong>&nbsp;whose sum lies between the range&nbsp;<strong>[L, R]</strong>, inclusive.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
A[] = {1, -2, 3}
L = -1, R = 2
<strong>Output: </strong>5
<strong>Explanation:</strong> 
The sum of the subsets {{},{1}, {1, -2},{-2,3},{1,-2,3}}
lies between -1 and 2.


</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
A[] = {-1, 1, 0}
L = 0, R = 3
<strong>Output: </strong>6
</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>countSubsets</strong><strong>()</strong>&nbsp;which takes an array of size <strong>N</strong>&nbsp;and integers denoting the&nbsp;ranges [L, R].<br><br><strong>Note : </strong>Use long long int as the answer may overflow a 32-bit integer.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(2<sup>N/2&nbsp;</sup>* log N)<br><strong>Expected Auxiliary Space:</strong> O(N)</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 20<br>-10<sup>5</sup>&nbsp;&lt;= A[i] &lt;= 10<sup>5</sup><br>-10<sup>5</sup>&nbsp;&lt;= L &lt;= R &lt;= 10<sup>5</sup></span><br>&nbsp;</p></div>