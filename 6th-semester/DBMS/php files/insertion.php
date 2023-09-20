<?php

include("connection.php");

$query= "insert into client values(777,'hammad')";
$result= mysqli_query($own,$query);

if ($result)
{
	echo ("data inserted");
}

esle{
	echo ("insertion failed");
}
<?>