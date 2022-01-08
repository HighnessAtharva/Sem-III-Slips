<html>
<body>
    <h2>Find Number of Vowels in a String</h2>
    <form action="" method="post">
        <input type="text" name="string" />
        <input type="submit" />
    </form>
</body>
</html>
<?php 
    if($_POST)
    {
        $string = strtolower($_POST['string']);
        $vowels = array('a','e','i','o','u');
        $len = strlen($string);
        $num = 0;
        for($i=0; $i<$len; $i++){
            if(in_array($string[$i], $vowels))
            {
                $num++;
            }
        }
         echo "Number of vowels : ".$num;
    }
 
?>