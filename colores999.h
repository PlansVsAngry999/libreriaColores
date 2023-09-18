//Codigo que recopila Colores
	//Realizado por Ricardo Daniel Hernandez Sosa ( plvsan999@gmail.com )
	//Seudonimo: Plans Vs Angry 999
#include<iostream>
	//Colores
void colores(){
		#define bl "\e[0m"				//Blanco (PREDETERMINADO)
		#define ctx "\e[38;0;0;0;0m"	//Texto Color personalizado BRG
		#define cfx "\e[48;0;0;0;0m"	//Fondo Color personalizado BRG
	//Negro 	30m 		(ne)
	{
		#define ne      "\e[30m"		//Negro
		#define neC     "\e[1;30m"		//Negro claro
		#define neS     "\e[4;30m"		//Negro subrayado
		#define neF     "\e[7;30m"		//Negro fondo
		
		#define nene	"\e[40;30m"	 				//Negro fondo negro
		#define nero	"\e[41;30m"	 				//Negro fondo rojo
		#define neve	"\e[42;30m"	 				//Negro fondo verde
		#define neam	"\e[43;30m"	 				//Negro fondo amarillo
		#define neaz	"\e[44;30m"	 				//Negro fondo azul
		#define nepu	"\e[45;30m"	 				//Negro fondo purpura
		#define necy	"\e[46;30m"	 				//Negro fondo aguamarina
		#define nebl	"\e[47;30m"	 				//Negro fondo blanco
		#define nena	"\e[48;2;255;128;0;30m"	 	//Negro fondo naranja
		#define neac	"\e[48;2;53;149;240;30m"	//Negro fondo azul claro
		#define nevc	"\e[48;2;17;245;120;30m" 	//Negro fondo verde claro 
		#define negc	"\e[48;2;176;174;174;30m" 	//Negro fondo gris claro
		#define ners	"\e[48;2;255;151;203;30m" 	//Negro fondo rosa
		#define negr	"\e[100;30m" 				//Negro fondo gris
		#define nerc	"\e[101;30m" 				//Negro fondo rosado
		#define nees	"\e[102;30m" 				//Negro fondo esmeralda
		#define nemc	"\e[103;30m" 				//Negro fondo amarillo claro
		#define necl	"\e[104;30m" 				//Negro fondo celeste
		#define nema	"\e[105;30m" 				//Negro fondo magenta
		#define necb	"\e[106;30m" 				//Negro fondo aguamarina brillante
		#define nebb	"\e[107;30m" 				//Negro fondo blanco brillante
	}
	//Rojos 	31m 		(ro)
	{
		#define ro 		"\e[0;31m" 		//Rojo
		#define roC		"\e[1;31m" 		//Rojo claro 
		#define roS		"\e[4;31m" 		//Rojo subrayado
		#define roF		"\e[7;31m"	 	//Rojo fondo texto negro
		
		#define rone	"\e[40;31m"	 				//Rojo fondo negro
		#define roro	"\e[41;31m"	 				//Rojo fondo rojo
		#define rove	"\e[42;31m"	 				//Rojo fondo verde
		#define roam	"\e[43;31m"	 				//Rojo fondo amarillo
		#define roaz	"\e[44;31m"	 				//Rojo fondo azul
		#define ropu	"\e[45;31m"	 				//Rojo fondo purpura
		#define rocy	"\e[46;31m"	 				//Rojo fondo aguamarina
		#define robl	"\e[47;31m"	 				//Rojo fondo blanco
		#define rona	"\e[48;2;255;128;0;31m"	 	//Rojo fondo naranja
		#define roac	"\e[48;2;53;149;240;31m"	//Rojo fondo azul claro
		#define rovc	"\e[48;2;17;245;120;31m" 	//Rojo fondo verde claro 
		#define rogc	"\e[48;2;176;174;174;31m" 	//Rojo fondo gris claro
		#define rors	"\e[48;2;255;151;203;31m" 	//Rojo fondo rosa
		#define rogr	"\e[100;31m" 				//Rojo fondo gris
		#define rorc	"\e[101;31m" 				//Rojo fondo rosado
		#define roes	"\e[102;31m" 				//Rojo fondo esmeralda
		#define romc	"\e[103;31m" 				//Rojo fondo amarillo claro
		#define rocl	"\e[104;31m" 				//Rojo fondo celeste
		#define roma	"\e[105;31m" 				//Rojo fondo magenta
		#define rocb	"\e[106;31m" 				//Rojo fondo aguamarina brillante
		#define robb	"\e[107;31m" 				//Rojo fondo blanco brillante
	}
	//Verdes 	32m 		(ve)
	{
		#define ve  	"\e[0;32m"		//Verde
		#define veC 	"\e[1;32m"		//Verde claro
		#define veS 	"\e[4;32m"		//Verde subrayado
		#define veF 	"\e[7;32m"		//Verde fondo
		
		#define vene	"\e[40;32m"	 				//Verde fondo negro
		#define vero	"\e[41;32m"	 				//Verde fondo rojo
		#define veve	"\e[42;32m"	 				//Verde fondo verde
		#define veam	"\e[43;32m"	 				//Verde fondo amarillo
		#define veaz	"\e[44;32m"	 				//Verde fondo azul
		#define vepu	"\e[45;32m"	 				//Verde fondo purpura
		#define vecy	"\e[46;32m"	 				//Verde fondo aguamarina
		#define vebl	"\e[47;32m"	 				//Verde fondo blanco
		#define vena	"\e[48;2;255;128;0;32m"	 	//Verde fondo naranja
		#define veac	"\e[48;2;53;149;240;32m"	//Verde fondo azul claro
		#define vevc	"\e[48;2;17;245;120;32m" 	//Verde fondo verde claro 
		#define vegc	"\e[48;2;176;174;174;32m" 	//Verde fondo gris claro
		#define vers	"\e[48;2;255;151;203;32m" 	//Verde fondo rosa
		#define vegr	"\e[100;32m" 				//Verde fondo gris
		#define verc	"\e[101;32m" 				//Verde fondo rosado
		#define vees	"\e[102;32m" 				//Verde fondo esmeralda
		#define vemc	"\e[103;32m" 				//Verde fondo amarillo claro
		#define vecl	"\e[104;32m" 				//Verde fondo celeste
		#define vema	"\e[105;32m" 				//Verde fondo magenta
		#define vecb	"\e[106;32m" 				//Verde fondo aguamarina brillante
		#define vebb	"\e[107;32m" 				//Verde fondo blanco brillante
	}
	//Azul 		34m 		(az)
	{
		#define az		"\e[34m"		//Azul
		#define azC		"\e[1;34m"		//Azul claro
		#define azS		"\e[4;34m"		//Azul subrayado
		#define azF		"\e[7;34m"		//Azul fondo
		
		#define azne	"\e[40;34m"	 				//Azul fondo negro
		#define azro	"\e[41;34m"	 				//Azul fondo rojo
		#define azve	"\e[42;34m"	 				//Azul fondo verde
		#define azam	"\e[43;34m"	 				//Azul fondo amarillo
		#define azaz	"\e[44;34m"	 				//Azul fondo azul
		#define azpu	"\e[45;34m"	 				//Azul fondo purpura
		#define azcy	"\e[46;34m"	 				//Azul fondo aguamarina
		#define azbl	"\e[47;34m"	 				//Azul fondo blanco
		#define azna	"\e[48;2;255;128;0;34m"	 	//Azul fondo naranja
		#define azac	"\e[48;2;53;149;240;34m"	//Azul fondo azul claro
		#define azvc	"\e[48;2;17;245;120;34m" 	//Azul fondo verde claro 
		#define azgc	"\e[48;2;176;174;174;34m" 	//Azul fondo gris claro
		#define azrs	"\e[48;2;255;151;203;34m" 	//Azul fondo rosa
		#define azgr	"\e[100;34m" 				//Azul fondo gris
		#define azrc	"\e[101;34m" 				//Azul fondo rosado
		#define azes	"\e[102;34m" 				//Azul fondo esmeralda
		#define azmc	"\e[103;34m" 				//Azul fondo amarillo claro
		#define azcl	"\e[104;34m" 				//Azul fondo celeste
		#define azma	"\e[105;34m" 				//Azul fondo magenta
		#define azcb	"\e[106;34m" 				//Azul fondo aguamarina brillante
		#define azbb	"\e[107;34m" 				//Azul fondo blanco brillante
	}
	//Amarillo  33m 		(am)
	{
		#define am		"\e[0;33m"	 	//Amarillo
		#define amC		"\e[1;33m"	 	//Amarillo claro
		#define amS		"\e[4;33m"	 	//Amarillo Subrayado
		#define amF		"\e[7;33m"	 	//Amarillo Fondo
		
		#define amne	"\e[40;33m"	 				//Amarillo fondo negro
		#define amro	"\e[41;33m"	 				//Amarillo fondo rojo
		#define amve	"\e[42;33m"	 				//Amarillo fondo verde
		#define amam	"\e[43;33m"	 				//Amarillo fondo amarillo
		#define amaz	"\e[44;33m"	 				//Amarillo fondo azul
		#define ampu	"\e[45;33m"	 				//Amarillo fondo purpura
		#define amcy	"\e[46;33m"	 				//Amarillo fondo aguamarina
		#define ambl	"\e[47;33m"	 				//Amarillo fondo blanco
		#define amna	"\e[48;2;255;128;0;33m"	 	//Amarillo fondo naranja
		#define amac	"\e[48;2;53;149;240;33m"	//Amarillo fondo azul claro
		#define amvc	"\e[48;2;17;245;120;33m" 	//Amarillo fondo verde claro 
		#define amgc	"\e[48;2;176;174;174;33m" 	//Amarillo fondo gris claro
		#define amrs	"\e[48;2;255;151;203;33m" 	//Amarillo fondo rosa
		#define amgr	"\e[100;33m" 				//Amarillo fondo gris
		#define amrc	"\e[101;33m" 				//Amarillo fondo rosado
		#define ames	"\e[102;33m" 				//Amarillo fondo esmeralda
		#define ammc	"\e[103;33m" 				//Amarillo fondo amarillo claro
		#define amcl	"\e[104;33m" 				//Amarillo fondo celeste
		#define amma	"\e[105;33m" 				//Amarillo fondo magenta
		#define amcb	"\e[106;33m" 				//Amarillo fondo aguamarina brillante
		#define ambb	"\e[107;33m" 				//Amarillo fondo blanco brillante
	}
	//Purpura 	35m 		(pu)
	{
		#define pu 		"\e[35m"		//Purpura
		#define puC		"\e[1;35m"		//Purpura claro
		#define puS		"\e[4;35m"		//Purpura subrayado
		#define puF		"\e[7;35m"		//Purpura fondo
		
		#define pune	"\e[40;35m"	 				//Purpura fondo negro
		#define puro	"\e[41;35m"	 				//Purpura fondo rojo
		#define puve	"\e[42;35m"	 				//Purpura fondo verde
		#define puam	"\e[43;35m"	 				//Purpura fondo amarillo
		#define puaz	"\e[44;35m"	 				//Purpura fondo azul
		#define pupu	"\e[45;35m"	 				//Purpura fondo purpura
		#define pucy	"\e[46;35m"	 				//Purpura fondo aguamarina
		#define publ	"\e[47;35m"	 				//Purpura fondo blanco
		#define puna	"\e[48;2;255;128;0;35m"	 	//Purpura fondo naranja
		#define puac	"\e[48;2;53;149;240;35m"	//Purpura fondo azul claro
		#define puvc	"\e[48;2;17;245;120;35m" 	//Purpura fondo verde claro 
		#define pugc	"\e[48;2;176;174;174;35m" 	//Purpura fondo gris claro
		#define purs	"\e[48;2;255;151;203;35m" 	//Purpura fondo rosa
		#define pugr	"\e[100;35m" 				//Purpura fondo gris
		#define purc	"\e[101;35m" 				//Purpura fondo rosado
		#define pues	"\e[102;35m" 				//Purpura fondo esmeralda
		#define pumc	"\e[103;35m" 				//Purpura fondo amarillo claro
		#define pucl	"\e[104;35m" 				//Purpura fondo celeste
		#define puma	"\e[105;35m" 				//Purpura fondo magenta
		#define pucb	"\e[106;35m" 				//Purpura fondo aguamarina brillante
		#define pubb	"\e[107;35m" 				//Purpura fondo blanco brillante
	}
	//Aguamarina (Cyan) 36m (cy)
	{
		#define cy  	"\e[0;36m"		//Cyan
		#define cyC 	"\e[1;36m"		//Cyan claro
		#define cyS   	"\e[4;36m"		//Cyan subrayado
		#define cyF   	"\e[7;36m"		//Cyan fondo
		
		#define cyne	"\e[40;36m"	 				//Cyan fondo negro
		#define cyro	"\e[41;36m"	 				//Cyan fondo rojo
		#define cyve	"\e[42;36m"	 				//Cyan fondo verde
		#define cyam	"\e[43;36m"	 				//Cyan fondo amarillo
		#define cyaz	"\e[44;36m"	 				//Cyan fondo azul
		#define cypu	"\e[45;36m"	 				//Cyan fondo purpura
		#define cycy	"\e[46;36m"	 				//Cyan fondo aguamarina
		#define cybl	"\e[47;36m"	 				//Cyan fondo blanco
		#define cyna	"\e[48;2;255;128;0;36m"	 	//Cyan fondo naranja
		#define cyac	"\e[48;2;53;149;240;36m"	//Cyan fondo azul claro
		#define cyvc	"\e[48;2;17;245;120;36m" 	//Cyan fondo verde claro 
		#define cygc	"\e[48;2;176;174;174;36m" 	//Cyan fondo gris claro
		#define cyrs	"\e[48;2;255;151;203;36m" 	//Cyan fondo rosa
		#define cygr	"\e[100;36m" 				//Cyan fondo gris
		#define cyrc	"\e[101;36m" 				//Cyan fondo rosado
		#define cyes	"\e[102;36m" 				//Cyan fondo esmeralda
		#define cymc	"\e[103;36m" 				//Cyan fondo amarillo claro
		#define cycl	"\e[104;36m" 				//Cyan fondo celeste
		#define cyma	"\e[105;36m" 				//Cyan fondo magenta
		#define cycb	"\e[106;36m" 				//Cyan fondo aguamarina brillante
		#define cybb	"\e[107;36m" 				//Cyan fondo blanco brillante
	}
	//Blanco 	37m 		(bl)
	{
		#define bln   	"\e[37m"		//Blanco
		#define blC     "\e[1;37m"		//Blanco claro
		#define blS 	"\e[4;37m"		//Blanco subrayado
		#define blF     "\e[7;37m"		//Blanco fondo
		
		#define blne	"\e[40;37m"	 				//Blanco fondo negro
		#define blro	"\e[41;37m"	 				//Blanco fondo rojo
		#define blve	"\e[42;37m"	 				//Blanco fondo verde
		#define blam	"\e[43;37m"	 				//Blanco fondo amarillo
		#define blaz	"\e[44;37m"	 				//Blanco fondo azul
		#define blpu	"\e[45;37m"	 				//Blanco fondo purpura
		#define blcy	"\e[46;37m"	 				//Blanco fondo aguamarina
		#define blbl	"\e[47;37m"	 				//Blanco fondo blanco
		#define blna	"\e[48;2;255;128;0;37m"	 	//Blanco fondo naranja
		#define blac	"\e[48;2;53;149;240;37m"	//Blanco fondo azul claro
		#define blvc	"\e[48;2;17;245;120;37m" 	//Blanco fondo verde claro 
		#define blgc	"\e[48;2;176;174;174;37m" 	//Blanco fondo gris claro
		#define blrs	"\e[48;2;255;151;203;37m" 	//Blanco fondo rosa
		#define blgr	"\e[100;37m" 				//Blanco fondo gris
		#define blrc	"\e[101;37m" 				//Blanco fondo rosado
		#define bles	"\e[102;37m" 				//Blanco fondo esmeralda
		#define blmc	"\e[103;37m" 				//Blanco fondo amarillo claro
		#define blcl	"\e[104;37m" 				//Blanco fondo celeste
		#define blma	"\e[105;37m" 				//Blanco fondo magenta
		#define blcb	"\e[106;37m" 				//Blanco fondo aguamarina brillante
		#define blbb	"\e[107;37m" 				//Blanco fondo blanco brillante
	}
	//Naranja 				(na)
	{
		#define na  	"\e[38;2;255;128;0m"		//Naranja
		#define naC 	"\e[1;38;2;255;128;0m"		//Naranja claro
		#define naS 	"\e[4;38;2;255;128;0m"		//Naranja subrayado
		#define naF 	"\e[7;38;2;255;128;0m"		//Naranja fondo
		
		#define nane	"\e[40;38;2;255;128;0m"	 					//Naranja fondo negro
		#define naro	"\e[41;38;2;255;128;0m"	 					//Naranja fondo rojo
		#define nave	"\e[42;38;2;255;128;0m"	 					//Naranja fondo verde
		#define naam	"\e[43;38;2;255;128;0m"	 					//Naranja fondo amarillo
		#define naaz	"\e[44;38;2;255;128;0m"	 					//Naranja fondo azul
		#define napu	"\e[45;38;2;255;128;0m"	 					//Naranja fondo purpura
		#define nacy	"\e[46;38;2;255;128;0m"	 					//Naranja fondo aguamarina
		#define nabl	"\e[47;38;2;255;128;0m"	 					//Naranja fondo blanco
		#define nana	"\e[48;2;255;128;0;38;2;255;128;0m"	 		//Naranja fondo naranja
		#define naac	"\e[48;2;53;149;240;38;2;255;128;0m"		//Naranja fondo azul claro
		#define navc	"\e[48;2;17;245;120;38;2;255;128;0m" 		//Naranja fondo verde claro 
		#define nagc	"\e[48;2;176;174;174;38;2;255;128;0m"		//Naranja fondo gris claro
		#define nars	"\e[48;2;255;151;203;38;2;255;128;0m"		//Naranja fondo rosa
		#define nagr	"\e[100;38;2;255;128;0m" 					//Naranja fondo gris
		#define narc	"\e[101;38;2;255;128;0m" 					//Naranja fondo rosado
		#define naes	"\e[102;38;2;255;128;0m" 					//Naranja fondo esmeralda
		#define namc	"\e[103;38;2;255;128;0m" 					//Naranja fondo amarillo claro
		#define nacl	"\e[104;38;2;255;128;0m" 					//Naranja fondo celeste
		#define nama	"\e[105;38;2;255;128;0m" 					//Naranja fondo magenta
		#define nacb	"\e[106;38;2;255;128;0m" 					//Naranja fondo aguamarina brillante
		#define nabb	"\e[107;38;2;255;128;0m" 					//Naranja fondo blanco brillante
	}
	//Azul claro 			(ac)
	{
		#define ac   	"\e[38;2;53;149;240m"		//Azul claro
		#define acC   	"\e[1;38;2;53;149;240m"		//Azul claro claro?
		#define acgr   	"\e[100;38;2;53;149;240m"	//Azul claro fondo gris
		#define acS   	"\e[4;38;2;53;149;240m"		//Azul claro subrayado
		#define acF   	"\e[7;38;2;53;149;240m"		//Azul claro fondo
		
		#define acne	"\e[40;38;2;53;149;240m"	 				//Azul claro fondo negro
		#define acro	"\e[41;38;2;53;149;240m"	 				//Azul claro fondo rojo
		#define acve	"\e[42;38;2;53;149;240m"	 				//Azul claro fondo verde
		#define acam	"\e[43;38;2;53;149;240m"	 				//Azul claro fondo amarillo
		#define acaz	"\e[44;38;2;53;149;240m"	 				//Azul claro fondo azul
		#define acpu	"\e[45;38;2;53;149;240m"	 				//Azul claro fondo purpura
		#define accy	"\e[46;38;2;53;149;240m"	 				//Azul claro fondo aguamarina
		#define acbl	"\e[47;38;2;53;149;240m"	 				//Azul claro fondo blanco
		#define acna	"\e[48;2;255;128;0;38;2;53;149;240m"		//Azul claro fondo naranja
		#define acac	"\e[48;2;53;149;240;38;2;53;149;240m"		//Azul claro fondo azul claro
		#define acvc	"\e[48;2;17;245;120;38;2;53;149;240m" 		//Azul claro fondo verde claro 
		#define acgc	"\e[48;2;176;174;174;38;2;53;149;240m" 		//Azul claro fondo gris claro
		#define acrs	"\e[48;2;255;151;203;38;2;53;149;240m" 		//Azul claro fondo rosa
		#define acgr	"\e[100;38;2;53;149;240m" 					//Azul claro fondo gris
		#define acrc	"\e[101;38;2;53;149;240m" 					//Azul claro fondo rosado
		#define aces	"\e[102;38;2;53;149;240m" 					//Azul claro fondo esmeralda
		#define acmc	"\e[103;38;2;53;149;240m" 					//Azul claro fondo amarillo claro
		#define accl	"\e[104;38;2;53;149;240m" 					//Azul claro fondo celeste
		#define acma	"\e[105;38;2;53;149;240m" 					//Azul claro fondo magenta
		#define accb	"\e[106;38;2;53;149;240m" 					//Azul claro fondo aguamarina brillante
		#define acbb	"\e[107;38;2;53;149;240m" 					//Azul claro fondo blanco brillante
	}
	//Verde claro 			(vc)
	{
		#define vc  	"\e[38;2;17;245;120m"		//Verde claro
		#define vcC  	"\e[1;38;2;17;245;120m"		//Verde claro claro?
		#define vcS  	"\e[4;38;2;17;245;120m"		//Verde claro subrayado
		#define vcF  	"\e[7;38;2;17;245;120m"		//Verde claro fondo
		
		#define vcne	"\e[40;38;2;17;245;120m"	 				//Verde claro fondo negro
		#define vcro	"\e[41;38;2;17;245;120m"	 				//Verde claro fondo rojo
		#define vcve	"\e[42;38;2;17;245;120m"	 				//Verde claro fondo verde
		#define vcam	"\e[43;38;2;17;245;120m"	 				//Verde claro fondo amarillo
		#define vcaz	"\e[44;38;2;17;245;120m"	 				//Verde claro fondo azul
		#define vcpu	"\e[45;38;2;17;245;120m"	 				//Verde claro fondo purpura
		#define vccy	"\e[46;38;2;17;245;120m"	 				//Verde claro fondo aguamarina
		#define vcbl	"\e[47;38;2;17;245;120m"	 				//Verde claro fondo blanco
		#define vcna	"\e[48;2;255;128;0;38;2;17;245;120m"	 	//Verde claro fondo naranja
		#define vcac	"\e[48;2;53;149;240;38;2;17;245;120m"		//Verde claro fondo azul claro
		#define vcvc	"\e[48;2;17;245;120;38;2;17;245;120m" 		//Verde claro fondo verde claro 
		#define vcgc	"\e[48;2;176;174;174;38;2;17;245;120m" 		//Verde claro fondo gris claro
		#define vcrs	"\e[48;2;255;151;203;38;2;17;245;120m" 		//Verde claro fondo rosa
		#define vcgr	"\e[100;38;2;17;245;120m" 					//Verde claro fondo gris
		#define vcrc	"\e[101;38;2;17;245;120m" 					//Verde claro fondo rosado
		#define vces	"\e[102;38;2;17;245;120m" 					//Verde claro fondo esmeralda
		#define vcmc	"\e[103;38;2;17;245;120m" 					//Verde claro fondo amarillo claro
		#define vccl	"\e[104;38;2;17;245;120m" 					//Verde claro fondo celeste
		#define vcma	"\e[105;38;2;17;245;120m" 					//Verde claro fondo magenta
		#define vccb	"\e[106;38;2;17;245;120m" 					//Verde claro fondo aguamarina brillante
		#define vcbb	"\e[107;38;2;17;245;120m" 					//Verde claro fondo blanco brillante
	}
	//Gris 					(gr)
	{
		#define gr    	"\e[38;2;176;174;174m"		//Gris gris
		#define grC    	"\e[1;38;2;176;174;174m"	//Gris claro
		#define grS    	"\e[4;38;2;176;174;174m"	//Gris subrayado
		#define grF    	"\e[7;38;2;176;174;174m"	//Gris fondo
		
		#define grne	"\e[40;38;2;176;174;174m"					//Gris fondo negro
		#define grro	"\e[41;38;2;176;174;174m"					//Gris fondo rojo
		#define grve	"\e[42;38;2;176;174;174m"					//Gris fondo verde
		#define gram	"\e[43;38;2;176;174;174m"					//Gris fondo amarillo
		#define graz	"\e[44;38;2;176;174;174m"					//Gris fondo azul
		#define grpu	"\e[45;38;2;176;174;174m"					//Gris fondo purpura
		#define grcy	"\e[46;38;2;176;174;174m"					//Gris fondo aguamarina
		#define grbl	"\e[47;38;2;176;174;174m"					//Gris fondo blanco
		#define grna	"\e[48;2;255;128;0;38;2;176;174;174m" 		//Gris fondo naranja
		#define grac	"\e[48;2;53;149;240;38;2;176;174;174m"		//Gris fondo azul claro
		#define grvc	"\e[48;2;17;245;120;38;2;176;174;174m" 		//Gris fondo verde claro 
		#define grgc	"\e[48;2;176;174;174;38;2;176;174;174m" 	//Gris fondo gris claro
		#define grrs	"\e[48;2;255;151;203;38;2;176;174;174m" 	//Gris fondo rosa
		#define grgr	"\e[100;38;2;176;174;174m"					//Gris fondo gris
		#define grrc	"\e[101;38;2;176;174;174m"					//Gris fondo rosado
		#define gres	"\e[102;38;2;176;174;174m"					//Gris fondo esmeralda
		#define grmc	"\e[103;38;2;176;174;174m"					//Gris fondo amarillo claro
		#define grcl	"\e[104;38;2;176;174;174m"					//Gris fondo celeste
		#define grma	"\e[105;38;2;176;174;174m"					//Gris fondo magenta
		#define grcb	"\e[106;38;2;176;174;174m"					//Gris fondo aguamarina brillante
		#define grbb	"\e[107;38;2;176;174;174m"					//Gris fondo blanco brillante
	}
	//Rosa 					(rs)
	{
		#define rs    	"\e[38;2;255;151;203m"		//Rosa
		#define rsC    	"\e[1;38;2;255;151;203m"	//Rosa claro
		#define rsS    	"\e[4;38;2;255;151;203m"	//Rosa subrayado
		#define rsF    	"\e[7;38;2;255;151;203m"	//Rosa fondo
		
		#define rsne	"\e[40;38;2;255;151;203m"	 				//Rosa fondo negro
		#define rsro	"\e[41;38;2;255;151;203m"	 				//Rosa fondo rojo
		#define rsve	"\e[42;38;2;255;151;203m"	 				//Rosa fondo verde
		#define rsam	"\e[43;38;2;255;151;203m"	 				//Rosa fondo amarillo
		#define rsaz	"\e[44;38;2;255;151;203m"	 				//Rosa fondo azul
		#define rspu	"\e[45;38;2;255;151;203m"	 				//Rosa fondo purpura
		#define rscy	"\e[46;38;2;255;151;203m"	 				//Rosa fondo aguamarina
		#define rsbl	"\e[47;38;2;255;151;203m"	 				//Rosa fondo blanco
		#define rsna	"\e[48;2;255;128;0;38;2;255;151;203m"	 	//Rosa fondo naranja
		#define rsac	"\e[48;2;53;149;240;38;2;255;151;203m"		//Rosa fondo azul claro
		#define rsvc	"\e[48;2;17;245;120;38;2;255;151;203m" 		//Rosa fondo verde claro 
		#define rsgc	"\e[48;2;176;174;174;38;2;255;151;203m" 	//Rosa fondo gris claro
		#define rsrs	"\e[48;2;255;151;203;38;2;255;151;203m" 	//Rosa fondo rosa
		#define rsgr	"\e[100;38;2;255;151;203m" 					//Rosa fondo gris
		#define rsrc	"\e[101;38;2;255;151;203m" 					//Rosa fondo rosado
		#define rses	"\e[102;38;2;255;151;203m" 					//Rosa fondo esmeralda
		#define rsmc	"\e[103;38;2;255;151;203m" 					//Rosa fondo amarillo claro
		#define rscl	"\e[104;38;2;255;151;203m" 					//Rosa fondo celeste
		#define rsma	"\e[105;38;2;255;151;203m" 					//Rosa fondo magenta
		#define rscb	"\e[106;38;2;255;151;203m" 					//Rosa fondo aguamarina brillante
		#define rsbb	"\e[107;38;2;255;151;203m" 					//Rosa fondo blanco brillante
	}
}

	//Colores texto blanco fondo... (PREDETERMINADOS)
void fondos(){
		#define neB		 	 "\e[40m"				//Fondo negro
		#define roB 	 	 "\e[41m"				//Fondo rojo
		#define veB  	 	 "\e[42m"				//Fondo verde
		#define amB  		 "\e[43m"				//Fondo amarillo
		#define azB    		 "\e[44m"				//Fondo azul
		#define puB 		 "\e[45m"				//Fondo purpura
		#define cyB    	 	 "\e[46m"				//Fondo aguamarina
		#define blB   	 	 "\e[47m"				//Fondo blanco
		#define naB 	 	 "\e[48;2;255;128;0m" 	//Fondo naranja
		#define acB	    	 "\e[48;2;53;149;240m"	//Fondo azul claro
		#define vcB    	 	 "\e[48;2;17;245;120m"	//Fondo verde claro
		#define gcB     	 "\e[48;2;176;174;174m"	//Fondo gris claro
		#define rsB		     "\e[48;2;255;151;203m" //Fondo rosa
		#define grB    	     "\e[100m"				//Fondo gris
		#define rcB    	     "\e[101m"				//Fondo rosado
		#define esB    	     "\e[102m"				//Fondo esmeralda
		#define mcB    	     "\e[103m"				//Fondo amarillo claro
		#define clB    	     "\e[104m"				//Fondo celeste
		#define mgB    	     "\e[105m"				//Fondo magenta
		#define cbB    	     "\e[106m"				//Fondo aguamarina brillante
		#define bbB    	     "\e[107m"				//Fondo blanco brillante
}
