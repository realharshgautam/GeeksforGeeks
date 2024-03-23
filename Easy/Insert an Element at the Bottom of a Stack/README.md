<h2><a href="https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1">Insert an Element at the Bottom of a Stack</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a stack <strong>st</strong> of <strong>n</strong> integers and an element <strong>x</strong>. You have to insert <strong>x</strong> at the bottom of the given stack.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> Everywhere in this problem, the bottommost element of the stack is shown first while priniting the stack.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 5
x = 2
st = {4,3,2,1,8}</span><strong><span style="font-size: 18px;">
Output:
</span></strong><span style="font-size: 18px;">{2,4,3,2,1,8}</span><strong><span style="font-size: 18px;">
Explanation:
</span></strong><span style="font-size: 18px;">After insertion of 2, the final stack will be {2,4,3,2,1,8}.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 3
x = 4
st = {5,3,1}</span><strong><span style="font-size: 18px;">
Output:
</span></strong><span style="font-size: 18px;">{4,5,3,1}</span><strong><span style="font-size: 18px;">
Explanation:
</span></strong><span style="font-size: 18px;">After insertion of 4, the final stack will be {4,5,3,1}.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function <strong>insertAtBottom()</strong> which takes a stack <strong>st </strong>and an integer <strong>x </strong>as inputs and returns the modified stack after insertion.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>0 &lt;= x, elements of stack &lt;= 10<sup>9</sup><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Stack</code>&nbsp;<code>implementation</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;