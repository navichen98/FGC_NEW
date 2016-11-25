<!DOCTYPE html>
<html lang="en">
<head>
	<!-- Page heads, including stylesheet, links and libs -->
	<?php 
		include_once 'inc/_head.inc';
	?>
	<!-- Style design for current page -->
	<style type="text/css">
	/* 2.Image showcase */
	div#index-bg-top{
		width:100%;
		height:500px;
		margin-top:110px;
		background-image:url(assets/img/bg/bg-1.jpg);
		background-position:center;
	    background-repeat: no repeat;
		/* opacity:0.6; */
		/* background-color:#000033; */
	}
	
	
	</style>

</head>
<body>
	<!-- TOP NAV BAR -->
	<?php include_once 'inc/_navi-centered.inc'; ?>
	
	<!-- What We Do -->
	<?php include_once'inc/_service-overview.inc'; ?>
	
	<!-- OUR INVESTMENT PHILOSOPHY -->
	<section class="wrapper-philosophy">
		<div class = 'col-md-12 phil-title'>
			<h2>OUR INVESTMENT <strong>PHILOSOPHY</strong></h2>

		</div>
		<div class='phil-body'>
			<p>First Guardian works closely with investors and businesses alike, that are
			looking to achieve sustainable growth in the Asia Pacific region in order to
			enhance and maximise long-term value and wealth creation. We have
			consistently based our investment decisions on thorough research and sound
			risk management, assuming a long-term view, focusing on achieving
			responsible capital growth.</p>

			<p>Our mission is to enable our clients to achieve their financial objectives
			through superior investment returns and solutions. We do this through offering
			a compact, client-oriented range of responsible, actively-managed investment
			strategies, all underpinned by our proprietary process. Our product range
			includes equity funds, real asset investments, private equity and structured
			products. As we are a pure play asset manager, we do not have the distractions
			of offering other financial services such as banking or insurance. Investing and
			advising is our sole focus.</p>

			<p>We have a relationship-driven philosophy for working with our clients. By
			providing intelligent, relevant and ongoing support and advice we become
			their trusted advisor.</p>
		</div>
	</section>
	
	<!-- FOOTER -->
	<?php
		include_once 'inc/_footer.inc';
	?>
	<script>
		//alert(121);
	</script>


</body>

</html>
