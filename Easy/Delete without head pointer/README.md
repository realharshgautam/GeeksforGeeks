<h2><a href="https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1">Delete without head pointer</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a node <strong>del_node</strong> of a Singly Linked List where you have to <strong>delete</strong> a <strong>value </strong>of the given node from the linked list but you are not given the <strong>head</strong> of the list.</span></p>
<p><span style="font-size: 18px;">By deleting the node value, we do not mean removing it from memory. We mean:</span></p>
<ul>
<li><span style="font-size: 18px;">The value of the given node should not exist in the linked list.</span></li>
<li><span style="font-size: 18px;">The number of nodes in the linked list should decrease by one.</span></li>
<li><span style="font-size: 18px;">All the values before &amp; after the <strong>del_node </strong>node should be in the same order.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Note: </strong></span></p>
<ol>
<li><span style="font-size: 18px;">Multiple nodes can have the same <strong>values</strong> as the <strong>del_node</strong>, but you must only remove the node whose pointer <strong>del_node</strong> is given to you.</span></li>
<li><span style="font-size: 18px;">It is guaranteed that there exists a node with a value equal to the del_node <strong>value </strong>and it will not be the last node of the linked list.</span></li>
</ol>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>Linked List = 1 -&gt; 2
del_node = 1
<strong>Output: <br></strong></span><span style="font-size: 18px;">2<strong>
Explanation: <br></strong>After deleting 1 from the linked list, <br>we have remaining nodes as 2.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>Linked List = 10 -&gt; 20 -&gt; 4 -&gt; 30
del_node = 20
<strong>Output: <br></strong>10 4 30<strong>
Explanation: <br></strong>After deleting 20 from the linked list, <br>we have remaining nodes as 10, 4, 30.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. You only need to complete the function<strong>&nbsp;deleteNode()&nbsp;</strong>which takes a <strong>reference </strong>of the deleting node value &amp; your task is to <strong>delete&nbsp;</strong>the given node value.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(1).<br><strong>Expected Auxilliary Space</strong>: O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 &lt;= n &lt;= 10<sup>3&nbsp;</sup>&nbsp;<br>1 &lt;= elements of the linked list &lt;= 10<sup>9</sup><br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Visa</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Kritikal Solutions</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;