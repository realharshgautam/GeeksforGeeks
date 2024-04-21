<h2><a href="https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty=School&sortBy=submissions">Value equal to index value</a></h2><h3>Difficulty Level : School</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>Arr</strong> of <strong>N</strong> positive integers. Your task is to find the elements whose value is equal to that of its index value (&nbsp;Consider 1-based indexing ).</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: There can be more than one element in the array which have the same value as its index. You need to include every such element's index.&nbsp;Follows 1-based&nbsp;indexing of the array. </span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
Arr[] = {15, 2, 45, 12, 7}
<strong>Output:</strong> 2
<strong>Explanation:</strong> Only Arr[2] = 2 exists here.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
N = 1
Arr[] = {1}
<strong>Output:</strong> 1
<strong>Explanation:</strong> Here Arr[1] = 1 exists.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>valueEqualToIndex()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[]</strong><strong>&nbsp;</strong>and<strong>&nbsp;n&nbsp;</strong>as parameters and returns an array of indices where the given conditions are satisfied. When there is no such element exists then return an empty array of length 0. <strong>For C users, you need to modify the array(arr), in place such that the indices not in the final answer should be marked 0.</strong><br><br><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong> O(k), where k is the number of elements which satisfy arr[i]=i+1.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>5</sup><br>1 ≤ Arr[i] ≤ 10<sup>6</sup></span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>FactSet</code>&nbsp;<code>Hike</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;