#include <iostream>

using namespace std;

char gato[3][3];

bool bandera = true;




void jugar();
void imprimegato();
void introduce(char JugadorAmarca, char posicion);
bool verificar(char marca);
void gano(string nombre);
void limpiar();
void empate();

int main(int argc, char** argv)
{
  jugar();

  return 0;
}



void jugar(){

    string JugadorA;
    string JugadorB;

    char JugadorAmarca = 'X';
    char JugadorBmarca = 'O';


    char respuesta = 'N';

    cout << "###### Juego de Gato ########## \n";

    try{
      cout << "             /\\_/\\ \n";
      cout << "        ____/ o o \\ \n";
      cout << "       /~____ =ø= / \n";
      cout << "      (______)__m_m) \n \n";
    }
    catch (int e)
    {
    }

      cout << "Nombre del jugador A \n";
      cin >> JugadorA;
      cout << JugadorA + " -> X \n \n";
      //cin >> JugadorAmarca;
  	  cout << "Nombre del jugador B \n";
      cin >> JugadorB;
      cout << JugadorB + " -> O \n \n";
      //cin >> JugadorBmarca;

      cout<< JugadorA +" "+JugadorAmarca+" vs " +JugadorB+" "+JugadorBmarca;
      cout<<endl;
      cout << "###### Juego de Gato ########## \n";

      imprimegato();

      char posicion;

      int count = 0;

      while (bandera == true){

        if (count % 2 == 0) { //Si el numero es par el turno es del jugadorA
          cout << "Es el turno de " << JugadorA << " introduzca posicion: ";
          cin >> posicion; //Introduciomos la posicion del jugador A
          count++;
          posicion = toupper(posicion);
      		introduce(JugadorAmarca, posicion);
          // string mensaje = verificar(JugadorAmarca);
          // cout << mensaje;
          imprimegato();
          if (verificar(JugadorAmarca) == true) {
            gano(JugadorA);
            break;
          }




        }
        else{
          cout << "Es el turno de " << JugadorB << " introduzca posicion: ";
          cin >> posicion; //Introduciomos la posicion del jugador A
          count++;
          posicion = toupper(posicion);
      		introduce(JugadorBmarca, posicion);
          imprimegato();
          if (verificar(JugadorBmarca) == true) {
            gano(JugadorB);
            break;
          }
        }

        if (count > 8) {
          empate();
          break;
        }
      }

      cout << "Quieres jugar de nuevo?   S = Si,   N= No\n";
      cin >> respuesta;
      cout << "\n";
      cout << "\n";

      switch (respuesta){
        case 'S':
        jugar();
        break;

        case 's':
        jugar();
        break;

        default:
        break;
      }

}


void imprimegato()
	{
		cout << "\n     ######GATO#######\n\n";
		cout << "\t" << gato[0][0] << "   | " << gato[0][1] << " | " << gato[0][2] << "        a | b | c" << endl;
		cout << "\t----------" << "      -----------\n";
		cout << "\t" << gato[1][0] << "   | " << gato[1][1] << " | " << gato[1][2] << "        d | e | f" << endl;
		cout << "\t----------" << "      -----------\n";
		cout << "\t" << gato[2][0] << "   | " << gato[2][1] << " | " << gato[2][2] << "        g | h | i" << endl;
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
	}//fin imrpimegato


void introduce(char marca, char posicion){
	switch (posicion){
    case 'A':
      if (gato[0][0] != 'X' && gato[0][0] != 'O')
    		{
          gato[0][0] = marca;
        }
        else { cout << "\n=Posicion ocupada=\n"; }
      break;

    	case 'B':
    		if (gato[0][1] != 'X' && gato[0][1] != 'O')
    		{
      		gato[0][1] = marca;
        }

        		else { cout << "\n=Posicion ocupada=\n"; }
        		break;

        	case 'C':
        		if (gato[0][2] != 'X' && gato[0][2] != 'O')
        		{
          			gato[0][2] = marca;
          			//       cambiaturno(t);
          		}

          		else { cout << "\n=Posicion ocupada=\n"; }
          		break;

          	case 'D':
          		if (gato[1][0] != 'X' && gato[1][0] != 'O')
          		{
            			gato[1][0] = marca;
            			//       cambiaturno(t);
            		}
            		else { cout << "\n=Posicion ocupada=\n"; }
            		break;

            	case 'E':
            		if (gato[1][1] != 'X' && gato[1][1] != 'O')
            		{
              			gato[1][1] = marca;
              			//       cambiaturno(t);
              		}
              		else { cout << "\n=Posicion ocupada=\n"; }
              		break;


              	case 'F':
              		if (gato[1][2] != 'X' && gato[1][2] != 'O')
              		{
                			gato[1][2] = marca;
                			//       cambiaturno(t);
                		}
                		else { cout << "\n=Posicion ocupada=\n"; }
                		break;

                	case 'G':
                		if (gato[2][0] != 'X' && gato[2][0] != 'O')
                		{
                  			gato[2][0] = marca;
                  			//       cambiaturno(t);
                  		}
                  		else { cout << "\n=Posicion ocupada=\n"; }
                  		break;

                  	case 'H':
                  		if (gato[2][1] != 'X' && gato[2][1] != 'O')
                  		{
                    			gato[2][1] = marca;
                    			//       cambiaturno(t);
                    		}
                    		else { cout << "\n=Posicion ocupada=\n"; }
                    		break;

                    	case 'I':
                    		if (gato[2][2] != 'X' && gato[2][2] != 'O')
                    		{
                      			gato[2][2] = marca;
                      			//       cambiaturno(t);
                      		}
                      		else { cout << "\n=Posicion ocupada=\n"; }
                      		break;

                      	default:
                      		cout << "\nIntroduzca una posicion valida.\n";
  }
}



  bool verificar(char marca){
    switch (marca){
      case 'X':
        cout << "\nEntro al primer jugador\n";

        if ((gato[0][0] == 'X') && (gato[0][1] == 'X') && (gato[0][2] == 'X')) {
          //   X | X | X
         	// ----------
         	//    |   |
         	// ----------
         	//    |   |
          return true;
        }

        else if ((gato[1][0] == 'X') && (gato[1][1] == 'X') && (gato[1][2] == 'X')) {
          //    |   |
         	// ----------
         	//  X | X | X
         	// ----------
         	//    |   |
          return true;
        }

        else if ((gato[2][0] == 'X') && (gato[2][1] == 'X') && (gato[2][2] == 'X')) {
          //    |   |
         	// ----------
         	//    |   |
         	// ----------
         	//  X | X | X
          return true;
        }

        else if ((gato[0][0] == 'X') && (gato[1][0] == 'X') && (gato[2][0] == 'X')) {
          //  X |   |
         	// ----------
         	//  X |   |
         	// ----------
         	//  X |   |
          return true;
        }

        else if ((gato[0][1] == 'X') && (gato[1][1] == 'X') && (gato[2][1] == 'X')) {
          //    |  X |
         	// ----------
         	//    |  X |
         	// ----------
         	//    |  X |
          return true;
        }



        else if ((gato[0][2] == 'X') && (gato[1][2] == 'X') && (gato[2][2] == 'X')) {
          //    |   | X
         	// ----------
         	//    |   | X
         	// ----------
         	//    |   | X
          return true;
        }




        else if ((gato[0][0] == 'X') && (gato[1][1] == 'X') && (gato[2][2] == 'X')) {
          //  X |   |
         	// ----------
         	//    | X |
         	// ----------
         	//    |   | X
          return true;
        }



        else if ((gato[0][2] == 'X') && (gato[1][1] == 'X') && (gato[2][0] == 'X')) {
          //    |   | X
         	// ----------
         	//    | X |
         	// ----------
         	//  X |   |
          return true;
        }

        else{
          return false;
        }

      break;




      case 'O':
      cout << "\nEntro al segundo jugador\n";
      if ((gato[0][0] == 'O') && (gato[0][1] == 'O') && (gato[0][2] == 'O')) {
        //   0 | 0 | 0
        // ----------
        //    |   |
        // ----------
        //    |   |
        return true;
      }


      else if ((gato[1][0] == 'O') && (gato[1][1] == 'O') && (gato[1][2] == 'O')) {
        //    |   |
        // ----------
        //  O | O | O
        // ----------
        //    |   |
        return true;
      }

      else if ((gato[2][0] == 'O') && (gato[2][1] == 'O') && (gato[2][2] == 'O')) {
        //    |   |
        // ----------
        //    |   |
        // ----------
        //  O | O | O
        return true;
      }

      else if ((gato[0][0] == 'O') && (gato[1][0] == 'O') && (gato[2][0] == 'O')) {
        //  O |   |
        // ----------
        //  O |   |
        // ----------
        //  O |   |
        return true;
      }

      else if ((gato[0][1] == 'O') && (gato[1][1] == 'O') && (gato[2][1] == 'O')) {
        //    |  O |
        // ----------
        //    |  O |
        // ----------
        //    |  O |
        return true;
      }

      else if ((gato[0][2] == 'O') && (gato[1][2] == 'O') && (gato[2][2] == 'O')) {
        //    |   | O
        // ----------
        //    |   | O
        // ----------
        //    |   | O
        return true;
      }

      else if ((gato[0][0] == 'O') && (gato[1][1] == 'O') && (gato[2][2] == 'O')) {
        //  O |   |
        // ----------
        //    | O |
        // ----------
        //    |   | O
        return true;
      }

      else if ((gato[0][2] == 'O') && (gato[1][1] == 'O') && (gato[2][0] == 'O')) {
        //    |   | O
        // ----------
        //    | O |
        // ----------
        //  O |   |
        return true;
      }
      else{
        return false;
      }
      break;


    }

    cout << "\n";
    return "";
  }





    void gano(string nombre){
      limpiar();
      cout <<"\n";
      cout <<"              (0 0) \n";
      cout <<"      ---oOO-- (_) ----oOO--- \n" ;
      cout <<"     _________________________ \n";
      cout <<"     "+ nombre+ " Gano :)       \n";
      cout <<"    |_________________________| \n";
      cout <<"        -------------------   \n";
      cout <<"            |__|__|\n";
      cout <<"             || || \n";
      cout <<"            ooO Ooo\n";
      cout <<"\n";
  }


  void empate(){
    limpiar();
    cout <<"\n";
    cout <<"              (0 0) \n";
    cout <<"      ---oOO-- (_) ----oOO--- \n" ;
    cout <<"     _________________________ \n";
    cout <<"             Empate  \n";
    cout <<"    |_________________________| \n";
    cout <<"        -------------------   \n";
    cout <<"            |__|__|\n";
    cout <<"             || || \n";
    cout <<"            ooO Ooo\n";
    cout <<"\n";
}



  void limpiar(){
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        gato[i][j] = '\0';
      }
    }
  }



  // void introduce(char t, char corden){
  //
  // }//fin introduce
