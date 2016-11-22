<!DOCTYPE html>
<html lang="en">
<head>
	<!-- Page heads, including stylesheet, links and libs -->
	<?php 
		include_once 'inc/_head.inc';
	?>

	<!-- style of the page -->
	<style>
		section.contact{
			margin-top: 15px;
		}

		div.contact-content{
			max-width: 1080px;
			margin:0 auto;
			padding-bottom: 80px;
		}

		div.contact-title{
			font-weight: 500;
		}

		div.contact-form-input{
			padding:0px 0px;
			margin:10px auto;
		}

		textarea.contact-message{
			resize: none;
		}

		#map{
			width: 400px;
			height: 300px;
			margin:30px 0px;
		}


		.approach{
			font-size: 18px;
			font-family: "HelveticaNeue-Light", "Helvetica Neue Light", "Helvetica Neue", Helvetica, Arial, "Lucida Grande", sans-serif; 
			text-align: justify;
		}

	</style>

</head>

<body>
	<!-- TOP NAV BAR -->
	<?php 
		include_once 'inc/_navi-centered.inc';
	?>
	
	<!-- PAGE CONTENTS -->
	<section class='contact'>
		<div class="row contact-content">
			<!-- ADDRESS AND MAP -->
			<div class='col-md-6 approach'>
				<h3><strong>ADDRESS</strong></h3>
				Level 13, 350 Collins Street,</br>
				Melbourne Vic 3000</br>
				Australia</br></br>
				<strong>TEL:</strong></br>
				+61 3 9607 2975</br></br>
				<strong>EMAIL:</strong></br>
				info@firstguardiancapital.com</br>
				<div class='contact-map' id='map'>

				</div>
			</div>
			<!-- Form -->
			<div class='col-md-6' style='margin-top:25px;'>
				<h3 style='font-style: italic; font-size:20px;'>
					To have our team contact you,
					simply fill out the form below.
				</h3>
				<form>
					<div class="col-md-12 contact-form-input approach" >
						<label>Firstname</label>
						<input type="text" class="form-control" placeholder="firstname" required>
					</div>

					<div class="col-md-12 contact-form-input approach">
						<label>Lastname</label>
						<input type="text" class="form-control" placeholder="lastname" required>
					</div>

					<div class="col-md-12 contact-form-input approach">
						<label>Email address</label>
						<input type="email" class="form-control" placeholder="email" required>
					</div>

					<div class="col-md-12 contact-form-input approach">
						<label>Message</label>
						<textarea class="form-control contact-message" rows='7' cols='30'>
							
						</textarea> 
					</div>

					<div class="col-md-6 contact-form-input approach">
						<button class="btn btn-default" id='sub_us'>SEND</button>
					</div>
				</form>
			</div>
			<!-- END FORM -->

		</div>
	</section>
	<!-- FOOTER -->
	<?php
		include_once 'inc/_footer.inc';
	?>

	<!-- SCRIPTS -->
	<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyC_MGm_lg6tAOrWga1IufPvQhNFylYgW0M&callback=initMap"async defer>
	</script>
	<script>
		//alert(121);
	</script>
	
	<!-- Google Map -->
	<script>
	var map;
	var LatLng = {lat: -37.816105, lng: 144.962716};

	
	function initMap() {
		office = new google.maps.Map(document.getElementById('map'), {
			center: LatLng,
			zoom: 15,
			scrollwheel:  false,
			draggable: false
		});
		
		var marker = new google.maps.Marker({
		  position: LatLng,
		  map: office,
		  title: '350 Collins Strees, Melbourne, Vic 3000'
		});
	}
	</script>





</body>

</html>
