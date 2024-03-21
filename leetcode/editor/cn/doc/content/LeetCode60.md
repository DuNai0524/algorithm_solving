<p>给出集合&nbsp;<code>[1,2,3,...,n]</code>，其所有元素共有&nbsp;<code>n!</code> 种排列。</p>

<p>按大小顺序列出所有排列情况，并一一标记，当&nbsp;<code>n = 3</code> 时, 所有排列如下：</p>

<ol> 
 <li><code>"123"</code></li> 
 <li><code>"132"</code></li> 
 <li><code>"213"</code></li> 
 <li><code>"231"</code></li> 
 <li><code>"312"</code></li> 
 <li><code>"321"</code></li> 
</ol>

<p>给定&nbsp;<code>n</code> 和&nbsp;<code>k</code>，返回第&nbsp;<code>k</code>&nbsp;个排列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 3, k = 3
<strong>输出：</strong>"213"
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 4, k = 9
<strong>输出：</strong>"2314"
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = 3, k = 1
<strong>输出：</strong>"123"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 9</code></li> 
 <li><code>1 &lt;= k &lt;= n!</code></li> 
</ul>

<div><div>Related Topics</div><div><li>递归</li><li>数学</li></div></div><br><div><li>👍 833</li><li>👎 0</li></div>