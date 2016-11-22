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
		text-align:center;
	}

	p.panel-body{
		font-size:20px;
		max-width:1080px;
		margin:0 auto;
		text-align:center;
	}
		
	</style>

</head>

<body>
	<!-- TOP NAV BAR -->
	<?php 
		include_once 'inc/_navi-centered.inc';
	?>
	
	<!-- Intro panel -->
	<section class="panel-wrapper">
		<p class='panel-title'>
			What  We  Do
		</p>
		
		<p class='panel-body'>
			<strong>
				First Guardian Capital operates as an independent business and is directed and managed by a diversely talented group of
				finance and investment professionals, including its founding partners.
			</strong>
		</p>
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
