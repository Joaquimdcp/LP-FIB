#ifndef tokens_h
#define tokens_h
/* tokens.h -- List of labelled tokens and stuff
 *
 * Generated from: mountains.g
 *
 * Terence Parr, Will Cohen, and Hank Dietz: 1989-2001
 * Purdue University Electrical Engineering
 * ANTLR Version 1.33MR33
 */
#define zzEOF_TOKEN 1
#define NUM 2
#define ASSIG 3
#define PEAK 4
#define VALLEY 5
#define MULT 6
#define REF 7
#define UP 8
#define PLA 9
#define DOWN 10
#define CONC 11
#define COMA 12
#define OPEN 13
#define CLOSE 14
#define ID 15
#define SPACE 16

#ifdef __USE_PROTOS
void mount(AST**_root);
#else
extern void mount();
#endif

#ifdef __USE_PROTOS
void mountain(AST**_root);
#else
extern void mountain();
#endif

#ifdef __USE_PROTOS
void expr(AST**_root);
#else
extern void expr();
#endif

#ifdef __USE_PROTOS
void doublemount(AST**_root);
#else
extern void doublemount();
#endif

#ifdef __USE_PROTOS
void valleypeak(AST**_root);
#else
extern void valleypeak();
#endif

#ifdef __USE_PROTOS
void assign(AST**_root);
#else
extern void assign();
#endif

#ifdef __USE_PROTOS
void mountains(AST**_root);
#else
extern void mountains();
#endif

#endif
extern SetWordType zzerr1[];
extern SetWordType zzerr2[];
extern SetWordType zzerr3[];
extern SetWordType setwd1[];
extern SetWordType setwd2[];
