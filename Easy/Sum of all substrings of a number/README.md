<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-all-substrings-of-a-number-1587115621/1">Sum of all substrings of a number</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an integer <strong>s</strong> represented as a string, the task is to get the sum of all possible sub-strings of this string.<br>As the answer will be large, return answer <strong>modulo 10<sup>9</sup>+7</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>s = "1234"
<strong>Output: <br></strong>1670<strong>
Explanation: <br></strong>Sum = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234 = 1670</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>s = "421"
<strong>Output: <br></strong>491<strong>
Explanation: <br></strong>Sum = 4 + 2 + 1 + 42 + 21 + 91 + 421 = 491</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to complete the function <strong>sumSubstrings</strong> that takes <strong>s</strong> as an argument and returns the answer&nbsp;<strong>modulo 10<sup>9</sup>+7</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(|s|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|s|).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |s| &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;