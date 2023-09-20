<!DOCTYPE html>
<html>

<head>
<title></title>

</head>
<body>

 <form method= "post" action ="">

  client id <input type ="text" name "id" <br><br>
  client name <input type ="text" cname "id" <br><br>
  client id <input type ="text" name "id" <br><br>
  input type ="submit" name "submit">;
</form> 


<?php

  include("connectionss.php");

  if (isset($_post['id']))
  {
   $id= $_post ['id'];
   $name= $_post ['cname'];
   $branch= $_post ['bn'];

   $query= "insert into client values('$id', 'cname', 'branch')";
   $result= mysqli_query($con ,$query);

}
  
  if ($result)
 {
 	echo "insertion sucessfull";
 }
 
 else {

 	echo "insertion failed";
 }

?>

</body>
</html>
