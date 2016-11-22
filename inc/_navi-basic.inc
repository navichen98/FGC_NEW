

<!-- Style properties css -->

<style type="text/css">
	div.top-channel
	{
		width:100%;
		background-color:var(--gen-dark);
	}
	div.top-bar
	{
		max-width:1280px;
		height:110px;
		margin:auto auto;
		border-radius: 0px;
		border:0px;
		background-color:transparent;
		display:block;
	}
	.navbar-default{
		margin-bottom:0;
		margin:auto auto;
		background-color:transparent;
	}

	a.navbar-brand{
		width:20%;
		height:90px;
		padding:0px;
		margin:10px 0;
	}

	/* small scale button */
	button.navbar-toggle{
		margin:35px 0;
		margin-right:10px;
		border-radius:0;
		border:0px;
		color:#f9fdff:
	}

	.navbar-collapse{
		padding:0 0;
	}
	/* 1.2 menu list general */
	/* menu font color */
	.navbar-default .navbar-nav > li > a{
		color: var(--gen-white);
		background-color:var(--gen-dark);
		border-bottom:0px;
		transition: border-bottom 0.2s ease-in;
		-moz-transition: border-bottom 0.2s ease-in;	/* Firefox 4 */
		-webkit-transition: border-bottom 0.2s ease-in;	/* Safari 和 Chrome */
		-o-transition: border-bottom 0.2s ease-in;	/* Opera */
	}
	.navbar-default .navbar-nav > li > a:hover{
	  color: var(--gen-white);
	  background-color:var(--gen-dark);
	  border-bottom:5px solid var(--gen-white);
	}
	.navbar-default .navbar-nav > li > a:focus{
	  color: #f9fdff;
	  background-color:--gen-dark:rgb(66, 72, 87);
	  border-bottom:5px solid #f9fdff;
	}
	ul.top-menu-ul{
		margin:30px 0;
		float:right;
		font-weight:bold;
	}

	/* nav button style */
	.navbar-default .navbar-toggle:hover, 
	.navbar-default .navbar-toggle:focus{
		background-color:transparent;
	}
	.navbar-default .navbar-toggle .icon-bar{
		background-color:var(--gen-white);
	}
	.navbar-default .navbar-toggle .icon-bar:hover{
		background-color:var(--gen-white);
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
			background-color:var(--gen-dark);
			color: var(--gen-white);
			width:100%;
			text-align:center;
			border-bottom:0px;
			-webkit-transition: all 0.2s ease-in;
			transition: all 0.2s ease
		}			
		.navbar-default .navbar-nav > li > a:hover{
			color: var(--gen-dark);
			background-color:var(--gen-white);
			border-bottom:0px;
			/* border-bottom:2px solid; */
		}
		.navbar-default .navbar-nav > li > a:focus{
			color: var(--gen-blue);
			background-color:var(--gen-white);
			border-bottom:0px;
			/* border-bottom:2px solid; */
		}
	}

</style>
<div class='top-channel navbar-fixed-top'>
	<div class='top-bar'>
		<nav class="nav navbar-default">
			<!-- Brand and toggle get grouped for better mobile display -->
			<div class="navbar-header">
				<a href="index.php" class="navbar-brand wow fadeInLeft" data-wow-duration="0.3s" data-wow-delay="0.3s" data-wow-offset="0">
					<img src='assets/img/logo/logo_white.png'>
				</a>
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#myNavbar" aria-expanded="false">
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
				</button>
			</div>
			<div class="collapse navbar-collapse" id="myNavbar">
				<ul class="nav navbar-nav top-menu-ul">
					<li><a href="index.php">HOME</a></li>
					<li><a href="about.php">ABOUT</a></li>
					<li><a href="#">OUR APPROACHES</a></li> 
					<li><a href="contact.php">CONTACT</a></li> 
					<li><a href="#">LOGIN</a></li>
				</ul>
			</div>
		</nav>
	</div>
</div>