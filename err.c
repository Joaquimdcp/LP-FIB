/*
 * A n t l r  S e t s / E r r o r  F i l e  H e a d e r
 *
 * Generated from: mountains.g
 *
 * Terence Parr, Russell Quong, Will Cohen, and Hank Dietz: 1989-2001
 * Parr Research Corporation
 * with Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "pcctscfg.h"
#include "pccts_stdio.h"

#include <string>
#include <iostream>
using namespace std;

// struct to store information about tokens
typedef struct {
  string kind;
  string text;
} Attrib;

// function to fill token information (predeclaration)
void zzcr_attr(Attrib *attr, int type, char *text);

// fields for AST nodes
#define AST_FIELDS string kind; string text;
#include "ast.h"

// macro to create a new AST node (and function predeclaration)
#define zzcr_ast(as,attr,ttype,textt) as=createASTnode(attr,ttype,textt)
AST* createASTnode(Attrib* attr, int ttype, char *textt);
#define zzSET_SIZE 4
#include "antlr.h"
#include "ast.h"
#include "tokens.h"
#include "dlgdef.h"
#include "err.h"

ANTLRChar *zztokens[17]={
	/* 00 */	"Invalid",
	/* 01 */	"@",
	/* 02 */	"NUM",
	/* 03 */	"ASSIG",
	/* 04 */	"PEAK",
	/* 05 */	"VALLEY",
	/* 06 */	"MULT",
	/* 07 */	"REF",
	/* 08 */	"UP",
	/* 09 */	"PLA",
	/* 10 */	"DOWN",
	/* 11 */	"CONC",
	/* 12 */	"COMA",
	/* 13 */	"OPEN",
	/* 14 */	"CLOSE",
	/* 15 */	"ID",
	/* 16 */	"SPACE"
};
SetWordType zzerr1[4] = {0x0,0x7,0x0,0x0};
SetWordType zzerr2[4] = {0x30,0x0,0x0,0x0};
SetWordType zzerr3[4] = {0xb6,0x80,0x0,0x0};
SetWordType setwd1[17] = {0x0,0xbf,0x0,0x0,0x40,0x40,0x0,
	0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
	0xbf,0x0};
SetWordType setwd2[17] = {0x0,0x3f,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x1f,0x0};
