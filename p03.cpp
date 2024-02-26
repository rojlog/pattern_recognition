/* Programa No.3
   Uso de la estructura Mat para crear matrices multidimensionales.
*/
#include<iostream>
#include"opencv2/core.hpp"
#include"opencv2/highgui.hpp"
#include"opencv2/imgcodecs.hpp"
using namespace std;
using namespace cv;


void AjusteDeRango(Mat &R) {
  float min,max;
          max=R.at<float>(0,0);
          min=max; 
          for(int i=0; i<R.rows; i++)
          for(int j=0; j<R.cols; j++)
             { if(R.at<float>(i,j)<min)
                 min=R.at<float>(i,j);
                if(R.at<float>(i,j)>max)
                  max=R.at<float>(i,j);
               }
          cout<<"Maximo de la imgen R: "<<max<<endl;
          cout<<"Minimo de la imgen R: "<<min<<endl;
          //Mx=255-Mx;
       
          float rango=max-min;
          for(int i=0; i<R.rows; i++)
          for(int j=0; j<R.cols; j++)
              R.at<float>(i,j)=((R.at<float>(i,j)-min)/rango)*255;
}

int main()
{ //Mat Mx(2,2,CV_8SC3);

  Mat Mx,B,R;
  Mx=imread("images/uno.bmp",IMREAD_UNCHANGED);
  if(Mx.empty())
    {
      cout<<"No existe el archivo."<<endl;
    }
   else
       { //Mx=Mat::zeros(256,256,CV_8UC1);
         //Mx=Mat::ones(256,256,CV_8UC1); 
        unsigned char aux,aux2;
         R=Mat::zeros(Mx.rows,Mx.cols,CV_32FC1); 
         B=imread("images/dos.bmp",IMREAD_UNCHANGED);
         imshow("Imagen Origen1",Mx);
          //for(int i=0; i<R.rows; i++)
          //for(int j=0; j<Mx.cols; j++)
            // Mx.at<char>(128,j)=0;
          imshow("Imagen Origen2",B);
          unsigned char minU,maxU;
          
          for(int i=0; i<Mx.rows; i++)
          for(int j=0; j<Mx.cols; j++)
          { aux=Mx.at<unsigned char>(i,j);
            aux2=B.at<unsigned char>(i,j);
            R.at<float>(i,j)=(float)aux+(float)aux2;
             }
          // R.at<float>(10,10)=-1.0;   
          AjusteDeRango(R);
          float min,max;
          max=R.at<float>(0,0);
          min=max; 
          for(int i=0; i<R.rows; i++)
          for(int j=0; j<R.cols; j++)
             { if(R.at<float>(i,j)<min)
                 min=R.at<float>(i,j);
                if(R.at<float>(i,j)>max)
                  max=R.at<float>(i,j);
               }
          cout<<"Maximo de la imgen R: "<<max<<endl;
          cout<<"Minimo de la imgen R: "<<min<<endl;
          //Mx=255-Mx;
       
          float rango=max-min;
          for(int i=0; i<R.rows; i++)
          for(int j=0; j<R.cols; j++)
              R.at<float>(i,j)=((R.at<float>(i,j)-min)/rango)*255;
          
          max=R.at<float>(0,0);
          min=max; 
          for(int i=0; i<B.rows; i++)
          for(int j=0; j<B.cols; j++)
             { if(R.at<float>(i,j)<min)
                 min=R.at<float>(i,j);
                if(R.at<float>(i,j)>max)
                  max=R.at<float>(i,j);
               }     
          cout<<"Maximo de la imgen R: "<<max<<endl;
          cout<<"Minimo de la imgen R: "<<min<<endl;     

          //imshow("Imagen Sumada",B);
          imwrite("images/Resultado.bmp",R);
          imshow("Ajuste de Rango",R);
          //cout<<"Mx:"<<endl;
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


  /*
  Mx.at<Vec3b>(0,0)[0]=1;
  Mx.at<Vec3b>(0,1)[0]=2;
  Mx.at<Vec3b>(1,0)[0]=3;
  Mx.at<Vec3b>(1,1)[0]=4;

  Mx.at<Vec3b>(0,0)[1]=5;
  Mx.at<Vec3b>(0,1)[1]=6;
  Mx.at<Vec3b>(1,0)[1]=7;
  Mx.at<Vec3b>(1,1)[1]=8;
  
  Mx.at<Vec3b>(0,0)[2]=2;
  Mx.at<Vec3b>(0,1)[2]=2;
  Mx.at<Vec3b>(1,0)[2]=2;
  Mx.at<Vec3b>(1,1)[2]=2;

  cout<<"Mx:"<<endl;
  cout<<Mx<<endl;
  //Mx=2*Mx;
  //Mx=Mx/2;
  //Mx=Mx+1;
  //Mx=Mx-1;
  //Mx=Scalar(1,1,1)+Mx;
  //Mx=Mx-Scalar(1,1,1);
  */