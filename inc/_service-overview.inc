<style>
/* **************************************************************** */
/* **************************************************************** */
/* SERVICE OVERVIEW - BOXES OF 6 + ACCORDIAN */



/* INFO BOX */

div.info-box{
	min-width: 220px;
	min-height: 250px;
	border: 10px solid var(--gen-white);
	padding-top: 20px;
	padding-bottom: 20px;
	padding-left: 30px;
	background-color: var(--light-dark);
}

div.info-box-each{
	min-height: 200px;
}

h4.overview-item-title{
	height: 35px;
}

.overview-items{
	/*font-size: 16px;*/
	/*font-style:italic;*/
	margin: -5px 0;
}

.fa-color-blue{
	color: var(--fg-blue);
}

/* links at the end of every service overview */
a.overview-btn{
	border-radius: 0;
	background-color: var(--fg-blue);
	color: white;
	float: right;
}

a.overview-btn:hover{
	background-color: var(--gen-white);
	color: var(--gen-dark);
}


/* SMALL SCREEN */
@media(max-width: 767px){
	div.info-box{
		
		
	}
	h4.overview-item-title{
		height: 20px;
	}
}


</style>


<!-- content wrapper white bg -->
<!-- What We Do -->
<section class="wrapper-bg-white">
	<div class="row wrapper-content">
		<div class="content-box">
			<h2 style='margin:30px auto;'><strong> WHAT WE DO</strong></h2>

			<div class='col-md-4 col-sm-6 info-box wow fadeInDown'>
				<div class='info-box-each'>
					<i class="fa fa-bar-chart fa-3x fa-color-blue"></i>
					<h4 class='overview-item-title'><strong>ASSET MANAGEMENT</strong></h4>
					<span class='overview-items'>Asian equities.</span></br>
					<span class='overview-items'>Absolute return strategies.</span></br>
					<span class='overview-items'>Hedge funds.</span></br>
					<span class='overview-items'>Multi-sector diversified.</span></br>
					<span class='overview-items'>Socially responsible investment.</span></br>
				</div>
				<a class='btn btn-default overview-btn' href='#'>LEARN MORE</a>
			</div><!-- end column -->

			<div class='col-md-4 col-sm-6 info-box wow fadeInDown'>
				<div class='info-box-each'>
					<i class="fa fa-edit fa-3x fa-color-blue"></i>
					<h4 class='overview-item-title'><strong>CORPORATE ADVISORY</strong></h4>
					<span class='overview-items'>Capital raising.</span></br>
					<span class='overview-items'>Debt structuring and syndications.</span></br>
					<span class='overview-items'>IPOs and listings.</span></br>
					<span class='overview-items'>Mergers & Acquisitions.</span></br>
				</div>
				<a class='btn btn-default overview-btn' href='#'>LEARN MORE</a>
			</div><!-- end column -->

			<div class='col-md-4 col-sm-6 info-box wow fadeInDown'>
				<div class='info-box-each'>
					<i class="fa fa-pie-chart fa-3x fa-color-blue"></i>
					<h4 class='overview-item-title'><strong>INVESTMENT STRATEGY</strong></h4>
					<span class='overview-items'>High net worth wealth management.</span></br>
					<span class='overview-items'>Strategic asset allocation.</span></br>
					<span class='overview-items'>Business advisory.</span></br>
					<span class='overview-items'>Project due dilligence.</span></br>
				</div>
				<a class='btn btn-default overview-btn' href='#'>LEARN MORE.</a>
				
			</div><!-- end column -->

			<div class='col-md-4 col-sm-6 info-box wow fadeInUp'>
				<div class='info-box-each'>
					<i class="fa fa-cog fa-3x fa-color-blue"></i>
					<h4 class='overview-item-title'><strong>PLAFORM SOLUTIONS</strong></h4>
					<span class='overview-items'>Tailored fund solutions.</span></br>
					<span class='overview-items'>Trustee services.</span></br>
					<span class='overview-items'>Investment platform solutions.</span></br>
				</div>
				<a class='btn btn-default overview-btn' href='#'>LEARN MORE</a>
				
			</div><!-- end column -->

			<div class='col-md-4 col-sm-6 info-box wow fadeInUp'>
				<div class='info-box-each'>
					<i class="fa fa-line-chart fa-3x fa-color-blue"></i>
					<h4 class='overview-item-title'><strong>SUPERANNUATION</strong></h4>
					<span class='overview-items'>Ethical investing.</span></br>
					<span class='overview-items'>Growth and income strategies.</span></br>
					<span class='overview-items'>Lifecycle and glide-path investing.</span></br>
				</div>
				<a class='btn btn-default overview-btn' href='#'>LEARN MORE</a>
			</div><!-- end column -->

			<div class='col-md-4 col-sm-6 info-box wow fadeInUp'>
				<div class='info-box-each'>
					<i class="fa fa-area-chart fa-3x fa-color-blue"></i>
					<h4 class='overview-item-title'><strong>EQUITIES TRADING</strong></h4>
					<span class='overview-items'>Dedicated ASX trading platform.</span></br>
					<span class='overview-items'>Direct market access.</span></br>
					<span class='overview-items'>Live market data feeds.</span></br>
				</div>
				<a class='btn btn-default overview-btn' href='#'>LEARN MORE</a>
			</div><!-- end column -->
		</div>		
	</div>
</section>