

<!-- SUBSCRIBE US BAR -->
<!-- using Small panel wrapper -->
<style type="text/css">
	section.panel-wrapper{
		width:100%;
		min-height:100px;
		background-color:var(--light-blue); 
		overflow:auto;
		color:var(--gen-white);
	}

	div.panel-content-light{
		max-width:1080px;
		min-height:100px;
		margin:0 auto;
		overflow:auto;
	}

	.small-panel-form{
		min-height:80px;
		text-align:center;
		color:#f9fdff;
	}

	.small-panel-input{
		max-width:80px;
	}
	/* subscribe form */
	div.sub-form-title{
		color: var(--gen-dark);
		text-transform:uppercase;
		font-weight: 500;
	}

	div.sub-form-content{
		margin-top: 40px;

	}

	div.sub-form-input{
		padding-left: 5px;
		padding-right: 5px;
	}

	select#subber{

	}

	button#sub_us{
		width: 100%;
		background-color: var(--gen-dark);
		color: var(--gen-white);
	}

	button#sub_us:hover{
		background-color: var(--gen-white);
		color: var(--gen-dark);
	}

	@media (max-width: 992px){
		div.sub-form-input{
			padding-top: 5px;
			padding-bottom: 5px;
			margin-bottom: 5px;
		}

		div.panel-content-light{
			margin-bottom: 10px;
		}
	}
</style>
<section class="panel-wrapper">
	<div class="row panel-content-light">
		<div class="col-md-3 sub-form-title wow fadeInLeft">
				<h3 style='margin-bottom: 20px;'>
					<strong>subscribe to get our lastest updates</strong>
				</h3>
		</div>


		<div class="col-md-9 sub-form-content">
			<form>
				<div class="col-md-3 sub-form-input">
					<input type="text" class="form-control" placeholder="firstname" required>
				</div>
				<div class="col-md-3 sub-form-input">
					<input type="text" class="form-control" placeholder="lastname" required>
				</div>
				<!-- <div class="col-md-2 sub-form-input">
					<select class="form-control" id='subber' placeholder="lastname">
						<option value='' selected>I am..</option>>
						<option value=''>op-3</option>>
						<option value=''>op-2</option>>
					</select>
				</div> -->
				<div class="col-md-3 sub-form-input">
					<input type="email" class="form-control" placeholder="email" required>
				</div>
				<div class="col-md-3 sub-form-input">
					<button class="btn btn-default" id='sub_us'>SUBSCRIBE NOW</button>
				</div>
			</form>
		</div>
	</div>
</section>