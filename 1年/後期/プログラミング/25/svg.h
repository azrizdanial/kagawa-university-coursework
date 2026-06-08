#include <stdarg.h>

/* ---------------------------------------------------------------------- *
 * begin common part
 * ---------------------------------------------------------------------- */
#define PI 3.14159265358979323846

#define PHI             1.6180339887
#define PHYLLOTAXIS     (2 * PI * (PHI - 1) / PHI)
#define PHYLLOTAXIS360  (360 * (PHI - 1) / PHI)

unsigned int utf8(unsigned char *);

void randomSeed(unsigned int seed);
void randomizeByTime(void);
double randomInRange(double min, double max);

double radians(double deg);

void strokeWeight(double w);
void stroke(unsigned int color);
void strokeOpacity(double opacity);
void noStroke(void);
void fill(unsigned int color);
void fillOpacity(double opacity);
void noFill(void);
void textFont(const char* font, double size);

unsigned int hsb1(double h, double s, double v);
unsigned int hsb100(double h, double s, double v);
unsigned int hsb360(double h, double s, double v);
unsigned int hsb255(double h, double s, double v);

unsigned int hsl1(double h, double s, double v);
unsigned int hsl100(double h, double s, double v);
unsigned int hsl360(double h, double s, double v);
unsigned int hsl255(double h, double s, double v);

unsigned int rgb1(double h, double s, double v);
unsigned int rgb100(double h, double s, double v);
unsigned int rgb255(double h, double s, double v);

unsigned int bw1(double v);
unsigned int bw100(double v);
unsigned int bw255(double v);

unsigned int rotateH360(unsigned int color, double a);
unsigned int rotateH(unsigned int color);
unsigned int addS100(unsigned int color, double a);
unsigned int scaleS(unsigned int color, double a);
unsigned int addB100(unsigned int color, double a);
unsigned int scaleB(unsigned int color, double a);

double cos360(double deg);
double sin360(double deg);

/* ---------------------------------------------------------------------- *
 * end common part
 * ---------------------------------------------------------------------- */


void translate(double x, double y);
void rotate360(double deg);
void rotate(double theta);
void scale(double sx, double sy);

void pushMatrix(void);
void popMatrix(void);
void resetMatrix(void);

double centerX(void);
double centerY(void);
double pageWidth(void);
double pageHeight(void);

void setPageSize(double, double);
void a4Portrait(void);
void a4Landscape(void);
double getWidth(void);
double getHeight(void);
void start(void);
void startEnc(const char*);
void finish(void);

void image(const char* url, double x, double y, double w, double h);
void use(const char* url, double x, double y, double w, double h);

void upperBar(double);
void lowerBar(double);
void guideBars(double);
void rulers(void);
void trimMark(void);

void line(double x1, double y1, double x2, double y2);
void rect(double x, double y, double w, double h);
void ellipse(double x, double y, double w, double h);
void triangle(double x1, double y1, double x2, double y2, double x3, double y3);
void quad(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
void quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
void arc(double x, double y, double w, double h, double start, double stop);
void arc360(double x, double y, double w, double h, double start, double stop);
void bezier(double ax0, double ay0, double cx0, double cy0, double cx1, double cy1, double ax1, double ay1);
void vtext(const char* str, double x, double y, va_list list);
void text(const char* str, double x, double y, ...);

void beginShape(void);
void vertex(double x, double y);
void bezierVertex(double cx0, double cy0, double cx1, double cy1, double x1, double y1);
void endShape(int close);

#define CLOSE 1
#define OPEN 0

void smilieSymbol1(const char* id);
void smilieSymbol2(const char* id);
void smilieSymbol3(const char* id);
void flowerSymbol(const char* id);
void heartSymbol(const char* id);

#define WIDTH  297
#define HEIGHT 210

/* turtle graphics */
void pushTurtle(void);
void popTurtle(void);
void penUp(void);
void penDown(void);
void forward(double len);
void backward(double len);
void turn(double angle);
void direction(double dir);
void go(double x, double y);
void center(void);
double getX(void);
double getY(void);
double getAngle(void);
void say(const char *str, ...);
