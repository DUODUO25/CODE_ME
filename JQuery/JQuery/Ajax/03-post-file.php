<?php 
    //echo "post page"; 
   // print_r($_POST);
   // print_r($_FILES);
   //1. tips:获取上传文件对应的字典
   $fileInfo = $_FILES["upFile"];
  // print_r($fileInfo);
  // echo "<br>";
  // 2. tips:获取上传文件的名称
   $fileName = $fileInfo["name"];
  // 3. tips:获取上传文件保存的临时路径
   $filePath = $fileInfo["tmp_name"];
  /*  echo $fileName;
   echo "<br>";
   echo $filePath; */
   //4.tips:移动文件
   move_uploaded_file($filePath, "./source/".$fileName);
?>