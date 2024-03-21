<p>给你两个整数数组&nbsp;<code>nums1</code> 和&nbsp;<code>nums2</code>&nbsp;，它们长度都为&nbsp;<code>n</code>&nbsp;。</p>

<p>两个数组的 <strong>异或值之和</strong>&nbsp;为&nbsp;<code>(nums1[0] XOR nums2[0]) + (nums1[1] XOR nums2[1]) + ... + (nums1[n - 1] XOR nums2[n - 1])</code>&nbsp;（<strong>下标从 0 开始</strong>）。</p>

<ul> 
 <li>比方说，<code>[1,2,3]</code> 和&nbsp;<code>[3,2,1]</code>&nbsp;的 <strong>异或值之和</strong>&nbsp;等于&nbsp;<code>(1 XOR 3) + (2 XOR 2) + (3 XOR 1) = 2 + 0 + 2 = 4</code>&nbsp;。</li> 
</ul>

<p>请你将&nbsp;<code>nums2</code>&nbsp;中的元素重新排列，使得 <strong>异或值之和</strong>&nbsp;<strong>最小</strong>&nbsp;。</p>

<p>请你返回重新排列之后的 <strong>异或值之和</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums1 = [1,2], nums2 = [2,3]
<b>输出：</b>2
<b>解释：</b>将 <span><code>nums2</code></span> 重新排列得到 <span><code>[3,2] 。</code></span>
异或值之和为 (1 XOR 3) + (2 XOR 2) = 2 + 0 = 2 。</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums1 = [1,0,3], nums2 = [5,3,4]
<b>输出：</b>8
<b>解释：</b>将 <span><code>nums2 重新排列得到</code></span> <span><code>[5,4,3] 。</code></span>
异或值之和为 (1 XOR 5) + (0 XOR 4) + (3 XOR 3) = 4 + 4 + 0 = 8 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == nums1.length</code></li> 
 <li><code>n == nums2.length</code></li> 
 <li><code>1 &lt;= n &lt;= 14</code></li> 
 <li><code>0 &lt;= nums1[i], nums2[i] &lt;= 10<sup>7</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>动态规划</li><li>状态压缩</li></div></div><br><div><li>👍 43</li><li>👎 0</li></div>