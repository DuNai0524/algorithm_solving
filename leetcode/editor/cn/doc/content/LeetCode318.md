<p>给你一个字符串数组&nbsp;<code>words</code> ，找出并返回 <code>length(words[i]) * length(words[j])</code>&nbsp;的最大值，并且这两个单词不含有公共字母。如果不存在这样的两个单词，返回 <code>0</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例&nbsp;1：</strong></p>

<pre>
<strong>输入：</strong>words = <span><code>["abcw","baz","foo","bar","xtfn","abcdef"]</code></span>
<strong>输出：</strong><span><code>16 
<strong>解释</strong></code></span><strong>：</strong><span><code>这两个单词为<strong> </strong>"abcw", "xtfn"</code></span>。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>words = <span><code>["a","ab","abc","d","cd","bcd","abcd"]</code></span>
<strong>输出：</strong><span><code>4 
<strong>解释</strong></code></span><strong>：</strong>这两个单词为 <span><code>"ab", "cd"</code></span>。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>words = <span><code>["a","aa","aaa","aaaa"]</code></span>
<strong>输出：</strong><span><code>0 
<strong>解释</strong></code></span><strong>：</strong><span><code>不存在这样的两个单词。</code></span>
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= words.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= words[i].length &lt;= 1000</code></li> 
 <li><code>words[i]</code>&nbsp;仅包含小写字母</li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>字符串</li></div></div><br><div><li>👍 521</li><li>👎 0</li></div>