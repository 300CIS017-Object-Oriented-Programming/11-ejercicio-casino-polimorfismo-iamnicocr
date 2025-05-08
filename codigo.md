## :chart_with_upwards_trend: PREGUNTAS TEÓRICAS - 15 puntos <a name="teoria"></a> 
> Conteste las preguntas en un archivo llamado su código.md. Suba este archivo a su repositorio 

* CLASES ABSTRACTAS (6 pts)
La clase Juego es una clase abstracta. 

	* Explique qué cosas del código fuente indican que la clase es una clase abstracta 
        * R//: Las clases abstractas no se instancian directamente, por tanto sus métodos son puros, para que un método puro exista debe acompañarse con un = 0; junto a su implementación dentro de la clase abstracta, esto permite que cuando se hereden, se puedan definir en cada subclase los métodos que tendrá dentro. En este código observamos en la clase Juego la implementación de 2 clases puras, las cuales son: jugar y calcularResultado, por tanto esto define a Juego como una clase abstracta, las demás clases tienen sus respectivas implementaciones no puras que no permiten categorizarlas como abstractas.

	* ¿Qué implicaciones tiene esa decisión de diseño para este programa?. Explique
        * R//: Entendiendo que las clases abstractas dan paso al polimorfismo por la posibilidad de implementar metodos puros, se presentan varios beneficios con respecto a optimización gracias al polimorfismo, por ejemplo, cuando deseemos implementar un nuevo juego, no habrá que modificar la lógica base del casino y haremos las respectivas modificaciones desde las subclases respectiva al método puro de Juego. También habrá que definir los métodos en las subclases, si esto no sucede el compilador avisará la falta de inmediato. Finalmente, como el casino funciona bajo un puntero de Juegos, esta implementación elimina el riesgo de llegar a un elemento de Juego* vacío.
