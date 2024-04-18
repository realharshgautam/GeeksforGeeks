<h2><a href="https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1">Two Repeated Elements</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-size: 18px;">You are given an integer&nbsp;<strong>n&nbsp;</strong>and an integer&nbsp;array <strong>arr</strong> of size </span><strong style="font-size: 18px;">n+2</strong><span style="font-size: 18px;">. All elements of the array are in the range from 1 to <strong>n</strong>. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.</span><br><strong style="font-size: 18px;">Note: </strong><span style="font-size: 18px;">Return the numbers in their order of appearing twice. So, if <strong>X</strong> and <strong>Y</strong> are the repeating numbers, and <strong>X</strong>'s second appearance comes before second appearance of <strong>Y</strong>, then the order should be (<strong>X</strong>, <strong>Y</strong>).</span></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 4
arr[] = {1,2,1,3,4,3}
<strong>Output: <br></strong>1 3<strong>
Explanation: <br></strong>In the given array, 1 and 3 are repeated two times and as 1's second appearance occurs before 2's second appearance, so the output should be 1 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 2
arr[] = {1,2,2,1}
<strong>Output: <br></strong>2 1<strong>
Explanation: <br></strong>In the given array, 1 and 2 are repeated two times and second occurence of 2 comes before 1. So the output is 2 1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>repeatedElements()</strong> which takes an integer array <strong>arr[]</strong> and an integer <strong>n</strong> as inputs (the size of the array is <strong>n + 2</strong> and elements are in the range [1, <strong>n</strong>]) and finds the two repeated elements in the array and return them in an array.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Constraints: </strong><br>2 ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ n</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;