<h2><a href="https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays">Max sum in sub-arrays</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 20px;">Given an array <strong>arr[]</strong>, with index ranging from <strong>0 to n-1</strong>, select any two indexes, <strong>i</strong> and <strong>j</strong> such that <strong>i &lt; j </strong>. From the subarray <strong>arr[i...j]</strong>, select the <strong>two minimum numbers </strong>and add them, you will get the <strong>score </strong>for that subarray. Return the <strong>maximum possible score </strong>across all the subarrays of array <strong>arr[]</strong>.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [4, 3, 1, 5, 6]
<strong>Output :</strong> 11
<strong>Explanation :</strong> Subarrays with smallest and second smallest are:- [4, 3] smallest = 3,second smallest = 4
[4, 3, 1] smallest = 1, second smallest = 3
[4, 3, 1, 5] smallest = 1, second smallest = 3
[4, 3, 1, 5, 6] smallest = 1, second smallest = 3
[3, 1] smallest = 1, second smallest = 3
[3, 1, 5] smallest = 1, second smallest = 3
[3, 1, 5, 6] smallest = 1, second smallest = 3
[1, 5] smallest = 1, second smallest = 5
[1, 5, 6] smallest = 1, second smallest = 5
[5, 6] smallest = 5, second smallest = 6
Maximum sum among all above choices is, 5 + 6 = 11.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [5, 4, 3, 1, 6] </span>
<span style="font-size: 18px;"><strong>Output :</strong> 9</span></pre>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span><br><br><span style="font-size: 20px;"><strong>Constraints:</strong><br>2 ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>18</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;