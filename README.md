# eval_test

#问题
$aaa=2389;
$data = eval_test("<?php \$var='huas128';echo 'hello world!'.\$var; echo 'aaaaaa';var_dump(\$aaa);?>");

在eval_test中的php语句中访问不了全局变量$aaa;
