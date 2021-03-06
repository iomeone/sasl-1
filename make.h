extern int maker(int howmany, char *ruledef, int rule, int subrule, int info);
#define Maker0(def,r,s)		maker(0,(def),(r),(s),0)
#define Maker1(def,r,s) 	maker(1,(def),(r),(s),0)
#define Maker2(def,r,s) 	maker(2,(def),(r),(s),0)
#define MakerN(n,def,r,s)	maker(n,(def),(r),(s),0)

#define Maker0i(def,r,s,i)      	maker(0,(def),(r),(s),(i))
#define Maker1i(def,r,s,i) 	maker(1,(def),(r),(s),(i))
#define Maker2i(def,r,s,i) 	maker(2,(def),(r),(s),(i))
#define MakerNi(n,def,r,s,i)	maker(n,(def),(r),(s),(i))

#define MAKE_DEBUG(where) 		(debug>1 ? fprintf(stderr, "%s", where) : 0)

extern pointer make_reset();
extern pointer make_result();
