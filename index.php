<?php
include "db.php";
?>
<!DOCTYPE html>
<html>
<head>
	<title>CHAT CON PHP, MYSQL Y AJAX</title>
	<link rel="stylesheet" type="text/css" href="estilos.css">
	<link href="https://fonts.googleapis.com/css?family=Mukta+Vaani" rel="stylesheet">

	<script type="text/javascript">
		function ajax(){
			var req = new XMLHttpRequest(); //solicita datoss de un servidor

			req.onreadystatechange = function(){ //FUNCION EJECUTA CADA VBEZ QUE CAMBIA DE ESTADO EL CHAT
				if (req.readyState == 4 && req.status == 200) {   //VERIFICACION DE QUE TODO ESTE CORRECTO
					document.getElementById('chat').innerHTML = req.responseText; //devuelve respuesta de servidor como cadena de texto 
				}
			}

			req.open('GET', 'chat.php', true);      //ABRIR CHAT.PHP
			req.send(); //ENVIA
		}

		//linea que hace que se refreseque la pagina cada segundo
		setInterval(function(){ajax();}, 1000);
	</script>
</head>
<body onload="ajax();">

	<div id="contenedor" rows="6" cols="10">
		<div id="caja-chat" rows="5" cols="10" >
			<div id="chat" rows="6" cols="10"></div>
		</div>

		<form method="POST" action="index.php">  
			<input type="text" name="nombre" placeholder="Ingresa tu nombre">			
			<textarea name="mensaje" rows="10" cols="50" placeholder="Ingresa tu mensaje"></textarea>
			<input type="submit" name="enviar" value="Enviar">
		</form>

		<?php
			if (isset($_POST['enviar'])) { //MENSAJE DEFINIDO O NO 
				
				$nombre = $_POST['nombre'];
				$mensaje = $_POST['mensaje'];


				$consulta = "INSERT INTO chat (nombre, mensaje) VALUES ('$nombre', '$mensaje')"; //inserta los datos en la base

				$ejecutar = $conexion->query($consulta);           //Manda la informacion 

				if ($ejecutar) { //Carga la musica al cargar un mensaje
					echo "<embed loop='false' src='beep.mp3' hidden='true' autoplay='true'>";
				}
			}

		?>
	</div>

</body>
</html>