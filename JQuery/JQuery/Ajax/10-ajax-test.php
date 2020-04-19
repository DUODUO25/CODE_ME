<?php 
    //1.tips:定义字典保存商品信息
/* $products = array(
    "nz"=>array("title"=>"甜美女装","des"=>"人见人爱，花见花开，甜美系列","image"=>"images/1.jpg"),
    "bb"=>array("title"=>"奢华LV包","des"=>"送系列","image"=>"images/2.jpg"),
    "tx"=>array("title"=>"键盘拖鞋","des"=>"程序系列","image"=>"images/3.jpg"),
 );
    //2.tips；获取前端传来的数据
    $name = $_GET["name"];
    //3.tips:根据前端传入的key，获取对应的字典
    $product = $products[$name];
    $title = $product["title"];
    $des = $product["des"];
    $image = $product["image"];
    echo $title;
    echo "|";
    echo $des;
    echo "|";
    echo $image; */
   /*  header("content-type:text/xml;charset=utf-8");
    echo file_get_contents("10-ajax-test.xml"); */
    echo file_get_contents("10-ajax-test.txt");

?>