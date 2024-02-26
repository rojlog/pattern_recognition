/* Programa No.3
   Uso de la estructura Mat para crear matrices multidimensionales.
*/
#include<iostream>
#include"opencv2/core.hpp"
#include"opencv2/highgui.hpp"
#include"opencv2/imgcodecs.hpp"
using namespace std;
using namespace cv;

int main()
{ //Mat Mx(2,2,CV_8SC3);

  Mat Mx,B,R;
  Mx = imread( "images/image.png", IMREAD_UNCHANGED );
  
  if(Mx.empty()) {
      cout << "No existe el archivo." << endl;
    }else {
        
          imshow( "Imagen Entrada", Mx );

          //Mx = Scalar(255,255,255) - Mx;
          //imshow("Imagen en negativo d la imagen a color", Mx);



          /*float r,g,b = 0.0;
          unsigned char gris; 
          for(int i=0; i<Mx.rows; i++)
          for(int j=0; j<Mx.cols; j++) {
            r=Mx.at<Vec3b>(i,j)[0];
            g=Mx.at<Vec3b>(i,j)[1];
            b=Mx.at<Vec3b>(i,j)[2];
            gris=(r+g+b)/3.0;
            Mx.at<Vec3b>(i,j)[0]=gris;
            Mx.at<Vec3b>(i,j)[1]=gris;
            Mx.at<Vec3b>(i,j)[2]=gris;
          }*/
        
          Mx.convertTo(Mx, CV_32FC3);
          Mx = Scalar(255,255,255) - Mx;
          //imshow("Imagen en negativo del gris", Mx);
          Mx.convertTo(Mx, CV_8UC3);
          //imshow("En gris", Mx);
          //Mx.converTo(Mx, CV_32FC3);
          //Mx = Scalar(255,255,255) - Mx;
          imshow("Imagen en negativo del color", Mx);

          //cout<<Mx<<endl;
          cout<<"Numero filas: "<<Mx.rows<<endl;
          cout<<"Numero columnas: "<<Mx.cols<<endl;
          cout<<"Numero Tamanio: "<<Mx.size<<endl;
          cout<<"Numero Total de elementos: "<<Mx.total()<<endl;
          cout<<"Numero de canales: "<<Mx.channels()<<endl;
           }
  waitKey();
  return 0;
  }