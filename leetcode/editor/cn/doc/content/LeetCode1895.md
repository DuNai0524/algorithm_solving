<p>一个&nbsp;<code>k x k</code>&nbsp;的<strong>&nbsp;幻方</strong>&nbsp;指的是一个&nbsp;<code>k x k</code>&nbsp;填满整数的方格阵，且每一行、每一列以及两条对角线的和 <strong>全部</strong><strong>相等</strong>&nbsp;。幻方中的整数 <strong>不需要互不相同</strong>&nbsp;。显然，每个&nbsp;<code>1 x 1</code>&nbsp;的方格都是一个幻方。</p>

<p>给你一个&nbsp;<code>m x n</code>&nbsp;的整数矩阵&nbsp;<code>grid</code>&nbsp;，请你返回矩阵中&nbsp;<strong>最大幻方</strong>&nbsp;的&nbsp;<strong>尺寸</strong>&nbsp;（即边长 <code>k</code>）。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/29/magicsquare-grid.jpg" style="width: 413px; height: 335px;"> <pre><b>输入：</b>grid = [[7,1,4,5,6],[2,5,1,6,4],[1,5,4,3,2],[1,2,7,3,4]]
<b>输出：</b>3
<b>解释：</b>最大幻方尺寸为 3 。
每一行，每一列以及两条对角线的和都等于 12 。
- 每一行的和：5+1+6 = 5+4+3 = 2+7+3 = 12
- 每一列的和：5+5+2 = 1+4+7 = 6+3+3 = 12
- 对角线的和：5+4+3 = 6+4+2 = 12
</pre> </img>

<p><strong>示例 2：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/29/magicsquare2-grid.jpg" style="width: 333px; height: 255px;"> <pre><b>输入：</b>grid = [[5,1,3,1],[9,3,3,1],[1,3,3,8]]
<b>输出：</b>2
</pre> </img>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>m == grid.length</code></li> 
 <li><code>n == grid[i].length</code></li> 
 <li><code>1 &lt;= m, n &lt;= 50</code></li> 
 <li><code>1 &lt;= grid[i][j] &lt;= 10<sup>6</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>矩阵</li><li>前缀和</li></div></div><br><div><li>👍 16</li><li>👎 0</li></div>