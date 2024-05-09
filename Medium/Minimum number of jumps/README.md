<h2><a href="https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1">Minimum number of jumps</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of <strong>N</strong> integers <strong>arr[]</strong> where each element represents the <strong>maximum</strong> length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y&nbsp;≤ x.<br>
Find&nbsp;the minimum number of jumps to reach the end of the array (starting from the first element).&nbsp;If an element is <strong>0</strong>, then you cannot move through that element.</span><br>
<br>
<span style="font-size:18px"><strong>Note: </strong>Return -1 if you can't reach the end of the array.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span><span style="font-size:18px"> </span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N = 11 </span>
<span style="font-size:18px">arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} </span>
<span style="font-size:18px"><strong>Output:</strong> 3 </span>
<span style="font-size:18px"><strong>Explanation:</strong> </span>
<span style="font-size:18px">First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. </span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input :</span></strong>
<span style="font-size:18px">N = 6
arr = {1, 4, 3, 2, 6, 7}</span>
<span style="font-size:18px"><strong>Output:</strong> 2 
<strong>Explanation: 
</strong>First we jump from the 1st to 2nd element 
and then jump to the last element.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your task:</strong><br>
You don't need to read input or print anything. Your task is to complete function <strong>minJumps()</strong> which takes the array <strong>arr</strong> and it's size <strong>N</strong> as input parameters and returns the minimum number of jumps. If not possible return -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>7</sup><br>
0 ≤ arr<sub>i</sub> ≤ 10<sup>7</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Moonfrog Labs</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Housing.com</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Greedy</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;