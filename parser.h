
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     START_TAG = 258,
     CLOSE_TAG = 259,
     VOID_ELEM = 260,
     END_ELEM = 261,
     HR_BR = 262,
     HTML_TAG = 263,
     HEAD_TAG = 264,
     BODY_TAG = 265,
     HEADER_TAG = 266,
     TITLE_TAG = 267,
     LANG_ATTR = 268,
     TEXT = 269,
     DOCTYPE = 270,
     GLOBAL_ATTRIBUTE = 271,
     FORM_EVENT = 272,
     SIZE_ATTR = 273,
     AUDIO_VIDEO_ATTR = 274,
     SRC_ATTR = 275,
     TYPE_ATTR = 276,
     LINK_ATTR = 277,
     DISABLED_ATTR = 278,
     NAME_ATTR = 279,
     VALUE_ATTR = 280,
     COL_COLGROUP_ATTR = 281,
     FORM_ATTR = 282,
     REFERERPOLICY_ATTR = 283,
     SRCSET_ATTR = 284,
     IMG_INPUT_ATTR = 285,
     FOR_ATTR = 286,
     A_FORM_ATTR = 287,
     TRACK_ATTR = 288,
     LABEL_ATTR = 289,
     TABLE_ATTR = 290,
     MEDIA_ATTR = 291,
     CITE_ATTR = 292,
     SELECT_TEXTAREA_ATTR = 293,
     SELECT_INPUT_ATTR = 294,
     TEXTAREA_INPUT_ATTR = 295,
     TEXTAREA_ATTR = 296,
     OPTION_ATTR = 297,
     OL_ATTR = 298,
     AUTOCOMPLETE_ATTR = 299,
     INPUT_ATTR = 300,
     REQUIRED_ATTR = 301,
     DIALOG_ATTR = 302,
     META_ATTR = 303,
     AMN_FORM_ATTR = 304,
     A_TAG = 305,
     CANVAS_SVG_TAG = 306,
     TD_TH_TAG = 307,
     COL_TAG = 308,
     COLGROUP_TAG = 309,
     AUDIO_TAG = 310,
     BUTTON_TAG = 311,
     DIALOG_TAG = 312,
     EMBED_TAG = 313,
     FIELDSET_TAG = 314,
     FORM_TAG = 315,
     IFRAME_TAG = 316,
     IMG_TAG = 317,
     INPUT_TAG = 318,
     LABEL_TAG = 319,
     LI_TAG = 320,
     LINK_TAG = 321,
     META_TAG = 322,
     OL_TAG = 323,
     OPTGROUP_TAG = 324,
     OPTION_TAG = 325,
     Q_TAG = 326,
     SCRIPT_TAG = 327,
     SELECT_TAG = 328,
     SOURCE_TAG = 329,
     STYLE_TAG = 330,
     TEXTAREA_TAG = 331,
     TRACK_TAG = 332,
     VIDEO_TAG = 333
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


