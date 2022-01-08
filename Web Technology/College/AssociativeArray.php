<?php
$employess = array("Peter"=>"35000", "Ben"=>"37000", "Joe"=>"43000", "Alex"=>"89555","Benjamin"=>"696969");
$total= count($employess);
echo 'Total employees are: '. $total;
echo '<hr>';

foreach($employess as $employee => $salary) {
    
  echo "Employee " . $employee . " has salary: " . $salary;
  echo "<hr>";

}


?>