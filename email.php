<?php
	if(isset($_POST['send_']))
	{
		// print_r($_POST);
		$to      = "navi@ausne.net";
		$subject = "New Web Request from FGC";
		$message = "Name:\r\n  ".$_POST['first_name'].' '.$_POST['last_name'].
					"\r\n".
					"\r\n".
					"Message:\r\n  ".$_POST['msg'].
					"\r\n";
		$headers = "From:".$_POST['email']. "\r\n";
		mail($to, $subject, $message, $headers);		
		echo "Request sent! We will get back to you soon!";
		// header("Location:index.php");
		echo "<script>window.location = 'index.php';</script>;";
	}
	
	
?>