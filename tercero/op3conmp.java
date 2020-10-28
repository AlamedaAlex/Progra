import java.io.*;
import java.text.DecimalFormat;
import java.text.SimpleDateFormat;
import javax.swing.*;
   
public class op3conmp
{
   public static void main (String[]args) throws IOException
   {
      BufferedReader  br=new BufferedReader (new InputStreamReader(System.in));

      String contd;
      int cop3=3;
      int op3=0;
      String usuario;
      String pass;
      int siesta= 0;
      int sisepuede= 0;
      int intento = 0;
      int sientra = 0;
      int opcion = 0;
      int cons=0;
      String nom=" ";
      String ap1=" ";
      String ap2=" ";
      int res=0;
      int femmen=0;
      int femmay=0;
      int fecha=0;
      int edad=0;
      int yearn=0;
      String year=" ";
      int Dia=0;
      int Mes=0;
      int opc=0;
      String clave=" ";
      int reiniciar=0;
      int password=0;
      int conin=4;
      int edo=0;
      String estadoo=" ";
      String nation=" ";
      String state=" ";
      String work=" ";
      String genero=" ";
      String mes=" ";
      String input=" ";
      int fem=0;
      int mascu=0;
      String sex=" ";
      int mx=0;
      int otro=0;
      String variable=" ";
      int eu=0;
      int puesto=0;
      int licenciatura=0;
      int doctorado=0;
      int maestria=0;
      int primaria=0;
      int secundaria=0;
      int preparatoria=0;
      int sexx=0;
      int seg=0; 


do{
   do{
      contd= JOptionPane.showInputDialog("Ingresa tu  contraseña ");
         if (contd.length()<1){
         JOptionPane.showMessageDialog(null,"No se ha ingresado contraseña"); 
         }
         }while (contd.length()<1);
          
         int l = (contd.compareTo("1234"));
        


         if  (l==0 )
         {
         op3 =1;
         }
          
         if (op3 !=1)
         {
         cop3=cop3-1;
         JOptionPane.showMessageDialog(null,"Datos incorrectos, intentos restantes:"+cop3);
         }
         }while (op3!=1);
         
          if (op3==1)
         {
         JOptionPane.showMessageDialog(null,"Welcome");
         }
         do
      {
        
         do{
            usuario =(JOptionPane.showInputDialog("Ingrese Usuario") );
         
            if(usuario.length()< 1)
            {JOptionPane.showMessageDialog(null,"Error campo vacio reintente");
            }
         }while(usuario.length()<1);
         do{
            pass = (JOptionPane.showInputDialog("Ingrese Password") );
         
            if(pass.length()< 1)
            {JOptionPane.showMessageDialog(null,"Error campo vacio reintente");
            }
         }while(pass.length()< 1);
         int x  = (usuario.compareTo("a"));    int y = (pass.compareTo("12"));
         int x1 = (usuario.compareTo("b"));   int y1 = (pass.compareTo("23"));
         int x2 = (usuario.compareTo("c"));   int y2 = (pass.compareTo("34"));
         int x3 = (usuario.compareTo("d"));   int y3 = (pass.compareTo("45"));
         int x4 = (usuario.compareTo("e"));   int y4 = (pass.compareTo("56"));
         if ((x == 0)&& (y == 0))      {sisepuede = 1;    }
         if ((x1 == 0)&& (y1 == 0))    {sisepuede = 1;    }
         if ((x2 == 0)&& (y2 == 0))    {sisepuede = 1;    }
         if ((x3 == 0)&& (y3 == 0))    {sisepuede = 1;    }
         if ((x4 == 0)&& (y4 == 0))    {sisepuede = 1;    }
         
         if ( sisepuede == 1)
         {   
            
            //MENU DE OPCIONES
            while(opcion<=3){
            opcion =Integer.parseInt(JOptionPane.showInputDialog("MENU PRINCIPAL \n [1] Captura de informacion\n [2] Totales \n [3]Salida") );
            
            switch(opcion){
            case 1:
         { 
               do{
                  sientra = 1;
               
                  cons = cons + 1;
               
               
                  do{
                     nom =(JOptionPane.showInputDialog("Numero Consecutivo "+ cons + "\n \nIngrese Nombre(s)") );
                     res = nom.length();
                  
                     if(res <= 1)
                     {
                        JOptionPane.showMessageDialog(null,"Error Nombre");
                     }
                  
                  }while(res <= 1);
               
                  ap1=(JOptionPane.showInputDialog("Ingrese Apellido Paterno"));
                  ap2=(JOptionPane.showInputDialog("Ingrese Apellido Materno"));
                  System.out.println(nom.toUpperCase()+" "+ap1.toUpperCase()+" "+ap2.toUpperCase());
                  
                  String [] choice={ " FEMENINO" , "MASCULINO "};
                  sex = (String) JOptionPane.showInputDialog(null, "ELIGE SEXO...","SEXO", JOptionPane.QUESTION_MESSAGE, null,choice,choice[1]);
                  sexx=Integer.parseInt(JOptionPane.showInputDialog("ELEGISTE?:\n[1]FEMENINO \n[2]MASCULINO " ));
                  if(sexx==1) {fem=fem+1;}
                  if(sexx==2) {mascu=mascu+1; }                  
                  
                  if(sex.compareTo("FEMENINO"  )==0) {genero= "FM";}                     
                  if(sex.compareTo("MASCULINO" )==0) {genero= "MM";}
                                 
                  String [] choices={"01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};               
                  input = (String)JOptionPane.showInputDialog(null, "ELIGE DIA...","DIA DE NACIMIENTO", JOptionPane.QUESTION_MESSAGE, null,choices,choices[1]);
                  Dia = Integer.parseInt(input);
                             
                  String [] choicees={"01","02","03","04","05","06","07","08","09","10","11","12"};               
                  mes= (String) JOptionPane.showInputDialog(null, "ELIGE MES...","MES DE NACIMIENTO", JOptionPane.QUESTION_MESSAGE, null,choicees,choicees[1]);
                  Mes = Integer.parseInt(mes);                
                   
               
                  do{
                  
                     year =(JOptionPane.showInputDialog("Ingrese año de nacimiento (dos digitos)"));
                     res = year.length();
                  
                     if(res != 2)
                     {
                        JOptionPane.showMessageDialog(null,"Error en año de nacimiento");
                     }
                  
                  }while(res != 2);
                  yearn = Integer.parseInt(year);
                  edad=2016-(1900+yearn);
                  yearn = 1900+yearn;
                                       
                     if(edad>=18)
                     { femmay=femmay+1; 
                        JOptionPane.showMessageDialog(null,"ERES MAYOR DE EDAD"); 
                     }
                     else
                     {  femmen=femmen+1; 
                           JOptionPane.showMessageDialog(null,"ERES MENOR DE EDAD");  
                     }
                                    
               
                  if (Dia >= 21 && Mes == 3 || Dia <= 20 && Mes == 4){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES  ARIES"+"\n  Aries es una persona llena de energía y entusiasmo");
                  }
                  if (Dia >= 21 && Mes == 4 || Dia <= 21 && Mes == 5 ){
                     JOptionPane.showMessageDialog(null, "TU SIGNO ZODIACAL ES TAURO"+"\n Tauro suele ser práctico, decidido y tener una gran fuerza de voluntad");
                  }
                  if (Dia >= 22 && Mes == 5 || Dia <= 21 && Mes == 6) {
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES  GEMINIS"+"\n Géminis es el signo de los gemelos y, como tal, su carácter \n es doble, bastante complejo y contradictorio");
                  }
                  if (Dia >= 21 && Mes == 6 || Dia <= 27 && Mes == 7){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES  CANCER"+"\n  Cáncer puede ser desde tímido y aburrido hasta brillante y famoso");
                  }
                  if (Dia >= 24 && Mes == 7 || Dia <= 23 && Mes == 8){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES  LEO"+"\n Leo es el signo más dominante del zodiaco. También es creativo y extrovertido");
                  }
                  if (Dia >= 24 && Mes == 8 || Dia <= 23 && Mes == 9){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES  VIRGO"+"\n Virgo, el único signo representado por una mujer, es un signo \n caracterizado por su precisión");
                  }
                  if (Dia >= 24 && Mes == 9 || Dia <= 23 && Mes == 10){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES   LIBRA"+"\n Tienen encanto, elegancia y buen gusto, son amables y pacíficos");
                  }
                  if (Dia >= 24 && Mes == 10 || Dia <= 22 && Mes == 11){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES ESCORPIO"+"\n Escorpio es un signo intenso con una energía emocional \n única en todo el zodiaco");
                  }
                  if (Dia >= 23 && Mes == 11 || Dia <= 21 && Mes == 12){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES SAGITARIO"+"\n Son versátiles y les encanta la aventura y lo desconocido");
                  }
                  if (Dia >= 22 && Mes == 11 || Dia <= 20 && Mes == 1){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES CAPRICORNIO"+"\n Son trabajadores, responsables, prácticos y dispuestos a persistir \n hasta sea necesario para conseguir su objetivo.");
                  }
                  if (Dia >= 21 && Mes == 1 || Dia <= 19 && Mes == 2){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES ACUARIO"+"\n  Acuario tienen una personalidad fuerte y atractiva");
                  }
                  if (Dia >= 20 && Mes == 2 || Dia <= 20 && Mes == 3){
                     JOptionPane.showMessageDialog(null,"TU SIGNO ZODIACAL ES PISCIS"+"\n Son sensibles a los sentimientos de los demás y responden con simpatía y \n  tacto al sufrimiento de los demás");
                  }
               
                  String [] trabajos={"PRIMARIA","SECUNDARIA","PREPARATORIA","LICENCIATURA","MAESTRIA ","DOCTORADO"};               
                  work = (String) JOptionPane.showInputDialog(null,"GRADO DE ESCOLARIDAD ","ESCOLARIDAD", JOptionPane.QUESTION_MESSAGE, null,trabajos,trabajos[1]);
                  puesto=Integer.parseInt(JOptionPane.showInputDialog("ELEGISTE?:\n[1]PRIMARIA \n[2]SECUNDARIA \n[3]PREPARATORIA \n[4]LICENCIATURA \n[5] MAESTRIA \n [6]DOCTORADO"));                               
                  
                  if(puesto==1){ primaria=primaria+1;          }
                  if(puesto==2){ secundaria=secundaria+1;  }
                  if(puesto==3){ preparatoria=preparatoria+1;            }
                  if(puesto==4){ licenciatura=licenciatura+1;          }
                  if(puesto==5){ maestria=maestria+1;  }
                  if(puesto==6){ doctorado=doctorado+1;            }  
               
                  String [] nacionalidad={"MEXICANO","EXTRANJERO"};               
                  nation = (String) JOptionPane.showInputDialog(null,"ESCOGE TU NACIONALIDAD ","NACIONALIDAD", JOptionPane.QUESTION_MESSAGE, null,nacionalidad,nacionalidad[1]);
                                 
                  opc=Integer.parseInt(JOptionPane.showInputDialog("ELEGISTE MEXICANO?: \n[1]SI \n[2] NO"));
                  if(opc==1)  { mx=mx+1;}
                  if(opc==2)  {eu=eu+1;}                  
                     
                  String [] estado={"AGUASCALIENTES","BAJA CALIFORNIA","BAJA CALIFORNIA SUR","CAMPECHE","CHIAPAS ","CHIHUAHUA","COAHUILA","COLIMA","DISTRITO FEDERAL","DURANGO","ESTADO DE NEXICO","GUANAJUATO","GUERRERO","HIDALGO","JALISCO","MICHOACAN","MORELOS","NAYARIT","NUEVO LEÓN","OAXACA","PUEBLA","QUERETARO","QUINTANA ROO","SAN LUIS POTOSI","SINALOA","SONORA","TABASCO","TAMAULIPAS","TLAXCALA","VERACRUZ","YUCATAN","ZACATECAS","ESTADOS UNIDOS"};               
                  state = (String) JOptionPane.showInputDialog(null,"LUGAR DE NACIMIENTO ","ESTADO", JOptionPane.QUESTION_MESSAGE, null,estado,estado[1]);
                     
                  if (state.compareTo("AGUASCALIENTES"     ) == 0    ) {estadoo= "AS";}
                  if (state.compareTo("BAJA CALIFORNIA"    ) == 0    ) {estadoo= "BC";}
                  if (state.compareTo("BAJA CALIFORNIA SUR") == 0    ) {estadoo= "BS";} 
                  if (state.compareTo("CAMPECHE"           ) == 0    ) {estadoo= "CC";}
                  if (state.compareTo("CHIAPAS "           ) == 0    ) {estadoo= "CS";}
                  if (state.compareTo("CHIHUAHUA"          ) == 0    ) {estadoo= "CH";}
                  if (state.compareTo("COAHUILA"           ) == 0    ) {estadoo= "CL";}
                  if (state.compareTo("COLIMA"             ) == 0    ) {estadoo= "CM";}
                  if (state.compareTo("DISTRITO FEDERAL"   ) == 0    ) {estadoo= "DF";}
                  if (state.compareTo("DURANGO"            ) == 0    ) {estadoo= "DG";}
                  if (state.compareTo("ESTADO DE MEXICO"   ) == 0    ) {estadoo= "MC";}
                  if (state.compareTo("GUANAJUATO"         ) == 0    ) {estadoo= "GT";}
                  if (state.compareTo("GUERRERO"           ) == 0    ) {estadoo= "GR";}
                  if (state.compareTo("HIDALGO"            ) == 0    ) {estadoo= "HG";}
                  if (state.compareTo("JALISCO"            ) == 0    ) {estadoo= "JC";}
                  if (state.compareTo("MICHOACAN"          ) == 0    ) {estadoo= "MN";}
                  if (state.compareTo("MORELOS"            ) == 0    ) {estadoo= "MS";}
                  if (state.compareTo("NAYARIT"            ) == 0    ) {estadoo= "NT";}
                  if (state.compareTo("NUEVO LEON"         ) == 0    ) {estadoo= "NL";}
                  if (state.compareTo("OAXACA"             ) == 0    ) {estadoo= "OC";}
                  if (state.compareTo("PUEBLA"             ) == 0    ) {estadoo= "PL";}
                  if (state.compareTo("QUERETARO"          ) == 0    ) {estadoo= "QT";}
                  if (state.compareTo("QUINTANA ROO"       ) == 0    ) {estadoo= "QR";}
                  if (state.compareTo("SAN LUIS POTOSI"    ) == 0    ) {estadoo= "SP";}
                  if (state.compareTo("SINALOA"            ) == 0    ) {estadoo= "SL";}
                  if (state.compareTo("SONORA"             ) == 0    ) {estadoo= "SR";}
                  if (state.compareTo("TABASCO"            ) == 0    ) {estadoo= "TC";}
                  if (state.compareTo("TAMAULIPAS"         ) == 0    ) {estadoo= "TS";}
                  if (state.compareTo("TLAXCALA"           ) == 0    ) {estadoo= "TL";}
                  if (state.compareTo("VERACRUZ"           ) == 0    ) {estadoo= "VZ";}
                  if (state.compareTo("YUCATAN"            ) == 0    ) {estadoo= "YN";}
                  if (state.compareTo("ZACATECAS"          ) == 0    ) {estadoo= "ZS";}
                 
                                   
                  if(variable=="REGION 1" || variable=="REGION 1")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL NOROESTE (\nESTADOS:BAJA CALIFORNIA , BAJA CALIFORNIA SUR, CHIHUAHUA, DURANGO, SINALOA,SONOROA)  ");
                  }
                  if(variable=="REGION 2" || variable=="REGION 2 )")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL NORESTE (\n ESTADOS: COAHUILA, NUEVO LEON Y TAMAULIPAS)");
                  }
                  if(variable=="REGION 3" || variable=="REGION 3")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL OESTE (\n ESTADOS: COLIMA, JALISCO,MICHOACAN, NAYARIT) ");
                  }
                  if(variable=="REGION 4" || variable=="REGION 4 ")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL ESTE (\n ESTADOS: HIDALGO, PUEBLA,TLAXCALA,VERACRUZ)");
                  }
                  if(variable=="REGION 5" || variable=="REGION 5")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL CENTRO NORTE (\n ESTADOS:  AGUASCALIENTES, GUANAJUATO,QUERETARO,SAN LUIS POTOSI, ZACATECAS");
                  }
                  if(variable=="REGION 6" || variable=="REGION 2")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL CENTRO SUR (\n ESTADOS: CIUDAD DE MEXICO, MEXICO, MORELOS) ");
                  }
                  if(variable=="REGION 7" || variable=="REGION 7")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL SUROESTE (\n ESTADOS: CHIAPAS, GUERRERO,OAXACA) ");
                  }
                  if(variable=="REGION 8" || variable=="REGION 8")
                  {
                     JOptionPane.showMessageDialog(null,"PERTENECE AL SURESTE (\n ESTADOS: CAMPECHE, QUINTANA ROO, TABASCO, YUCATAN");
                  }
               
                  JOptionPane.showMessageDialog(null,"BIENVENIDO " + nom.toUpperCase()+" "+ap1.toUpperCase()+" "+ap2.toUpperCase()+"\nSexo"+sex+"\n\nEdad cumplida al 31 de Diciembre 2016 --> "+ edad+  " años \n\nDIA: " + input+ "\nMES:   "+mes + "\nAÑO:  "+ yearn+"\nEscolaridad: "+work+"\nNACIONALIDAD: "+nation+"\nLUGAR DE NACIMIENTO: "+state);
                  JOptionPane.showMessageDialog(null,"Clave de Identificacion: "+ap1.toUpperCase().substring(0,2)+ap2.toUpperCase().substring(0,2)+nom.toUpperCase().substring(0,3)+state.substring(1,3)+year.substring(8,10));
                 // JOptionPane.showMessageDialog(null,"Clave de Identificacion: "+ap1.toUpperCase().substring(0,2)+ap2.toUpperCase().substring(0,2)+nom.toUpperCase().substring(0,3));
                  //SACAR LA CLAVE DE IDENTIFICACION (APELLIDO PATERNO=2, APELLIDO MATERNO=2, NOMBRE=3, AÑO=2, MES=2, DIA=2, SEX= FM O MM, LUC=3,PAIS=MX O EX*/
               sientra=1;                   
                  opcion=0;
                                 
                  otro=Integer.parseInt(JOptionPane.showInputDialog("DESEA OTRO PROCESO \n[1] SI\n[2 ]NO ")); 
               }while (otro==1);

            }break;
                          
            case 2:
         {
               if (sientra == 0)
               {JOptionPane.showMessageDialog(null,"Error no hay informacion vaya a opcion 1");
               }
               else 
               { 
                  do{
                     password =Integer.parseInt(JOptionPane.showInputDialog("Ingrese Password"));
                  
                     if (password==1234)
                     {
                        JOptionPane.showInputDialog("Contraseña correcta");
                     }         
                     else
                     {
                        JOptionPane.showInputDialog("contraseña incorrecta");
                        conin=conin-1;
                     }
                     if (conin==0){ 
                        JOptionPane.showInputDialog("Vuelve a intentarlo"); 
                        System.exit(0);
                     } 
                  }while (password<1234 || password>1234);
                  
                  JOptionPane.showInputDialog("TOTAL DE PROCESOS "+ cons);
                  JOptionPane.showInputDialog("TOTAL DE Mujeres "+ fem);
                  JOptionPane.showInputDialog("TOTAL DE hombres "+ mascu);
                  JOptionPane.showInputDialog("TOTAL DE MEXICANOS "+ mx);
                  JOptionPane.showInputDialog("TOTAL DE EXTRANJEROS "+ eu);  
                  JOptionPane.showInputDialog("TOTAL DE MUJERES MAYORES "+femmay);
                  JOptionPane.showInputDialog("TOTAL DE MUJERES MENORES "+femmen);
                  JOptionPane.showInputDialog("TOTAL DE HOMBRES MAYORES ");
                  JOptionPane.showInputDialog("TOTAL DE HOMBRES MENORES ");
                  JOptionPane.showInputDialog("TOTAL MUJERES MEXICANAS"+fem+mx+" QUE TIENEN LA CARRERA DE  LICENCIATURA "+licenciatura );
                  JOptionPane.showInputDialog("TOTAL MUJERES MEXICANAS"+fem+mx+" QUE TIENEN LA CARRERA DE  MAESTRIA "+maestria );
                  JOptionPane.showInputDialog("TOTAL MUJERES MEXICANAS"+fem+mx+" QUE TIENEN LA CARRERA DE  DOCTORADO "+doctorado );
                  JOptionPane.showInputDialog("TOTAL HOMBRES MEXICANAS"+mascu+mx+" QUE TIENEN LA CARRERA DE  LICENCIATURA "+licenciatura );
                  JOptionPane.showInputDialog("TOTAL HOMBRES MEXICANAS"+mascu+mx+" QUE TIENEN LA CARRERA DE  MAESTRIA "+maestria );
                  JOptionPane.showInputDialog("TOTAL HOMBRES MEXICANAS"+mascu+mx+" QUE TIENEN LA CARRERA DE  DOCTORADO "+doctorado );
                  
                               
                     
                
                 //TOTAL DE HOMBRES MAYORES Y MENORES                
                 //TOTAL DE INTENTOS DE ACCESO DE CADA USUARIO     
               }
            }break;

            case 3:
         {
                     do{     
                            JOptionPane.showInputDialog(null," ¿Deseas salir? [1]Si [2]No");
                           seg=Integer.parseInt(br.readLine());
                          
                           
                     if (seg==0 || seg>2)
                           {
                               JOptionPane.showInputDialog(null," Opcion no valida ");
                           }
                        }while(seg==0 || seg>2);
                     if (seg==1)
                              {
                                 System.exit(0);
                              }
                      if(seg==2){
                      opcion=0;
                      }
                     intento = 3;
            }break;
         }

            }
                  }
      
//FIN DE MENU 

      else
         { JOptionPane.showMessageDialog(null,"Error en usuario y/o PAssword");
            intento = intento + 1;
      if (intento >= 3)
            {JOptionPane.showMessageDialog(null,"Excedio Errores ADIOS");
            }
         }
      }while (intento <3);
     
   } 
}