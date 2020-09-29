<html>
	<head>
		<meta charset="utf-8">
	</head>
	<body>
		<h3>邮件发送成功， <a id="time">3</a> 秒后返回。</h3>
		<script>
				var int = setInterval("clock()", 1000);
				var num = 3;
				function clock() {
					num > 0 ? num-- : clearInterval(int);
					document.getElementById("time").innerHTML = num;
				}
		</script>
	</body>
</html>
<?php
header("Content-Type: text/html; charset=utf-8");
require_once "class.phpmailer.php";
// 实例化 PHPMailer 类
//$filename='../mailer2/email.html';
//$handle=fopen($filename,'r');
//$message_body= fread($handle, filesize($filename));
//fclose($handle);
$message_body = file_get_contents("email.html");

$mail = new PHPMailer();
$mail->IsSMTP(); // send via SMTP
$mail->Subject = "储物盒产品动向跟踪邮件 - 订阅成功"; // 邮件主题
$mail->Body = $message_body; //邮件内容
$mail->Host = "smtp.139.com"; // SMTP servers
$mail->SMTPAuth = true; // turn on SMTP authentication
$mail->Username = "15946109336"; // SMTP username 注意：普通邮件认证不需要加 @域名
$mail->Password = "Hbj123123"; // SMTP password
$mail->From = "15946109336@139.com"; // 发件人邮箱
$mail->FromName = "CREATOR团队"; // 发件人
$mail->CharSet = "UTF-8"; // 这里指定字符集
$mail->Encoding = "base64";
$mail->IsHTML(true); // send as HTML
// 填入最基本的参数
//$mail->AddAddress( "15946109336@139.com" ); // 收件人
$mail->AddAddress( $_POST['email'] ); // 收件人
$mail->Send();

//
if (empty($mail->ErrorInfo)) {
	//header();
	header("refresh:3; url=gallery.html");
	exit;
};
/*
header('HTTP/1.1 401 Unauthorized');
header('WWW-Authenticate: Basic realm="Top Secret"');
print 'Text that will be displayed if the user hits cancel or ';
print 'enters wrong login data';*/
?>