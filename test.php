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
	
	#Container .mix{
		display: none;
	}
	</style>

</head>
<body>
	<div class="filter" data-filter="all">Show All</div>
	<div class="filter" data-filter=".category-1">Category 1</div>
	<div class="filter" data-filter=".category-2">Category 2</div>	
	
	<div class="sort" data-sort="default">Default</div>
	<div class="sort" data-sort="myorder:asc">Ascending</div>
	<div class="sort" data-sort="myorder:desc">Descending</div>
	<div class="sort" data-sort="random">Random</div>
	
	<div id="Container">
		<div class="mix category-1" data-myorder="2">1</div>
		<div class="mix category-2" data-myorder="4">2</div>
		<div class="mix category-1" data-myorder="1">3</div>
		<div class="mix category-2" data-myorder="8">4</div>
	</div>
	<script>
		// On document ready:

	$(function(){

		// Instantiate MixItUp:

		$('#Container').mixItUp();

	});
	</script>


</body>

</html>
