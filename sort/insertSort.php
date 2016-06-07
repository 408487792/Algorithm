<?php
/*
+----------------------------------------------------------------------+
| Author:                 YunDuan                                         |
+----------------------------------------------------------------------+
*/

/**
 * 插入排序
 * @param array $arr
 */
function INSERTION_SORT(&$arr){
	$count = count($arr);
	if($count <= 1) return ;
	for ($i = 1; $i < $count; $i++) {//第二张开始
		$currentPoker = $arr[$i];// 即将插入的值 备份此值 O(1)
		$j = $i;
		while ($j > 0 && ($currentPoker < $arr[$j-1])) {//若是小于 则$arr[$j-1]往后移一位
			$arr[$j] = $arr[$j-1];
			--$j;
		}
		$arr[$j] = $currentPoker;//合适的位置插入
	}
}