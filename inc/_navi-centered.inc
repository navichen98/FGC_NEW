
<!-- Test for git -->
<!-- changed -->
<!-- is it？ -->
<!-- Style properties css -->

<style type="text/css">



/* Image showcase */
	div.img-bg-top{
		width:100%;
		height:600px;
		margin-top:0px;
		background-position:center;
		background-repeat: no repeat;
		background-size:cover;
		/* opacity:0.6; */
		/* background-color:#000033; */
	}
	
	.img_1{
		background-image:url(assets/img/bg/river_boat.jpg);
		-webkit-transform: background-image 0.3s ease-in-out; /* Firefox */
		-webkit-transition: background-image 0.3s ease-in-out;  /* Safari */
		transition: background-image 0.3s ease-in-out;/* Chrome */

	}
	
	.img_2{
		background-image:url(assets/img/bg/bg-1.jpg);
		-webkit-transform: background-image 0.3s ease-in-out; /* Firefox */
		-webkit-transition: background-image 0.3s ease-in-out;  /* Safari */
		transition: background-image 0.3s ease-in-out; /* Chrome */
	}
	
	.img_3{
		background-image:url(assets/img/bg/bg-2.jpg);
		-webkit-transform: background-image 0.3s ease-in-out; /* Firefox */
		-webkit-transition: background-image 0.3s ease-in-out;  /* Safari */
		transition: background-image 0.3s ease-in-out; /* Chrome */
	}

/* Navbar -- centered position */
	div.top-menu{
		padding-bottom:120px;
		width:100%;
	}
	
	/* Top Logo */
	img#top-logo{
		padding-left:20px;
		margin:0 auto;
	}

	
	.navbar-default{
		max-width:1080px;
		float:none;
		background-color:transparent;
		margin:0 auto;
		padding-top:30px;
	}

	.navbar-collapse{
		text-align:center;
	}

	.navbar-nav{
		float:none;
		margin:0 auto;
		margin-top:20px;
		background-color:transparent;
		display:inline-block;
	}

/* 1.2 menu list general */
/* menu font color */
	.navbar-default .navbar-nav > li > a{
	font-weight:600;
	font-size:16px;
	color: var(--gen-white);
	background-color:transparent;
	}
	
	.navbar-default .navbar-nav > li > a:hover{
	  color: var(--gen-white);
	  background-color:transparent;
	}
	
	.navbar-default .navbar-nav > li > a:focus{
	  color: #f9fdff;
	  background-color:--gen-dark:rgb(66, 72, 87);

	}
	
	ul.top-menu-ul{
		margin:30px 0;
		float:right;
		font-weight:bold;
	}

/* nav button style */
	.navbar-default .navbar-toggle{
		margin-top:30px;
		border:none;
	}
	
	
	.navbar-default .navbar-toggle:hover, 
	.navbar-default .navbar-toggle:focus{
		background-color:var(--fg-blue);
		
	}
	.navbar-default .navbar-toggle .icon-bar{
		background-color:var(--gen-white);
	}
	.navbar-default .navbar-toggle .icon-bar:hover{
		background-color:var(--gen-white);
	}
	
	
/* For under score effects */
	.top-menu-item::after {
		content: '';
		display: block;
		width: 0;
		height: 2px;
		background: var(--gen-white);
		transition: width .3s;
	}

	.top-menu-item:hover::after {
		width: 100%;
		//transition: width .3s;
	}

	
/* small scale screen */
	@media (max-width: 767px){
		/* menu general */
		ul.top-menu-ul{
			color:var(--gen-white);
			margin:0 0;
			float:none;
		}
		/* menu list unit */					
		.navbar-default .navbar-nav > li > a{
			color:var(--gen-dark);
		}			
		.navbar-default .navbar-nav > li > a:hover{
			
		}
		.navbar-default .navbar-nav > li > a:focus{
			
		}
	}
</style>

<!-- IMAGE SHOWCASE WITH NAVBAR-->



<div class="img-bg-top img_1 wow fadeInLeft" data-wow-duration="0.3s">
	<div class='top-menu'>
		<nav class="nav navbar-default">
			<!-- Brand and toggle get grouped for better mobile display -->
			<div class="navbar-header">
				<a href='index.php' class="wow fadeInLeft"><img id='top-logo' src='assets/img/logo/logo_white.png'></a>
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#myNavbar" aria-expanded="false">
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
				</button>
			</div>
			<div class="collapse navbar-collapse" id="myNavbar">
				<ul class="nav navbar-nav">
					<li><a class='top-menu-item' href="who-we-are.php">WHO WE ARE</a></li>
					<li class="dropdown">
						<a href="what-we-do.php" class="dropdown-toggle top-menu-item">WHAT WE DO</a>
						<ul class="dropdown-menu">
							<li><a href="our-funds.php">OUR FUNDS</a></li>
						</ul>
					</li>
					<li><a class='top-menu-item' href="approach.php">OUR APPROACH</a></li> 
					<li><a class='top-menu-item' href="contact.php">CONTACT</a></li> 
					<li><a class='top-menu-item' href="#">LOGIN</a></li>
				</ul>
			</div>
		</nav>
	</div>
</div>


<script>

	//FUNCTION - swap background image on every 5 second
	var change_background_img = function(){
		if($('div.img-bg-top').hasClass('img_1'))
		{
			$('.img_1').toggleClass('img_2');
		}
		if($('div.img-bg-top').hasClass('img_2'))
		{
			$('.img_2').toggleClass('img_3');
		}
		if($('div.img-bg-top').hasClass('img_3'))
		{
			$('.img_3').toggleClass('img_1');
		}
	}
	
	
	$(document).ready(function(){
		
		//check and swap background-image on every 5 seconds
		setInterval(function(){
			change_background_img();
		},3500);
	});
</script>
