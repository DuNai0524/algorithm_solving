<p>给你一个整数数组 <code>nums</code> ，你的目标是令 <code>nums</code> 中的所有元素相等。完成一次减少操作需要遵照下面的几个步骤：</p>

<ol> 
 <li>找出 <code>nums</code> 中的 <strong>最大</strong> 值。记这个值为 <code>largest</code> 并取其下标 <code>i</code> （<strong>下标从 0 开始计数</strong>）。如果有多个元素都是最大值，则取最小的 <code>i</code> 。</li> 
 <li>找出 <code>nums</code> 中的 <strong>下一个最大</strong> 值，这个值 <strong>严格小于</strong> <code>largest</code> ，记为 <code>nextLargest</code> 。</li> 
 <li>将 <code>nums[i]</code> 减少到 <code>nextLargest</code> 。</li> 
</ol>

<p>返回使<em> </em><code>nums</code><em> </em>中的所有元素相等的操作次数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,1,3]
<strong>输出：</strong>3
<strong>解释：</strong>需要 3 次操作使 nums 中的所有元素相等：
1. largest = 5 下标为 0 。nextLargest = 3 。将 nums[0] 减少到 3 。nums = [<strong>3</strong>,1,3] 。
2. largest = 3 下标为 0 。nextLargest = 1 。将 nums[0] 减少到 1 。nums = [<strong>1</strong>,1,3] 。
3. largest = 3 下标为 2 。nextLargest = 1 。将 nums[2] 减少到 1 。nums = [<strong>1</strong>,1,<strong>1</strong>] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,1,1]
<strong>输出：</strong>0
<strong>解释：</strong>nums 中的所有元素已经是相等的。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,1,2,2,3]
<strong>输出：</strong>4
<strong>解释：</strong>需要 4 次操作使 nums 中的所有元素相等：
1. largest = 3 下标为 4 。nextLargest = 2 。将 nums[4] 减少到 2 。nums = [1,1,2,2,<strong>2</strong>] 。
2. largest = 2 下标为 2 。nextLargest = 1 。将 nums[2] 减少到 1 。nums = [1,1,<strong>1</strong>,2,2] 。 
3. largest = 2 下标为 3 。nextLargest = 1 。将 nums[3] 减少到 1 。nums = [1,1,1,<strong>1</strong>,2] 。 
4. largest = 2 下标为 4 。nextLargest = 1 。将 nums[4] 减少到 1 。nums = [1,1,1,1,<strong>1</strong>] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 5 * 10<sup>4</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>排序</li></div></div><br><div><li>👍 32</li><li>👎 0</li></div>