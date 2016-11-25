<!DOCTYPE html>
<html lang="en">
<head>
	<!-- Page heads, including stylesheet, links and libs -->
	<?php 
		include_once 'inc/_head.inc';
	?>
	<style type="text/css">
	section.panel-wrapper{
		width:100%;
		min-height:100px;
		background-color:var(--gen-white); 
		overflow:auto;
		color:var(--gen-dark);
		padding-top:30px;
		padding-bottom:30px;
	}


	p.panel-title{
		font-size:36px;
		max-width:1080px;
		margin:0 auto;
	}

	p.panel-body{
		font-size:20px;
		max-width:1080px;
		margin:0 auto;
		
	}
	
	div.co-title{
	padding-top: 10px;
	}


	.corp-overview{
		font-size: 18px;

	}
		
	</style>

</head>

<body>
	<!-- TOP NAV BAR -->
	<?php 
		include_once 'inc/_navi-centered.inc';
	?>
	
	<!-- Intro panel -->
	<section class="wrapper-bg-light">
		<div class="row wrapper-content">
			<div class = 'col-md-8 co-title'>
				<h2>WHAT WE <strong>DO</strong></h2></br>
				
				<p class='corp-overview'>First Guardian works closely with investors and businesses alike, that are
				looking to achieve sustainable growth in the Asia Pacific region in order to
				enhance and maximise long-term value and wealth creation. We have
				consistently based our investment decisions on thorough research and sound
				risk management, assuming a long-term view, focusing on achieving
				responsible capital growth.</p></br>

				<p class='corp-overview'>Our mission is to enable our clients to achieve their financial objectives
				through superior investment returns and solutions. We do this through offering
				a compact, client-oriented range of responsible, actively-managed investment
				strategies, all underpinned by our proprietary process. Our product range
				includes equity funds, real asset investments, private equity and structured
				products. As we are a pure play asset manager, we do not have the distractions
				of offering other financial services such as banking or insurance. Investing and
				advising is our sole focus.</p></br>

				<p class='corp-overview'>We have a relationship-driven philosophy for working with our clients. By
				providing intelligent, relevant and ongoing support and advice we become
				their trusted advisor.</p></br>
			</div>
		</div>
	</section>
	
	
	<!-- Services -->
	<?php include_once 'inc/_what-we-do-detailed.inc' ?>

	
	<!-- FOOTER -->
	<?php
		include_once 'inc/_footer.inc';
	?>

	<!-- SCRIPTS -->
	<script>
		//alert(121);
	</script>


</body>

</html>
