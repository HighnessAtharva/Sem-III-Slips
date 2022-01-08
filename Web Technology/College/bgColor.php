<?php
$day=date("l");
switch($day)
{
case 'Monday':
$bg_color = "red";
break;
case 'Tuesday':
$bg_color = "blue";
break;
case 'Wednesday':
$bg_color = "blue";
break;
case 'Thursday':
$bg_color = "gray";
break;
case 'Friday':
$bg_color = "yellow";
break;
case 'Saturday':
$bg_color = "green";
break;
case 'Sunday':
default:
$bg_color = "black";
break;
}
echo "<body style='background-color:$bg_color'>Welcome to my Homepage</body>";
?>