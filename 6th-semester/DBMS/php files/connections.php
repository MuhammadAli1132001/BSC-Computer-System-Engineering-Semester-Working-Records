


<?php
$own=mysqli_connect("localhost","root","","company_database");
 if ($own)
 {
 	echo "connection estalished!";
 }
  else
  	echo "connection failed";
?>