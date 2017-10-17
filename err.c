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

ANTLRChar *zztokens[11]={
	/* 00 */	"Invalid",
	/* 01 */	"@",
	/* 02 */	"NUM",
	/* 03 */	"ASSIG",
	/* 04 */	"MULT",
	/* 05 */	"UP",
	/* 06 */	"PLA",
	/* 07 */	"DOWN",
	/* 08 */	"CONC",
	/* 09 */	"ID",
	/* 10 */	"SPACE"
};
SetWordType zzerr1[4] = {0xe0,0x0,0x0,0x0};
SetWordType setwd1[11] = {0x0,0xff,0x0,0x0,0x0,0x0,0x0,
	0x0,0x1,0xff,0x0};
SetWordType setwd2[11] = {0x0,0x1,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0};
