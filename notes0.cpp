/[] - Voc� pode chamar os comandos cout <<, cin >>, e suas classes desse modo:

std :: cout << "Exemplo";

std :: cin >> Exe;

Mas se voc� declarar a linha using namespace std; voc� ganhar� tempo escrevendo apenas assim:

cout << "Exemplo";

cin >> Exe; - []/


#include <iostrem>
using namespace std;

int main () {

	//Vari�veis:
		int vidas; //10,25,1000
	~	char letra; //'B'
	~~ 	char letras[20]; // essa declara��o passar a ser um VETOR. eu posso colocar um texto de at� 20 caracteres..
		double decimal 1; //2.499999 
		float decimal 2; //2.5
		bool vivo; //(recebe verdadeiro ou falso, ent�o vai ser representado com o valor true or false
	~	string nome; //recebe texto "Arthur"

	system("pause");
	return 0
	
	}
