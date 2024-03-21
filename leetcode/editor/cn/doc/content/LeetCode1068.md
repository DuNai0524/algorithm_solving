<p>销售表&nbsp;<code>Sales</code>：</p>

<pre>
+-------------+-------+
| Column Name | Type  |
+-------------+-------+
| sale_id     | int   |
| product_id  | int   |
| year        | int   |
| quantity    | int   |
| price       | int   |
+-------------+-------+
(sale_id, year) 是销售表 Sales 的主键（具有唯一值的列的组合）。
product_id 是关联到产品表 Product 的外键（reference 列）。
该表的每一行显示 product_id 在某一年的销售情况。
注意: price 表示每单位价格。
</pre>

<p>产品表&nbsp;<code>Product</code>：</p>

<pre>
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| product_id   | int     |
| product_name | varchar |
+--------------+---------+
product_id&nbsp;是表的主键（具有唯一值的列）。
该表的每一行表示每种产品的产品名称。
</pre>

<p>&nbsp;</p>

<p>编写解决方案，以获取 <code>Sales</code>&nbsp;表中所有 <code>sale_id</code> 对应的&nbsp;<code>product_name</code> 以及该产品的所有<strong>&nbsp;</strong><code>year</code>&nbsp;和<strong>&nbsp;</strong><code>price</code> 。</p>

<p>返回结果表&nbsp;<strong>无顺序要求</strong> 。</p>

<p>结果格式示例如下。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<span><code><strong>输入：</strong>
Sales</code></span> 表：
+---------+------------+------+----------+-------+
| sale_id | product_id | year | quantity | price |
+---------+------------+------+----------+-------+ 
| 1       | 100        | 2008 | 10       | 5000  |
| 2       | 100        | 2009 | 12       | 5000  |
| 7       | 200        | 2011 | 15       | 9000  |
+---------+------------+------+----------+-------+
Product 表：
+------------+--------------+
| product_id | product_name |
+------------+--------------+
| 100        | Nokia        |
| 200        | Apple        |
| 300        | Samsung      |
+------------+--------------+
<strong>输出：</strong>
+--------------+-------+-------+
| product_name | year  | price |
+--------------+-------+-------+
| Nokia        | 2008  | 5000  |
| Nokia        | 2009  | 5000  |
| Apple        | 2011  | 9000  |
+--------------+-------+-------+
</pre>

<div><div>Related Topics</div><div><li>数据库</li></div></div><br><div><li>👍 61</li><li>👎 0</li></div>