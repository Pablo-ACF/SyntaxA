#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <string>
#include <iostream>
#include <fstream>
#include <QFileDialog>
#include <QMessageBox>
#include "ui_mainwindow.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    int sinMat[45][65]={
                                  //101,	102,	103,	104,	105,	106,	107,	108,	109,	110,	111,	112,	113,	114,	115,	116,	117,	118,	119,	120,	121,	122,	123,	124,	125,	126,	127,	128,	129,	130,	131,	132,	133,	134,	135,	136,	137,	138,	139,    140,	141,	142,	143,	144,	145,	146,	147,	148,	149,	150,	151,	152,	153,	154,	155,	156,	157,	158,	159,	160,	161,	162,	163,	164,	1311
    /*PROGRAM-200       */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		1,		1,		-1,		-1,		1,		-1,		1,		-1,		2,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9},
    /*libreria-201      */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		3,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9},
    /*DECLARA_LIBRARY202*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		4,		5,		-1,		-1,		5,		-1,		5,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		5,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*DECLARA_GLOBALC203*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		7,		-1,		-1,		6,		-1,		7,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		7,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*DECLARA_GLOBALV204*/	        {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		9,		-1,		-1,		-1,		-1,		8,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*DECLARA_CLASS205	*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		10,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9},
   /*DECLARA_FUNCTION206*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		12,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		12,		-1,		-1,		-1,		-1,		-1,		-1,		11,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
  /*DECLARA_GLOBALC2-207*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		13,		-1,		14,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		14,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
  /*DECLARA_GLOBALV2-208*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		15,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		16,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
 /*DECLARA_FUNCTION2-209*/          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		18,		-1,		-1,		-1,		-1,		-1,		-1,		17,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*PARAMETROS 210    */          {19,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		98,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*TIPO_DE_DATO 211  */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		20,		21,		22,		23,		24,		25,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
   /*VALOR_CONSTANTE 212*/          {-1,	26,     27,		28,		29,		30,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*DEC_LOCALVAR 213  */          {32,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		98,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		98,		31,		-1,		37,		38,		34,		-1,		33,		-1,		-1,		-1,		36,		35,		-1,		-1,		-1,		-1},
    /*ESTATUTOS 214     */          {40,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		39,		-1,		-1,		-1,		-1,		39,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		39,		-1,		-1,		37,		38,		34,		98,		33,     39,		74,		-1,		36,		35,		-1,		98,		-1,		-1},
    /*EST_ASIG 215      */          {40,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*EST_WHILE 216	    */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		41,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*EST_IF 217        */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		42,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*EST_READ 218      */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		43,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*EST_WRITE 219	    */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		44,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*EST_FOR 220       */          {-1,	-1,     -1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		45,		-1,		-1,		-1,		-1},
    /*EST_RETURN 221    */          {-1,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		46,		-1,		-1,		-1,		-1,		-1},
   /* EXPR 222          */          {47,	47,		47,		47,		47,		47,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		47,		-1,		-1,		-1,		47,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
    /*EXPR2 223	        */          {48,	48,		48,		48,		48,		48,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		48,		-1,		-1,		-9,		48,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
    /*EXPR3 224	        */          {49,	49,		49,		49,		49,		49,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		49,		-1,		-9,		-9,		49,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
    /*EXPR4 225	        */          {84,	84,		84,		84,		84,		84,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		84,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
    /*EXPR5 226	        */          {87,	87,		87,		87,		87,		87,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-9,		-9,		-9,		-9,		-9,		-9,		87,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
   /* FACT 227          */          {50,	51,		52,		53,		54,		55,		-9,		-9,		-9,		-9,		-9,		-9,		-1,		-9,		-9,		-9,		-9,		-9,		-9,		-9,		-9,		56,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
    /*OPREL 228	        */          {-9,	-9,		-9,		-9,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		57,		-1,		61,		62,		59,		60,		-1,		58,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
  /*LLAMADA_FUNCTION 229*/          {63,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*TERM 230          */          {91,	91,		91,		91,		91,		91,		-9,		-9,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-9,		-9,		-9,		-9,		-9,		-9,		91,		-9,		-1,		-1,		-1,		-1,		-9,		-1,		-9,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1},
    /*id2 231           */          {64,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		65,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		69,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*var 232           */          {66,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		67,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		67,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*id3 233           */          {-1,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		69,		-1,		-1,		-1,		-1,		-1,		-1,		69,		68,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
   /* nx 234            */          {71,	70,		70,		70,		70,		70,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		70,		-1,		-1,		-1,		70,		-1,		-1,		-1,		-1,		-1,		-9,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
   /* elif 235          */          {-1,	1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		73,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		73,		73,		72,		-1,		-1,		-1,		-1,		-1,		-1},
    /*elos 236          */          {-1,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		75,		74,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*expw 237          */          {-1,	1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		77,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		76,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
   /* or 238            */          {79,	79,		79,		79,		79,		79,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		79,		-1,		-1,		78,		79,		79,		-1,		-1,		-1,		-1,		79,		-1,		79,		79,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		79,		-1,		-1,		-1},
    /*and 239           */          {81,	81,		81,		81,		81,		81,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		81,		-1,		80,		81,		81,		81,		-1,		-1,		-1,		-1,		81,		-1,		81,		81,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		81,		-1,		-1,		-1},
    /*not 240	        */          {83,	83,		83,		83,		83,		83,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		82,		-1,		-1,		-1,		83,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1},
    /*nex 241	        */          {90,	90,		90,		90,		90,		90,		88,		89,		-1,		-1,		-1,		90,		-1,		90,		90,		90,		90,		90,		90,		90,		90,		90,		90,		-1,		-1,		-1,		-1,		90,		-1,		90,		90,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		90,		-1,		-1,		-1},
    /*rel 242	        */          {86,	86,		86,		86,		86,		86,		-1,		-1,		-1,		-1,		-1,		85,		-1,		85,		85,		85,		85,		86,		85,		86,		86,		86,		86,		-1,		-1,		-1,		-1,		86,		-1,		86,		86,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		86,		-1,		-1,		-1},
    /*nte 243	        */          {95,	95,		95,		95,		95,		95,		95,		95,		92,		93,		94,		95,		-1,		95,		95,		95,		95,		95,		95,		95,		95,		95,		95,		-1,		-1,		-1,		-1,		95,		-1,		95,		95,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		95,		-1,		-1,		-1},
   /* id4 244	        */          {96,	-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		97,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1,		-1}};

    int prodMat[99][12]={//501= EPSILON (take out production of pile)
                         //500= end of production pile
                         {0},
   {205,206,204,203,202,500},           // 1.	PROGRAM -> DECLARA_LIBRARY DECLARA_GLOBALC DECLARA_GLOBALV DECLARA_FUNCTION DECLARA_CLASS
   {201,500},                           // 2.	PROGRAM -> libreria
   {141,209,208,207,140,500},           // 3.	libreria -> init_library DECLARA_GLOBALC2 DECLARA_GLOBALV2 DECLARA_FUNCTION2 end_library
   {202,128,164,129,101,132,500},       // 4.	DECLARA_LIBRARY ->library id . qlib ; DECLARA_LIBRARY
   {501,500},                           // 5.	DECLARA_LIBRARY -> EPSILON
   {137,231,136,500},                   // 6.	DECLARA_GLOBALC -> global_cte id2 end_global_cte
   {501,500},                           // 7.	DECLARA_GLOBALC -> EPSILON
   {139,232,138,500},                   // 8.	DECLARA_GLOBALV -> global_var var end_global_var
   {501,500},                           // 9.	DECLARA_GLOBALV -> EPSILON
   {135,214,134,133,500},               // 10.	DECLARA_CLASS -> class main ESTATUTOS endclass
   {206,149,214,213,123,210,122,211,130,101,148,500},// 11.	DECLARA_FUNCTION -> function id : TIPO_DE_DATO ( PARAMETROS ) DEC_LOCALVAR ESTATUTOS end_function DECLARA_FUNCTION
   {501,500},                           // 12.	DECLARA_FUNCTION -> EPSILON
   {137,231,136,500},                   // 13.	DECLARA_GLOBALC2 -> global_cte id2 end_global_cte
   {501,500},                           // 14.	DECLARA_GLOBALC2 -> EPSILON
   {139,232,138,500},                   // 15.	DECLARA_GLOBALV2 -> global_var var end_global_var
   {501,500},                           // 16.	DECLARA_GLOBALV2 -> EPSILON
   {209,149,214,213,123,210,122,211,130,101,148,500},// 17.	DECLARA_FUNCTION2 -> function id : TIPO_DE_DATO ( PARAMETROS ) DEC_LOCALVAR ESTATUTOS end_function DECLARA_FUNCTION2
   {501,500},                           // 18.	DECLARA_FUNCTION2 -> EPSILON
   {210,128,211,130,233,101,500},       // 19.	PARAMETROS -> id id3 : TIPO_DE_DATO ; PARAMETROS
   {142,500},                           // 20.	TIPO_DE_DATO -> int
   {143,500},                           // 21.	TIPO_DE_DATO -> float
   {144,500},                           // 22.	TIPO_DE_DATO -> char
   {145,500},                           // 23.	TIPO_DE_DATO -> string
   {146,500},                           // 24.	TIPO_DE_DATO -> bool
   {147,500},                           // 25.	TIPO_DE_DATO -> void
   {102,500},                           // 26.	VALOR_CONSTANTE -> cteentera
   {103,500},                           // 27.	VALOR_CONSTANTE -> ctereal
   {104,500},                           // 28.	VALOR_CONSTANTE -> ctenotacion
   {105,500},                           // 29.	VALOR_CONSTANTE -> ctecaracter
   {106,500},                           // 30.	VALOR_CONSTANTE -> ctestring
   {151,232,500},                       // 31.	DEC_LOCALVAR -> local_var var end_local_var
   {214,128,215,500},                     // 32.	ESTATUTOS -> EST_ASIG ; ESTATUTOS
   {214,128,217,500},                     // 33.	ESTATUTOS -> EST_IF ; ESTATUTOS
   {214,128,216,500},                     // 34.	ESTATUTOS -> EST_WHILE ; ESTATUTOS
   {214,128,220,500},                     // 35.	ESTATUTOS -> EST_FOR ; ESTATUTOS
   {214,128,221,500},                     // 36.	ESTATUTOS -> EST_RETURN ; ESTATUTOS
   {214,128,218,500},                     // 37.	ESTATUTOS -> EST_READ ; ESTATUTOS
   {214,128,219,500},                     // 38.	ESTATUTOS -> EST_WRITE ; ESTATUTOS
   {501,500},                             // 39.	ESTATUTOS -> EPSILON
   {234,113,101,500},                     // 40.	EST_ASIG -> id = nx
   {155,214,130,222,154,500},                            //  41.	EST_WHILE -> while EXPR : ESTATUTOS end_while
   {157,236,235,214,130,222,156,500},                    //  42.	EST_IF ->if EXPR : ESTATUTOS elif elos end_if
   {123,233,101,122,152,500},                            //  43.	EST_READ -> read ( id id3 )
   {123,237,222,122,153,500},                            //  44.	EST_WRITE -> write ( EXPR  expw )
   {163,214,130,222,162,222,113,101,161,500},            //  45.	EST_FOR -> for id = EXPR to EXPR : ESTATUTOS end_for
   {222,160,500},                                        //  46.	EST_RETURN -> return EXPR
   {238,223,500},                                        //  47.	EXPR -> EXPR2 or
   {239,224,500},                                        //  48.	EXPR2 -> EXPR3 and
   {225,240,500},                                        //  49.	EXPR3 -> not EXPR4
   {101,500},                                            //  50.	FACT -> id
   {102,500},                                            //  51.	FACT -> cteentera
   {103,500},                                            //  52.	FACT -> ctereal
   {104,500},                                            //  53.	FACT -> ctenotacion
   {105,500},                                            //  54.	FACT -> ctecaracter
   {106,500},                                            //  55.	FACT -> ctestring
   {123,222,122,500},                                    //  56.	FACT -> ( EXPR )
   {112,500},                                            //  57.	OPREL -> ==
   {119,500},                                            //  58.	OPREL -> !=
   {116,500},                                            //  59.	OPREL -> <
   {117,500},                                            //  60.	OPREL -> <=
   {114,500},                                            //  61.	OPREL -> >
   {115,500},                                            //  62.	OPREL -> >=
   {123,244,122,101,500},                                //  63.	LLAMADA_FUNCTION -> id ( id4 )
   {231,128,212,113,101,500},                            //  64.	id2 -> id = VALOR_CONSTANTE ; id2
   {501,500},                                            //  65.	id2 -> EPSILON
   {232,128,211,130,233,101,500},                        //  66.	var -> id id3 : TIPO_DE_DATO ; var
   {501,500},                                            //  67.	var -> EPSILON
   {233,101,131,500},                                    //  68.	id3 -> , id id3
   {501,500},                                            //  69.	id3 -> EPSILON
   {222,500},                                            //  70.	nx -> EXPR
   {229,500},                                            //  71.	nx -> LLAMADA_FUNCTION
   {214,130,222,159,500},                                //  72.	elif -> elseif EXPR : ESTATUTOS
   {501,500},                                            //  73.	elif -> EPSILON
   {214,130,158,500},                                    //  74.	elos -> else : ESTATUTOS
   {501,500},                                            //  75.	elos -> EPSILON
   {237,222,500},                                        //  76.	expw -> , EXPR expw
   {501,500},                                            //  77.	expw -> EPSILON
   {238,223,121,500},                                    //  78.	or ->  || EXPR2 or
   {501,500},                                            //  79.	or -> EPSILON
   {239,224,120,500},                                    //  80.	and -> && EXPR3 and
   {501,500},                                            //  81.	and -> EPSILON
   {118,500},                                            //  82.	not -> !
   {501,500},                                            //  83.	not -> EPSILON
   {242,226,500},                                        //  84.	EXPR4 -> EXPR5 rel
   {226,228,500},                                        //  85.	rel -> OPREL EXPR5
   {501,500},                                            //  86.	rel -> EPSILON
   {241,230,500},                                        //  87.	EXPR5 -> TERM nex
   {226,107,500},                                        //  88.	nex -> + EXPR5
   {226,108,500},                                        //  89.	nex ->  - EXPR5
   {501,500},                                            //  90.	nex ->  EPSILON
   {243,227,500},                                        //  91.	TERM -> FACT nte
   {230,109,500},                                        //  92.	nte -> * TERM
   {230,110,500},                                        //  93.	nte -> / TERM
   {230,111,500},                                        //  94.	nte -> % TERM
   {501,500},                                            //  95.	nte -> EPSILON
   {233,101,500},                                        //  96.	id4 -> id id3
   {501,500},                                            //  97.	id4 -> EPSILON
   {501,500}};                                           //  98.   PARAMETROS -> EPSILON

    int stateMat [18][33]=
     //	L   l   d   E   e   +   -   *   /   %   >   <   =   !   &   |   (   )   [   ]   {   }   '   "   ;   .   :   ,   _  /B  /t  /n	~
    {{  2,  1,  3,  2,  1,107,108,109,110, 11, 11, 12, 10, 13, 14, 15,122,123,126,127,124,125, 16,  9,128,129,130,131,508,  0,  0,  0,500},
     {  2,  1,  2,  2,  1,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,  2,100,100,100,100},
     {  2,  2,  2,  2,  2,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,  2,100,100,100,100},
     {102,102,  3,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,  4,102,102,102,102,102,102,102},
     {501,501,  5,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501},
     {103,103,  5,  6,  6,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103},
     {502,502,  8,502,502,  7,  7,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502},
     {503,503,  8,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503},
     {104,104,  8,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104},
     {  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,106,  9,  9,  9,  9,  9,  9,  9,  9,509},
     {113,113,113,113,113,113,113,113,113,113,113,113,112,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113},
     {114,114,114,114,114,114,114,114,114,114,114,114,115,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114},
     {116,116,116,116,116,116,116,116,116,116,116,116,117,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116},
     {118,118,118,118,118,118,118,118,118,118,118,118,119,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118,118},
     {505,505,505,505,505,505,505,505,505,505,505,505,505,505,120,505,505,505,505,505,505,505,505,505,505,505,505,505,505,505,505,505,505},
     {506,506,506,506,506,506,506,506,506,506,506,506,506,506,506,121,506,506,506,506,506,506,506,506,506,506,506,506,506,506,506,506,506},
     { 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17,504, 17, 17, 17, 17, 17, 17, 17, 17, 17,507},
     {507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,507,105,507,507,507,507,507,507,507,507,507,507}};

     bool sintax=false;
     int state;             //state serves to know wich state am on
     int column;            //column serves to point the column of the state matrix that im going to move
     int index;             //index serves to point the character im about to evaluate
     char readChar;         //readChar serves to save the character im evaluating
     string input;          //input serves to store the full string that was input in the editor
     QString lexicLog = ""; //lexicLog serves to store the message associated with a terminal state
     string aux = "";       //aux serves to save the word im analyzing



public:
     int stack [999];
     int top=0;

     void push(int d){
            stack[top]=d;
            top++;
        }
     void pop(){
            stack[top-1]=0;
            top--;
     }

     int peek(){
            return stack[top-1];
     }
     void syntaxScan(int token){
         int tope=peek();
         int result=0;  //to ve used a matrix coorelator

         if(peek()==501){       //given the production derivation was EPSILON
             pop();
             tope=peek();
         }

         if(token==peek()){//compare the token with te top of the stack to
            pop();         //token was the same as the expected by the sintax analazer
            tope=peek();
            sintax=true;
         }else{
             if(peek()>199 && peek()<245){  //if the stack cointains a production (given by the numbers 200 to 245) -start
                 result=sinMat[peek()-200][token-101]; //verify the matrix
                 if(result == -1){         //check if the token is a FIRST on the production -start
                     this->ui->consola->setMarkdown("SINTAX ERROR");
                     sintax=false;
                 }else{
                        pop();                          //take out the production of the stack
                        tope=peek();
                     for(int x=0;x<=12;x++){            //insert into de stack te proper derivation of the production
                         if(prodMat[result][x]!=500){
                         push(prodMat[result][x]);
                         tope=peek();
                         }else{

                             x=100;

                             syntaxScan(token);
                         }
                     }
                 }                          //check if the token is a FIRST on the production -end

             }else{if (token!=peek()){
                    this->ui->consola->setMarkdown("SINTAX ERROR");
                     sintax=false;
                 }
             }                              //if the stack cointains a production (given by the numbers 201 to 241) -end
         }

     }

     void readFile(){

         QString file=QFileDialog::getOpenFileName(this, tr("Open File"),"C:\\","COVID Files (*.cvd)" );
         string cadena;
            this->ui->consola->setMarkdown("");
            this->ui->editor->setMarkdown("");
            ifstream datos(file.toStdString()); //change route as required
                 if(datos.fail()){
                    this->ui->consola->setMarkdown("Missing the archive named \"Analizador.cvd\"");
                 }else{
            while(!datos.eof()){
               getline(datos,cadena); //in this method you take the string (delimitated by any \n)
                this->ui->editor->append(QString::fromStdString(cadena));
               this->ui->consola->setMarkdown("File loaded");

           }
        }
     }


     void saveFile(){
        QString file=QFileDialog::getOpenFileName(this, tr("Save File"),"C:\\","COVID Files (*.cvd)" );
        ofstream fs(file.toStdString()); //change route as required
        fs << ui->editor->toPlainText().toStdString() << endl;
        this->ui->consola->setMarkdown("");
        this->ui->consola->setMarkdown("File saved");
        fs.close();
     }

     void scan(int ind)
     {   //initialize everything for a new lexical analice
         push(165);
         push(200);

         input="";
         aux="";
         lexicLog = "";

         input=ui->editor->toPlainText().toStdString();
         input+="$";
         this->ui->consola->setMarkdown("");

         state = 0; //set initial state always to 0

         //initialize everything for a new lexical analice
         int tam=input.size(); //aquire the lenght of the lenguage element being analized
         int pst=0;
         while( state <= 17 && ind < tam) { //the while cicle with validate that im not on a terminal state, nor im out of chars to evaluate

               readChar = getCharacter(ind);     //execute the method getChar to extract the char at local index variable
               aux += readChar;                  //add this char to the aux var
               column = relate(readChar, state); //execute relate
               pst = state;
               state = stateMat[state][column];  //var state will now get to the next "state" according to the cross reference on the stateMat

               if(readChar == '$' && pst>100){
                   state=200;
               }

                 if(state == 0 ) {//this to validate no spaces, /t or /n where stored on the aux var
                         aux = "";//provided of course that is the first element since is the only one that can go to the 0 state
                 }

                ind++;             //ind local var increases
               this->index = ind; //thus updating the atribute index for global use on this class



               if( state >= 100 && state <= 164){            //if we reach a validation state -start
                   if(state == 100){                 //if we reach a reserved word state -start
                      state = getReservedWord(aux.substr(0 , aux.size()-1));
                   }                                 //if we reach a reserved word state -end
                         if(state==105
                                 || state==106
                                 || state==112
                                 || state==115
                                 || state==117
                                 || state==119
                                 || state==120
                                 || state==121){//"asdasdas" or 'C'
                             aux = aux.substr(0 , aux.size());
                         }else{
                             aux = aux.substr(0 , aux.size()-1);
                      }
                   lexicLog=getToken(state, readChar, aux);
                   this->ui->consola->append(lexicLog);  //display the token message on the console part of the interface
                   syntaxScan(state);
                                                             //if we reach a validation state -end
               } else{
                   if(state >= 500 && readChar!='$') {                            //if we encounter an error state -start
                       lexicLog= getError(state);
                       this->ui->consola->append("Lexical "+lexicLog);  //display the token message on the console part of the interface

                   }else {
                       if(state >500){
                           lexicLog= getError(state);
                           this->ui->consola->append("Lexical "+lexicLog);
                           break;
                       }
                   }                                                                //if we encounter an error state -end
               }

               if((state>=100 && state<500) && readChar != '~'){//provided we've reached an ending state and there are still elements to evaluate -start



                 if(aux!=""
                        && (state==100
                         || state==101
                         || state==102
                         || state==103
                         || state==104
                         || state==113
                         || state==114
                         || state==116
                         || state==119
                         || (state>131 && state<165))){
                     ind-=1;
                 }
                 state=0;
                 aux = "";                                                        // ind local index
               this->index = ind;
               }                                 //provided we've reached an ending state and there are still elements to evaluate -end

         if(readChar == '$'  && sintax){
             state=200;
             this->ui->consola->append("<COMPILED>");
         }else {if(readChar == '$' ){
                 state=200;
                 this->ui->consola->append("<CAN'T COMPILE>");}

         }

    }
}//end analyze


             char getCharacter(int ind){
                 return this->input[ind];
             }

             int relate(char character, int sta) {
                 //this method serves to point wich column am I going to focus based on the char input
                 if(character == 'E' && sta==5) {
                    return 3;
                 } if(character == 'e' && sta==5) {
                    return 4;
                 } if(character >= 'a' && character <='z') {
                    return 1;
                 } if(character >= 'A' && character <='Z') {
                    return 0;
                 } if(character >= '0' && character <='9') {
                    return 2;
                 }

                 switch(character){
                 case '+' :  return 5;
                 case '-' :  return 6;
                 case '*' :  return 7;
                 case '/' :  return 8;
                 case '%' :  return 9;
                 case '<' : return 10;
                 case '>' : return 11;
                 case '=' : return 12;
                 case '!' : return 13;
                 case '&' : return 14;
                 case '|' : return 15;
                 case '(' : return 16;
                 case ')' : return 17;
                 case '[' : return 18;
                 case ']' : return 19;
                 case '{' : return 20;
                 case '}' : return 21;
                 case '\'': return 22;
                 case '"' : return 23;
                 case ';' : return 24;
                 case '.' : return 25;
                 case ':' : return 26;
                 case ',' : return 27;
                 case '_' : return 28;
                 case ' ' : return 29;
                 case '\t': return 30;
                 case '\n': return 31;
                 case '~' : return 32;
                 default  : return 32;











                 }
             }

             QString getError(int edo){
                    switch(edo){
                        case 500: return "Error 500, unknown simbol";
                        case 501: return "Error 501, missing digit";
                        case 502: return "Error 502, incomplete scientific notation";
                        case 503: return "Error 503, missing digit";
                        case 504: return "Error 504, missing character";
                        case 505: return "Error 505, missing ampersand";
                        case 506: return "Error 506, missing pleca";
                        case 507: return "Error 507, missing apostrophe ";
                        case 508: return "Error 508, you can't start with a \"_\" simbol";
                        case 509: return "Error 509, missing quote ";
                        default : return "getError() default case: \"Not error id\"\n ¿How did we get here when I used to know you so well?";
                    }
                }//end getError

            int getReservedWord(string temp){
                //this method validates that the string recived belongs to the reserved words of the lenguage thus keeping the 100 state

                if(temp=="qlib" ){return 164;}  //.qlib

                if(temp=="library"){return 132;}

                if(temp=="class"){return 133;}
                if(temp=="main"){return 134;}
                if(temp=="endclass"){return 135;}

                if(temp=="global_cte"){return 136;}
                if(temp=="end_global_cte"){return 137;}

                if(temp=="global_var"){return 138;}
                if(temp=="end_global_var"){return 139;}

                if(temp=="init_library"){return 140;}
                if(temp=="end_library"){return 141;}

                if(temp=="int"){return 142;}
                if(temp=="float"){return 143;}
                if(temp=="char"){return 144;}
                if(temp=="string"){return 145;}
                if(temp=="bool"){return 146;}
                if(temp=="void"){return 147;}




                if(temp=="function"){return 148;}
                if(temp=="end_function"){return 149;}

                if(temp=="local_var"){return 150;}
                if(temp=="end_local_var"){return 151;}

                if(temp=="read"){return 152;}
                if(temp=="write"){return 153;}
                if(temp=="while"){return 154;}
                if(temp=="end_while"){return 155;}
                if(temp=="if"){return 156;}
                if(temp=="end_if"){return 157;}
                if(temp=="else"){return 158;}
                if(temp=="elseif"){return 159;}
                if(temp=="return"){return 160;}
                if(temp=="for"){return 161;}
                if(temp=="to"){return 162;}
                if(temp=="end_for"){return 163;}




                    return 101;
               }//end getReservedWord
         QString getToken(int state, char character, string aux){
                 //this method serves to get the token class and message that suits the analyzed string
                    string estado="";//estado serves to store said token class and message in cases were we analize only one character
                    char est=input[index-2];

                    if(state>131){return QString::fromStdString("100 : <" + aux + " its a reserved_word>\n");}

                    switch(state){
                        case 100: return QString::fromStdString("100 : <" + aux + " its a reserved_word>\n");
                    case 101: if(aux.size()!=1){
                            return QString::fromStdString("101 : <" + aux + " its an identifier>\n");
                        }else{
                            estado="101 : [";
                            estado+=est;
                            estado+= "  its an identifier]\n";
                        }
                            return QString::fromStdString(estado); //+
                        case 102: return QString::fromStdString("102 : <" + aux + " its an integer>\n");
                        case 103: return QString::fromStdString("103 : <" + aux + " its a float_number>\n");
                        case 104: return QString::fromStdString("104 : <" + aux + " its a scientific_notation_number>\n");
                        case 105: return QString::fromStdString("105 : <" + aux + " its a char>\n");
                        case 106: return QString::fromStdString("106 : <" + aux + " its a string>\n");
                        case 107: estado="107 : <";
                                  estado+=character;
                                  estado+= " its an aritmetic_operator>\n";
                                    return QString::fromStdString(estado); //+
                        case 108: estado="108 : <";
                                  estado+=character;
                                  estado+= " its an aritmetic_operator>\n";
                                    return QString::fromStdString(estado); //-
                        case 109: estado="109 : <";
                                  estado+=character;
                                  estado+= " its an aritmetic_operator>\n";
                                    return QString::fromStdString(estado); // *
                        case 110: estado="110 : <";
                                  estado+=character;
                                  estado+= " its an aritmetic_operator>\n";
                                    return QString::fromStdString(estado); // /
                        case 111: estado="111 : <";
                                  estado+=character;
                                  estado+= " its an aritmetic_operator>\n";
                                    return QString::fromStdString(estado); // %
                        case 112: return QString::fromStdString("112 : <" + aux + " its a relational_operator>\n"); // ==
                        case 113: return QString::fromStdString("113 : <" + aux + " its an assignment_operator>\n"); // =
                        case 114: return QString::fromStdString("114 : [" + aux + " its a relational_operator]\n"); // >
                        case 115: return QString::fromStdString("115 : [" + aux + " its a relational_operator]\n"); // >=
                        case 116: return QString::fromStdString("116 : [" + aux + " its a relational_operator]\n"); // <
                        case 117: return QString::fromStdString("117 : [" + aux + " its a relational_operator]\n"); // <=
                        case 118: return QString::fromStdString("118 : <" + aux + " its a logic_operator_NOT>\n"); // !
                        case 119: return QString::fromStdString("119 : <" + aux + " its a relational_operator>\n"); // !=
                        case 120: return QString::fromStdString("120 : <" + aux + " its a logic_operator_AND>\n"); // &&
                        case 121: return QString::fromStdString("121 : <" + aux + " its a logic_operator_OR>\n"); // ||
                        case 123: estado= "122 : <";
                                  estado+= character;
                                  estado+= " its a closing_parenthesis>\n"; // (
                                  return QString::fromStdString(estado);
                        case 122: estado= "123 : <" ;
                                  estado+= character;
                                  estado+= " its a opening_parenthesis>\n"; // )
                                  return QString::fromStdString(estado);
                        case 124: estado= "124 : <";
                              estado+= character;
                              estado+= " its an opening_curly_brace>\n"; // {
                              return QString::fromStdString(estado);
                        case 125: estado= "125 : <" ;
                              estado+= character;
                              estado+= " its a closing_curly_brace>\n";// }
                              return QString::fromStdString(estado);
                         case 126: estado= "126 : <";
                                  estado+= character;
                                  estado+= " its an opening_square_bracket>\n"; // [
                                  return QString::fromStdString(estado);
                        case 127: estado= "127 : <";
                                  estado+= character;
                                  estado+= " its a closing_square_bracket>\n"; // ]
                                  return QString::fromStdString(estado);                                                      
                        case 128: estado= "128 : <" ;
                                 estado+= character;
                                 estado+= " its a semicolon>\n";// ;
                                 return QString::fromStdString(estado);
                        case 129: estado= "129 : <" ;
                              estado+= character;
                              estado+= " its a dot>\n";// .
                              return QString::fromStdString(estado);                              
                        case 130: estado= "130 : <" ;
                             estado+= character;
                             estado+= " its a colon> \n";// :
                             return QString::fromStdString(estado);                                
                        case 131: estado= "131 : <" ;
                            estado+= character;
                            estado+= " its a comma\n";// ,
                            return QString::fromStdString(estado);                                    
                        default: return "FILE_ENDING";
                    }
                }//end getToken

private slots:
         //void on_pushButton_clicked();
         void on_an_clicked();
         void on_open_clicked();
         void on_save_clicked();
};
#endif // MAINWINDOW_H
