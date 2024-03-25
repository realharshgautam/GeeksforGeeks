<h2><a href="https://www.geeksforgeeks.org/problems/additive-sequence/1">Additive sequence</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 20px;">Given a string <strong>n</strong>, your task is to find whether it contains an <strong>additive sequence or not</strong>. A string <strong>n </strong>contains an additive sequence if its digits can make a <strong>sequence of numbers</strong> in which every number is <strong>addition of previous two numbers</strong>. You are required to complete the function which returns <strong>true</strong> if the string is a valid sequence else returns <strong>false</strong>. For better understanding check the examples.</span></p>
<p><span style="font-size: 20px;"><strong>Note:&nbsp;</strong><span style="font-size: 20px;">A valid string should contain at <strong>least three</strong> digit to make one additive sequence.&nbsp;</span></span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  <br>n = "1235813"</span><span style="font-size: 18px;">
<strong>Output:</strong> <br>1
<strong>Explanation:</strong> <br>The given string can be splited into a series of numbers  <br>where each number is the sum of the previous two numbers: <br>1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8, and 5 + 8 = 13. Hence, the output would be 1 (true).<br></span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  <br>n = "11235815"</span><span style="font-size: 18px;">
<strong style="font-size: 18px;">Output:</strong><span style="font-size: 18px;"> <br>0
</span><strong style="font-size: 18px;">Explanation:</strong><span style="font-size: 18px;"> <br></span></span><span style="font-size: 18px;">We can start with the first two digits: "11".
First number: 1, Second number: 1, Sum: 1 + 1 = 2
Now, we have "2" as the next number.
First number: 1, Second number: 2, Sum: 1 + 2 = 3
Now, we have "3" as the next number.
First number: 2, Second number: 3, Sum: 2 + 3 = 5
Now, we have "5" as the next number.
First number: 3, Second number: 5, Sum: 3 + 5 = 8
Now, we have "8" as the next number.
First number: 5, Second number: 8, Sum: 5 + 8 = 13
At this point, there is no "13" present in the remaining digits "815". Hence, the output would be 0 (or false).<br></span></pre>
<p><span style="font-size: 18px;"><strong>User Task:&nbsp;</strong><br></span><span style="font-size: 18px;">Your task is to complete the function <strong>isAdditiveSequence()</strong> which takes a single string as input <strong>n</strong> and returns a <strong>boolean value</strong> indicating whether the given string contains an <strong>additive sequence or not</strong>. You need not take any input or print anything.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n<sup>3</sup>).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><span style="font-size: 16px;"><strong style="font-size: 20px;">Constraints:</strong><br style="font-size: 20px;"><span style="font-size: 20px;">3 &lt;= lenght( n ) &lt;= 200<br>1 &lt;= digits of string &lt;= 9</span></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Recursion</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;