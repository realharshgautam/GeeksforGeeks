<h2><a href="https://www.geeksforgeeks.org/problems/huffman-decoding/1?page=1&difficulty=Hard&sortBy=accuracy">Huffman Decoding</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a encoded binary string and a Huffman MinHeap tree, your task is to complete the function decodeHuffmanData(), which decodes the binary encoded string and return the original string.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> Each node of the min heap contains 2 data members, a character and an integer to denote its frequency. The character '$' is the special character used for internal nodes whose min heap node only need a integer field.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
binaryString = 
1111111111110001010101010100010010101010101
Min Heap Tree =  
                $(20)
              /      \
            /          \
         $(8)            \
       /     \             \
    $(3)      \            $(12)
    /  \       \           /    \
B(1)    D(2)    E(5)    C(6)    A(6)</span>

<span style="font-size: 18px;"><strong>Output:</strong> AAAAAABCCCCCCDDEEEEE</span>

<span style="font-size: 18px;"><strong>Explanation:</strong>
The following chart can be made from the 
given min heap tree.
<strong>character    frequency    code</strong>
    A             6        11               
    B             1        000
    C             6        10
    D             2        001    
    E             5        01</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
binaryString =
01110100011111000101101011101000111
Min Heap Tree =  
                         $(13)
                      /        \
                    /            \
                  /                \
               $(5)                  \
             /      \                  \
            /        \                   \
         $(3)         \                  $(8)
        /    \         \                /    \
     $(2)     \         \            $(4)     \
    /   \      \         \          /   \      \
f(1)    o(1)    r(1)    g(2)    k(2)    s(2)    e(4)</span>

<span style="font-size: 18px;"><strong>Output:</strong> geeksforgeeks</span>

<span style="font-size: 18px;"><strong>Explanation:</strong>
The following chart can be made from the 
given min heap tree.
<strong>character    frequency    code</strong>
    f             1        0000                 
    o             1        0001
    r             1        001
    g             2        01    
    k             2        100
    s             2        101
    e             4        11</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task: &nbsp;</strong><br>You dont need to read input or print anything. Complete the function <strong>decodeHuffmanData()</strong> which takes the root of the Huffman min heap tree and the encoded Binary String as input parameters and returns the decoded string.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N log N)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10^3</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Algorithms</code>&nbsp;