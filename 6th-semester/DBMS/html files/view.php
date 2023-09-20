<?php

include("connectionss.php");

$query= "SELECT * FROM client";
$result= mysqli_query($con, $query);

$num_rows = mysqli_num_rows($result);

 if ($result)
 {
   if ($num_rows !=0)
   {
     for each $result as  $data
     { 
     	echo $data ['client_id'];
     	echo $data ['client_name'];
     	echo "<br>";

   }
 }
 }
   else 
    echo "no record found!";
?>