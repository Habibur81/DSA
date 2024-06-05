<?php
    function checkValue($value){
        if($value == "true" || $value == "1" || $value == true || $value == 1){
            echo "true";
        }else if($value == "false" || $value == "0" || $value == false || $value == 0){
            echo "false";
        }

    }
    
    checkValue("false");