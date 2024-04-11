<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-products5049/1">Sum of Products</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of size <strong>n</strong>. Calculate the <strong>sum of Bitwise ANDs</strong>&nbsp;ie: calculate sum of <em><strong>arr[i] &amp; arr[j]</strong></em> for <strong>all the pairs</strong> in the given array <strong>arr[] </strong>where <strong>i &lt; j</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 3
arr = {5, 10, 15}
<strong>Output:</strong>
15
<strong>Explanation:</strong>
The bitwise Ands of all pairs where i&lt;j are (5&amp;10) = 0, (5&amp;15) = 5 and (10&amp;15) = 10.<br>Therefore, the total sum = (0+5+10) = 15.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4
arr = {10, 20, 30, 40}
<strong>Output:</strong>
46
<strong>Explanation:</strong>
The sum of bitwise Ands 
of all pairs = (0+10+8+20+0+8) = 46.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.Your Task is to complete the function <strong>pairAndSum()&nbsp;</strong>which takes an Integer <strong>n</strong> and an array <strong>arr[]&nbsp; </strong>of size <strong>n </strong>as input parameters and <strong>returns</strong> the <strong>sum </strong>of <strong>bitwise Ands </strong>of <strong>all pairs</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>O(n)<br><strong>Expected Auxillary Space:</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>1 &lt;= arr[i] &lt;= 10<sup>8</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;