<h2><a href="https://www.geeksforgeeks.org/problems/maximum-path-sum/1?page=1&difficulty=Hard&sortBy=submissions">Maximum Path Sum between 2 Special Nodes</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree in which each node element contains a number. Find the maximum possible path sum from one special node to another special node.</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>Here&nbsp;special node is a node which is connected to exactly one different node.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:      </strong>
           3                               
         /    \                          
       4       5                     
      /  \      
    -10   4                          </span>
<span style="font-size:18px"><strong>Output:</strong> 16</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Maximum Sum lies between special node 4 and 5.
4 + 4 + 3 + 5 = 16.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:    </strong>
            -15                               
         /      \                          
        5         6                      
      /  \       / \
    -8    1     3   9
   /  \              \
  2   -3              0
                     / \
                    4  -1
                       /
                     10  </span>
<span style="font-size:18px"><strong>Output:</strong>  27</span>
<span style="font-size:18px"><strong>Explanation:</strong>
The maximum possible sum from one special node 
to another is (3 + 6 + 9 + 0 + -1 + 10 = 27)</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>maxPathSum() </strong>which takes root node as input parameter and returns the maximum sum between 2 special nodes.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(Height of Tree)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">2&nbsp; ≤&nbsp; Number of nodes&nbsp; ≤&nbsp; 10<sup>4</sup></span><br>
<span style="font-size:18px">-10<sup>3&nbsp;&nbsp;</sup>≤ Value of each node&nbsp;≤ 10<sup>3</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>FactSet</code>&nbsp;<code>Directi</code>&nbsp;<code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;