<h2><a href="https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0">Frequencies of Limited Range Array Elements</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of <strong>N</strong> positive integers which can contain integers from <strong>1 to P</strong> where elements can be repeated or can be absent from the array. Your task is to count the frequency of all numbers from <strong>1 to N</strong>. Make in-place changes in <strong>arr[],</strong> such that <strong>arr[i] </strong><strong>= frequency(i).</strong> Assume 1-based indexing.</span><br><span style="font-size: 18px;"><strong>Note:</strong> The elements greater than N&nbsp;in the array can be ignored for counting and <strong>do&nbsp;modify the&nbsp;array</strong>&nbsp;<strong>in-place.&nbsp;</strong></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
<strong>Output:
</strong>0 2 2 0 1<strong>
Explanation: </strong>
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 4
arr[] = {3,3,3,3}
P = 3
<strong>Output:
</strong>0 0 4 0<strong>
Explanation: 
</strong>Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 0 times.
3 occurring 4 times.
4 occurring 0 times.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 3:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 2
arr[] = {8,9}
P = 9
<strong>Output:
</strong>0 0<strong>
Explanation: 
</strong>Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 0 times.<br>Since here P=9, but there are no 9th Index present so can't count the value.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;</span><span style="font-size: 18px;">Complete the function <strong>frequencyCount() </strong>that takes the array <strong>arr, </strong>and integers <strong>n</strong>,<strong> </strong>and<strong> p</strong> as input parameters and <strong>modify the&nbsp;array</strong> <strong>in-place </strong>to denote the frequency count of each element from <strong>1 </strong>to <strong>N.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected time complexity:</strong> O(N)<br><strong>Expected auxiliay space:</strong> O(1)<br></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N&nbsp;≤ 10<sup>5</sup><br>1 ≤ P&nbsp;≤ 4*10<sup>4</sup><sup>&nbsp;</sup><br>1 &lt;= arr[i] &lt;= P</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>VMWare</code>&nbsp;<code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;