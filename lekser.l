%option noyywrap
 
%{
    /****** C stuff (headers, declarations, variables etc.) ******/
    #include <stdlib.h>
    #include "parser.h"

    #define DEBUG_MODE 0
    struct stackElem { char tag[8]; struct stackElem* next; };
    struct stackElem* stack;
    int lineCounter = 1;
    int err = 0;

    void tagStackPop();
    void tagStackPopEq(char*);
    void tagStackPush(char *);
    void incLineCounter();
    void yyerror(char *);
%}

/****** regular expressions ******/
/* Ad.1. Missing header tag -> noscript (Illegal hardware instruction :/) */
titleTag            title
headerTag           base|noscript
globalAttr          accesskey|class|contenteditable|data-[a-z-]+|dir|draggable|dropzone|hidden|id|lang|script|style|spellcheck|tabindex|translate
formEvents          onblur|onchange|oncontextmenu|onfocus|oninput|oninvalid|onreset|onsearch|onselect|onsubmit
attributeValue      [a-zA-Z0-9:;#_\-\\/.=,% @!?$^&\*{}]
tagName             {noSpecialAtrrTag}|{headerTag}|html|head|body|{titleTag}|{specialAttrTag}

noSpecialAtrrTag    article|aside|b|caption|div|em|figure|footer|h[1-6]|header|i|legend|main|mark|nav|p|pre|section|small|span|s|strong|sub|sup|table|tbody|tfoot|thead|time|tr|u|ul
specialAttrTag      a|audio|button|canvas|col|colgroup|dialog|embed|fieldset|form|iframe|img|label|li|link|meta|ol|optgroup|option|q|script|select|source|style|input|svg|td|th|textarea|video
noEndingTag         br|hr
attributeEnd        "="["]{attributeValue}+["]

/* Body tags*/

/****** token specification ******/
%x startElement
%x endElement
%x comment

%%
"<!--"  BEGIN(comment);
"<"     BEGIN(startElement);
"</"    BEGIN(endElement);
[\n]    { incLineCounter(); }
[ ]     ;
.       { return TEXT; }
"<!"[Dd][Oo][Cc][Tt][Yy][Pp][Ee]" html>"    return DOCTYPE;

<startElement>
{
    "html"                   {
                                 tagStackPush(yytext);
                                 return HTML_TAG; 
                             }
    [ ]"lang"{attributeEnd}  {
                                 return LANG_ATTR;
                             }
    "head"                   {
                                 tagStackPush(yytext); 
                                 return HEAD_TAG; 
                             }
    "body"                   { 
                                 tagStackPush(yytext);
                                 return BODY_TAG; 
                             }
    {headerTag}              {
                                 tagStackPush(yytext);
                                 return HEADER_TAG;
                             }
    {titleTag}               { 
                                 tagStackPush(yytext);
                                 return TITLE_TAG;
                             }

    /* Attributes */                
    [ ]{globalAttr}{attributeEnd}                                          {  return GLOBAL_ATTRIBUTE;  }
    [ ]{formEvents}{attributeEnd}                                          {   return FORM_EVENT;  }
    
    [ ]("width"|"height"){attributeEnd}                                    {   return SIZE_ATTR;  }
    [ ]("autoplay"|"controls"|"loop"|"muted"|"preload"){attributeEnd}            {   return AUDIO_VIDEO_ATTR;  }
    [ ]("src"){attributeEnd}                                             {   return SRC_ATTR;  }
    [ ]("type"){attributeEnd}                                            {   return TYPE_ATTR;  }
    [ ]("href"|"rel"){attributeEnd}                                        {   return LINK_ATTR;  }
    [ ]("disabled"){attributeEnd}                                        {   return DISABLED_ATTR;  }
    [ ]("name"){attributeEnd}                                            {   return NAME_ATTR;  }
    [ ]("value"){attributeEnd}                                           {   return VALUE_ATTR;  }
    [ ]("span"){attributeEnd}                                            {   return COL_COLGROUP_ATTR;  }
    [ ]("form"){attributeEnd}                                            {   return FORM_ATTR;  }
    [ ]("refererpolicy"){attributeEnd}                                   {   return REFERERPOLICY_ATTR;  }
    [ ]("srcset"){attributeEnd}                                          {   return SRCSET_ATTR;  }
    [ ]("alt"){attributeEnd}                                             {   return IMG_INPUT_ATTR;  }
    [ ]("for"){attributeEnd}                                             {   return FOR_ATTR;  }
    [ ]("target"){attributeEnd}                                          {   return A_FORM_ATTR;  }
    [ ]("srclang"){attributeEnd}                                         {   return TRACK_ATTR;  }
    [ ]("label"){attributeEnd}                                           {   return LABEL_ATTR;  }
    [ ]("colspan"|"headers"|"rowspan"){attributeEnd}                         {   return TABLE_ATTR;  }
    [ ]("media"){attributeEnd}                                           {   return MEDIA_ATTR;  }
    [ ]("cite"){attributeEnd}                                            {   return CITE_ATTR;  }
    [ ]("autofocus"|"form"){attributeEnd}                                  {   return SELECT_TEXTAREA_ATTR;  }
    [ ]("multiple"|"size"){attributeEnd}                                   {   return SELECT_INPUT_ATTR;  }
    [ ]("maxlength"|"minlength"|"readonly"|"placeholder"){attributeEnd}        {   return TEXTAREA_INPUT_ATTR;  }
    [ ]("rows"|"cols"){attributeEnd}                                       {   return TEXTAREA_ATTR;  }
    [ ]("selected"){attributeEnd}                                        {   return OPTION_ATTR;  }
    [ ]("reserved"){attributeEnd}                                   {   return OL_ATTR;  }
    [ ]("autocomplete"){attributeEnd}                                    {   return AUTOCOMPLETE_ATTR;  }
    [ ]("action"|"method"|"novalidate"){attributeEnd}                       {   return AMN_FORM_ATTR ;  }
    [ ]("checked"|"max"|"min"|"pattern"){attributeEnd}                         {   return INPUT_ATTR;  }
    [ ]("required"){attributeEnd}                                        {   return REQUIRED_ATTR;  }
    [ ]("open"){attributeEnd}                                             {   return DIALOG_ATTR;  }
    [ ]("charset"|"content"){attributeEnd}                         {   return META_ATTR;  }

        /* Body tags */
    "a"                                                                   {   tagStackPush(yytext); return A_TAG; }
    ("canvas"|"svg")                                                      {   tagStackPush(yytext); return CANVAS_SVG_TAG; }
    ("td"|"th")                                                           {   tagStackPush(yytext); return TD_TH_TAG; }
    "colgroup"                                                            {   tagStackPush(yytext); return COLGROUP_TAG; }
    "col"                                                                 {   return COL_TAG; }
    "audio"                                                               {   tagStackPush(yytext); return AUDIO_TAG; }
    "button"                                                              {   tagStackPush(yytext); return BUTTON_TAG; }
    "dialog"                                                              {   tagStackPush(yytext); return DIALOG_TAG; }
    "embed"                                                               {   return EMBED_TAG; }
    "fieldset"                                                            {   tagStackPush(yytext); return FIELDSET_TAG; }
    "form"                                                                {   tagStackPush(yytext); return FORM_TAG; }
    "iframe"                                                              {   tagStackPush(yytext); return IFRAME_TAG; }
    "img"                                                                 {   return IMG_TAG; }
    "input"                                                               {   return INPUT_TAG; }
    "label"                                                               {   tagStackPush(yytext); return LABEL_TAG; }
    "li"                                                                  {   tagStackPush(yytext); return LI_TAG; }
    "link"                                                                {   return LINK_TAG; }
    "meta"                                                                {   return META_TAG; }
    "ol"                                                                  {   tagStackPush(yytext); return OL_TAG; }
    "optgroup"                                                            {   tagStackPush(yytext); return OPTGROUP_TAG; }
    "option"                                                              {   tagStackPush(yytext); return OPTION_TAG; }
    "q"                                                                   {   tagStackPush(yytext); return Q_TAG; }
    "script"                                                              {   tagStackPush(yytext); return SCRIPT_TAG; }
    "select"                                                              {   tagStackPush(yytext); return SELECT_TAG; }
    "source"                                                              {   return SOURCE_TAG; }
    "textarea"                                                            {   tagStackPush(yytext); return TEXTAREA_TAG; }
    "track"                                                               {   return TRACK_TAG; }
    "video"                                                               {   tagStackPush(yytext); return VIDEO_TAG; }
    "style"                                                               {   tagStackPush(yytext); BEGIN(startElement); return STYLE_TAG; }
    {noEndingTag}                                                         {   return HR_BR; }
    {noSpecialAtrrTag}                                                    {   tagStackPush(yytext); return START_TAG; }

    ">"             {
                        BEGIN(INITIAL);
                        return CLOSE_TAG;
                    }
    "/>"            {
                        tagStackPop();
                        BEGIN(INITIAL);
                        return VOID_ELEM;
                    }
    [ \r]           ;
    [\n]            { incLineCounter(); }
    .               {   char *message = malloc(50);
                        sprintf(message, "Unrecognized value: %s", yytext);
                        yyerror(message); }
}

<endElement>
{
    ({tagName})">" {
                        yytext[strlen(yytext)-1] = 0;
                        tagStackPopEq(yytext);
                        BEGIN(INITIAL);
                        return END_ELEM;
                    }
    .               {   char *message = malloc(50);
                        sprintf(message, "Unrecognized value: %s", yytext);
                        yyerror(message); }
}

<comment>
{
    "-->"           {
                        BEGIN(INITIAL);
                    }
    [\n]            { incLineCounter(); }
    .               ;
}
%%

/****** C functions ******/
void tagStackPop() {
    struct stackElem *temp = stack;
    struct stackElem *prev = NULL;
    while(temp->next != NULL) { prev = temp; temp = temp->next; }
    if(DEBUG_MODE == 1) printf("Stack pop: %s\n", temp->tag);
    if (prev) prev->next = NULL;
}

void tagStackPopEq(char *text) {
    struct stackElem *temp = stack;
    struct stackElem *prev = NULL;
    while(stack != NULL && temp->next != NULL) { prev = temp; temp = temp->next; }
        if(DEBUG_MODE == 1) printf("Stack pop: %s\n", temp->tag);
    if (stack == NULL || strcmp(temp->tag, text) != 0) {
	    printf("Incorrect tag at line %d. Expected %s, but was %s\n", lineCounter, temp->tag, text);
        err = 1;
    }
    if (prev) prev->next = NULL;
}

void tagStackPush(char *text) {
    if(DEBUG_MODE == 1) printf("Stack push: %s\n", text);
    struct stackElem *newElem = malloc(sizeof(struct stackElem));
    sprintf(newElem->tag, "%s", text);
    newElem->next = NULL;
    
    if (!stack) { stack = newElem; }
    else{
        struct stackElem *temp = stack;
        while(temp->next != NULL) { temp = temp->next; }
        temp->next = newElem;
    }
}

void incLineCounter() {
    lineCounter++;
}

void yyerror(char *s) {
    err = 1;
    fprintf(stderr, "%s at line %d\n", s, lineCounter);
}
