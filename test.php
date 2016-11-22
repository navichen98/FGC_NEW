<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <title>toggleClass demo</title>

  <style>
  div {
    width: 100px;
    height: 100px;
    background-color: #ccc;
  }
  .big-blue {
    width: 200px;
    height: 200px;
    background-color: #00f;
  }
  </style>
  <script src="//code.jquery.com/jquery-1.12.4.js"></script>
  <script src="//code.jquery.com/ui/1.12.0/jquery-ui.js"></script>
</head>
<body>
 
<div></div>
 
<script>
$( "div" ).click(function() {
  $( this ).toggleClass( "big-blue", 1000, "easeOutSine" );
});
</script>
 
</body>
</html>