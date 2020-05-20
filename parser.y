%{
    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(char * s);
    int yylex();
    int yyparse();
    int err;
    int lineCounter;
	extern FILE* yyin;
%}

%token START_TAG CLOSE_TAG VOID_ELEM END_ELEM HR_BR
%token HTML_TAG HEAD_TAG BODY_TAG HEADER_TAG TITLE_TAG LANG_ATTR
%token TEXT DOCTYPE

/* common attributes */
%token GLOBAL_ATTRIBUTE FORM_EVENT

/* special attributes */
%token  SIZE_ATTR AUDIO_VIDEO_ATTR SRC_ATTR TYPE_ATTR LINK_ATTR DISABLED_ATTR NAME_ATTR VALUE_ATTR COL_COLGROUP_ATTR FORM_ATTR REFERERPOLICY_ATTR SRCSET_ATTR IMG_INPUT_ATTR FOR_ATTR A_FORM_ATTR TRACK_ATTR LABEL_ATTR TABLE_ATTR MEDIA_ATTR CITE_ATTR SELECT_TEXTAREA_ATTR SELECT_INPUT_ATTR TEXTAREA_INPUT_ATTR TEXTAREA_ATTR OPTION_ATTR OL_ATTR AUTOCOMPLETE_ATTR INPUT_ATTR REQUIRED_ATTR DIALOG_ATTR META_ATTR AMN_FORM_ATTR

/* tags */
%token A_TAG CANVAS_SVG_TAG TD_TH_TAG COL_TAG COLGROUP_TAG AUDIO_TAG BUTTON_TAG DIALOG_TAG EMBED_TAG FIELDSET_TAG FORM_TAG IFRAME_TAG IMG_TAG INPUT_TAG LABEL_TAG LI_TAG LINK_TAG META_TAG OL_TAG OPTGROUP_TAG OPTION_TAG Q_TAG SCRIPT_TAG SELECT_TAG SOURCE_TAG STYLE_TAG TEXTAREA_TAG TRACK_TAG  VIDEO_TAG

%%
program: DOCTYPE htmlSection
        | bodyElements
        ;

titleElement: TITLE_TAG commonAttributes CLOSE_TAG headerElements END_ELEM;

headerElement: HEADER_TAG commonAttributes VOID_ELEM
        | HEADER_TAG commonAttributes CLOSE_TAG headerElements END_ELEM
        | styleElement | metaElement | linkElement | scriptElement
        ;

headerElements: headerElement headerElements
        | TEXT headerElements
        |
        ;

bodyElements: bodyElement bodyElements
        | TEXT bodyElements
        |
        ;

bodyElement: element | aElement | canvSvgElement | tdThElement | colElement | audioElement | buttonElement | dialogElement | embedElement | fieldsetElement | formElement 
           | iframeElement | imgElement | inputElement | labelElement | liElement | olElement | optgroupElement | optionElement | qElement |linkElement 
           | selectElement | sourceElement | textareaElement | trackElement | videoElement | scriptElement | HR_BR CLOSE_TAG;

element: START_TAG commonAttributes VOID_ELEM
        | START_TAG commonAttributes CLOSE_TAG bodyElements END_ELEM
        ;

commonAttributes: GLOBAL_ATTRIBUTE commonAttributes
        | FORM_EVENT commonAttributes
        |
        ;
commonAttribute: GLOBAL_ATTRIBUTE | FORM_EVENT;

bodySection: BODY_TAG CLOSE_TAG bodyElements END_ELEM;

headSection: HEAD_TAG CLOSE_TAG  headerElements titleElement headerElements END_ELEM;

htmlSection: HTML_TAG LANG_ATTR CLOSE_TAG headSection bodySection END_ELEM
            | HTML_TAG CLOSE_TAG headSection bodySection END_ELEM;

/* a */
aElement: A_TAG aAttributes VOID_ELEM | A_TAG aAttributes CLOSE_TAG bodyElements END_ELEM;
aAttributes: LINK_ATTR aAttributes | A_FORM_ATTR aAttributes | commonAttribute aAttributes | ;

/* canvas svg */
canvSvgElement: CANVAS_SVG_TAG canvSvgAttributes VOID_ELEM | CANVAS_SVG_TAG canvSvgAttributes CLOSE_TAG bodyElements END_ELEM;
canvSvgAttributes: SIZE_ATTR canvSvgAttributes | commonAttribute canvSvgAttributes | ;

/* td th */
tdThElement: TD_TH_TAG tdThAttributes VOID_ELEM | TD_TH_TAG tdThAttributes CLOSE_TAG bodyElements END_ELEM;
tdThAttributes: TABLE_ATTR tdThAttributes | commonAttribute tdThAttributes | ;

/* col */
colElement: COL_TAG colAttributes CLOSE_TAG;
colAttributes: COL_COLGROUP_ATTR colAttributes | commonAttribute colAttributes | ;

/* col colgroup */
colElement: COLGROUP_TAG colAttributes VOID_ELEM | COLGROUP_TAG colAttributes CLOSE_TAG bodyElements END_ELEM;
colAttributes: COL_COLGROUP_ATTR colAttributes | commonAttribute colAttributes | ;

/* audio */
audioElement: AUDIO_TAG audioAttributes VOID_ELEM | AUDIO_TAG audioAttributes CLOSE_TAG bodyElements END_ELEM;
audioAttributes: AUDIO_VIDEO_ATTR audioAttributes | SRC_ATTR audioAttributes | commonAttribute audioAttributes | ;

/* button */
buttonElement: BUTTON_TAG buttonAttributes VOID_ELEM | BUTTON_TAG buttonAttributes CLOSE_TAG bodyElements END_ELEM;
buttonAttributes: DISABLED_ATTR buttonAttributes | NAME_ATTR buttonAttributes | VALUE_ATTR buttonAttributes | commonAttribute buttonAttributes | ;

 /* dialog */
dialogElement: DIALOG_TAG dialogAttributes VOID_ELEM | DIALOG_TAG dialogAttributes CLOSE_TAG bodyElements END_ELEM;
dialogAttributes: DIALOG_ATTR dialogAttributes | commonAttribute dialogAttributes | ;

 /* embed */
embedElement: EMBED_TAG embedAttributes CLOSE_TAG;
embedAttributes: SIZE_ATTR embedAttributes | SRC_ATTR embedAttributes | TYPE_ATTR embedAttributes | commonAttribute embedAttributes | ;

 /* fieldset */
fieldsetElement: FIELDSET_TAG fieldsetAttributes VOID_ELEM | FIELDSET_TAG fieldsetAttributes CLOSE_TAG bodyElements END_ELEM;
fieldsetAttributes: DISABLED_ATTR fieldsetAttributes | NAME_ATTR fieldsetAttributes | FORM_ATTR fieldsetAttributes | commonAttribute fieldsetAttributes | ;

 /* form */
formElement: FORM_TAG formAttributes VOID_ELEM | FORM_TAG formAttributes CLOSE_TAG bodyElements END_ELEM;
formAttributes: A_FORM_ATTR formAttributes | AMN_FORM_ATTR formAttributes | AUTOCOMPLETE_ATTR formAttributes | commonAttribute formAttributes | ;

 /* iframe */
iframeElement: IFRAME_TAG iframeAttributes VOID_ELEM | IFRAME_TAG iframeAttributes CLOSE_TAG bodyElements END_ELEM;
iframeAttributes: SIZE_ATTR iframeAttributes | NAME_ATTR iframeAttributes | SRC_ATTR iframeAttributes | REFERERPOLICY_ATTR iframeAttributes | commonAttribute iframeAttributes | ;

 /* img */
imgElement: IMG_TAG imgAttributes CLOSE_TAG;
imgAttributes: SIZE_ATTR imgAttributes | SRC_ATTR imgAttributes | SRCSET_ATTR imgAttributes | IMG_INPUT_ATTR imgAttributes | commonAttribute imgAttributes | ;

 /* input */
inputElement: INPUT_TAG inputAttributes CLOSE_TAG;
inputAttributes: SIZE_ATTR inputAttributes | SRC_ATTR inputAttributes | TYPE_ATTR inputAttributes | DISABLED_ATTR inputAttributes | NAME_ATTR inputAttributes | VALUE_ATTR inputAttributes | FORM_ATTR inputAttributes | IMG_INPUT_ATTR inputAttributes | SELECT_INPUT_ATTR inputAttributes | TEXTAREA_INPUT_ATTR inputAttributes | AUTOCOMPLETE_ATTR inputAttributes | INPUT_ATTR inputAttributes | REQUIRED_ATTR inputAttributes | commonAttribute inputAttributes | ;

 /* label */
labelElement: LABEL_TAG labelAttributes VOID_ELEM | LABEL_TAG labelAttributes CLOSE_TAG bodyElements END_ELEM;
labelAttributes: FORM_ATTR labelAttributes | FOR_ATTR labelAttributes | commonAttribute labelAttributes | ;

 /* li */
liElement: LI_TAG liAttributes VOID_ELEM | LI_TAG liAttributes CLOSE_TAG bodyElements END_ELEM;
liAttributes: VALUE_ATTR liAttributes | commonAttribute liAttributes | ;

 /* link */
linkElement: LINK_TAG linkAttributes CLOSE_TAG;
linkAttributes: LINK_ATTR linkAttributes | TYPE_ATTR linkAttributes | commonAttribute linkAttributes | ;

 /* meta */
metaElement: META_TAG metaAttributes CLOSE_TAG;
metaAttributes: META_ATTR metaAttributes | NAME_ATTR metaAttributes | commonAttribute metaAttributes | ;

 /* ol */
olElement: OL_TAG olAttributes VOID_ELEM | OL_TAG olAttributes CLOSE_TAG bodyElements END_ELEM;
olAttributes: OL_ATTR olAttributes | TYPE_ATTR | commonAttribute olAttributes | ;

 /* optgroup */
optgroupElement: OPTGROUP_TAG optgroupAttributes VOID_ELEM | OPTGROUP_TAG optgroupAttributes CLOSE_TAG bodyElements END_ELEM;
optgroupAttributes: DISABLED_ATTR optgroupAttributes | LABEL_ATTR optgroupAttributes | commonAttribute optgroupAttributes | ;

 /* option */
optionElement: OPTION_TAG optionAttributes VOID_ELEM | OPTION_TAG optionAttributes CLOSE_TAG bodyElements END_ELEM;
optionAttributes: DISABLED_ATTR optionAttributes | VALUE_ATTR optionAttributes | LABEL_ATTR optionAttributes | OPTION_ATTR optionAttributes | commonAttribute optionAttributes | ;

 /* q */
qElement: Q_TAG qAttributes VOID_ELEM | Q_TAG qAttributes CLOSE_TAG bodyElements END_ELEM;
qAttributes: CITE_ATTR qAttributes | commonAttribute qAttributes | ;

 /* script */
scriptElement: SCRIPT_TAG scriptAttributes VOID_ELEM | SCRIPT_TAG scriptAttributes CLOSE_TAG bodyElements END_ELEM;
scriptAttributes: SRC_ATTR scriptAttributes | TYPE_ATTR scriptAttributes  | commonAttribute scriptAttributes | ;

 /* select */
selectElement: SELECT_TAG selectAttributes VOID_ELEM | SELECT_TAG selectAttributes CLOSE_TAG bodyElements END_ELEM;
selectAttributes: DISABLED_ATTR selectAttributes | NAME_ATTR selectAttributes | SELECT_TEXTAREA_ATTR selectAttributes | SELECT_INPUT_ATTR selectAttributes | REQUIRED_ATTR selectAttributes | commonAttribute selectAttributes | ;

 /* source */
sourceElement: SOURCE_TAG sourceAttributes CLOSE_TAG;
sourceAttributes: SRC_ATTR sourceAttributes | TYPE_ATTR sourceAttributes | SRCSET_ATTR sourceAttributes | MEDIA_ATTR sourceAttributes | commonAttribute sourceAttributes | ;

 /* style */
styleElement: STYLE_TAG styleAttributes VOID_ELEM | STYLE_TAG styleAttributes CLOSE_TAG bodyElements END_ELEM;
styleAttributes: TYPE_ATTR styleAttributes | MEDIA_ATTR styleAttributes | commonAttribute styleAttributes | ;

 /* textarea */
textareaElement: TEXTAREA_TAG textareaAttributes VOID_ELEM | TEXTAREA_TAG textareaAttributes CLOSE_TAG bodyElements END_ELEM;
textareaAttributes: DISABLED_ATTR textareaAttributes | NAME_ATTR textareaAttributes | SELECT_TEXTAREA_ATTR textareaAttributes | SELECT_INPUT_ATTR textareaAttributes | TEXTAREA_INPUT_ATTR textareaAttributes | TEXTAREA_ATTR textareaAttributes | REQUIRED_ATTR textareaAttributes | commonAttribute textareaAttributes | ;

 /* track */
trackElement: TRACK_TAG trackAttributes CLOSE_TAG;
trackAttributes: SRC_ATTR trackAttributes | TRACK_ATTR trackAttributes | LABEL_ATTR trackAttributes | commonAttribute trackAttributes | ;

 /* video */
videoElement: VIDEO_TAG videoAttributes VOID_ELEM | VIDEO_TAG videoAttributes CLOSE_TAG bodyElements END_ELEM;
videoAttributes: SIZE_ATTR videoAttributes | SRC_ATTR videoAttributes | AUDIO_VIDEO_ATTR videoAttributes | TYPE_ATTR videoAttributes | commonAttribute videoAttributes | ;

%%
 
int main(int argc, char **argv)
{
    if (argc > 1) {
        yyin = fopen(argv[1], "r");

        if (yyin == NULL) {
            printf("Cannot find file: `%s`", argv[1]);
            return 1;
        }
    } else {
        printf("Input file not provided. Type `compile file_path`.");
        return 1;
    }

    do {
		yyparse();
	} while (!feof(yyin));

    fclose(yyin);

    if (err) {
        printf("Validation failed!\n");
        return 1;
    } else {
        printf("Validation completed successfully!\n");
    }

    return 0;
}
