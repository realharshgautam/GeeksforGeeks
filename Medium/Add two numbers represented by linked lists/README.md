<h2><a href="https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1">Add two numbers represented by linked lists</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two numbers, <strong>num1</strong> and <strong>num2</strong>, represented by linked lists of size <strong>n</strong> and <strong>m </strong>respectively. The task is to return a linked list that represents the sum of these two numbers. </span></p>
<p><span style="font-size: 18px;">For example, the number <strong>190</strong> will be represented by the linked list, <strong>1-&gt;9-&gt;0-&gt;null, </strong>similarly <strong>25 </strong>by <strong>2-&gt;5-&gt;null. </strong>Sum of these two numbers is<strong> </strong>190 + 25 =<strong> 215, </strong>which will be represented by<strong> 2-&gt;1-&gt;5-&gt;null. </strong>You are required to return the head of the linked list<strong> 2-&gt;1-&gt;5-&gt;null.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 2
num1 = 45 (4-&gt;5-&gt;null)
m = 3
num2 = 345 (3-&gt;4-&gt;5-&gt;null)
<strong>Output: <br></strong>3-&gt;9-&gt;0-&gt;null&nbsp; <strong>
Explanation: <br></strong>For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 4
num1 = 0063 (0-&gt;0-&gt;6-&gt;3-&gt;null)
m = 2
num2 = 07 (0-&gt;7-&gt;null)
<strong>Output: <br></strong>7-&gt;0-&gt;null
<strong>Explanation: <br></strong>For the given two linked list (0 0 6 3) and (0 7), after adding the two linked list resultant linked list will be (7 0).</span></pre>
<p><span style="font-size: 18px;"><strong>Your&nbsp;Task:</strong><br>The task is to complete the function <strong>addTwoLists()</strong> which has node reference of both the linked lists and returns the head of the sum list. &nbsp;&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n+m)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(max(n,m)) for the resultant list.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= n, m &lt;= 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Qualcomm</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;