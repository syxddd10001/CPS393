/*Source: cmplx.h*/
/* answering HMWK quesion */
typedef struct {
                 int r;
                 int i;
       }complex; 
complex ReadIt(void);
complex MakeComplex(int x, int y);
void WriteSum(complex c1, complex c2);
