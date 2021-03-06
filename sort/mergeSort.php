<?php
/*
+----------------------------------------------------------------------+
| Author:                 YunDuan                                         |
+----------------------------------------------------------------------+
*/


$arr = [9,8,7,6,4,5,55,44,99,3,2,1,0];
print_r($arr);
MERGE_SORT($arr, 0, count($arr)-1);
print_r($arr);

/**
 * 归并排序
 * @param array $arr
 * @param long $startIndex
 * @param long $endIndex
 */
function MERGE_SORT(&$arr, $startIndex, $endIndex) {

    if($startIndex >= $endIndex) return ;
    else {
        $middleIndex = floor(($startIndex + $endIndex)/2);
        MERGE_SORT($arr, $startIndex, $middleIndex);
        MERGE_SORT($arr, $middleIndex+1, $endIndex);
        MERGE($arr, $startIndex, $middleIndex, $endIndex);
    }
    return ;
}


/**
 * 合并
 * @param array $arr
 * @param long $startIndex
 * @param long $middleIndex
 * @param long $endIndex
 */
function MERGE(&$arr, $startIndex, $middleIndex, $endIndex) {
    $L = array();
    $R = array();
    $countL = $middleIndex - $startIndex + 1;
    $countR = $endIndex - $middleIndex;
    for ($i = $startIndex; $i <= $middleIndex; $i++) $L[] = $arr[$i];
    for ($i = $middleIndex + 1; $i <= $endIndex; $i++) $R[] = $arr[$i];
    for ($index = $startIndex, $i = 0, $j = 0; $index <= $endIndex; ++$index) {
        if($i >= $countL && $j < $countR) {
            $arr[$index] = $R[$j++];
        }else if($j >= $countR && $i < $countL) {
            $arr[$index] = $L[$i++];
        }else {
            if ($L[$i] <= $R[$j]) {
                $arr[$index] = $L[$i++];
            }else {
                $arr[$index] = $R[$j++];
            }
        }
    }
}