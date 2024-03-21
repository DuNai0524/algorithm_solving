<p>给定一个已排序的正整数数组 <code>nums</code>&nbsp;<em>，</em>和一个正整数&nbsp;<code>n</code><em> 。</em>从&nbsp;<code>[1, n]</code>&nbsp;区间内选取任意个数字补充到&nbsp;nums&nbsp;中，使得&nbsp;<code>[1, n]</code>&nbsp;区间内的任何数字都可以用&nbsp;nums&nbsp;中某几个数字的和来表示。</p>

<p>请返回 <em>满足上述要求的最少需要补充的数字个数</em>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例&nbsp;1:</strong></p>

<pre>
<strong>输入: </strong>nums = <span><code>[1,3]</code></span>, n = <span><code>6</code></span>
<strong>输出: </strong>1 
<strong>解释:</strong>
根据 nums&nbsp;里现有的组合&nbsp;<span><code>[1], [3], [1,3]</code></span>，可以得出&nbsp;<span><code>1, 3, 4</code></span>。
现在如果我们将&nbsp;<span><code>2</code></span>&nbsp;添加到&nbsp;nums 中，&nbsp;组合变为: <span><code>[1], [2], [3], [1,3], [2,3], [1,2,3]</code></span>。
其和可以表示数字&nbsp;<span><code>1, 2, 3, 4, 5, 6</code></span>，能够覆盖&nbsp;<span><code>[1, 6]</code></span>&nbsp;区间里所有的数。
所以我们最少需要添加一个数字。</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入: </strong>nums = <span><code>[1,5,10]</code></span>, n = <span><code>20</code></span>
<strong>输出:</strong> 2
<strong>解释: </strong>我们需要添加&nbsp;<span><code>[2,4]</code></span>。
</pre>

<p><strong>示例&nbsp;3:</strong></p>

<pre>
<strong>输入: </strong>nums = <span><code>[1,2,2]</code></span>, n = <span><code>5</code></span>
<strong>输出:</strong> 0
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li> 
 <li><code>nums</code>&nbsp;按 <strong>升序排列</strong></li> 
 <li><code>1 &lt;= n &lt;= 2<sup>31</sup>&nbsp;- 1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li></div></div><br><div><li>👍 367</li><li>👎 0</li></div>