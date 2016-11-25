<?php
	if(isset($_POST['send_']))
	{
		// print_r($_POST);
		$to      = 'navi@ausne.net';
		$subject = 'New Web Request from FGC';
		$message = $_POST['msg'];
		$headers = 'From:'.$_POST['first_name'].' '.$_POST['last_name']
			. "\r\n" .
			'Reply-To:'.$_POST['email']. "\r\n";

		mail($to, $subject, $message, $headers);
	}
	
	echo "Request Sent!";
	
	header("Location: localhost:8080/index.php");
?>