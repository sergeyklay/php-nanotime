--TEST--
nano\second()
--FILE--
<?php
var_dump(nano\second());
?>
==DONE==
--EXPECTREGEX--
int\(1\d{18}\)
==DONE==
