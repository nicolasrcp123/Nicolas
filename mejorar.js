// JavaScript source code
var x;
var y;
x = 0;
y = 0;
function pintar(items) {
    
    for (var i = 0; i < 9; i++) {
        var celda = document.getElementById(i + "");
        celda.innerHTML = "";
    }
    for (var i = 0; i < items.length; i++) {
        var celda = document.getElementById(items[i] + "");
        celda.innerHTML = "*";
        
    }


   
}

function lanzar() {
    
    var dado = {
        1: [4],
        2: [0, 8],
        3: [0, 4, 8],
        4: [0, 2, 6, 8],
        5: [0, 2, 4, 6, 8],
        6: [0, 2, 3, 5, 6, 8],
    };
    
    x = Math.floor((Math.random() * 6) + 1);
    pintar(dado[x]);
 
}

function pintar1(items) {
    for (var i = 0; i < 9; i++) {
        var celda1 = document.getElementById(i + "0");
        celda1.innerHTML = "";
    }
    for (var i = 0; i < items.length; i++) {
        var celda1 = document.getElementById(items[i] + "0");
        celda1.innerHTML = "*";
        
    }
    
}
function lanzar1() {

   
    var dado = {
        1: [4],
        2: [0, 8],
        3: [0, 4, 8],
        4: [0, 2, 6, 8],
        5: [0, 2, 4, 6, 8],
        6: [0, 2, 3, 5, 6, 8],
    };
    y = Math.floor((Math.random() * 6) + 1);
    pintar1(dado[y]);
   
}
function Comparar() {
    if (x > y) {
        var o = document.getElementById("demo");
        o.innerHTML = "Ganador : Dado 1";
    }
    if (x < y) {
        var o = document.getElementById("demo");
        o.innerHTML = "Ganador : Dado 2";
    }
    else if(x==y) {
        var o = document.getElementById("demo");
        o.innerHTML = "EMPATE DE LOS NUMEROS DE DADOS";
    }

}