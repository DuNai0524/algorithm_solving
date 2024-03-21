<p>定义一个函数&nbsp;<code>f(s)</code>，统计&nbsp;<code>s</code> &nbsp;中<strong>（按字典序比较）最小字母的出现频次</strong> ，其中 <code>s</code>&nbsp;是一个非空字符串。</p>

<p>例如，若&nbsp;<code>s = "dcce"</code>，那么&nbsp;<code>f(s) = 2</code>，因为字典序最小字母是&nbsp;<code>"c"</code>，它出现了&nbsp;2 次。</p>

<p>现在，给你两个字符串数组待查表&nbsp;<code>queries</code>&nbsp;和词汇表&nbsp;<code>words</code> 。对于每次查询&nbsp;<code>queries[i]</code> ，需统计 <code>words</code> 中满足&nbsp;<code>f(queries[i])</code>&nbsp;&lt; <code>f(W)</code>&nbsp;的<strong> 词的数目</strong> ，<code>W</code> 表示词汇表&nbsp;<code>words</code>&nbsp;中的每个词。</p>

<p>请你返回一个整数数组&nbsp;<code>answer</code>&nbsp;作为答案，其中每个&nbsp;<code>answer[i]</code>&nbsp;是第 <code>i</code> 次查询的结果。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>queries = ["cbd"], words = ["zaaaz"]
<strong>输出：</strong>[1]
<strong>解释：</strong>查询 f("cbd") = 1，而 f("zaaaz") = 3 所以 f("cbd") &lt; f("zaaaz")。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>queries = ["bbb","cc"], words = ["a","aa","aaa","aaaa"]
<strong>输出：</strong>[1,2]
<strong>解释：</strong>第一个查询 f("bbb") &lt; f("aaaa")，第二个查询 f("aaa") 和 f("aaaa") 都 &gt; f("cc")。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= queries.length &lt;= 2000</code></li> 
 <li><code>1 &lt;= words.length &lt;= 2000</code></li> 
 <li><code>1 &lt;= queries[i].length, words[i].length &lt;= 10</code></li> 
 <li><code>queries[i][j]</code>、<code>words[i][j]</code> 都由小写英文字母组成</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>字符串</li><li>二分查找</li><li>排序</li></div></div><br><div><li>👍 107</li><li>👎 0</li></div>