<h2><a href="https://www.geeksforgeeks.org/problems/search-query-auto-complete/0?category%255B%255D=Strings&problemStatus=unsolved&difficulty%255B%255D=2&page=1&query=category%255B%255DStringsproblemStatusunsolveddifficulty%255B%255D2page1category%255B%255DStr">Search Query Auto Complete</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Design a search query autocomplete system for a search engine. </span></p>
<p><span style="font-size: 18px;">The users will input a sentence ( which may have multiple words and ends with special character '<code>#</code>').</span></p>
<p><span style="font-size: 18px;">For each character they type except '<code>#</code>', you need to return the top 3 previously entered&nbsp;and most frequently queried&nbsp;sentences that have prefix the same as the part of sentence already typed. </span></p>
<p><span style="font-size: 18px;">Here are the specific rules:</span></p>
<ol>
<li><span style="font-size: 18px;">The frequency&nbsp;for a sentence is defined as the number of times a user typed the exactly same sentence before.</span></li>
<li><span style="font-size: 18px;">The returned top 3 sentences should be sorted by frequency&nbsp;(The first is the most frequent).&nbsp; If several sentences have the same frequency, you need to use ASCII-code order (smaller one appears first).</span></li>
<li><span style="font-size: 18px;">If less than 3 valid&nbsp;sentences exist, then just return as many as you can.</span></li>
<li><span style="font-size: 18px;">When the input is a special character, it means the sentence ends, and in this case, you need to return an empty list. </span></li>
</ol>
<p>&nbsp;</p>
<p><span style="font-size: 18px;">Your job is to implement the methods of the AutoCompleteSystem:</span></p>
<ul>
<li><span style="font-size: 18px;"><code>AutoCompleteSystem(String[] sentences, int[] times):</code> This is the constructor. The input is previously used&nbsp;data. Sentences is a string array consists of previously typed sentences. Times is the corresponding times a sentence has been typed. Your system should record these historical sentences.</span></li>
</ul>
<p><span style="font-size: 18px;">Now, the user wants to input a new sentence. The following function will provide the next character the user types:</span></p>
<ul>
<li><span style="font-size: 18px;"><code>String[]&nbsp;input(char c):</code>&nbsp;The input c is the next character typed by the user. The character will only be lower-case letters ('a' to 'z'), blank space (' ') or a special character ('<code>#</code>'). Also, the previously typed sentence should be recorded in your system. The output an array&nbsp;will be the top 3 historical sentences that have prefix the same as the part of sentence already typed.</span></li>
</ul>
<p>&nbsp;</p>
<p><strong><span style="font-size: 18px;">Example:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Operation</strong>:
AutoCompleteSystem(["i love you", "island",
"ironman", "i love geeksforgeeks"], [5,3,2,2])

The system have already tracked down the 
following sentences and their corresponding 
times: 
"i love you" : 5 times 
"island" : 3 times 
"ironman" : 2 times 
"i love geeksforgeeks" : 2 times 

Now, the user begins another search: 

<strong>Operation</strong>: input('i') 
<strong>Output</strong>: 
["i love you", "island","i love 
&nbsp;                      geeksforgeeks"] 

<strong>Explanation</strong>: 
There are four sentences that have prefix 
"i". Among them, "ironman" and "i love 
geeksforgeeks" have same frequency. Since 
' ' has ASCII code 32 and 'r' has ASCII code
 114, "i love geeksforgeeks" should be in 
front of "ironman". Also we only need to 
output top 3 most frequent sentences, so 
"ironman" will be ignored. 

<strong>Operation</strong>: input(' ') 
<strong>Output</strong>: ["i love you","i love geeksforgeeks"] 
<strong>Explanation</strong>: 
There are only two sentences that have prefix 
"i ". 

<strong>Operation</strong>: input('a') 
<strong>Output</strong>: [] 
<strong>Explanation</strong>: 
There are no sentences that have prefix "i a"

<strong>Operation</strong>: input('#') 
<strong>Output</strong>: [] 
<strong>Explanation</strong>: 
The user finished the input, the sentence 
"i a" should be saved as a historical 
sentence in system. And the next input 
will be counted as a new search.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">You don't need to take inputs or give outputs . You just have to complete the <strong>input()</strong>&nbsp;method and the&nbsp;<strong>constructor</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n*max|L|), per input query where n represents the number of historical sentences in the system and L&nbsp;is the maximum&nbsp;length of the words.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(|sentences|), |sentences|&nbsp;represents the total length&nbsp;of all historical sentences in the system.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong> </span></p>
<ul>
<li><span style="font-size: 18px;">The input sentence will always start with a letter and end with '<code>#</code>', and at most&nbsp;one blank space will exist between two words. </span></li>
<li><span style="font-size: 18px;">The number of complete sentences that to be searched won't exceed 10<sup>2</sup>.</span></li>
<li><span style="font-size: 18px;">The length of each sentence including those in the historical data and query data&nbsp;won't exceed 10<sup>2</sup>. </span></li>
</ul></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Trie</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;