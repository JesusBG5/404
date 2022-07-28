<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Tutorial 12</title>
	<script type="text/javascript" src="chart.min.js"></script>
	<style type="text/css">
		section{
			margin: 0 auto;
			width: 80%;
		}
	</style>
</head>
<body>
	<?php	
		$etiquetas= "'Rojo','Azul','Amarillo','Verde','Purple','Orange'";
		$colores = "5,6,8,10,2,7";
	?>
	<section>
		<canvas id="myChart"></canvas>
	</section>
	<script>
	const ctx = document.getElementById('myChart').getContext('2d');
	const myChart = new Chart(ctx, {
	    type: 'bar',
	    data: {
	        labels: [<?php echo $etiquetas; ?>],
	        datasets: [{
	            label: 'Colores',
	            data: [<?php echo $colores; ?>],
	            backgroundColor: [
	                'rgb(255, 99, 132)',
	                'rgb(54, 162, 235)',
	                'rgb(255, 206, 86)',
	                'rgb(75, 192, 192)',
	                'rgb(153, 102, 255)',
	                'rgb(255, 159, 64)'
	            ],
	            borderColor: [
	                'rgba(255, 99, 132, 1)',
	                'rgba(54, 162, 235, 1)',
	                'rgba(255, 206, 86, 1)',
	                'rgba(75, 192, 192, 1)',
	                'rgba(153, 102, 255, 1)',
	                'rgba(255, 159, 64, 1)'
	            ],
	            borderWidth: 1
	        }]
	    },
	    options: {
	        scales: {
	            y: {
	                beginAtZero: true
	            }
	        }
	    }
	});
	</script>
</body>
</html>