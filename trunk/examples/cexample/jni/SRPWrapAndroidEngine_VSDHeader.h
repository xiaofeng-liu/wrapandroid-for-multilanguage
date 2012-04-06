/*--------------------------------------------------*/
/*VirtualSociety System ServiceModuleTemplate Header File*/
/*CreateBy SRPLab                */
/*CreateDate: 2012-4-6  */
/*--------------------------------------------------*/
#ifndef SRPWRAPANDROIDENGINE_HEADERFILE
#define SRPWRAPANDROIDENGINE_HEADERFILE

#include "SRPWrapAndroidEngine.h"

#if( VS_OS_TYPE == VS_OS_WINDOWS )
#pragma warning (disable:4819)
#pragma warning (disable:4244)
#pragma warning (disable:4996)
#pragma warning (disable:4800)
#endif

#pragma pack(4)

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SIMPLEADAPTERCLASS                                                               "SimpleAdapterClass"
extern VS_UUID VSOBJID_SimpleAdapterClass;
#define VSATTRDEPEND_SIMPLEADAPTERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_SIMPLEADAPTERCLASS                                                         1
extern VS_INT32 SRPCALLBACK SimpleAdapterClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_SIMPLEADAPTERCLASS_ANDROIDREFCOUNT                                             0
#define VSATTRNUMBER_SIMPLEADAPTERCLASS                                                            1

struct StructOfAttachSimpleAdapterClass{
};
struct StructOfSimpleAdapterClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_AUTOCOMPLETETEXTVIEWCLASS                                                        "AutoCompleteTextViewClass"
extern VS_UUID VSOBJID_AutoCompleteTextViewClass;
#define VSATTRDEPEND_AUTOCOMPLETETEXTVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_AUTOCOMPLETETEXTVIEWCLASS                                                  1
extern VS_INT32 SRPCALLBACK AutoCompleteTextViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_AUTOCOMPLETETEXTVIEWCLASS_ANDROIDREFCOUNT                                      0
#define VSATTRNUMBER_AUTOCOMPLETETEXTVIEWCLASS                                                     1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_AutoCompleteTextViewClass_setAdapter;
#define VSFUNCRETURNDEPEND_AUTOCOMPLETETEXTVIEWCLASS_SETADAPTER(X)  {}
#define VSFUNCRETURNDEPENDNUM_AUTOCOMPLETETEXTVIEWCLASS_SETADAPTER                                 0
#define VSFUNCPARAMDEPEND_AUTOCOMPLETETEXTVIEWCLASS_SETADAPTER(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_AUTOCOMPLETETEXTVIEWCLASS_SETADAPTER                                  1

extern void SRPAPI AutoCompleteTextViewClass_setAdapter(void *Object,VS_OBJPTR adapter);
typedef void (SRPAPI *AutoCompleteTextViewClass_setAdapterProc)(void *Object,VS_OBJPTR adapter);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AutoCompleteTextViewClass_setThreshold;
#define VSFUNCRETURNDEPEND_AUTOCOMPLETETEXTVIEWCLASS_SETTHRESHOLD(X)  {}
#define VSFUNCRETURNDEPENDNUM_AUTOCOMPLETETEXTVIEWCLASS_SETTHRESHOLD                               0
#define VSFUNCPARAMDEPEND_AUTOCOMPLETETEXTVIEWCLASS_SETTHRESHOLD(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_AUTOCOMPLETETEXTVIEWCLASS_SETTHRESHOLD                                1

extern void SRPAPI AutoCompleteTextViewClass_setThreshold(void *Object,VS_INT32 threshold);
typedef void (SRPAPI *AutoCompleteTextViewClass_setThresholdProc)(void *Object,VS_INT32 threshold);

struct StructOfAttachAutoCompleteTextViewClass{
};
struct StructOfAutoCompleteTextViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_PAINTCLASS                                                                       "PaintClass"
extern VS_UUID VSOBJID_PaintClass;
#define VSATTRDEPEND_PAINTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_PAINTCLASS                                                                 1
extern VS_INT32 SRPCALLBACK PaintClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_PAINTCLASS_ANDROIDREFCOUNT                                                     0
#define VSATTRNUMBER_PAINTCLASS                                                                    1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_getAlpha;
#define VSFUNCRETURNDEPEND_PAINTCLASS_GETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_GETALPHA                                                  1
#define VSFUNCPARAMDEPEND_PAINTCLASS_GETALPHA(X)  {}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_GETALPHA                                                   0

extern VS_INT32 SRPAPI PaintClass_getAlpha(void *Object);
typedef VS_INT32 (SRPAPI *PaintClass_getAlphaProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_getColor;
#define VSFUNCRETURNDEPEND_PAINTCLASS_GETCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_GETCOLOR                                                  1
#define VSFUNCPARAMDEPEND_PAINTCLASS_GETCOLOR(X)  {}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_GETCOLOR                                                   0

extern VS_INT32 SRPAPI PaintClass_getColor(void *Object);
typedef VS_INT32 (SRPAPI *PaintClass_getColorProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_measureText;
#define VSFUNCRETURNDEPEND_PAINTCLASS_MEASURETEXT(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_MEASURETEXT                                               1
#define VSFUNCPARAMDEPEND_PAINTCLASS_MEASURETEXT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_MEASURETEXT                                                1

extern VS_FLOAT SRPAPI PaintClass_measureText(void *Object,VS_CHAR * text);
typedef VS_FLOAT (SRPAPI *PaintClass_measureTextProc)(void *Object,VS_CHAR * text);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_reset;
#define VSFUNCRETURNDEPEND_PAINTCLASS_RESET(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_RESET                                                     0
#define VSFUNCPARAMDEPEND_PAINTCLASS_RESET(X)  {}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_RESET                                                      0

extern void SRPAPI PaintClass_reset(void *Object);
typedef void (SRPAPI *PaintClass_resetProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_set;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SET(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SET                                                       0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SET(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SET                                                        1

extern void SRPAPI PaintClass_set(void *Object,VS_OBJPTR src);
typedef void (SRPAPI *PaintClass_setProc)(void *Object,VS_OBJPTR src);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setARGB;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETARGB(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETARGB                                                   0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETARGB(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETARGB                                                    4

extern void SRPAPI PaintClass_setARGB(void *Object,VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b);
typedef void (SRPAPI *PaintClass_setARGBProc)(void *Object,VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setAlpha;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETALPHA                                                  0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETALPHA                                                   1

extern void SRPAPI PaintClass_setAlpha(void *Object,VS_INT32 a);
typedef void (SRPAPI *PaintClass_setAlphaProc)(void *Object,VS_INT32 a);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setAntiAlias;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETANTIALIAS(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETANTIALIAS                                              0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETANTIALIAS(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETANTIALIAS                                               1

extern void SRPAPI PaintClass_setAntiAlias(void *Object,VS_BOOL aa);
typedef void (SRPAPI *PaintClass_setAntiAliasProc)(void *Object,VS_BOOL aa);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setColor;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETCOLOR                                                  0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETCOLOR                                                   1

extern void SRPAPI PaintClass_setColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *PaintClass_setColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setDither;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETDITHER(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETDITHER                                                 0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETDITHER(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETDITHER                                                  1

extern void SRPAPI PaintClass_setDither(void *Object,VS_BOOL dither);
typedef void (SRPAPI *PaintClass_setDitherProc)(void *Object,VS_BOOL dither);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setFakeBoldText;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETFAKEBOLDTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETFAKEBOLDTEXT                                           0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETFAKEBOLDTEXT(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETFAKEBOLDTEXT                                            1

extern void SRPAPI PaintClass_setFakeBoldText(void *Object,VS_BOOL fakeBoldText);
typedef void (SRPAPI *PaintClass_setFakeBoldTextProc)(void *Object,VS_BOOL fakeBoldText);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setFilterBitmap;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETFILTERBITMAP(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETFILTERBITMAP                                           0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETFILTERBITMAP(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETFILTERBITMAP                                            1

extern void SRPAPI PaintClass_setFilterBitmap(void *Object,VS_BOOL filter);
typedef void (SRPAPI *PaintClass_setFilterBitmapProc)(void *Object,VS_BOOL filter);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setFlags;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETFLAGS(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETFLAGS                                                  0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETFLAGS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETFLAGS                                                   1

extern void SRPAPI PaintClass_setFlags(void *Object,VS_INT32 flags);
typedef void (SRPAPI *PaintClass_setFlagsProc)(void *Object,VS_INT32 flags);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setLinearText;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETLINEARTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETLINEARTEXT                                             0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETLINEARTEXT(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETLINEARTEXT                                              1

extern void SRPAPI PaintClass_setLinearText(void *Object,VS_BOOL linearText);
typedef void (SRPAPI *PaintClass_setLinearTextProc)(void *Object,VS_BOOL linearText);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setShadowLayer;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSHADOWLAYER(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSHADOWLAYER                                            0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSHADOWLAYER(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSHADOWLAYER                                             4

extern void SRPAPI PaintClass_setShadowLayer(void *Object,VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color);
typedef void (SRPAPI *PaintClass_setShadowLayerProc)(void *Object,VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setStrikeThruText;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSTRIKETHRUTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSTRIKETHRUTEXT                                         0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSTRIKETHRUTEXT(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSTRIKETHRUTEXT                                          1

extern void SRPAPI PaintClass_setStrikeThruText(void *Object,VS_BOOL strikeThruText);
typedef void (SRPAPI *PaintClass_setStrikeThruTextProc)(void *Object,VS_BOOL strikeThruText);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setStrokeCap;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSTROKECAP(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSTROKECAP                                              0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSTROKECAP(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSTROKECAP                                               1

extern void SRPAPI PaintClass_setStrokeCap(void *Object,VS_CHAR * cap);
typedef void (SRPAPI *PaintClass_setStrokeCapProc)(void *Object,VS_CHAR * cap);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setStrokeJoin;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSTROKEJOIN(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSTROKEJOIN                                             0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSTROKEJOIN(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSTROKEJOIN                                              1

extern void SRPAPI PaintClass_setStrokeJoin(void *Object,VS_CHAR * join);
typedef void (SRPAPI *PaintClass_setStrokeJoinProc)(void *Object,VS_CHAR * join);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setStrokeMiter;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSTROKEMITER(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSTROKEMITER                                            0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSTROKEMITER(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSTROKEMITER                                             1

extern void SRPAPI PaintClass_setStrokeMiter(void *Object,VS_FLOAT miter);
typedef void (SRPAPI *PaintClass_setStrokeMiterProc)(void *Object,VS_FLOAT miter);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setStrokeWidth;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSTROKEWIDTH(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSTROKEWIDTH                                            0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSTROKEWIDTH(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSTROKEWIDTH                                             1

extern void SRPAPI PaintClass_setStrokeWidth(void *Object,VS_FLOAT width);
typedef void (SRPAPI *PaintClass_setStrokeWidthProc)(void *Object,VS_FLOAT width);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setStyle;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSTYLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSTYLE                                                  0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSTYLE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSTYLE                                                   1

extern void SRPAPI PaintClass_setStyle(void *Object,VS_CHAR * style);
typedef void (SRPAPI *PaintClass_setStyleProc)(void *Object,VS_CHAR * style);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setSubpixelText;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETSUBPIXELTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETSUBPIXELTEXT                                           0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETSUBPIXELTEXT(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETSUBPIXELTEXT                                            1

extern void SRPAPI PaintClass_setSubpixelText(void *Object,VS_BOOL subpixelText);
typedef void (SRPAPI *PaintClass_setSubpixelTextProc)(void *Object,VS_BOOL subpixelText);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setTextAlign;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETTEXTALIGN(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETTEXTALIGN                                              0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETTEXTALIGN(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETTEXTALIGN                                               1

extern void SRPAPI PaintClass_setTextAlign(void *Object,VS_CHAR * align);
typedef void (SRPAPI *PaintClass_setTextAlignProc)(void *Object,VS_CHAR * align);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setTextScaleX;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETTEXTSCALEX(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETTEXTSCALEX                                             0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETTEXTSCALEX(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETTEXTSCALEX                                              1

extern void SRPAPI PaintClass_setTextScaleX(void *Object,VS_FLOAT scaleX);
typedef void (SRPAPI *PaintClass_setTextScaleXProc)(void *Object,VS_FLOAT scaleX);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setTextSize;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETTEXTSIZE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETTEXTSIZE                                               0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETTEXTSIZE(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETTEXTSIZE                                                1

extern void SRPAPI PaintClass_setTextSize(void *Object,VS_FLOAT textSize);
typedef void (SRPAPI *PaintClass_setTextSizeProc)(void *Object,VS_FLOAT textSize);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setTextSkewX;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETTEXTSKEWX(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETTEXTSKEWX                                              0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETTEXTSKEWX(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETTEXTSKEWX                                               1

extern void SRPAPI PaintClass_setTextSkewX(void *Object,VS_FLOAT skewX);
typedef void (SRPAPI *PaintClass_setTextSkewXProc)(void *Object,VS_FLOAT skewX);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setTypeface;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETTYPEFACE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETTYPEFACE                                               0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETTYPEFACE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETTYPEFACE                                                1

extern void SRPAPI PaintClass_setTypeface(void *Object,VS_OBJPTR typeface);
typedef void (SRPAPI *PaintClass_setTypefaceProc)(void *Object,VS_OBJPTR typeface);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PaintClass_setUnderlineText;
#define VSFUNCRETURNDEPEND_PAINTCLASS_SETUNDERLINETEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_PAINTCLASS_SETUNDERLINETEXT                                          0
#define VSFUNCPARAMDEPEND_PAINTCLASS_SETUNDERLINETEXT(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PAINTCLASS_SETUNDERLINETEXT                                           1

extern void SRPAPI PaintClass_setUnderlineText(void *Object,VS_BOOL underlineText);
typedef void (SRPAPI *PaintClass_setUnderlineTextProc)(void *Object,VS_BOOL underlineText);

struct StructOfAttachPaintClass{
};
struct StructOfPaintClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TOASTCLASS                                                                       "ToastClass"
extern VS_UUID VSOBJID_ToastClass;
#define VSATTRDEPEND_TOASTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_TOASTCLASS                                                                 1
extern VS_INT32 SRPCALLBACK ToastClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_TOASTCLASS_ANDROIDREFCOUNT                                                     0
#define VSATTRNUMBER_TOASTCLASS                                                                    1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_cancel;
#define VSFUNCRETURNDEPEND_TOASTCLASS_CANCEL(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_CANCEL                                                    0
#define VSFUNCPARAMDEPEND_TOASTCLASS_CANCEL(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_CANCEL                                                     0

extern void SRPAPI ToastClass_cancel(void *Object);
typedef void (SRPAPI *ToastClass_cancelProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_getDuration;
#define VSFUNCRETURNDEPEND_TOASTCLASS_GETDURATION(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_GETDURATION                                               1
#define VSFUNCPARAMDEPEND_TOASTCLASS_GETDURATION(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_GETDURATION                                                0

extern VS_INT32 SRPAPI ToastClass_getDuration(void *Object);
typedef VS_INT32 (SRPAPI *ToastClass_getDurationProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_getGravity;
#define VSFUNCRETURNDEPEND_TOASTCLASS_GETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_GETGRAVITY                                                1
#define VSFUNCPARAMDEPEND_TOASTCLASS_GETGRAVITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_GETGRAVITY                                                 0

extern VS_INT32 SRPAPI ToastClass_getGravity(void *Object);
typedef VS_INT32 (SRPAPI *ToastClass_getGravityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_getHorizontalMargin;
#define VSFUNCRETURNDEPEND_TOASTCLASS_GETHORIZONTALMARGIN(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_GETHORIZONTALMARGIN                                       1
#define VSFUNCPARAMDEPEND_TOASTCLASS_GETHORIZONTALMARGIN(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_GETHORIZONTALMARGIN                                        0

extern VS_FLOAT SRPAPI ToastClass_getHorizontalMargin(void *Object);
typedef VS_FLOAT (SRPAPI *ToastClass_getHorizontalMarginProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_getVerticalMargin;
#define VSFUNCRETURNDEPEND_TOASTCLASS_GETVERTICALMARGIN(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_GETVERTICALMARGIN                                         1
#define VSFUNCPARAMDEPEND_TOASTCLASS_GETVERTICALMARGIN(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_GETVERTICALMARGIN                                          0

extern VS_FLOAT SRPAPI ToastClass_getVerticalMargin(void *Object);
typedef VS_FLOAT (SRPAPI *ToastClass_getVerticalMarginProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_getXOffset;
#define VSFUNCRETURNDEPEND_TOASTCLASS_GETXOFFSET(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_GETXOFFSET                                                1
#define VSFUNCPARAMDEPEND_TOASTCLASS_GETXOFFSET(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_GETXOFFSET                                                 0

extern VS_INT32 SRPAPI ToastClass_getXOffset(void *Object);
typedef VS_INT32 (SRPAPI *ToastClass_getXOffsetProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_getYOffset;
#define VSFUNCRETURNDEPEND_TOASTCLASS_GETYOFFSET(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_GETYOFFSET                                                1
#define VSFUNCPARAMDEPEND_TOASTCLASS_GETYOFFSET(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_GETYOFFSET                                                 0

extern VS_INT32 SRPAPI ToastClass_getYOffset(void *Object);
typedef VS_INT32 (SRPAPI *ToastClass_getYOffsetProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_makeText;
#define VSFUNCRETURNDEPEND_TOASTCLASS_MAKETEXT(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_MAKETEXT                                                  1
#define VSFUNCPARAMDEPEND_TOASTCLASS_MAKETEXT(X)  {{X[0].Type=30;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_MAKETEXT                                                   2

extern VS_OBJPTR SRPAPI ToastClass_makeText(void *Object,VS_CHAR * text,VS_INT32 duration);
typedef VS_OBJPTR (SRPAPI *ToastClass_makeTextProc)(void *Object,VS_CHAR * text,VS_INT32 duration);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_setDuration;
#define VSFUNCRETURNDEPEND_TOASTCLASS_SETDURATION(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_SETDURATION                                               0
#define VSFUNCPARAMDEPEND_TOASTCLASS_SETDURATION(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_SETDURATION                                                1

extern void SRPAPI ToastClass_setDuration(void *Object,VS_INT32 duration);
typedef void (SRPAPI *ToastClass_setDurationProc)(void *Object,VS_INT32 duration);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_setGravity;
#define VSFUNCRETURNDEPEND_TOASTCLASS_SETGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_SETGRAVITY                                                0
#define VSFUNCPARAMDEPEND_TOASTCLASS_SETGRAVITY(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_SETGRAVITY                                                 3

extern void SRPAPI ToastClass_setGravity(void *Object,VS_INT32 gravity,VS_INT32 xOffset,VS_INT32 yOffset);
typedef void (SRPAPI *ToastClass_setGravityProc)(void *Object,VS_INT32 gravity,VS_INT32 xOffset,VS_INT32 yOffset);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_setMargin;
#define VSFUNCRETURNDEPEND_TOASTCLASS_SETMARGIN(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_SETMARGIN                                                 0
#define VSFUNCPARAMDEPEND_TOASTCLASS_SETMARGIN(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_SETMARGIN                                                  2

extern void SRPAPI ToastClass_setMargin(void *Object,VS_FLOAT horizontalMargin,VS_FLOAT verticalMargin);
typedef void (SRPAPI *ToastClass_setMarginProc)(void *Object,VS_FLOAT horizontalMargin,VS_FLOAT verticalMargin);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_setText;
#define VSFUNCRETURNDEPEND_TOASTCLASS_SETTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_SETTEXT                                                   0
#define VSFUNCPARAMDEPEND_TOASTCLASS_SETTEXT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_SETTEXT                                                    1

extern void SRPAPI ToastClass_setText(void *Object,VS_CHAR * s);
typedef void (SRPAPI *ToastClass_setTextProc)(void *Object,VS_CHAR * s);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_setView;
#define VSFUNCRETURNDEPEND_TOASTCLASS_SETVIEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_SETVIEW                                                   0
#define VSFUNCPARAMDEPEND_TOASTCLASS_SETVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_SETVIEW                                                    1

extern void SRPAPI ToastClass_setView(void *Object,VS_OBJPTR view);
typedef void (SRPAPI *ToastClass_setViewProc)(void *Object,VS_OBJPTR view);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ToastClass_show;
#define VSFUNCRETURNDEPEND_TOASTCLASS_SHOW(X)  {}
#define VSFUNCRETURNDEPENDNUM_TOASTCLASS_SHOW                                                      0
#define VSFUNCPARAMDEPEND_TOASTCLASS_SHOW(X)  {}
#define VSFUNCPARAMDEPENDNUM_TOASTCLASS_SHOW                                                       0

extern void SRPAPI ToastClass_show(void *Object);
typedef void (SRPAPI *ToastClass_showProc)(void *Object);

struct StructOfAttachToastClass{
};
struct StructOfToastClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_RELATIVELAYOUTCLASS                                                              "RelativeLayoutClass"
extern VS_UUID VSOBJID_RelativeLayoutClass;
#define VSATTRDEPEND_RELATIVELAYOUTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_RELATIVELAYOUTCLASS                                                        4
extern VS_INT32 SRPCALLBACK RelativeLayoutClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_RELATIVELAYOUTCLASS_ANDROIDREFCOUNT                                            0
#define VSATTRINDEX_RELATIVELAYOUTCLASS_VIEWGROUPQUEUE                                             1
#define VSATTRINDEX_RELATIVELAYOUTCLASS_VIEWQUEUE                                                  2
#define VSATTRINDEX_RELATIVELAYOUTCLASS_OBJECTQUEUE                                                3
#define VSATTRNUMBER_RELATIVELAYOUTCLASS                                                           4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_RelativeLayoutClass_requestLayout;
#define VSFUNCRETURNDEPEND_RELATIVELAYOUTCLASS_REQUESTLAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_RELATIVELAYOUTCLASS_REQUESTLAYOUT                                    0
#define VSFUNCPARAMDEPEND_RELATIVELAYOUTCLASS_REQUESTLAYOUT(X)  {}
#define VSFUNCPARAMDEPENDNUM_RELATIVELAYOUTCLASS_REQUESTLAYOUT                                     0

extern void SRPAPI RelativeLayoutClass_requestLayout(void *Object);
typedef void (SRPAPI *RelativeLayoutClass_requestLayoutProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_RelativeLayoutClass_setGravity;
#define VSFUNCRETURNDEPEND_RELATIVELAYOUTCLASS_SETGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_RELATIVELAYOUTCLASS_SETGRAVITY                                       0
#define VSFUNCPARAMDEPEND_RELATIVELAYOUTCLASS_SETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_RELATIVELAYOUTCLASS_SETGRAVITY                                        1

extern void SRPAPI RelativeLayoutClass_setGravity(void *Object,VS_INT32 gravity);
typedef void (SRPAPI *RelativeLayoutClass_setGravityProc)(void *Object,VS_INT32 gravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_RelativeLayoutClass_setHorizontalGravity;
#define VSFUNCRETURNDEPEND_RELATIVELAYOUTCLASS_SETHORIZONTALGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_RELATIVELAYOUTCLASS_SETHORIZONTALGRAVITY                             0
#define VSFUNCPARAMDEPEND_RELATIVELAYOUTCLASS_SETHORIZONTALGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_RELATIVELAYOUTCLASS_SETHORIZONTALGRAVITY                              1

extern void SRPAPI RelativeLayoutClass_setHorizontalGravity(void *Object,VS_INT32 horizontalGravity);
typedef void (SRPAPI *RelativeLayoutClass_setHorizontalGravityProc)(void *Object,VS_INT32 horizontalGravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_RelativeLayoutClass_setVerticalGravity;
#define VSFUNCRETURNDEPEND_RELATIVELAYOUTCLASS_SETVERTICALGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_RELATIVELAYOUTCLASS_SETVERTICALGRAVITY                               0
#define VSFUNCPARAMDEPEND_RELATIVELAYOUTCLASS_SETVERTICALGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_RELATIVELAYOUTCLASS_SETVERTICALGRAVITY                                1

extern void SRPAPI RelativeLayoutClass_setVerticalGravity(void *Object,VS_INT32 verticalGravity);
typedef void (SRPAPI *RelativeLayoutClass_setVerticalGravityProc)(void *Object,VS_INT32 verticalGravity);

struct StructOfAttachRelativeLayoutClass{
};
struct StructOfRelativeLayoutClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TABLEROWCLASS                                                                    "TableRowClass"
extern VS_UUID VSOBJID_TableRowClass;
#define VSATTRDEPEND_TABLEROWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_TABLEROWCLASS                                                              4
extern VS_INT32 SRPCALLBACK TableRowClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_TABLEROWCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRINDEX_TABLEROWCLASS_VIEWGROUPQUEUE                                                   1
#define VSATTRINDEX_TABLEROWCLASS_VIEWQUEUE                                                        2
#define VSATTRINDEX_TABLEROWCLASS_OBJECTQUEUE                                                      3
#define VSATTRNUMBER_TABLEROWCLASS                                                                 4

struct StructOfAttachTableRowClass{
};
struct StructOfTableRowClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_MATRIXCLASS                                                                      "MatrixClass"
extern VS_UUID VSOBJID_MatrixClass;
#define VSATTRDEPEND_MATRIXCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_MATRIXCLASS                                                                1
extern VS_INT32 SRPCALLBACK MatrixClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_MATRIXCLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_MATRIXCLASS                                                                   1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_invert;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_INVERT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_INVERT                                                   1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_INVERT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_INVERT                                                    1

extern VS_BOOL SRPAPI MatrixClass_invert(void *Object,VS_OBJPTR inverse);
typedef VS_BOOL (SRPAPI *MatrixClass_invertProc)(void *Object,VS_OBJPTR inverse);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_isIdentity;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_ISIDENTITY(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_ISIDENTITY                                               1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_ISIDENTITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_ISIDENTITY                                                0

extern VS_BOOL SRPAPI MatrixClass_isIdentity(void *Object);
typedef VS_BOOL (SRPAPI *MatrixClass_isIdentityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postConcat;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTCONCAT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTCONCAT                                               1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTCONCAT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTCONCAT                                                1

extern VS_BOOL SRPAPI MatrixClass_postConcat(void *Object,VS_OBJPTR other);
typedef VS_BOOL (SRPAPI *MatrixClass_postConcatProc)(void *Object,VS_OBJPTR other);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postRotate;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTROTATE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTROTATE                                               1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTROTATE(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTROTATE                                                1

extern VS_BOOL SRPAPI MatrixClass_postRotate(void *Object,VS_FLOAT degrees);
typedef VS_BOOL (SRPAPI *MatrixClass_postRotateProc)(void *Object,VS_FLOAT degrees);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postRotate1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTROTATE1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTROTATE1                                              1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTROTATE1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTROTATE1                                               3

extern VS_BOOL SRPAPI MatrixClass_postRotate1(void *Object,VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);
typedef VS_BOOL (SRPAPI *MatrixClass_postRotate1Proc)(void *Object,VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postScale;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTSCALE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTSCALE                                                1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTSCALE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTSCALE                                                 2

extern VS_BOOL SRPAPI MatrixClass_postScale(void *Object,VS_FLOAT sx,VS_FLOAT sy);
typedef VS_BOOL (SRPAPI *MatrixClass_postScaleProc)(void *Object,VS_FLOAT sx,VS_FLOAT sy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postScale1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTSCALE1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTSCALE1                                               1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTSCALE1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTSCALE1                                                4

extern VS_BOOL SRPAPI MatrixClass_postScale1(void *Object,VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);
typedef VS_BOOL (SRPAPI *MatrixClass_postScale1Proc)(void *Object,VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postSkew;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTSKEW(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTSKEW                                                 1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTSKEW(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTSKEW                                                  2

extern VS_BOOL SRPAPI MatrixClass_postSkew(void *Object,VS_FLOAT kx,VS_FLOAT ky);
typedef VS_BOOL (SRPAPI *MatrixClass_postSkewProc)(void *Object,VS_FLOAT kx,VS_FLOAT ky);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postSkew1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTSKEW1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTSKEW1                                                1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTSKEW1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTSKEW1                                                 4

extern VS_BOOL SRPAPI MatrixClass_postSkew1(void *Object,VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);
typedef VS_BOOL (SRPAPI *MatrixClass_postSkew1Proc)(void *Object,VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_postTranslate;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_POSTTRANSLATE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_POSTTRANSLATE                                            1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_POSTTRANSLATE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_POSTTRANSLATE                                             2

extern VS_BOOL SRPAPI MatrixClass_postTranslate(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef VS_BOOL (SRPAPI *MatrixClass_postTranslateProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preConcat;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PRECONCAT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PRECONCAT                                                1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PRECONCAT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PRECONCAT                                                 1

extern VS_BOOL SRPAPI MatrixClass_preConcat(void *Object,VS_OBJPTR other);
typedef VS_BOOL (SRPAPI *MatrixClass_preConcatProc)(void *Object,VS_OBJPTR other);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preRotate;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PREROTATE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PREROTATE                                                1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PREROTATE(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PREROTATE                                                 1

extern VS_BOOL SRPAPI MatrixClass_preRotate(void *Object,VS_FLOAT degrees);
typedef VS_BOOL (SRPAPI *MatrixClass_preRotateProc)(void *Object,VS_FLOAT degrees);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preRotate1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PREROTATE1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PREROTATE1                                               1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PREROTATE1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PREROTATE1                                                3

extern VS_BOOL SRPAPI MatrixClass_preRotate1(void *Object,VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);
typedef VS_BOOL (SRPAPI *MatrixClass_preRotate1Proc)(void *Object,VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preScale;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PRESCALE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PRESCALE                                                 1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PRESCALE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PRESCALE                                                  2

extern VS_BOOL SRPAPI MatrixClass_preScale(void *Object,VS_FLOAT sx,VS_FLOAT sy);
typedef VS_BOOL (SRPAPI *MatrixClass_preScaleProc)(void *Object,VS_FLOAT sx,VS_FLOAT sy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preScale1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PRESCALE1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PRESCALE1                                                1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PRESCALE1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PRESCALE1                                                 4

extern VS_BOOL SRPAPI MatrixClass_preScale1(void *Object,VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);
typedef VS_BOOL (SRPAPI *MatrixClass_preScale1Proc)(void *Object,VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preSkew;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PRESKEW(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PRESKEW                                                  1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PRESKEW(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PRESKEW                                                   2

extern VS_BOOL SRPAPI MatrixClass_preSkew(void *Object,VS_FLOAT kx,VS_FLOAT ky);
typedef VS_BOOL (SRPAPI *MatrixClass_preSkewProc)(void *Object,VS_FLOAT kx,VS_FLOAT ky);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preSkew1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PRESKEW1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PRESKEW1                                                 1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PRESKEW1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PRESKEW1                                                  4

extern VS_BOOL SRPAPI MatrixClass_preSkew1(void *Object,VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);
typedef VS_BOOL (SRPAPI *MatrixClass_preSkew1Proc)(void *Object,VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_preTranslate;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_PRETRANSLATE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_PRETRANSLATE                                             1
#define VSFUNCPARAMDEPEND_MATRIXCLASS_PRETRANSLATE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_PRETRANSLATE                                              2

extern VS_BOOL SRPAPI MatrixClass_preTranslate(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef VS_BOOL (SRPAPI *MatrixClass_preTranslateProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_reset;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_RESET(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_RESET                                                    0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_RESET(X)  {}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_RESET                                                     0

extern void SRPAPI MatrixClass_reset(void *Object);
typedef void (SRPAPI *MatrixClass_resetProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_set;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SET(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SET                                                      0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SET(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SET                                                       1

extern void SRPAPI MatrixClass_set(void *Object,VS_OBJPTR src);
typedef void (SRPAPI *MatrixClass_setProc)(void *Object,VS_OBJPTR src);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setRotate;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETROTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETROTATE                                                0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETROTATE(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETROTATE                                                 1

extern void SRPAPI MatrixClass_setRotate(void *Object,VS_FLOAT degrees);
typedef void (SRPAPI *MatrixClass_setRotateProc)(void *Object,VS_FLOAT degrees);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setRotate1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETROTATE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETROTATE1                                               0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETROTATE1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETROTATE1                                                3

extern void SRPAPI MatrixClass_setRotate1(void *Object,VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);
typedef void (SRPAPI *MatrixClass_setRotate1Proc)(void *Object,VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setScale;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETSCALE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETSCALE                                                 0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETSCALE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETSCALE                                                  2

extern void SRPAPI MatrixClass_setScale(void *Object,VS_FLOAT sx,VS_FLOAT sy);
typedef void (SRPAPI *MatrixClass_setScaleProc)(void *Object,VS_FLOAT sx,VS_FLOAT sy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setScale1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETSCALE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETSCALE1                                                0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETSCALE1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETSCALE1                                                 4

extern void SRPAPI MatrixClass_setScale1(void *Object,VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);
typedef void (SRPAPI *MatrixClass_setScale1Proc)(void *Object,VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setSinCos;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETSINCOS(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETSINCOS                                                0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETSINCOS(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETSINCOS                                                 2

extern void SRPAPI MatrixClass_setSinCos(void *Object,VS_FLOAT sinValue,VS_FLOAT cosValue);
typedef void (SRPAPI *MatrixClass_setSinCosProc)(void *Object,VS_FLOAT sinValue,VS_FLOAT cosValue);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setSinCos1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETSINCOS1(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETSINCOS1                                               0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETSINCOS1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETSINCOS1                                                4

extern void SRPAPI MatrixClass_setSinCos1(void *Object,VS_FLOAT sinValue,VS_FLOAT cosValue,VS_FLOAT px,VS_FLOAT py);
typedef void (SRPAPI *MatrixClass_setSinCos1Proc)(void *Object,VS_FLOAT sinValue,VS_FLOAT cosValue,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setSkew;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETSKEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETSKEW                                                  0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETSKEW(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETSKEW                                                   2

extern void SRPAPI MatrixClass_setSkew(void *Object,VS_FLOAT kx,VS_FLOAT ky);
typedef void (SRPAPI *MatrixClass_setSkewProc)(void *Object,VS_FLOAT kx,VS_FLOAT ky);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setSkew1;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETSKEW1(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETSKEW1                                                 0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETSKEW1(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETSKEW1                                                  4

extern void SRPAPI MatrixClass_setSkew1(void *Object,VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);
typedef void (SRPAPI *MatrixClass_setSkew1Proc)(void *Object,VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MatrixClass_setTranslate;
#define VSFUNCRETURNDEPEND_MATRIXCLASS_SETTRANSLATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MATRIXCLASS_SETTRANSLATE                                             0
#define VSFUNCPARAMDEPEND_MATRIXCLASS_SETTRANSLATE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MATRIXCLASS_SETTRANSLATE                                              2

extern void SRPAPI MatrixClass_setTranslate(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef void (SRPAPI *MatrixClass_setTranslateProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

struct StructOfAttachMatrixClass{
};
struct StructOfMatrixClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SPINNERCLASS                                                                     "SpinnerClass"
extern VS_UUID VSOBJID_SpinnerClass;
#define VSATTRDEPEND_SPINNERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_SPINNERCLASS                                                               4
extern VS_INT32 SRPCALLBACK SpinnerClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_SPINNERCLASS_ANDROIDREFCOUNT                                                   0
#define VSATTRINDEX_SPINNERCLASS_VIEWGROUPQUEUE                                                    1
#define VSATTRINDEX_SPINNERCLASS_VIEWQUEUE                                                         2
#define VSATTRINDEX_SPINNERCLASS_OBJECTQUEUE                                                       3
#define VSATTRNUMBER_SPINNERCLASS                                                                  4

struct StructOfAttachSpinnerClass{
};
struct StructOfSpinnerClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ABSOLUTELAYOUTCLASS                                                              "AbsoluteLayoutClass"
extern VS_UUID VSOBJID_AbsoluteLayoutClass;
#define VSATTRDEPEND_ABSOLUTELAYOUTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_ABSOLUTELAYOUTCLASS                                                        4
extern VS_INT32 SRPCALLBACK AbsoluteLayoutClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ABSOLUTELAYOUTCLASS_ANDROIDREFCOUNT                                            0
#define VSATTRINDEX_ABSOLUTELAYOUTCLASS_VIEWGROUPQUEUE                                             1
#define VSATTRINDEX_ABSOLUTELAYOUTCLASS_VIEWQUEUE                                                  2
#define VSATTRINDEX_ABSOLUTELAYOUTCLASS_OBJECTQUEUE                                                3
#define VSATTRNUMBER_ABSOLUTELAYOUTCLASS                                                           4

struct StructOfAttachAbsoluteLayoutClass{
};
struct StructOfAbsoluteLayoutClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_OVALSHAPECLASS                                                                   "OvalShapeClass"
extern VS_UUID VSOBJID_OvalShapeClass;
#define VSATTRDEPEND_OVALSHAPECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_OVALSHAPECLASS                                                             1
extern VS_INT32 SRPCALLBACK OvalShapeClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_OVALSHAPECLASS_ANDROIDREFCOUNT                                                 0
#define VSATTRNUMBER_OVALSHAPECLASS                                                                1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_OvalShapeClass_draw;
#define VSFUNCRETURNDEPEND_OVALSHAPECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_OVALSHAPECLASS_DRAW                                                  0
#define VSFUNCPARAMDEPEND_OVALSHAPECLASS_DRAW(X)  {{X[0].Type=57;}{X[1].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_OVALSHAPECLASS_DRAW                                                   2

extern void SRPAPI OvalShapeClass_draw(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);
typedef void (SRPAPI *OvalShapeClass_drawProc)(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);

struct StructOfAttachOvalShapeClass{
};
struct StructOfOvalShapeClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_RECTCLASS                                                                        "RectClass"
extern VS_UUID VSOBJID_RectClass;
#define VSATTRDEPEND_RECTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=6;X[1].Offset=4;}{X[2].Type=6;X[2].Offset=8;}{X[3].Type=6;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_RECTCLASS                                                                  4
extern VS_INT32 SRPCALLBACK RectClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_RECTCLASS_LEFT                                                                 0
#define VSATTRINDEX_RECTCLASS_TOP                                                                  1
#define VSATTRINDEX_RECTCLASS_RIGHT                                                                2
#define VSATTRINDEX_RECTCLASS_BOTTOM                                                               3
#define VSATTRNUMBER_RECTCLASS                                                                     4

struct StructOfAttachRectClass{
};
struct StructOfRectClass{
    //----local attribute
    VS_INT32        left;                         //
    VS_INT32        top;                          //
    VS_INT32        right;                        //
    VS_INT32        bottom;                       //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_PROGRESSBARCLASS                                                                 "ProgressBarClass"
extern VS_UUID VSOBJID_ProgressBarClass;
#define VSATTRDEPEND_PROGRESSBARCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_PROGRESSBARCLASS                                                           1
extern VS_INT32 SRPCALLBACK ProgressBarClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_PROGRESSBARCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_PROGRESSBARCLASS                                                              1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_setMax;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_SETMAX(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_SETMAX                                              0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_SETMAX(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_SETMAX                                               1

extern void SRPAPI ProgressBarClass_setMax(void *Object,VS_INT32 max);
typedef void (SRPAPI *ProgressBarClass_setMaxProc)(void *Object,VS_INT32 max);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_setProgress;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_SETPROGRESS(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_SETPROGRESS                                         0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_SETPROGRESS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_SETPROGRESS                                          1

extern void SRPAPI ProgressBarClass_setProgress(void *Object,VS_INT32 progress);
typedef void (SRPAPI *ProgressBarClass_setProgressProc)(void *Object,VS_INT32 progress);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_setVisibility;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_SETVISIBILITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_SETVISIBILITY                                       0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_SETVISIBILITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_SETVISIBILITY                                        1

extern void SRPAPI ProgressBarClass_setVisibility(void *Object,VS_INT32 v);
typedef void (SRPAPI *ProgressBarClass_setVisibilityProc)(void *Object,VS_INT32 v);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_setIndeterminate;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_SETINDETERMINATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_SETINDETERMINATE                                    0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_SETINDETERMINATE(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_SETINDETERMINATE                                     1

extern void SRPAPI ProgressBarClass_setIndeterminate(void *Object,VS_BOOL indeterminate);
typedef void (SRPAPI *ProgressBarClass_setIndeterminateProc)(void *Object,VS_BOOL indeterminate);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_setIndeterminateDrawable;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_SETINDETERMINATEDRAWABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_SETINDETERMINATEDRAWABLE                            0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_SETINDETERMINATEDRAWABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_SETINDETERMINATEDRAWABLE                             1

extern void SRPAPI ProgressBarClass_setIndeterminateDrawable(void *Object,VS_INT32 resid);
typedef void (SRPAPI *ProgressBarClass_setIndeterminateDrawableProc)(void *Object,VS_INT32 resid);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_setProgressDrawable;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_SETPROGRESSDRAWABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_SETPROGRESSDRAWABLE                                 0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_SETPROGRESSDRAWABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_SETPROGRESSDRAWABLE                                  1

extern void SRPAPI ProgressBarClass_setProgressDrawable(void *Object,VS_INT32 resid);
typedef void (SRPAPI *ProgressBarClass_setProgressDrawableProc)(void *Object,VS_INT32 resid);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_incrementProgressBy;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_INCREMENTPROGRESSBY(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_INCREMENTPROGRESSBY                                 0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_INCREMENTPROGRESSBY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_INCREMENTPROGRESSBY                                  1

extern void SRPAPI ProgressBarClass_incrementProgressBy(void *Object,VS_INT32 diff);
typedef void (SRPAPI *ProgressBarClass_incrementProgressByProc)(void *Object,VS_INT32 diff);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_incrementSecondaryProgressBy;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_INCREMENTSECONDARYPROGRESSBY(X)  {}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_INCREMENTSECONDARYPROGRESSBY                        0
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_INCREMENTSECONDARYPROGRESSBY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_INCREMENTSECONDARYPROGRESSBY                         1

extern void SRPAPI ProgressBarClass_incrementSecondaryProgressBy(void *Object,VS_INT32 diff);
typedef void (SRPAPI *ProgressBarClass_incrementSecondaryProgressByProc)(void *Object,VS_INT32 diff);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_getProgress;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_GETPROGRESS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_GETPROGRESS                                         1
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_GETPROGRESS(X)  {}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_GETPROGRESS                                          0

extern VS_INT32 SRPAPI ProgressBarClass_getProgress(void *Object);
typedef VS_INT32 (SRPAPI *ProgressBarClass_getProgressProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_getSecondaryProgress;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_GETSECONDARYPROGRESS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_GETSECONDARYPROGRESS                                1
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_GETSECONDARYPROGRESS(X)  {}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_GETSECONDARYPROGRESS                                 0

extern VS_INT32 SRPAPI ProgressBarClass_getSecondaryProgress(void *Object);
typedef VS_INT32 (SRPAPI *ProgressBarClass_getSecondaryProgressProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ProgressBarClass_getMax;
#define VSFUNCRETURNDEPEND_PROGRESSBARCLASS_GETMAX(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_PROGRESSBARCLASS_GETMAX                                              1
#define VSFUNCPARAMDEPEND_PROGRESSBARCLASS_GETMAX(X)  {}
#define VSFUNCPARAMDEPENDNUM_PROGRESSBARCLASS_GETMAX                                               0

extern VS_INT32 SRPAPI ProgressBarClass_getMax(void *Object);
typedef VS_INT32 (SRPAPI *ProgressBarClass_getMaxProc)(void *Object);

struct StructOfAttachProgressBarClass{
};
struct StructOfProgressBarClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SHAPECLASS                                                                       "ShapeClass"
extern VS_UUID VSOBJID_ShapeClass;
#define VSATTRDEPEND_SHAPECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_SHAPECLASS                                                                 1
extern VS_INT32 SRPCALLBACK ShapeClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_SHAPECLASS_ANDROIDREFCOUNT                                                     0
#define VSATTRNUMBER_SHAPECLASS                                                                    1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeClass_getHeight;
#define VSFUNCRETURNDEPEND_SHAPECLASS_GETHEIGHT(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_SHAPECLASS_GETHEIGHT                                                 1
#define VSFUNCPARAMDEPEND_SHAPECLASS_GETHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPECLASS_GETHEIGHT                                                  0

extern VS_FLOAT SRPAPI ShapeClass_getHeight(void *Object);
typedef VS_FLOAT (SRPAPI *ShapeClass_getHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeClass_getWidth;
#define VSFUNCRETURNDEPEND_SHAPECLASS_GETWIDTH(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_SHAPECLASS_GETWIDTH                                                  1
#define VSFUNCPARAMDEPEND_SHAPECLASS_GETWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPECLASS_GETWIDTH                                                   0

extern VS_FLOAT SRPAPI ShapeClass_getWidth(void *Object);
typedef VS_FLOAT (SRPAPI *ShapeClass_getWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeClass_hasAlpha;
#define VSFUNCRETURNDEPEND_SHAPECLASS_HASALPHA(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_SHAPECLASS_HASALPHA                                                  1
#define VSFUNCPARAMDEPEND_SHAPECLASS_HASALPHA(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPECLASS_HASALPHA                                                   0

extern VS_BOOL SRPAPI ShapeClass_hasAlpha(void *Object);
typedef VS_BOOL (SRPAPI *ShapeClass_hasAlphaProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeClass_resize;
#define VSFUNCRETURNDEPEND_SHAPECLASS_RESIZE(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPECLASS_RESIZE                                                    0
#define VSFUNCPARAMDEPEND_SHAPECLASS_RESIZE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_SHAPECLASS_RESIZE                                                     2

extern void SRPAPI ShapeClass_resize(void *Object,VS_FLOAT width,VS_FLOAT height);
typedef void (SRPAPI *ShapeClass_resizeProc)(void *Object,VS_FLOAT width,VS_FLOAT height);

struct StructOfAttachShapeClass{
};
struct StructOfShapeClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ALERTDIALOGCLASS                                                                 "AlertDialogClass"
extern VS_UUID VSOBJID_AlertDialogClass;
#define VSATTRDEPEND_ALERTDIALOGCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}}
#define VSATTRDEPENDNUM_ALERTDIALOGCLASS                                                           2
extern VS_INT32 SRPCALLBACK AlertDialogClass_RequestRegisterObject( );

/*----output event: onClick[]  Static Event */
extern VS_UUID VSOUTEVENTID_AlertDialogClass_onClick;

/*------Variable Index Define */
#define VSATTRINDEX_ALERTDIALOGCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRINDEX_ALERTDIALOGCLASS_DIALOGINTERFACEQUEUE                                          1
#define VSATTRNUMBER_ALERTDIALOGCLASS                                                              2

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setButton;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETBUTTON(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETBUTTON                                           0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETBUTTON(X)  {{X[0].Type=6;}{X[1].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETBUTTON                                            2

extern void SRPAPI AlertDialogClass_setButton(void *Object,VS_INT32 whichButton,VS_CHAR * text);
typedef void (SRPAPI *AlertDialogClass_setButtonProc)(void *Object,VS_INT32 whichButton,VS_CHAR * text);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setCustomTitle;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETCUSTOMTITLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETCUSTOMTITLE                                      0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETCUSTOMTITLE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETCUSTOMTITLE                                       1

extern void SRPAPI AlertDialogClass_setCustomTitle(void *Object,VS_OBJPTR customTitleView);
typedef void (SRPAPI *AlertDialogClass_setCustomTitleProc)(void *Object,VS_OBJPTR customTitleView);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setIcon;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETICON(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETICON                                             0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETICON(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETICON                                              1

extern void SRPAPI AlertDialogClass_setIcon(void *Object,VS_INT32 resId);
typedef void (SRPAPI *AlertDialogClass_setIconProc)(void *Object,VS_INT32 resId);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setInverseBackgroundForced;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETINVERSEBACKGROUNDFORCED(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETINVERSEBACKGROUNDFORCED                          0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETINVERSEBACKGROUNDFORCED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETINVERSEBACKGROUNDFORCED                           1

extern void SRPAPI AlertDialogClass_setInverseBackgroundForced(void *Object,VS_BOOL forceInverseBackground);
typedef void (SRPAPI *AlertDialogClass_setInverseBackgroundForcedProc)(void *Object,VS_BOOL forceInverseBackground);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setMessage;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETMESSAGE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETMESSAGE                                          0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETMESSAGE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETMESSAGE                                           1

extern void SRPAPI AlertDialogClass_setMessage(void *Object,VS_CHAR * message);
typedef void (SRPAPI *AlertDialogClass_setMessageProc)(void *Object,VS_CHAR * message);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setTitle;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETTITLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETTITLE                                            0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETTITLE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETTITLE                                             1

extern void SRPAPI AlertDialogClass_setTitle(void *Object,VS_CHAR * message);
typedef void (SRPAPI *AlertDialogClass_setTitleProc)(void *Object,VS_CHAR * message);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setView1;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETVIEW1(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETVIEW1                                            0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETVIEW1(X)  {{X[0].Type=57;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETVIEW1                                             5

extern void SRPAPI AlertDialogClass_setView1(void *Object,VS_OBJPTR view,VS_INT32 viewSpacingLeft,VS_INT32 viewSpacingTop,VS_INT32 viewSpacingRight,VS_INT32 viewSpacingBottom);
typedef void (SRPAPI *AlertDialogClass_setView1Proc)(void *Object,VS_OBJPTR view,VS_INT32 viewSpacingLeft,VS_INT32 viewSpacingTop,VS_INT32 viewSpacingRight,VS_INT32 viewSpacingBottom);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AlertDialogClass_setView;
#define VSFUNCRETURNDEPEND_ALERTDIALOGCLASS_SETVIEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_ALERTDIALOGCLASS_SETVIEW                                             0
#define VSFUNCPARAMDEPEND_ALERTDIALOGCLASS_SETVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ALERTDIALOGCLASS_SETVIEW                                              1

extern void SRPAPI AlertDialogClass_setView(void *Object,VS_OBJPTR view);
typedef void (SRPAPI *AlertDialogClass_setViewProc)(void *Object,VS_OBJPTR view);

struct StructOfAttachAlertDialogClass{
};
struct StructOfAlertDialogClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----local attribute
    void            *DialogInterfaceQueue;        //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TABLELAYOUTCLASS                                                                 "TableLayoutClass"
extern VS_UUID VSOBJID_TableLayoutClass;
#define VSATTRDEPEND_TABLELAYOUTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_TABLELAYOUTCLASS                                                           4
extern VS_INT32 SRPCALLBACK TableLayoutClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_TABLELAYOUTCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRINDEX_TABLELAYOUTCLASS_VIEWGROUPQUEUE                                                1
#define VSATTRINDEX_TABLELAYOUTCLASS_VIEWQUEUE                                                     2
#define VSATTRINDEX_TABLELAYOUTCLASS_OBJECTQUEUE                                                   3
#define VSATTRNUMBER_TABLELAYOUTCLASS                                                              4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_isColumnCollapsed;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_ISCOLUMNCOLLAPSED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_ISCOLUMNCOLLAPSED                                   1
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_ISCOLUMNCOLLAPSED(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_ISCOLUMNCOLLAPSED                                    1

extern VS_BOOL SRPAPI TableLayoutClass_isColumnCollapsed(void *Object,VS_INT32 columnIndex);
typedef VS_BOOL (SRPAPI *TableLayoutClass_isColumnCollapsedProc)(void *Object,VS_INT32 columnIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_isColumnShrinkable;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_ISCOLUMNSHRINKABLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_ISCOLUMNSHRINKABLE                                  1
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_ISCOLUMNSHRINKABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_ISCOLUMNSHRINKABLE                                   1

extern VS_BOOL SRPAPI TableLayoutClass_isColumnShrinkable(void *Object,VS_INT32 columnIndex);
typedef VS_BOOL (SRPAPI *TableLayoutClass_isColumnShrinkableProc)(void *Object,VS_INT32 columnIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_isColumnStretchable;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_ISCOLUMNSTRETCHABLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_ISCOLUMNSTRETCHABLE                                 1
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_ISCOLUMNSTRETCHABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_ISCOLUMNSTRETCHABLE                                  1

extern VS_BOOL SRPAPI TableLayoutClass_isColumnStretchable(void *Object,VS_INT32 columnIndex);
typedef VS_BOOL (SRPAPI *TableLayoutClass_isColumnStretchableProc)(void *Object,VS_INT32 columnIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_isShrinkAllColumns;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_ISSHRINKALLCOLUMNS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_ISSHRINKALLCOLUMNS                                  1
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_ISSHRINKALLCOLUMNS(X)  {}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_ISSHRINKALLCOLUMNS                                   0

extern VS_BOOL SRPAPI TableLayoutClass_isShrinkAllColumns(void *Object);
typedef VS_BOOL (SRPAPI *TableLayoutClass_isShrinkAllColumnsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_isStretchAllColumns;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_ISSTRETCHALLCOLUMNS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_ISSTRETCHALLCOLUMNS                                 1
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_ISSTRETCHALLCOLUMNS(X)  {}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_ISSTRETCHALLCOLUMNS                                  0

extern VS_BOOL SRPAPI TableLayoutClass_isStretchAllColumns(void *Object);
typedef VS_BOOL (SRPAPI *TableLayoutClass_isStretchAllColumnsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_requestLayout;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_REQUESTLAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_REQUESTLAYOUT                                       0
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_REQUESTLAYOUT(X)  {}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_REQUESTLAYOUT                                        0

extern void SRPAPI TableLayoutClass_requestLayout(void *Object);
typedef void (SRPAPI *TableLayoutClass_requestLayoutProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_setColumnShrinkable;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_SETCOLUMNSHRINKABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_SETCOLUMNSHRINKABLE                                 0
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_SETCOLUMNSHRINKABLE(X)  {{X[0].Type=6;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_SETCOLUMNSHRINKABLE                                  2

extern void SRPAPI TableLayoutClass_setColumnShrinkable(void *Object,VS_INT32 columnIndex,VS_BOOL isShrinkable);
typedef void (SRPAPI *TableLayoutClass_setColumnShrinkableProc)(void *Object,VS_INT32 columnIndex,VS_BOOL isShrinkable);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_setColumnStretchable;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_SETCOLUMNSTRETCHABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_SETCOLUMNSTRETCHABLE                                0
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_SETCOLUMNSTRETCHABLE(X)  {{X[0].Type=6;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_SETCOLUMNSTRETCHABLE                                 2

extern void SRPAPI TableLayoutClass_setColumnStretchable(void *Object,VS_INT32 columnIndex,VS_BOOL isStretchable);
typedef void (SRPAPI *TableLayoutClass_setColumnStretchableProc)(void *Object,VS_INT32 columnIndex,VS_BOOL isStretchable);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_setShrinkAllColumns;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_SETSHRINKALLCOLUMNS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_SETSHRINKALLCOLUMNS                                 0
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_SETSHRINKALLCOLUMNS(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_SETSHRINKALLCOLUMNS                                  1

extern void SRPAPI TableLayoutClass_setShrinkAllColumns(void *Object,VS_BOOL shrinkAllColumns);
typedef void (SRPAPI *TableLayoutClass_setShrinkAllColumnsProc)(void *Object,VS_BOOL shrinkAllColumns);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TableLayoutClass_setStretchAllColumns;
#define VSFUNCRETURNDEPEND_TABLELAYOUTCLASS_SETSTRETCHALLCOLUMNS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TABLELAYOUTCLASS_SETSTRETCHALLCOLUMNS                                0
#define VSFUNCPARAMDEPEND_TABLELAYOUTCLASS_SETSTRETCHALLCOLUMNS(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TABLELAYOUTCLASS_SETSTRETCHALLCOLUMNS                                 1

extern void SRPAPI TableLayoutClass_setStretchAllColumns(void *Object,VS_BOOL stretchAllColumns);
typedef void (SRPAPI *TableLayoutClass_setStretchAllColumnsProc)(void *Object,VS_BOOL stretchAllColumns);

struct StructOfAttachTableLayoutClass{
};
struct StructOfTableLayoutClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_DRAWABLECONTAINERCLASS                                                           "DrawableContainerClass"
extern VS_UUID VSOBJID_DrawableContainerClass;
#define VSATTRDEPEND_DRAWABLECONTAINERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_DRAWABLECONTAINERCLASS                                                     1
extern VS_INT32 SRPCALLBACK DrawableContainerClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_DRAWABLECONTAINERCLASS_ANDROIDREFCOUNT                                         0
#define VSATTRNUMBER_DRAWABLECONTAINERCLASS                                                        1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_draw;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_DRAW                                          0
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_DRAW                                           1

extern void SRPAPI DrawableContainerClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *DrawableContainerClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getChangingConfigurations;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETCHANGINGCONFIGURATIONS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETCHANGINGCONFIGURATIONS                     1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETCHANGINGCONFIGURATIONS(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETCHANGINGCONFIGURATIONS                      0

extern VS_INT32 SRPAPI DrawableContainerClass_getChangingConfigurations(void *Object);
typedef VS_INT32 (SRPAPI *DrawableContainerClass_getChangingConfigurationsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getCurrent;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETCURRENT(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETCURRENT                                    1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETCURRENT(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETCURRENT                                     0

extern VS_OBJPTR SRPAPI DrawableContainerClass_getCurrent(void *Object);
typedef VS_OBJPTR (SRPAPI *DrawableContainerClass_getCurrentProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getIntrinsicHeight;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETINTRINSICHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETINTRINSICHEIGHT                            1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETINTRINSICHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETINTRINSICHEIGHT                             0

extern VS_INT32 SRPAPI DrawableContainerClass_getIntrinsicHeight(void *Object);
typedef VS_INT32 (SRPAPI *DrawableContainerClass_getIntrinsicHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getIntrinsicWidth;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETINTRINSICWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETINTRINSICWIDTH                             1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETINTRINSICWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETINTRINSICWIDTH                              0

extern VS_INT32 SRPAPI DrawableContainerClass_getIntrinsicWidth(void *Object);
typedef VS_INT32 (SRPAPI *DrawableContainerClass_getIntrinsicWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getMinimumHeight;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETMINIMUMHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETMINIMUMHEIGHT                              1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETMINIMUMHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETMINIMUMHEIGHT                               0

extern VS_INT32 SRPAPI DrawableContainerClass_getMinimumHeight(void *Object);
typedef VS_INT32 (SRPAPI *DrawableContainerClass_getMinimumHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getMinimumWidth;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETMINIMUMWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETMINIMUMWIDTH                               1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETMINIMUMWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETMINIMUMWIDTH                                0

extern VS_INT32 SRPAPI DrawableContainerClass_getMinimumWidth(void *Object);
typedef VS_INT32 (SRPAPI *DrawableContainerClass_getMinimumWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getOpacity;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETOPACITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETOPACITY                                    1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETOPACITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETOPACITY                                     0

extern VS_INT32 SRPAPI DrawableContainerClass_getOpacity(void *Object);
typedef VS_INT32 (SRPAPI *DrawableContainerClass_getOpacityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_getPadding;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_GETPADDING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_GETPADDING                                    1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_GETPADDING(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_GETPADDING                                     1

extern VS_BOOL SRPAPI DrawableContainerClass_getPadding(void *Object,VS_OBJPTR padding);
typedef VS_BOOL (SRPAPI *DrawableContainerClass_getPaddingProc)(void *Object,VS_OBJPTR padding);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_invalidateDrawable;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_INVALIDATEDRAWABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_INVALIDATEDRAWABLE                            0
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_INVALIDATEDRAWABLE(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_INVALIDATEDRAWABLE                             1

extern void SRPAPI DrawableContainerClass_invalidateDrawable(void *Object,VS_BOOL who);
typedef void (SRPAPI *DrawableContainerClass_invalidateDrawableProc)(void *Object,VS_BOOL who);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_isStateful;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_ISSTATEFUL(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_ISSTATEFUL                                    1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_ISSTATEFUL(X)  {}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_ISSTATEFUL                                     0

extern VS_BOOL SRPAPI DrawableContainerClass_isStateful(void *Object);
typedef VS_BOOL (SRPAPI *DrawableContainerClass_isStatefulProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_selectDrawable;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_SELECTDRAWABLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_SELECTDRAWABLE                                1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_SELECTDRAWABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_SELECTDRAWABLE                                 1

extern VS_BOOL SRPAPI DrawableContainerClass_selectDrawable(void *Object,VS_INT32 idx);
typedef VS_BOOL (SRPAPI *DrawableContainerClass_selectDrawableProc)(void *Object,VS_INT32 idx);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_setAlpha;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_SETALPHA                                      0
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_SETALPHA                                       1

extern void SRPAPI DrawableContainerClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *DrawableContainerClass_setAlphaProc)(void *Object,VS_INT32 alpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_setDither;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_SETDITHER(X)  {}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_SETDITHER                                     0
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_SETDITHER(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_SETDITHER                                      1

extern void SRPAPI DrawableContainerClass_setDither(void *Object,VS_BOOL dither);
typedef void (SRPAPI *DrawableContainerClass_setDitherProc)(void *Object,VS_BOOL dither);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableContainerClass_setVisible;
#define VSFUNCRETURNDEPEND_DRAWABLECONTAINERCLASS_SETVISIBLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECONTAINERCLASS_SETVISIBLE                                    1
#define VSFUNCPARAMDEPEND_DRAWABLECONTAINERCLASS_SETVISIBLE(X)  {{X[0].Type=1;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECONTAINERCLASS_SETVISIBLE                                     2

extern VS_BOOL SRPAPI DrawableContainerClass_setVisible(void *Object,VS_BOOL visible,VS_BOOL restart);
typedef VS_BOOL (SRPAPI *DrawableContainerClass_setVisibleProc)(void *Object,VS_BOOL visible,VS_BOOL restart);

struct StructOfAttachDrawableContainerClass{
};
struct StructOfDrawableContainerClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_VIEWCLASS                                                                        "ViewClass"
extern VS_UUID VSOBJID_ViewClass;
#define VSATTRDEPEND_VIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_VIEWCLASS                                                                  1
extern VS_INT32 SRPCALLBACK ViewClass_RequestRegisterObject( );

/*----output event: onClick[]  Static Event */
extern VS_UUID VSOUTEVENTID_ViewClass_onClick;

/*------Variable Index Define */
#define VSATTRINDEX_VIEWCLASS_ANDROIDREFCOUNT                                                      0
#define VSATTRNUMBER_VIEWCLASS                                                                     1

/*------Local Define Function */
/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onCreateAndroid;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONCREATEANDROID(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONCREATEANDROID                                            0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONCREATEANDROID(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONCREATEANDROID                                             0

extern void SRPAPI ViewClass_onCreateAndroid(void *Object);
typedef void (SRPAPI *ViewClass_onCreateAndroidProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setAbsoluteLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETABSOLUTELAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETABSOLUTELAYOUTPARAMS                                    0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETABSOLUTELAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETABSOLUTELAYOUTPARAMS                                     4

extern void SRPAPI ViewClass_setAbsoluteLayoutParams(void *Object,VS_INT32 width,VS_INT32 height,VS_INT32 x,VS_INT32 y);
typedef void (SRPAPI *ViewClass_setAbsoluteLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height,VS_INT32 x,VS_INT32 y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setLinearLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETLINEARLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETLINEARLAYOUTPARAMS                                      0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETLINEARLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETLINEARLAYOUTPARAMS                                       2

extern void SRPAPI ViewClass_setLinearLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setLinearLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setLinearWeightLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETLINEARWEIGHTLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETLINEARWEIGHTLAYOUTPARAMS                                0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETLINEARWEIGHTLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETLINEARWEIGHTLAYOUTPARAMS                                 3

extern void SRPAPI ViewClass_setLinearWeightLayoutParams(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
typedef void (SRPAPI *ViewClass_setLinearWeightLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setRaidoGroupLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETRAIDOGROUPLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETRAIDOGROUPLAYOUTPARAMS                                  0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETRAIDOGROUPLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETRAIDOGROUPLAYOUTPARAMS                                   2

extern void SRPAPI ViewClass_setRaidoGroupLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setRaidoGroupLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setRaidoGroupWeightLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETRAIDOGROUPWEIGHTLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETRAIDOGROUPWEIGHTLAYOUTPARAMS                            0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETRAIDOGROUPWEIGHTLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETRAIDOGROUPWEIGHTLAYOUTPARAMS                             3

extern void SRPAPI ViewClass_setRaidoGroupWeightLayoutParams(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
typedef void (SRPAPI *ViewClass_setRaidoGroupWeightLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setTableLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETTABLELAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETTABLELAYOUTPARAMS                                       0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETTABLELAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETTABLELAYOUTPARAMS                                        2

extern void SRPAPI ViewClass_setTableLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setTableLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setTableWeightLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETTABLEWEIGHTLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETTABLEWEIGHTLAYOUTPARAMS                                 0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETTABLEWEIGHTLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETTABLEWEIGHTLAYOUTPARAMS                                  3

extern void SRPAPI ViewClass_setTableWeightLayoutParams(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
typedef void (SRPAPI *ViewClass_setTableWeightLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setTableRowLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETTABLEROWLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETTABLEROWLAYOUTPARAMS                                    0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETTABLEROWLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETTABLEROWLAYOUTPARAMS                                     2

extern void SRPAPI ViewClass_setTableRowLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setTableRowLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setTableRowWeightLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETTABLEROWWEIGHTLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETTABLEROWWEIGHTLAYOUTPARAMS                              0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETTABLEROWWEIGHTLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETTABLEROWWEIGHTLAYOUTPARAMS                               3

extern void SRPAPI ViewClass_setTableRowWeightLayoutParams(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
typedef void (SRPAPI *ViewClass_setTableRowWeightLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height,VS_FLOAT weight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setAbsListViewLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETABSLISTVIEWLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETABSLISTVIEWLAYOUTPARAMS                                 0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETABSLISTVIEWLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETABSLISTVIEWLAYOUTPARAMS                                  2

extern void SRPAPI ViewClass_setAbsListViewLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setAbsListViewLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setGalleryLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETGALLERYLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETGALLERYLAYOUTPARAMS                                     0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETGALLERYLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETGALLERYLAYOUTPARAMS                                      2

extern void SRPAPI ViewClass_setGalleryLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setGalleryLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setGridViewLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETGRIDVIEWLAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETGRIDVIEWLAYOUTPARAMS                                    0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETGRIDVIEWLAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETGRIDVIEWLAYOUTPARAMS                                     2

extern void SRPAPI ViewClass_setGridViewLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setGridViewLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setRelativeLayoutParams;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETRELATIVELAYOUTPARAMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETRELATIVELAYOUTPARAMS                                    0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETRELATIVELAYOUTPARAMS(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETRELATIVELAYOUTPARAMS                                     2

extern void SRPAPI ViewClass_setRelativeLayoutParams(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *ViewClass_setRelativeLayoutParamsProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_sp2px;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SP2PX(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SP2PX                                                      1
#define VSFUNCPARAMDEPEND_VIEWCLASS_SP2PX(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SP2PX                                                       1

extern VS_INT32 SRPAPI ViewClass_sp2px(void *Object,VS_FLOAT v);
typedef VS_INT32 (SRPAPI *ViewClass_sp2pxProc)(void *Object,VS_FLOAT v);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_dp2px;
#define VSFUNCRETURNDEPEND_VIEWCLASS_DP2PX(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_DP2PX                                                      1
#define VSFUNCPARAMDEPEND_VIEWCLASS_DP2PX(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_DP2PX                                                       1

extern VS_INT32 SRPAPI ViewClass_dp2px(void *Object,VS_FLOAT v);
typedef VS_INT32 (SRPAPI *ViewClass_dp2pxProc)(void *Object,VS_FLOAT v);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_pt2pxX;
#define VSFUNCRETURNDEPEND_VIEWCLASS_PT2PXX(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_PT2PXX                                                     1
#define VSFUNCPARAMDEPEND_VIEWCLASS_PT2PXX(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_PT2PXX                                                      1

extern VS_INT32 SRPAPI ViewClass_pt2pxX(void *Object,VS_FLOAT v);
typedef VS_INT32 (SRPAPI *ViewClass_pt2pxXProc)(void *Object,VS_FLOAT v);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_pt2pxY;
#define VSFUNCRETURNDEPEND_VIEWCLASS_PT2PXY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_PT2PXY                                                     1
#define VSFUNCPARAMDEPEND_VIEWCLASS_PT2PXY(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_PT2PXY                                                      1

extern VS_INT32 SRPAPI ViewClass_pt2pxY(void *Object,VS_FLOAT v);
typedef VS_INT32 (SRPAPI *ViewClass_pt2pxYProc)(void *Object,VS_FLOAT v);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onDraw;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONDRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONDRAW                                                     0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONDRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONDRAW                                                      1

extern void SRPAPI ViewClass_onDraw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *ViewClass_onDrawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onSuperDraw;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONSUPERDRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONSUPERDRAW                                                0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONSUPERDRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONSUPERDRAW                                                 1

extern void SRPAPI ViewClass_onSuperDraw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *ViewClass_onSuperDrawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_bringToFront;
#define VSFUNCRETURNDEPEND_VIEWCLASS_BRINGTOFRONT(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_BRINGTOFRONT                                               0
#define VSFUNCPARAMDEPEND_VIEWCLASS_BRINGTOFRONT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_BRINGTOFRONT                                                0

extern void SRPAPI ViewClass_bringToFront(void *Object);
typedef void (SRPAPI *ViewClass_bringToFrontProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_clearFocus;
#define VSFUNCRETURNDEPEND_VIEWCLASS_CLEARFOCUS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_CLEARFOCUS                                                 0
#define VSFUNCPARAMDEPEND_VIEWCLASS_CLEARFOCUS(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_CLEARFOCUS                                                  0

extern void SRPAPI ViewClass_clearFocus(void *Object);
typedef void (SRPAPI *ViewClass_clearFocusProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_draw;
#define VSFUNCRETURNDEPEND_VIEWCLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_DRAW                                                       0
#define VSFUNCPARAMDEPEND_VIEWCLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_DRAW                                                        1

extern void SRPAPI ViewClass_draw(void *Object,VS_OBJPTR draw);
typedef void (SRPAPI *ViewClass_drawProc)(void *Object,VS_OBJPTR draw);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getBottom;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETBOTTOM(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETBOTTOM                                                  1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETBOTTOM(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETBOTTOM                                                   0

extern VS_INT32 SRPAPI ViewClass_getBottom(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getBottomProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getContentDescription;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETCONTENTDESCRIPTION(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETCONTENTDESCRIPTION                                      1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETCONTENTDESCRIPTION(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETCONTENTDESCRIPTION                                       0

extern VS_CHAR * SRPAPI ViewClass_getContentDescription(void *Object);
typedef VS_CHAR * (SRPAPI *ViewClass_getContentDescriptionProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getHeight;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETHEIGHT                                                  1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETHEIGHT                                                   0

extern VS_INT32 SRPAPI ViewClass_getHeight(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getId;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETID(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETID                                                      1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETID(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETID                                                       0

extern VS_INT32 SRPAPI ViewClass_getId(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getIdProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getLeft;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETLEFT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETLEFT                                                    1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETLEFT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETLEFT                                                     0

extern VS_INT32 SRPAPI ViewClass_getLeft(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getLeftProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getPaddingBottom;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETPADDINGBOTTOM(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETPADDINGBOTTOM                                           1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETPADDINGBOTTOM(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETPADDINGBOTTOM                                            0

extern VS_INT32 SRPAPI ViewClass_getPaddingBottom(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getPaddingBottomProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getPaddingLeft;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETPADDINGLEFT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETPADDINGLEFT                                             1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETPADDINGLEFT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETPADDINGLEFT                                              0

extern VS_INT32 SRPAPI ViewClass_getPaddingLeft(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getPaddingLeftProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getPaddingRight;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETPADDINGRIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETPADDINGRIGHT                                            1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETPADDINGRIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETPADDINGRIGHT                                             0

extern VS_INT32 SRPAPI ViewClass_getPaddingRight(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getPaddingRightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getPaddingTop;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETPADDINGTOP(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETPADDINGTOP                                              1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETPADDINGTOP(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETPADDINGTOP                                               0

extern VS_INT32 SRPAPI ViewClass_getPaddingTop(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getPaddingTopProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getRight;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETRIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETRIGHT                                                   1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETRIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETRIGHT                                                    0

extern VS_INT32 SRPAPI ViewClass_getRight(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getRightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getTop;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETTOP(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETTOP                                                     1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETTOP(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETTOP                                                      0

extern VS_INT32 SRPAPI ViewClass_getTop(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getTopProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getVisibility;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETVISIBILITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETVISIBILITY                                              1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETVISIBILITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETVISIBILITY                                               0

extern VS_INT32 SRPAPI ViewClass_getVisibility(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getVisibilityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_getWidth;
#define VSFUNCRETURNDEPEND_VIEWCLASS_GETWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_GETWIDTH                                                   1
#define VSFUNCPARAMDEPEND_VIEWCLASS_GETWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_GETWIDTH                                                    0

extern VS_INT32 SRPAPI ViewClass_getWidth(void *Object);
typedef VS_INT32 (SRPAPI *ViewClass_getWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_hasFocus;
#define VSFUNCRETURNDEPEND_VIEWCLASS_HASFOCUS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_HASFOCUS                                                   1
#define VSFUNCPARAMDEPEND_VIEWCLASS_HASFOCUS(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_HASFOCUS                                                    0

extern VS_BOOL SRPAPI ViewClass_hasFocus(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_hasFocusProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_invalidate;
#define VSFUNCRETURNDEPEND_VIEWCLASS_INVALIDATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_INVALIDATE                                                 0
#define VSFUNCPARAMDEPEND_VIEWCLASS_INVALIDATE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_INVALIDATE                                                  0

extern void SRPAPI ViewClass_invalidate(void *Object);
typedef void (SRPAPI *ViewClass_invalidateProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_invalidate1;
#define VSFUNCRETURNDEPEND_VIEWCLASS_INVALIDATE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_INVALIDATE1                                                0
#define VSFUNCPARAMDEPEND_VIEWCLASS_INVALIDATE1(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_INVALIDATE1                                                 4

extern void SRPAPI ViewClass_invalidate1(void *Object,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);
typedef void (SRPAPI *ViewClass_invalidate1Proc)(void *Object,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isClickable;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISCLICKABLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISCLICKABLE                                                1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISCLICKABLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISCLICKABLE                                                 0

extern VS_BOOL SRPAPI ViewClass_isClickable(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isClickableProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISENABLED                                                  1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISENABLED                                                   0

extern VS_BOOL SRPAPI ViewClass_isEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isFocusable;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISFOCUSABLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISFOCUSABLE                                                1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISFOCUSABLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISFOCUSABLE                                                 0

extern VS_BOOL SRPAPI ViewClass_isFocusable(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isFocusableProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isFocusableInTouchMode;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISFOCUSABLEINTOUCHMODE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISFOCUSABLEINTOUCHMODE                                     1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISFOCUSABLEINTOUCHMODE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISFOCUSABLEINTOUCHMODE                                      0

extern VS_BOOL SRPAPI ViewClass_isFocusableInTouchMode(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isFocusableInTouchModeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isFocused;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISFOCUSED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISFOCUSED                                                  1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISFOCUSED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISFOCUSED                                                   0

extern VS_BOOL SRPAPI ViewClass_isFocused(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isFocusedProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isHapticFeedbackEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISHAPTICFEEDBACKENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISHAPTICFEEDBACKENABLED                                    1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISHAPTICFEEDBACKENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISHAPTICFEEDBACKENABLED                                     0

extern VS_BOOL SRPAPI ViewClass_isHapticFeedbackEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isHapticFeedbackEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isHorizontalFadingEdgeEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISHORIZONTALFADINGEDGEENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISHORIZONTALFADINGEDGEENABLED                              1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISHORIZONTALFADINGEDGEENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISHORIZONTALFADINGEDGEENABLED                               0

extern VS_BOOL SRPAPI ViewClass_isHorizontalFadingEdgeEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isHorizontalFadingEdgeEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isHorizontalScrollBarEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISHORIZONTALSCROLLBARENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISHORIZONTALSCROLLBARENABLED                               1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISHORIZONTALSCROLLBARENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISHORIZONTALSCROLLBARENABLED                                0

extern VS_BOOL SRPAPI ViewClass_isHorizontalScrollBarEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isHorizontalScrollBarEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isInEditMode;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISINEDITMODE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISINEDITMODE                                               1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISINEDITMODE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISINEDITMODE                                                0

extern VS_BOOL SRPAPI ViewClass_isInEditMode(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isInEditModeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isInTouchMode;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISINTOUCHMODE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISINTOUCHMODE                                              1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISINTOUCHMODE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISINTOUCHMODE                                               0

extern VS_BOOL SRPAPI ViewClass_isInTouchMode(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isInTouchModeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isLayoutRequested;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISLAYOUTREQUESTED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISLAYOUTREQUESTED                                          1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISLAYOUTREQUESTED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISLAYOUTREQUESTED                                           0

extern VS_BOOL SRPAPI ViewClass_isLayoutRequested(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isLayoutRequestedProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isLongClickable;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISLONGCLICKABLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISLONGCLICKABLE                                            1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISLONGCLICKABLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISLONGCLICKABLE                                             0

extern VS_BOOL SRPAPI ViewClass_isLongClickable(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isLongClickableProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isOpaque;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISOPAQUE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISOPAQUE                                                   1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISOPAQUE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISOPAQUE                                                    0

extern VS_BOOL SRPAPI ViewClass_isOpaque(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isOpaqueProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isPressed;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISPRESSED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISPRESSED                                                  1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISPRESSED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISPRESSED                                                   0

extern VS_BOOL SRPAPI ViewClass_isPressed(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isPressedProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isSaveEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISSAVEENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISSAVEENABLED                                              1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISSAVEENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISSAVEENABLED                                               0

extern VS_BOOL SRPAPI ViewClass_isSaveEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isSaveEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isScrollbarFadingEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISSCROLLBARFADINGENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISSCROLLBARFADINGENABLED                                   1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISSCROLLBARFADINGENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISSCROLLBARFADINGENABLED                                    0

extern VS_BOOL SRPAPI ViewClass_isScrollbarFadingEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isScrollbarFadingEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isSelected;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISSELECTED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISSELECTED                                                 1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISSELECTED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISSELECTED                                                  0

extern VS_BOOL SRPAPI ViewClass_isSelected(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isSelectedProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isShown;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISSHOWN(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISSHOWN                                                    1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISSHOWN(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISSHOWN                                                     0

extern VS_BOOL SRPAPI ViewClass_isShown(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isShownProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isSoundEffectsEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISSOUNDEFFECTSENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISSOUNDEFFECTSENABLED                                      1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISSOUNDEFFECTSENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISSOUNDEFFECTSENABLED                                       0

extern VS_BOOL SRPAPI ViewClass_isSoundEffectsEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isSoundEffectsEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isVerticalFadingEdgeEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISVERTICALFADINGEDGEENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISVERTICALFADINGEDGEENABLED                                1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISVERTICALFADINGEDGEENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISVERTICALFADINGEDGEENABLED                                 0

extern VS_BOOL SRPAPI ViewClass_isVerticalFadingEdgeEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isVerticalFadingEdgeEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_isVerticalScrollBarEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ISVERTICALSCROLLBARENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ISVERTICALSCROLLBARENABLED                                 1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ISVERTICALSCROLLBARENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ISVERTICALSCROLLBARENABLED                                  0

extern VS_BOOL SRPAPI ViewClass_isVerticalScrollBarEnabled(void *Object);
typedef VS_BOOL (SRPAPI *ViewClass_isVerticalScrollBarEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_layout;
#define VSFUNCRETURNDEPEND_VIEWCLASS_LAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_LAYOUT                                                     0
#define VSFUNCPARAMDEPEND_VIEWCLASS_LAYOUT(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_LAYOUT                                                      4

extern void SRPAPI ViewClass_layout(void *Object,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);
typedef void (SRPAPI *ViewClass_layoutProc)(void *Object,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_measure;
#define VSFUNCRETURNDEPEND_VIEWCLASS_MEASURE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_MEASURE                                                    0
#define VSFUNCPARAMDEPEND_VIEWCLASS_MEASURE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_MEASURE                                                     2

extern void SRPAPI ViewClass_measure(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
typedef void (SRPAPI *ViewClass_measureProc)(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_postInvalidate;
#define VSFUNCRETURNDEPEND_VIEWCLASS_POSTINVALIDATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_POSTINVALIDATE                                             0
#define VSFUNCPARAMDEPEND_VIEWCLASS_POSTINVALIDATE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_POSTINVALIDATE                                              0

extern void SRPAPI ViewClass_postInvalidate(void *Object);
typedef void (SRPAPI *ViewClass_postInvalidateProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_postInvalidate1;
#define VSFUNCRETURNDEPEND_VIEWCLASS_POSTINVALIDATE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_POSTINVALIDATE1                                            0
#define VSFUNCPARAMDEPEND_VIEWCLASS_POSTINVALIDATE1(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_POSTINVALIDATE1                                             4

extern void SRPAPI ViewClass_postInvalidate1(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *ViewClass_postInvalidate1Proc)(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_postInvalidateDelayed;
#define VSFUNCRETURNDEPEND_VIEWCLASS_POSTINVALIDATEDELAYED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_POSTINVALIDATEDELAYED                                      0
#define VSFUNCPARAMDEPEND_VIEWCLASS_POSTINVALIDATEDELAYED(X)  {{X[0].Type=9;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_POSTINVALIDATEDELAYED                                       1

extern void SRPAPI ViewClass_postInvalidateDelayed(void *Object,VS_LONG delayMilliseconds);
typedef void (SRPAPI *ViewClass_postInvalidateDelayedProc)(void *Object,VS_LONG delayMilliseconds);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_postInvalidateDelayed1;
#define VSFUNCRETURNDEPEND_VIEWCLASS_POSTINVALIDATEDELAYED1(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_POSTINVALIDATEDELAYED1                                     0
#define VSFUNCPARAMDEPEND_VIEWCLASS_POSTINVALIDATEDELAYED1(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_POSTINVALIDATEDELAYED1                                      0

extern void SRPAPI ViewClass_postInvalidateDelayed1(void *Object);
typedef void (SRPAPI *ViewClass_postInvalidateDelayed1Proc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_requestFocus;
#define VSFUNCRETURNDEPEND_VIEWCLASS_REQUESTFOCUS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_REQUESTFOCUS                                               1
#define VSFUNCPARAMDEPEND_VIEWCLASS_REQUESTFOCUS(X)  {{X[0].Type=9;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_REQUESTFOCUS                                                5

extern VS_BOOL SRPAPI ViewClass_requestFocus(void *Object,VS_LONG delayMilliseconds,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef VS_BOOL (SRPAPI *ViewClass_requestFocusProc)(void *Object,VS_LONG delayMilliseconds,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_scrollBy;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SCROLLBY(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SCROLLBY                                                   0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SCROLLBY(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SCROLLBY                                                    2

extern void SRPAPI ViewClass_scrollBy(void *Object,VS_INT32 x,VS_INT32 y);
typedef void (SRPAPI *ViewClass_scrollByProc)(void *Object,VS_INT32 x,VS_INT32 y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_scrollTo;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SCROLLTO(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SCROLLTO                                                   0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SCROLLTO(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SCROLLTO                                                    2

extern void SRPAPI ViewClass_scrollTo(void *Object,VS_INT32 x,VS_INT32 y);
typedef void (SRPAPI *ViewClass_scrollToProc)(void *Object,VS_INT32 x,VS_INT32 y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setBackgroundColor;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETBACKGROUNDCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETBACKGROUNDCOLOR                                         0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETBACKGROUNDCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETBACKGROUNDCOLOR                                          1

extern void SRPAPI ViewClass_setBackgroundColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *ViewClass_setBackgroundColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setBackgroundResource;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETBACKGROUNDRESOURCE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETBACKGROUNDRESOURCE                                      0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETBACKGROUNDRESOURCE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETBACKGROUNDRESOURCE                                       1

extern void SRPAPI ViewClass_setBackgroundResource(void *Object,VS_INT32 resid);
typedef void (SRPAPI *ViewClass_setBackgroundResourceProc)(void *Object,VS_INT32 resid);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setFocusable;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETFOCUSABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETFOCUSABLE                                               0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETFOCUSABLE(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETFOCUSABLE                                                1

extern void SRPAPI ViewClass_setFocusable(void *Object,VS_BOOL focusable);
typedef void (SRPAPI *ViewClass_setFocusableProc)(void *Object,VS_BOOL focusable);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setId;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETID(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETID                                                      0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETID(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETID                                                       1

extern void SRPAPI ViewClass_setId(void *Object,VS_INT32 id);
typedef void (SRPAPI *ViewClass_setIdProc)(void *Object,VS_INT32 id);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setPadding;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETPADDING(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETPADDING                                                 0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETPADDING(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETPADDING                                                  4

extern void SRPAPI ViewClass_setPadding(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *ViewClass_setPaddingProc)(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setPressed;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETPRESSED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETPRESSED                                                 0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETPRESSED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETPRESSED                                                  1

extern void SRPAPI ViewClass_setPressed(void *Object,VS_BOOL pressed);
typedef void (SRPAPI *ViewClass_setPressedProc)(void *Object,VS_BOOL pressed);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setScrollBarStyle;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETSCROLLBARSTYLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETSCROLLBARSTYLE                                          0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETSCROLLBARSTYLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETSCROLLBARSTYLE                                           1

extern void SRPAPI ViewClass_setScrollBarStyle(void *Object,VS_INT32 style);
typedef void (SRPAPI *ViewClass_setScrollBarStyleProc)(void *Object,VS_INT32 style);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setScrollbarFadingEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETSCROLLBARFADINGENABLED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETSCROLLBARFADINGENABLED                                  0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETSCROLLBARFADINGENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETSCROLLBARFADINGENABLED                                   1

extern void SRPAPI ViewClass_setScrollbarFadingEnabled(void *Object,VS_BOOL fadeScrollbars);
typedef void (SRPAPI *ViewClass_setScrollbarFadingEnabledProc)(void *Object,VS_BOOL fadeScrollbars);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setSelected;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETSELECTED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETSELECTED                                                0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETSELECTED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETSELECTED                                                 1

extern void SRPAPI ViewClass_setSelected(void *Object,VS_BOOL selected);
typedef void (SRPAPI *ViewClass_setSelectedProc)(void *Object,VS_BOOL selected);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setVerticalFadingEdgeEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETVERTICALFADINGEDGEENABLED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETVERTICALFADINGEDGEENABLED                               0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETVERTICALFADINGEDGEENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETVERTICALFADINGEDGEENABLED                                1

extern void SRPAPI ViewClass_setVerticalFadingEdgeEnabled(void *Object,VS_BOOL verticalFadingEdgeEnabled);
typedef void (SRPAPI *ViewClass_setVerticalFadingEdgeEnabledProc)(void *Object,VS_BOOL verticalFadingEdgeEnabled);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setVerticalScrollBarEnabled;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETVERTICALSCROLLBARENABLED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETVERTICALSCROLLBARENABLED                                0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETVERTICALSCROLLBARENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETVERTICALSCROLLBARENABLED                                 1

extern void SRPAPI ViewClass_setVerticalScrollBarEnabled(void *Object,VS_BOOL verticalScrollBarEnabled);
typedef void (SRPAPI *ViewClass_setVerticalScrollBarEnabledProc)(void *Object,VS_BOOL verticalScrollBarEnabled);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setVisibility;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETVISIBILITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETVISIBILITY                                              0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETVISIBILITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETVISIBILITY                                               1

extern void SRPAPI ViewClass_setVisibility(void *Object,VS_INT32 visibility);
typedef void (SRPAPI *ViewClass_setVisibilityProc)(void *Object,VS_INT32 visibility);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onTouchEvent;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONTOUCHEVENT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONTOUCHEVENT                                               1
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONTOUCHEVENT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONTOUCHEVENT                                                1

extern VS_BOOL SRPAPI ViewClass_onTouchEvent(void *Object,VS_OBJPTR event);
typedef VS_BOOL (SRPAPI *ViewClass_onTouchEventProc)(void *Object,VS_OBJPTR event);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onLayout;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONLAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONLAYOUT                                                   0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONLAYOUT(X)  {{X[0].Type=1;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONLAYOUT                                                    5

extern void SRPAPI ViewClass_onLayout(void *Object,VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *ViewClass_onLayoutProc)(void *Object,VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onSuperLayout;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONSUPERLAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONSUPERLAYOUT                                              0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONSUPERLAYOUT(X)  {{X[0].Type=1;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONSUPERLAYOUT                                               5

extern void SRPAPI ViewClass_onSuperLayout(void *Object,VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *ViewClass_onSuperLayoutProc)(void *Object,VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onMeasure;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONMEASURE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONMEASURE                                                  0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONMEASURE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONMEASURE                                                   2

extern void SRPAPI ViewClass_onMeasure(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
typedef void (SRPAPI *ViewClass_onMeasureProc)(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onSuperMeasure;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONSUPERMEASURE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONSUPERMEASURE                                             0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONSUPERMEASURE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONSUPERMEASURE                                              2

extern void SRPAPI ViewClass_onSuperMeasure(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
typedef void (SRPAPI *ViewClass_onSuperMeasureProc)(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onSizeChanged;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONSIZECHANGED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONSIZECHANGED                                              0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONSIZECHANGED(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONSIZECHANGED                                               4

extern void SRPAPI ViewClass_onSizeChanged(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
typedef void (SRPAPI *ViewClass_onSizeChangedProc)(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_onSuperSizeChanged;
#define VSFUNCRETURNDEPEND_VIEWCLASS_ONSUPERSIZECHANGED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_ONSUPERSIZECHANGED                                         0
#define VSFUNCPARAMDEPEND_VIEWCLASS_ONSUPERSIZECHANGED(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_ONSUPERSIZECHANGED                                          4

extern void SRPAPI ViewClass_onSuperSizeChanged(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
typedef void (SRPAPI *ViewClass_onSuperSizeChangedProc)(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewClass_setMeasuredDimension;
#define VSFUNCRETURNDEPEND_VIEWCLASS_SETMEASUREDDIMENSION(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWCLASS_SETMEASUREDDIMENSION                                       0
#define VSFUNCPARAMDEPEND_VIEWCLASS_SETMEASUREDDIMENSION(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWCLASS_SETMEASUREDDIMENSION                                        2

extern void SRPAPI ViewClass_setMeasuredDimension(void *Object,VS_INT32 measuredWidth,VS_INT32 measuredHeight);
typedef void (SRPAPI *ViewClass_setMeasuredDimensionProc)(void *Object,VS_INT32 measuredWidth,VS_INT32 measuredHeight);

struct StructOfAttachViewClass{
};
struct StructOfViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_DIGITALCLOCKCLASS                                                                "DigitalClockClass"
extern VS_UUID VSOBJID_DigitalClockClass;
#define VSATTRDEPEND_DIGITALCLOCKCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_DIGITALCLOCKCLASS                                                          1
extern VS_INT32 SRPCALLBACK DigitalClockClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_DIGITALCLOCKCLASS_ANDROIDREFCOUNT                                              0
#define VSATTRNUMBER_DIGITALCLOCKCLASS                                                             1

struct StructOfAttachDigitalClockClass{
};
struct StructOfDigitalClockClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_INPUTSTREAMCLASS                                                                 "InputStreamClass"
extern VS_UUID VSOBJID_InputStreamClass;
#define VSATTRDEPEND_INPUTSTREAMCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_INPUTSTREAMCLASS                                                           1
extern VS_INT32 SRPCALLBACK InputStreamClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_INPUTSTREAMCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_INPUTSTREAMCLASS                                                              1

struct StructOfAttachInputStreamClass{
};
struct StructOfInputStreamClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_RADIOGROUPCLASS                                                                  "RadioGroupClass"
extern VS_UUID VSOBJID_RadioGroupClass;
#define VSATTRDEPEND_RADIOGROUPCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_RADIOGROUPCLASS                                                            4
extern VS_INT32 SRPCALLBACK RadioGroupClass_RequestRegisterObject( );

/*----output event: onCheckedChanged[LParam=RadioButton; Script( Event, RadioButton )]  Static Event */
extern VS_UUID VSOUTEVENTID_RadioGroupClass_onCheckedChanged;

/*------Variable Index Define */
#define VSATTRINDEX_RADIOGROUPCLASS_ANDROIDREFCOUNT                                                0
#define VSATTRINDEX_RADIOGROUPCLASS_VIEWGROUPQUEUE                                                 1
#define VSATTRINDEX_RADIOGROUPCLASS_VIEWQUEUE                                                      2
#define VSATTRINDEX_RADIOGROUPCLASS_OBJECTQUEUE                                                    3
#define VSATTRNUMBER_RADIOGROUPCLASS                                                               4

struct StructOfAttachRadioGroupClass{
};
struct StructOfRadioGroupClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TRANSITIONDRAWABLECLASS                                                          "TransitionDrawableClass"
extern VS_UUID VSOBJID_TransitionDrawableClass;
#define VSATTRDEPEND_TRANSITIONDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_TRANSITIONDRAWABLECLASS                                                    1
extern VS_INT32 SRPCALLBACK TransitionDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_TRANSITIONDRAWABLECLASS_ANDROIDREFCOUNT                                        0
#define VSATTRNUMBER_TRANSITIONDRAWABLECLASS                                                       1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_init;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_INIT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_INIT                                         1
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_INIT(X)  {{X[0].Type=40;}}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_INIT                                          1

extern VS_BOOL SRPAPI TransitionDrawableClass_init(void *Object,VS_PARAPKGPTR layers);
typedef VS_BOOL (SRPAPI *TransitionDrawableClass_initProc)(void *Object,VS_PARAPKGPTR layers);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_draw;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_DRAW                                         0
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_DRAW                                          1

extern void SRPAPI TransitionDrawableClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *TransitionDrawableClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_isCrossFadeEnabled;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_ISCROSSFADEENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_ISCROSSFADEENABLED                           1
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_ISCROSSFADEENABLED(X)  {}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_ISCROSSFADEENABLED                            0

extern VS_BOOL SRPAPI TransitionDrawableClass_isCrossFadeEnabled(void *Object);
typedef VS_BOOL (SRPAPI *TransitionDrawableClass_isCrossFadeEnabledProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_resetTransition;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_RESETTRANSITION(X)  {}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_RESETTRANSITION                              0
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_RESETTRANSITION(X)  {}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_RESETTRANSITION                               0

extern void SRPAPI TransitionDrawableClass_resetTransition(void *Object);
typedef void (SRPAPI *TransitionDrawableClass_resetTransitionProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_reverseTransition;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_REVERSETRANSITION(X)  {}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_REVERSETRANSITION                            0
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_REVERSETRANSITION(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_REVERSETRANSITION                             1

extern void SRPAPI TransitionDrawableClass_reverseTransition(void *Object,VS_INT32 duration);
typedef void (SRPAPI *TransitionDrawableClass_reverseTransitionProc)(void *Object,VS_INT32 duration);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_setCrossFadeEnabled;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_SETCROSSFADEENABLED(X)  {}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_SETCROSSFADEENABLED                          0
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_SETCROSSFADEENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_SETCROSSFADEENABLED                           1

extern void SRPAPI TransitionDrawableClass_setCrossFadeEnabled(void *Object,VS_BOOL enabled);
typedef void (SRPAPI *TransitionDrawableClass_setCrossFadeEnabledProc)(void *Object,VS_BOOL enabled);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TransitionDrawableClass_startTransition;
#define VSFUNCRETURNDEPEND_TRANSITIONDRAWABLECLASS_STARTTRANSITION(X)  {}
#define VSFUNCRETURNDEPENDNUM_TRANSITIONDRAWABLECLASS_STARTTRANSITION                              0
#define VSFUNCPARAMDEPEND_TRANSITIONDRAWABLECLASS_STARTTRANSITION(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TRANSITIONDRAWABLECLASS_STARTTRANSITION                               1

extern void SRPAPI TransitionDrawableClass_startTransition(void *Object,VS_INT32 durationMillis);
typedef void (SRPAPI *TransitionDrawableClass_startTransitionProc)(void *Object,VS_INT32 durationMillis);

struct StructOfAttachTransitionDrawableClass{
};
struct StructOfTransitionDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TYPEFACECLASS                                                                    "TypefaceClass"
extern VS_UUID VSOBJID_TypefaceClass;
#define VSATTRDEPEND_TYPEFACECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_TYPEFACECLASS                                                              1
extern VS_INT32 SRPCALLBACK TypefaceClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_TYPEFACECLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRNUMBER_TYPEFACECLASS                                                                 1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_create;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_CREATE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_CREATE                                                 1
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_CREATE(X)  {{X[0].Type=30;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_CREATE                                                  2

extern VS_BOOL SRPAPI TypefaceClass_create(void *Object,VS_CHAR * familyName,VS_INT32 style);
typedef VS_BOOL (SRPAPI *TypefaceClass_createProc)(void *Object,VS_CHAR * familyName,VS_INT32 style);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_createFromFile;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_CREATEFROMFILE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_CREATEFROMFILE                                         1
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_CREATEFROMFILE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_CREATEFROMFILE                                          1

extern VS_BOOL SRPAPI TypefaceClass_createFromFile(void *Object,VS_CHAR * path);
typedef VS_BOOL (SRPAPI *TypefaceClass_createFromFileProc)(void *Object,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_createFromAsset;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_CREATEFROMASSET(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_CREATEFROMASSET                                        1
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_CREATEFROMASSET(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_CREATEFROMASSET                                         1

extern VS_BOOL SRPAPI TypefaceClass_createFromAsset(void *Object,VS_CHAR * path);
typedef VS_BOOL (SRPAPI *TypefaceClass_createFromAssetProc)(void *Object,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_defaultFromStyle;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_DEFAULTFROMSTYLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_DEFAULTFROMSTYLE                                       0
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_DEFAULTFROMSTYLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_DEFAULTFROMSTYLE                                        1

extern void SRPAPI TypefaceClass_defaultFromStyle(void *Object,VS_INT32 style);
typedef void (SRPAPI *TypefaceClass_defaultFromStyleProc)(void *Object,VS_INT32 style);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_getStyle;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_GETSTYLE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_GETSTYLE                                               1
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_GETSTYLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_GETSTYLE                                                0

extern VS_INT32 SRPAPI TypefaceClass_getStyle(void *Object);
typedef VS_INT32 (SRPAPI *TypefaceClass_getStyleProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_isBold;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_ISBOLD(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_ISBOLD                                                 1
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_ISBOLD(X)  {}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_ISBOLD                                                  0

extern VS_BOOL SRPAPI TypefaceClass_isBold(void *Object);
typedef VS_BOOL (SRPAPI *TypefaceClass_isBoldProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TypefaceClass_isItalic;
#define VSFUNCRETURNDEPEND_TYPEFACECLASS_ISITALIC(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TYPEFACECLASS_ISITALIC                                               1
#define VSFUNCPARAMDEPEND_TYPEFACECLASS_ISITALIC(X)  {}
#define VSFUNCPARAMDEPENDNUM_TYPEFACECLASS_ISITALIC                                                0

extern VS_BOOL SRPAPI TypefaceClass_isItalic(void *Object);
typedef VS_BOOL (SRPAPI *TypefaceClass_isItalicProc)(void *Object);

struct StructOfAttachTypefaceClass{
};
struct StructOfTypefaceClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SURFACEVIEWCLASS                                                                 "SurfaceViewClass"
extern VS_UUID VSOBJID_SurfaceViewClass;
#define VSATTRDEPEND_SURFACEVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_SURFACEVIEWCLASS                                                           1
extern VS_INT32 SRPCALLBACK SurfaceViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_SURFACEVIEWCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_SURFACEVIEWCLASS                                                              1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_draw;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_DRAW                                                0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_DRAW                                                 1

extern void SRPAPI SurfaceViewClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *SurfaceViewClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_setVisibility;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_SETVISIBILITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_SETVISIBILITY                                       0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_SETVISIBILITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_SETVISIBILITY                                        1

extern void SRPAPI SurfaceViewClass_setVisibility(void *Object,VS_INT32 visibility);
typedef void (SRPAPI *SurfaceViewClass_setVisibilityProc)(void *Object,VS_INT32 visibility);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_setZOrderMediaOverlay;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_SETZORDERMEDIAOVERLAY(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_SETZORDERMEDIAOVERLAY                               0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_SETZORDERMEDIAOVERLAY(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_SETZORDERMEDIAOVERLAY                                1

extern void SRPAPI SurfaceViewClass_setZOrderMediaOverlay(void *Object,VS_BOOL isMediaOverlay);
typedef void (SRPAPI *SurfaceViewClass_setZOrderMediaOverlayProc)(void *Object,VS_BOOL isMediaOverlay);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_setZOrderOnTop;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_SETZORDERONTOP(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_SETZORDERONTOP                                      0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_SETZORDERONTOP(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_SETZORDERONTOP                                       1

extern void SRPAPI SurfaceViewClass_setZOrderOnTop(void *Object,VS_BOOL onTop);
typedef void (SRPAPI *SurfaceViewClass_setZOrderOnTopProc)(void *Object,VS_BOOL onTop);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_isCreating;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_ISCREATING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_ISCREATING                                          1
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_ISCREATING(X)  {}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_ISCREATING                                           0

extern VS_BOOL SRPAPI SurfaceViewClass_isCreating(void *Object);
typedef VS_BOOL (SRPAPI *SurfaceViewClass_isCreatingProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_lockCanvas;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_LOCKCANVAS(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_LOCKCANVAS                                          1
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_LOCKCANVAS(X)  {}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_LOCKCANVAS                                           0

extern VS_OBJPTR SRPAPI SurfaceViewClass_lockCanvas(void *Object);
typedef VS_OBJPTR (SRPAPI *SurfaceViewClass_lockCanvasProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_lockCanvas1;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_LOCKCANVAS1(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_LOCKCANVAS1                                         1
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_LOCKCANVAS1(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_LOCKCANVAS1                                          1

extern VS_OBJPTR SRPAPI SurfaceViewClass_lockCanvas1(void *Object,VS_OBJPTR dirty);
typedef VS_OBJPTR (SRPAPI *SurfaceViewClass_lockCanvas1Proc)(void *Object,VS_OBJPTR dirty);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_unlockCanvasAndPost;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_UNLOCKCANVASANDPOST(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_UNLOCKCANVASANDPOST                                 0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_UNLOCKCANVASANDPOST(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_UNLOCKCANVASANDPOST                                  1

extern void SRPAPI SurfaceViewClass_unlockCanvasAndPost(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *SurfaceViewClass_unlockCanvasAndPostProc)(void *Object,VS_OBJPTR canvas);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_surfaceChanged;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_SURFACECHANGED(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_SURFACECHANGED                                      0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_SURFACECHANGED(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_SURFACECHANGED                                       3

extern void SRPAPI SurfaceViewClass_surfaceChanged(void *Object,VS_INT32 format,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *SurfaceViewClass_surfaceChangedProc)(void *Object,VS_INT32 format,VS_INT32 width,VS_INT32 height);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_surfaceCreated;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_SURFACECREATED(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_SURFACECREATED                                      0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_SURFACECREATED(X)  {}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_SURFACECREATED                                       0

extern void SRPAPI SurfaceViewClass_surfaceCreated(void *Object);
typedef void (SRPAPI *SurfaceViewClass_surfaceCreatedProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_SurfaceViewClass_surfaceDestroyed;
#define VSFUNCRETURNDEPEND_SURFACEVIEWCLASS_SURFACEDESTROYED(X)  {}
#define VSFUNCRETURNDEPENDNUM_SURFACEVIEWCLASS_SURFACEDESTROYED                                    0
#define VSFUNCPARAMDEPEND_SURFACEVIEWCLASS_SURFACEDESTROYED(X)  {}
#define VSFUNCPARAMDEPENDNUM_SURFACEVIEWCLASS_SURFACEDESTROYED                                     0

extern void SRPAPI SurfaceViewClass_surfaceDestroyed(void *Object);
typedef void (SRPAPI *SurfaceViewClass_surfaceDestroyedProc)(void *Object);

struct StructOfAttachSurfaceViewClass{
};
struct StructOfSurfaceViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TIMEPICKERCLASS                                                                  "TimePickerClass"
extern VS_UUID VSOBJID_TimePickerClass;
#define VSATTRDEPEND_TIMEPICKERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_TIMEPICKERCLASS                                                            4
extern VS_INT32 SRPCALLBACK TimePickerClass_RequestRegisterObject( );

/*----output event: onTimeChanged[]  Static Event */
extern VS_UUID VSOUTEVENTID_TimePickerClass_onTimeChanged;

/*------Variable Index Define */
#define VSATTRINDEX_TIMEPICKERCLASS_ANDROIDREFCOUNT                                                0
#define VSATTRINDEX_TIMEPICKERCLASS_VIEWGROUPQUEUE                                                 1
#define VSATTRINDEX_TIMEPICKERCLASS_VIEWQUEUE                                                      2
#define VSATTRINDEX_TIMEPICKERCLASS_OBJECTQUEUE                                                    3
#define VSATTRNUMBER_TIMEPICKERCLASS                                                               4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_TimePickerClass_setCurrentHour;
#define VSFUNCRETURNDEPEND_TIMEPICKERCLASS_SETCURRENTHOUR(X)  {}
#define VSFUNCRETURNDEPENDNUM_TIMEPICKERCLASS_SETCURRENTHOUR                                       0
#define VSFUNCPARAMDEPEND_TIMEPICKERCLASS_SETCURRENTHOUR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TIMEPICKERCLASS_SETCURRENTHOUR                                        1

extern void SRPAPI TimePickerClass_setCurrentHour(void *Object,VS_INT32 currentHour);
typedef void (SRPAPI *TimePickerClass_setCurrentHourProc)(void *Object,VS_INT32 currentHour);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TimePickerClass_setCurrentMinute;
#define VSFUNCRETURNDEPEND_TIMEPICKERCLASS_SETCURRENTMINUTE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TIMEPICKERCLASS_SETCURRENTMINUTE                                     0
#define VSFUNCPARAMDEPEND_TIMEPICKERCLASS_SETCURRENTMINUTE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TIMEPICKERCLASS_SETCURRENTMINUTE                                      1

extern void SRPAPI TimePickerClass_setCurrentMinute(void *Object,VS_INT32 currentMinute);
typedef void (SRPAPI *TimePickerClass_setCurrentMinuteProc)(void *Object,VS_INT32 currentMinute);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TimePickerClass_setIs24HourView;
#define VSFUNCRETURNDEPEND_TIMEPICKERCLASS_SETIS24HOURVIEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_TIMEPICKERCLASS_SETIS24HOURVIEW                                      0
#define VSFUNCPARAMDEPEND_TIMEPICKERCLASS_SETIS24HOURVIEW(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TIMEPICKERCLASS_SETIS24HOURVIEW                                       1

extern void SRPAPI TimePickerClass_setIs24HourView(void *Object,VS_BOOL is24HourView);
typedef void (SRPAPI *TimePickerClass_setIs24HourViewProc)(void *Object,VS_BOOL is24HourView);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TimePickerClass_getCurrentHour;
#define VSFUNCRETURNDEPEND_TIMEPICKERCLASS_GETCURRENTHOUR(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TIMEPICKERCLASS_GETCURRENTHOUR                                       1
#define VSFUNCPARAMDEPEND_TIMEPICKERCLASS_GETCURRENTHOUR(X)  {}
#define VSFUNCPARAMDEPENDNUM_TIMEPICKERCLASS_GETCURRENTHOUR                                        0

extern VS_INT32 SRPAPI TimePickerClass_getCurrentHour(void *Object);
typedef VS_INT32 (SRPAPI *TimePickerClass_getCurrentHourProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TimePickerClass_getCurrentMinute;
#define VSFUNCRETURNDEPEND_TIMEPICKERCLASS_GETCURRENTMINUTE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_TIMEPICKERCLASS_GETCURRENTMINUTE                                     1
#define VSFUNCPARAMDEPEND_TIMEPICKERCLASS_GETCURRENTMINUTE(X)  {}
#define VSFUNCPARAMDEPENDNUM_TIMEPICKERCLASS_GETCURRENTMINUTE                                      0

extern VS_INT32 SRPAPI TimePickerClass_getCurrentMinute(void *Object);
typedef VS_INT32 (SRPAPI *TimePickerClass_getCurrentMinuteProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TimePickerClass_is24HourView;
#define VSFUNCRETURNDEPEND_TIMEPICKERCLASS_IS24HOURVIEW(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_TIMEPICKERCLASS_IS24HOURVIEW                                         1
#define VSFUNCPARAMDEPEND_TIMEPICKERCLASS_IS24HOURVIEW(X)  {}
#define VSFUNCPARAMDEPENDNUM_TIMEPICKERCLASS_IS24HOURVIEW                                          0

extern VS_BOOL SRPAPI TimePickerClass_is24HourView(void *Object);
typedef VS_BOOL (SRPAPI *TimePickerClass_is24HourViewProc)(void *Object);

struct StructOfAttachTimePickerClass{
};
struct StructOfTimePickerClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ANALOGCLOCKCLASS                                                                 "AnalogClockClass"
extern VS_UUID VSOBJID_AnalogClockClass;
#define VSATTRDEPEND_ANALOGCLOCKCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ANALOGCLOCKCLASS                                                           1
extern VS_INT32 SRPCALLBACK AnalogClockClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ANALOGCLOCKCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_ANALOGCLOCKCLASS                                                              1

struct StructOfAttachAnalogClockClass{
};
struct StructOfAnalogClockClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_OBJECTBASECLASS                                                                  "ObjectBaseClass"
extern VS_UUID VSOBJID_ObjectBaseClass;
#define VSATTRDEPEND_OBJECTBASECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_OBJECTBASECLASS                                                            1
extern VS_INT32 SRPCALLBACK ObjectBaseClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_OBJECTBASECLASS_ANDROIDREFCOUNT                                                0
#define VSATTRNUMBER_OBJECTBASECLASS                                                               1

struct StructOfAttachObjectBaseClass{
};
struct StructOfObjectBaseClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_LINEARLAYOUTCLASS                                                                "LinearLayoutClass"
extern VS_UUID VSOBJID_LinearLayoutClass;
#define VSATTRDEPEND_LINEARLAYOUTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_LINEARLAYOUTCLASS                                                          4
extern VS_INT32 SRPCALLBACK LinearLayoutClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_LINEARLAYOUTCLASS_ANDROIDREFCOUNT                                              0
#define VSATTRINDEX_LINEARLAYOUTCLASS_VIEWGROUPQUEUE                                               1
#define VSATTRINDEX_LINEARLAYOUTCLASS_VIEWQUEUE                                                    2
#define VSATTRINDEX_LINEARLAYOUTCLASS_OBJECTQUEUE                                                  3
#define VSATTRNUMBER_LINEARLAYOUTCLASS                                                             4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_LinearLayoutClass_setGravity;
#define VSFUNCRETURNDEPEND_LINEARLAYOUTCLASS_SETGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_LINEARLAYOUTCLASS_SETGRAVITY                                         0
#define VSFUNCPARAMDEPEND_LINEARLAYOUTCLASS_SETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LINEARLAYOUTCLASS_SETGRAVITY                                          1

extern void SRPAPI LinearLayoutClass_setGravity(void *Object,VS_INT32 gravity);
typedef void (SRPAPI *LinearLayoutClass_setGravityProc)(void *Object,VS_INT32 gravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LinearLayoutClass_setHorizontalGravity;
#define VSFUNCRETURNDEPEND_LINEARLAYOUTCLASS_SETHORIZONTALGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_LINEARLAYOUTCLASS_SETHORIZONTALGRAVITY                               0
#define VSFUNCPARAMDEPEND_LINEARLAYOUTCLASS_SETHORIZONTALGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LINEARLAYOUTCLASS_SETHORIZONTALGRAVITY                                1

extern void SRPAPI LinearLayoutClass_setHorizontalGravity(void *Object,VS_INT32 horizontalGravity);
typedef void (SRPAPI *LinearLayoutClass_setHorizontalGravityProc)(void *Object,VS_INT32 horizontalGravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LinearLayoutClass_setOrientation;
#define VSFUNCRETURNDEPEND_LINEARLAYOUTCLASS_SETORIENTATION(X)  {}
#define VSFUNCRETURNDEPENDNUM_LINEARLAYOUTCLASS_SETORIENTATION                                     0
#define VSFUNCPARAMDEPEND_LINEARLAYOUTCLASS_SETORIENTATION(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_LINEARLAYOUTCLASS_SETORIENTATION                                      1

extern void SRPAPI LinearLayoutClass_setOrientation(void *Object,VS_CHAR * orientation);
typedef void (SRPAPI *LinearLayoutClass_setOrientationProc)(void *Object,VS_CHAR * orientation);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LinearLayoutClass_setVerticalGravity;
#define VSFUNCRETURNDEPEND_LINEARLAYOUTCLASS_SETVERTICALGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_LINEARLAYOUTCLASS_SETVERTICALGRAVITY                                 0
#define VSFUNCPARAMDEPEND_LINEARLAYOUTCLASS_SETVERTICALGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LINEARLAYOUTCLASS_SETVERTICALGRAVITY                                  1

extern void SRPAPI LinearLayoutClass_setVerticalGravity(void *Object,VS_INT32 verticalGravity);
typedef void (SRPAPI *LinearLayoutClass_setVerticalGravityProc)(void *Object,VS_INT32 verticalGravity);

struct StructOfAttachLinearLayoutClass{
};
struct StructOfLinearLayoutClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ACTIVITYCLASS                                                                    "ActivityClass"
extern VS_UUID VSOBJID_ActivityClass;
#define VSATTRDEPEND_ACTIVITYCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_ACTIVITYCLASS                                                              4
extern VS_INT32 SRPCALLBACK ActivityClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ACTIVITYCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRINDEX_ACTIVITYCLASS_VIEWGROUPQUEUE                                                   1
#define VSATTRINDEX_ACTIVITYCLASS_VIEWQUEUE                                                        2
#define VSATTRINDEX_ACTIVITYCLASS_OBJECTQUEUE                                                      3
#define VSATTRNUMBER_ACTIVITYCLASS                                                                 4

/*------Local Define Function */
/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onStart;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONSTART(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONSTART                                                0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONSTART(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONSTART                                                 0

extern void SRPAPI ActivityClass_onStart(void *Object);
typedef void (SRPAPI *ActivityClass_onStartProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getSaveInstanceState;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETSAVEINSTANCESTATE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETSAVEINSTANCESTATE                                   1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETSAVEINSTANCESTATE(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETSAVEINSTANCESTATE                                    0

extern VS_OBJPTR SRPAPI ActivityClass_getSaveInstanceState(void *Object);
typedef VS_OBJPTR (SRPAPI *ActivityClass_getSaveInstanceStateProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onSaveInstanceState;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONSAVEINSTANCESTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONSAVEINSTANCESTATE                                    0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONSAVEINSTANCESTATE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONSAVEINSTANCESTATE                                     1

extern void SRPAPI ActivityClass_onSaveInstanceState(void *Object,VS_OBJPTR savedInstanceState);
typedef void (SRPAPI *ActivityClass_onSaveInstanceStateProc)(void *Object,VS_OBJPTR savedInstanceState);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onRestoreInstanceState;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONRESTOREINSTANCESTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONRESTOREINSTANCESTATE                                 0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONRESTOREINSTANCESTATE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONRESTOREINSTANCESTATE                                  1

extern void SRPAPI ActivityClass_onRestoreInstanceState(void *Object,VS_OBJPTR savedInstanceState);
typedef void (SRPAPI *ActivityClass_onRestoreInstanceStateProc)(void *Object,VS_OBJPTR savedInstanceState);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onPause;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONPAUSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONPAUSE                                                0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONPAUSE(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONPAUSE                                                 0

extern void SRPAPI ActivityClass_onPause(void *Object);
typedef void (SRPAPI *ActivityClass_onPauseProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onResume;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONRESUME(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONRESUME                                               0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONRESUME(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONRESUME                                                0

extern void SRPAPI ActivityClass_onResume(void *Object);
typedef void (SRPAPI *ActivityClass_onResumeProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onDestroy;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONDESTROY(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONDESTROY                                              0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONDESTROY(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONDESTROY                                               0

extern void SRPAPI ActivityClass_onDestroy(void *Object);
typedef void (SRPAPI *ActivityClass_onDestroyProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_exit;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_EXIT(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_EXIT                                                   0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_EXIT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_EXIT                                                    1

extern void SRPAPI ActivityClass_exit(void *Object,VS_INT32 code);
typedef void (SRPAPI *ActivityClass_exitProc)(void *Object,VS_INT32 code);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_onTouchEvent;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_ONTOUCHEVENT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_ONTOUCHEVENT                                           1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_ONTOUCHEVENT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_ONTOUCHEVENT                                            1

extern VS_BOOL SRPAPI ActivityClass_onTouchEvent(void *Object,VS_OBJPTR event);
typedef VS_BOOL (SRPAPI *ActivityClass_onTouchEventProc)(void *Object,VS_OBJPTR event);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_setTitle;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_SETTITLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_SETTITLE                                               0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_SETTITLE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_SETTITLE                                                1

extern void SRPAPI ActivityClass_setTitle(void *Object,VS_CHAR * title);
typedef void (SRPAPI *ActivityClass_setTitleProc)(void *Object,VS_CHAR * title);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_setTitleColor;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_SETTITLECOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_SETTITLECOLOR                                          0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_SETTITLECOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_SETTITLECOLOR                                           1

extern void SRPAPI ActivityClass_setTitleColor(void *Object,VS_INT32 textColor);
typedef void (SRPAPI *ActivityClass_setTitleColorProc)(void *Object,VS_INT32 textColor);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_runScript;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_RUNSCRIPT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_RUNSCRIPT                                              1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_RUNSCRIPT(X)  {{X[0].Type=30;}{X[1].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_RUNSCRIPT                                               2

extern VS_BOOL SRPAPI ActivityClass_runScript(void *Object,VS_CHAR * scriptInterface,VS_CHAR * script);
typedef VS_BOOL (SRPAPI *ActivityClass_runScriptProc)(void *Object,VS_CHAR * scriptInterface,VS_CHAR * script);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_DoFile;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_DOFILE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_DOFILE                                                 1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_DOFILE(X)  {{X[0].Type=30;}{X[1].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_DOFILE                                                  2

extern VS_BOOL SRPAPI ActivityClass_DoFile(void *Object,VS_CHAR * scriptInterface,VS_CHAR * path);
typedef VS_BOOL (SRPAPI *ActivityClass_DoFileProc)(void *Object,VS_CHAR * scriptInterface,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_DoAssetsFile;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_DOASSETSFILE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_DOASSETSFILE                                           1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_DOASSETSFILE(X)  {{X[0].Type=30;}{X[1].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_DOASSETSFILE                                            2

extern VS_BOOL SRPAPI ActivityClass_DoAssetsFile(void *Object,VS_CHAR * scriptInterface,VS_CHAR * path);
typedef VS_BOOL (SRPAPI *ActivityClass_DoAssetsFileProc)(void *Object,VS_CHAR * scriptInterface,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_pushActivity;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_PUSHACTIVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_PUSHACTIVITY                                           0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_PUSHACTIVITY(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_PUSHACTIVITY                                            1

extern void SRPAPI ActivityClass_pushActivity(void *Object,VS_OBJPTR activity);
typedef void (SRPAPI *ActivityClass_pushActivityProc)(void *Object,VS_OBJPTR activity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_popActivity;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_POPACTIVITY(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_POPACTIVITY                                            1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_POPACTIVITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_POPACTIVITY                                             0

extern VS_OBJPTR SRPAPI ActivityClass_popActivity(void *Object);
typedef VS_OBJPTR (SRPAPI *ActivityClass_popActivityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getCurrent;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETCURRENT(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETCURRENT                                             1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETCURRENT(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETCURRENT                                              0

extern VS_OBJPTR SRPAPI ActivityClass_getCurrent(void *Object);
typedef VS_OBJPTR (SRPAPI *ActivityClass_getCurrentProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_setResource;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_SETRESOURCE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_SETRESOURCE                                            0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_SETRESOURCE(X)  {{X[0].Type=30;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_SETRESOURCE                                             2

extern void SRPAPI ActivityClass_setResource(void *Object,VS_CHAR * ResourceName,VS_INT32 ResourceID);
typedef void (SRPAPI *ActivityClass_setResourceProc)(void *Object,VS_CHAR * ResourceName,VS_INT32 ResourceID);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getResource;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETRESOURCE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETRESOURCE                                            1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETRESOURCE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETRESOURCE                                             1

extern VS_INT32 SRPAPI ActivityClass_getResource(void *Object,VS_CHAR * ResourceName);
typedef VS_INT32 (SRPAPI *ActivityClass_getResourceProc)(void *Object,VS_CHAR * ResourceName);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getAssetFileDescriptor;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETASSETFILEDESCRIPTOR(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETASSETFILEDESCRIPTOR                                 1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETASSETFILEDESCRIPTOR(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETASSETFILEDESCRIPTOR                                  1

extern VS_OBJPTR SRPAPI ActivityClass_getAssetFileDescriptor(void *Object,VS_CHAR * path);
typedef VS_OBJPTR (SRPAPI *ActivityClass_getAssetFileDescriptorProc)(void *Object,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getWifiMacAddress;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETWIFIMACADDRESS(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETWIFIMACADDRESS                                      1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETWIFIMACADDRESS(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETWIFIMACADDRESS                                       0

extern VS_CHAR * SRPAPI ActivityClass_getWifiMacAddress(void *Object);
typedef VS_CHAR * (SRPAPI *ActivityClass_getWifiMacAddressProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getLocalIpAddress;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETLOCALIPADDRESS(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETLOCALIPADDRESS                                      1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETLOCALIPADDRESS(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETLOCALIPADDRESS                                       0

extern VS_CHAR * SRPAPI ActivityClass_getLocalIpAddress(void *Object);
typedef VS_CHAR * (SRPAPI *ActivityClass_getLocalIpAddressProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_openWifi;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_OPENWIFI(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_OPENWIFI                                               1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_OPENWIFI(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_OPENWIFI                                                0

extern VS_BOOL SRPAPI ActivityClass_openWifi(void *Object);
typedef VS_BOOL (SRPAPI *ActivityClass_openWifiProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_closeWifi;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_CLOSEWIFI(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_CLOSEWIFI                                              0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_CLOSEWIFI(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_CLOSEWIFI                                               0

extern void SRPAPI ActivityClass_closeWifi(void *Object);
typedef void (SRPAPI *ActivityClass_closeWifiProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_keepScreenOn;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_KEEPSCREENON(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_KEEPSCREENON                                           0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_KEEPSCREENON(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_KEEPSCREENON                                            1

extern void SRPAPI ActivityClass_keepScreenOn(void *Object,VS_BOOL flag);
typedef void (SRPAPI *ActivityClass_keepScreenOnProc)(void *Object,VS_BOOL flag);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_startActivity;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_STARTACTIVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_STARTACTIVITY                                          0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_STARTACTIVITY(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_STARTACTIVITY                                           1

extern void SRPAPI ActivityClass_startActivity(void *Object,VS_OBJPTR intent);
typedef void (SRPAPI *ActivityClass_startActivityProc)(void *Object,VS_OBJPTR intent);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_requestWindowFeature;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_REQUESTWINDOWFEATURE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_REQUESTWINDOWFEATURE                                   1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_REQUESTWINDOWFEATURE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_REQUESTWINDOWFEATURE                                    1

extern VS_BOOL SRPAPI ActivityClass_requestWindowFeature(void *Object,VS_INT32 featureId);
typedef VS_BOOL (SRPAPI *ActivityClass_requestWindowFeatureProc)(void *Object,VS_INT32 featureId);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_setDefaultKeyMode;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_SETDEFAULTKEYMODE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_SETDEFAULTKEYMODE                                      0
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_SETDEFAULTKEYMODE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_SETDEFAULTKEYMODE                                       1

extern void SRPAPI ActivityClass_setDefaultKeyMode(void *Object,VS_INT32 mode);
typedef void (SRPAPI *ActivityClass_setDefaultKeyModeProc)(void *Object,VS_INT32 mode);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getHeight;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETHEIGHT                                              1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETHEIGHT                                               0

extern VS_INT32 SRPAPI ActivityClass_getHeight(void *Object);
typedef VS_INT32 (SRPAPI *ActivityClass_getHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getWidth;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETWIDTH                                               1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETWIDTH                                                0

extern VS_INT32 SRPAPI ActivityClass_getWidth(void *Object);
typedef VS_INT32 (SRPAPI *ActivityClass_getWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getTransitionDrawable;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETTRANSITIONDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETTRANSITIONDRAWABLE                                  1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETTRANSITIONDRAWABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETTRANSITIONDRAWABLE                                   1

extern VS_OBJPTR SRPAPI ActivityClass_getTransitionDrawable(void *Object,VS_INT32 resid);
typedef VS_OBJPTR (SRPAPI *ActivityClass_getTransitionDrawableProc)(void *Object,VS_INT32 resid);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ActivityClass_getBitmapDrawable;
#define VSFUNCRETURNDEPEND_ACTIVITYCLASS_GETBITMAPDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ACTIVITYCLASS_GETBITMAPDRAWABLE                                      1
#define VSFUNCPARAMDEPEND_ACTIVITYCLASS_GETBITMAPDRAWABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ACTIVITYCLASS_GETBITMAPDRAWABLE                                       1

extern VS_OBJPTR SRPAPI ActivityClass_getBitmapDrawable(void *Object,VS_INT32 resid);
typedef VS_OBJPTR (SRPAPI *ActivityClass_getBitmapDrawableProc)(void *Object,VS_INT32 resid);

struct StructOfAttachActivityClass{
};
struct StructOfActivityClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----local attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_RADIOBUTTONCLASS                                                                 "RadioButtonClass"
extern VS_UUID VSOBJID_RadioButtonClass;
#define VSATTRDEPEND_RADIOBUTTONCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_RADIOBUTTONCLASS                                                           1
extern VS_INT32 SRPCALLBACK RadioButtonClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_RADIOBUTTONCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_RADIOBUTTONCLASS                                                              1

struct StructOfAttachRadioButtonClass{
};
struct StructOfRadioButtonClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_INTENTCLASS                                                                      "IntentClass"
extern VS_UUID VSOBJID_IntentClass;
#define VSATTRDEPEND_INTENTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_INTENTCLASS                                                                1
extern VS_INT32 SRPCALLBACK IntentClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_INTENTCLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_INTENTCLASS                                                                   1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_IntentClass_setAction;
#define VSFUNCRETURNDEPEND_INTENTCLASS_SETACTION(X)  {}
#define VSFUNCRETURNDEPENDNUM_INTENTCLASS_SETACTION                                                0
#define VSFUNCPARAMDEPEND_INTENTCLASS_SETACTION(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_INTENTCLASS_SETACTION                                                 1

extern void SRPAPI IntentClass_setAction(void *Object,VS_CHAR * action);
typedef void (SRPAPI *IntentClass_setActionProc)(void *Object,VS_CHAR * action);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_IntentClass_setData;
#define VSFUNCRETURNDEPEND_INTENTCLASS_SETDATA(X)  {}
#define VSFUNCRETURNDEPENDNUM_INTENTCLASS_SETDATA                                                  0
#define VSFUNCPARAMDEPEND_INTENTCLASS_SETDATA(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_INTENTCLASS_SETDATA                                                   1

extern void SRPAPI IntentClass_setData(void *Object,VS_CHAR * data);
typedef void (SRPAPI *IntentClass_setDataProc)(void *Object,VS_CHAR * data);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_IntentClass_setType;
#define VSFUNCRETURNDEPEND_INTENTCLASS_SETTYPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_INTENTCLASS_SETTYPE                                                  0
#define VSFUNCPARAMDEPEND_INTENTCLASS_SETTYPE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_INTENTCLASS_SETTYPE                                                   1

extern void SRPAPI IntentClass_setType(void *Object,VS_CHAR * type);
typedef void (SRPAPI *IntentClass_setTypeProc)(void *Object,VS_CHAR * type);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_IntentClass_putExtra;
#define VSFUNCRETURNDEPEND_INTENTCLASS_PUTEXTRA(X)  {}
#define VSFUNCRETURNDEPENDNUM_INTENTCLASS_PUTEXTRA                                                 0
#define VSFUNCPARAMDEPEND_INTENTCLASS_PUTEXTRA(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_INTENTCLASS_PUTEXTRA                                                  1

extern void SRPAPI IntentClass_putExtra(void *Object,VS_CHAR * value);
typedef void (SRPAPI *IntentClass_putExtraProc)(void *Object,VS_CHAR * value);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_IntentClass_putExtraEx;
#define VSFUNCRETURNDEPEND_INTENTCLASS_PUTEXTRAEX(X)  {}
#define VSFUNCRETURNDEPENDNUM_INTENTCLASS_PUTEXTRAEX                                               0
#define VSFUNCPARAMDEPEND_INTENTCLASS_PUTEXTRAEX(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_INTENTCLASS_PUTEXTRAEX                                                1

extern void SRPAPI IntentClass_putExtraEx(void *Object,VS_CHAR * paraPkg);
typedef void (SRPAPI *IntentClass_putExtraExProc)(void *Object,VS_CHAR * paraPkg);

struct StructOfAttachIntentClass{
};
struct StructOfIntentClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_DATEPICKERCLASS                                                                  "DatePickerClass"
extern VS_UUID VSOBJID_DatePickerClass;
#define VSATTRDEPEND_DATEPICKERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_DATEPICKERCLASS                                                            4
extern VS_INT32 SRPCALLBACK DatePickerClass_RequestRegisterObject( );

/*----output event: onDateChanged[]  Static Event */
extern VS_UUID VSOUTEVENTID_DatePickerClass_onDateChanged;

/*------Variable Index Define */
#define VSATTRINDEX_DATEPICKERCLASS_ANDROIDREFCOUNT                                                0
#define VSATTRINDEX_DATEPICKERCLASS_VIEWGROUPQUEUE                                                 1
#define VSATTRINDEX_DATEPICKERCLASS_VIEWQUEUE                                                      2
#define VSATTRINDEX_DATEPICKERCLASS_OBJECTQUEUE                                                    3
#define VSATTRNUMBER_DATEPICKERCLASS                                                               4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_DatePickerClass_updateDate;
#define VSFUNCRETURNDEPEND_DATEPICKERCLASS_UPDATEDATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_DATEPICKERCLASS_UPDATEDATE                                           0
#define VSFUNCPARAMDEPEND_DATEPICKERCLASS_UPDATEDATE(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_DATEPICKERCLASS_UPDATEDATE                                            3

extern void SRPAPI DatePickerClass_updateDate(void *Object,VS_INT32 year,VS_INT32 monthOfYear,VS_INT32 dayOfMonth);
typedef void (SRPAPI *DatePickerClass_updateDateProc)(void *Object,VS_INT32 year,VS_INT32 monthOfYear,VS_INT32 dayOfMonth);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DatePickerClass_getDayOfMonth;
#define VSFUNCRETURNDEPEND_DATEPICKERCLASS_GETDAYOFMONTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DATEPICKERCLASS_GETDAYOFMONTH                                        1
#define VSFUNCPARAMDEPEND_DATEPICKERCLASS_GETDAYOFMONTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_DATEPICKERCLASS_GETDAYOFMONTH                                         0

extern VS_INT32 SRPAPI DatePickerClass_getDayOfMonth(void *Object);
typedef VS_INT32 (SRPAPI *DatePickerClass_getDayOfMonthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DatePickerClass_getMonth;
#define VSFUNCRETURNDEPEND_DATEPICKERCLASS_GETMONTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DATEPICKERCLASS_GETMONTH                                             1
#define VSFUNCPARAMDEPEND_DATEPICKERCLASS_GETMONTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_DATEPICKERCLASS_GETMONTH                                              0

extern VS_INT32 SRPAPI DatePickerClass_getMonth(void *Object);
typedef VS_INT32 (SRPAPI *DatePickerClass_getMonthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DatePickerClass_getYear;
#define VSFUNCRETURNDEPEND_DATEPICKERCLASS_GETYEAR(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_DATEPICKERCLASS_GETYEAR                                              1
#define VSFUNCPARAMDEPEND_DATEPICKERCLASS_GETYEAR(X)  {}
#define VSFUNCPARAMDEPENDNUM_DATEPICKERCLASS_GETYEAR                                               0

extern VS_INT32 SRPAPI DatePickerClass_getYear(void *Object);
typedef VS_INT32 (SRPAPI *DatePickerClass_getYearProc)(void *Object);

struct StructOfAttachDatePickerClass{
};
struct StructOfDatePickerClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ADAPTERCLASS                                                                     "AdapterClass"
extern VS_UUID VSOBJID_AdapterClass;
#define VSATTRDEPEND_ADAPTERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ADAPTERCLASS                                                               1
extern VS_INT32 SRPCALLBACK AdapterClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ADAPTERCLASS_ANDROIDREFCOUNT                                                   0
#define VSATTRNUMBER_ADAPTERCLASS                                                                  1

/*------Local Define Function */
/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_getCount;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_GETCOUNT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_GETCOUNT                                                1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_GETCOUNT(X)  {}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_GETCOUNT                                                 0

extern VS_INT32 SRPAPI AdapterClass_getCount(void *Object);
typedef VS_INT32 (SRPAPI *AdapterClass_getCountProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_getItem;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_GETITEM(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_GETITEM                                                 1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_GETITEM(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_GETITEM                                                  1

extern VS_CHAR * SRPAPI AdapterClass_getItem(void *Object,VS_INT32 position);
typedef VS_CHAR * (SRPAPI *AdapterClass_getItemProc)(void *Object,VS_INT32 position);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_getItemId;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_GETITEMID(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_GETITEMID                                               1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_GETITEMID(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_GETITEMID                                                1

extern VS_LONG SRPAPI AdapterClass_getItemId(void *Object,VS_INT32 position);
typedef VS_LONG (SRPAPI *AdapterClass_getItemIdProc)(void *Object,VS_INT32 position);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_getViewTypeCount;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_GETVIEWTYPECOUNT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_GETVIEWTYPECOUNT                                        1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_GETVIEWTYPECOUNT(X)  {}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_GETVIEWTYPECOUNT                                         0

extern VS_INT32 SRPAPI AdapterClass_getViewTypeCount(void *Object);
typedef VS_INT32 (SRPAPI *AdapterClass_getViewTypeCountProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_getItemViewType;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_GETITEMVIEWTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_GETITEMVIEWTYPE                                         1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_GETITEMVIEWTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_GETITEMVIEWTYPE                                          1

extern VS_INT32 SRPAPI AdapterClass_getItemViewType(void *Object,VS_INT32 position);
typedef VS_INT32 (SRPAPI *AdapterClass_getItemViewTypeProc)(void *Object,VS_INT32 position);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_getView;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_GETVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_GETVIEW                                                 1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_GETVIEW(X)  {{X[0].Type=6;}{X[1].Type=57;}{X[2].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_GETVIEW                                                  3

extern VS_OBJPTR SRPAPI AdapterClass_getView(void *Object,VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent);
typedef VS_OBJPTR (SRPAPI *AdapterClass_getViewProc)(void *Object,VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_AdapterClass_isEmpty;
#define VSFUNCRETURNDEPEND_ADAPTERCLASS_ISEMPTY(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ADAPTERCLASS_ISEMPTY                                                 1
#define VSFUNCPARAMDEPEND_ADAPTERCLASS_ISEMPTY(X)  {}
#define VSFUNCPARAMDEPENDNUM_ADAPTERCLASS_ISEMPTY                                                  0

extern VS_BOOL SRPAPI AdapterClass_isEmpty(void *Object);
typedef VS_BOOL (SRPAPI *AdapterClass_isEmptyProc)(void *Object);

struct StructOfAttachAdapterClass{
};
struct StructOfAdapterClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_COLORDRAWABLECLASS                                                               "ColorDrawableClass"
extern VS_UUID VSOBJID_ColorDrawableClass;
#define VSATTRDEPEND_COLORDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_COLORDRAWABLECLASS                                                         1
extern VS_INT32 SRPCALLBACK ColorDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_COLORDRAWABLECLASS_ANDROIDREFCOUNT                                             0
#define VSATTRNUMBER_COLORDRAWABLECLASS                                                            1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ColorDrawableClass_draw;
#define VSFUNCRETURNDEPEND_COLORDRAWABLECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_COLORDRAWABLECLASS_DRAW                                              0
#define VSFUNCPARAMDEPEND_COLORDRAWABLECLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_COLORDRAWABLECLASS_DRAW                                               1

extern void SRPAPI ColorDrawableClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *ColorDrawableClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ColorDrawableClass_getAlpha;
#define VSFUNCRETURNDEPEND_COLORDRAWABLECLASS_GETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_COLORDRAWABLECLASS_GETALPHA                                          1
#define VSFUNCPARAMDEPEND_COLORDRAWABLECLASS_GETALPHA(X)  {}
#define VSFUNCPARAMDEPENDNUM_COLORDRAWABLECLASS_GETALPHA                                           0

extern VS_INT32 SRPAPI ColorDrawableClass_getAlpha(void *Object);
typedef VS_INT32 (SRPAPI *ColorDrawableClass_getAlphaProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ColorDrawableClass_getChangingConfigurations;
#define VSFUNCRETURNDEPEND_COLORDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_COLORDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                         1
#define VSFUNCPARAMDEPEND_COLORDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {}
#define VSFUNCPARAMDEPENDNUM_COLORDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                          0

extern VS_INT32 SRPAPI ColorDrawableClass_getChangingConfigurations(void *Object);
typedef VS_INT32 (SRPAPI *ColorDrawableClass_getChangingConfigurationsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ColorDrawableClass_getOpacity;
#define VSFUNCRETURNDEPEND_COLORDRAWABLECLASS_GETOPACITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_COLORDRAWABLECLASS_GETOPACITY                                        1
#define VSFUNCPARAMDEPEND_COLORDRAWABLECLASS_GETOPACITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_COLORDRAWABLECLASS_GETOPACITY                                         0

extern VS_INT32 SRPAPI ColorDrawableClass_getOpacity(void *Object);
typedef VS_INT32 (SRPAPI *ColorDrawableClass_getOpacityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ColorDrawableClass_setAlpha;
#define VSFUNCRETURNDEPEND_COLORDRAWABLECLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_COLORDRAWABLECLASS_SETALPHA                                          0
#define VSFUNCPARAMDEPEND_COLORDRAWABLECLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_COLORDRAWABLECLASS_SETALPHA                                           1

extern void SRPAPI ColorDrawableClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *ColorDrawableClass_setAlphaProc)(void *Object,VS_INT32 alpha);

struct StructOfAttachColorDrawableClass{
};
struct StructOfColorDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_BITMAPDRAWABLECLASS                                                              "BitmapDrawableClass"
extern VS_UUID VSOBJID_BitmapDrawableClass;
#define VSATTRDEPEND_BITMAPDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_BITMAPDRAWABLECLASS                                                        1
extern VS_INT32 SRPCALLBACK BitmapDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_BITMAPDRAWABLECLASS_ANDROIDREFCOUNT                                            0
#define VSATTRNUMBER_BITMAPDRAWABLECLASS                                                           1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_init;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_INIT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_INIT                                             1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_INIT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_INIT                                              1

extern VS_BOOL SRPAPI BitmapDrawableClass_init(void *Object,VS_CHAR * filepath);
typedef VS_BOOL (SRPAPI *BitmapDrawableClass_initProc)(void *Object,VS_CHAR * filepath);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_draw;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_DRAW                                             0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_DRAW                                              1

extern void SRPAPI BitmapDrawableClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *BitmapDrawableClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getBitmap;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETBITMAP(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETBITMAP                                        1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETBITMAP(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETBITMAP                                         0

extern VS_OBJPTR SRPAPI BitmapDrawableClass_getBitmap(void *Object);
typedef VS_OBJPTR (SRPAPI *BitmapDrawableClass_getBitmapProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getChangingConfigurations;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                        1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                         0

extern VS_INT32 SRPAPI BitmapDrawableClass_getChangingConfigurations(void *Object);
typedef VS_INT32 (SRPAPI *BitmapDrawableClass_getChangingConfigurationsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getGravity;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETGRAVITY                                       1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETGRAVITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETGRAVITY                                        0

extern VS_INT32 SRPAPI BitmapDrawableClass_getGravity(void *Object);
typedef VS_INT32 (SRPAPI *BitmapDrawableClass_getGravityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getIntrinsicHeight;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETINTRINSICHEIGHT                               1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETINTRINSICHEIGHT                                0

extern VS_INT32 SRPAPI BitmapDrawableClass_getIntrinsicHeight(void *Object);
typedef VS_INT32 (SRPAPI *BitmapDrawableClass_getIntrinsicHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getIntrinsicWidth;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETINTRINSICWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETINTRINSICWIDTH                                1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETINTRINSICWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETINTRINSICWIDTH                                 0

extern VS_INT32 SRPAPI BitmapDrawableClass_getIntrinsicWidth(void *Object);
typedef VS_INT32 (SRPAPI *BitmapDrawableClass_getIntrinsicWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getOpacity;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETOPACITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETOPACITY                                       1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETOPACITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETOPACITY                                        0

extern VS_INT32 SRPAPI BitmapDrawableClass_getOpacity(void *Object);
typedef VS_INT32 (SRPAPI *BitmapDrawableClass_getOpacityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getPaint;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETPAINT(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETPAINT                                         1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETPAINT(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETPAINT                                          0

extern VS_OBJPTR SRPAPI BitmapDrawableClass_getPaint(void *Object);
typedef VS_OBJPTR (SRPAPI *BitmapDrawableClass_getPaintProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getTileModeX;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETTILEMODEX(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETTILEMODEX                                     1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETTILEMODEX(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETTILEMODEX                                      0

extern VS_CHAR * SRPAPI BitmapDrawableClass_getTileModeX(void *Object);
typedef VS_CHAR * (SRPAPI *BitmapDrawableClass_getTileModeXProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_getTileModeY;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_GETTILEMODEY(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_GETTILEMODEY                                     1
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_GETTILEMODEY(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_GETTILEMODEY                                      0

extern VS_CHAR * SRPAPI BitmapDrawableClass_getTileModeY(void *Object);
typedef VS_CHAR * (SRPAPI *BitmapDrawableClass_getTileModeYProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setAlpha;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETALPHA                                         0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETALPHA                                          1

extern void SRPAPI BitmapDrawableClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *BitmapDrawableClass_setAlphaProc)(void *Object,VS_INT32 alpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setAntiAlias;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETANTIALIAS(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETANTIALIAS                                     0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETANTIALIAS(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETANTIALIAS                                      1

extern void SRPAPI BitmapDrawableClass_setAntiAlias(void *Object,VS_BOOL aa);
typedef void (SRPAPI *BitmapDrawableClass_setAntiAliasProc)(void *Object,VS_BOOL aa);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setDither;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETDITHER(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETDITHER                                        0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETDITHER(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETDITHER                                         1

extern void SRPAPI BitmapDrawableClass_setDither(void *Object,VS_BOOL dither);
typedef void (SRPAPI *BitmapDrawableClass_setDitherProc)(void *Object,VS_BOOL dither);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setFilterBitmap;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETFILTERBITMAP(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETFILTERBITMAP                                  0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETFILTERBITMAP(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETFILTERBITMAP                                   1

extern void SRPAPI BitmapDrawableClass_setFilterBitmap(void *Object,VS_BOOL filter);
typedef void (SRPAPI *BitmapDrawableClass_setFilterBitmapProc)(void *Object,VS_BOOL filter);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setGravity;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETGRAVITY                                       0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETGRAVITY                                        1

extern void SRPAPI BitmapDrawableClass_setGravity(void *Object,VS_INT32 gravity);
typedef void (SRPAPI *BitmapDrawableClass_setGravityProc)(void *Object,VS_INT32 gravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setTargetDensity;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETTARGETDENSITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETTARGETDENSITY                                 0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETTARGETDENSITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETTARGETDENSITY                                  1

extern void SRPAPI BitmapDrawableClass_setTargetDensity(void *Object,VS_INT32 density);
typedef void (SRPAPI *BitmapDrawableClass_setTargetDensityProc)(void *Object,VS_INT32 density);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setTargetDensity1;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETTARGETDENSITY1(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETTARGETDENSITY1                                0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETTARGETDENSITY1(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETTARGETDENSITY1                                 1

extern void SRPAPI BitmapDrawableClass_setTargetDensity1(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *BitmapDrawableClass_setTargetDensity1Proc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setTileModeX;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETTILEMODEX(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETTILEMODEX                                     0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETTILEMODEX(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETTILEMODEX                                      1

extern void SRPAPI BitmapDrawableClass_setTileModeX(void *Object,VS_CHAR * mode);
typedef void (SRPAPI *BitmapDrawableClass_setTileModeXProc)(void *Object,VS_CHAR * mode);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setTileModeXY;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETTILEMODEXY(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETTILEMODEXY                                    0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETTILEMODEXY(X)  {{X[0].Type=30;}{X[1].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETTILEMODEXY                                     2

extern void SRPAPI BitmapDrawableClass_setTileModeXY(void *Object,VS_CHAR * xmode,VS_CHAR * ymode);
typedef void (SRPAPI *BitmapDrawableClass_setTileModeXYProc)(void *Object,VS_CHAR * xmode,VS_CHAR * ymode);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapDrawableClass_setTileModeY;
#define VSFUNCRETURNDEPEND_BITMAPDRAWABLECLASS_SETTILEMODEY(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPDRAWABLECLASS_SETTILEMODEY                                     0
#define VSFUNCPARAMDEPEND_BITMAPDRAWABLECLASS_SETTILEMODEY(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPDRAWABLECLASS_SETTILEMODEY                                      1

extern void SRPAPI BitmapDrawableClass_setTileModeY(void *Object,VS_CHAR * mode);
typedef void (SRPAPI *BitmapDrawableClass_setTileModeYProc)(void *Object,VS_CHAR * mode);

struct StructOfAttachBitmapDrawableClass{
};
struct StructOfBitmapDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_EDITTEXTCLASS                                                                    "EditTextClass"
extern VS_UUID VSOBJID_EditTextClass;
#define VSATTRDEPEND_EDITTEXTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_EDITTEXTCLASS                                                              1
extern VS_INT32 SRPCALLBACK EditTextClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_EDITTEXTCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRNUMBER_EDITTEXTCLASS                                                                 1

struct StructOfAttachEditTextClass{
};
struct StructOfEditTextClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ANDROIDBASECLASS                                                                 "AndroidBaseClass"
extern VS_UUID VSOBJID_AndroidBaseClass;
#define VSATTRDEPEND_ANDROIDBASECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ANDROIDBASECLASS                                                           1
extern VS_INT32 SRPCALLBACK AndroidBaseClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ANDROIDBASECLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_ANDROIDBASECLASS                                                              1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_AndroidBaseClass_incAndroidRef;
#define VSFUNCRETURNDEPEND_ANDROIDBASECLASS_INCANDROIDREF(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANDROIDBASECLASS_INCANDROIDREF                                       0
#define VSFUNCPARAMDEPEND_ANDROIDBASECLASS_INCANDROIDREF(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANDROIDBASECLASS_INCANDROIDREF                                        0

extern void SRPAPI AndroidBaseClass_incAndroidRef(void *Object);
typedef void (SRPAPI *AndroidBaseClass_incAndroidRefProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AndroidBaseClass_decAndroidRef;
#define VSFUNCRETURNDEPEND_ANDROIDBASECLASS_DECANDROIDREF(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANDROIDBASECLASS_DECANDROIDREF                                       0
#define VSFUNCPARAMDEPEND_ANDROIDBASECLASS_DECANDROIDREF(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANDROIDBASECLASS_DECANDROIDREF                                        0

extern void SRPAPI AndroidBaseClass_decAndroidRef(void *Object);
typedef void (SRPAPI *AndroidBaseClass_decAndroidRefProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AndroidBaseClass_getActivity;
#define VSFUNCRETURNDEPEND_ANDROIDBASECLASS_GETACTIVITY(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ANDROIDBASECLASS_GETACTIVITY                                         1
#define VSFUNCPARAMDEPEND_ANDROIDBASECLASS_GETACTIVITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANDROIDBASECLASS_GETACTIVITY                                          0

extern VS_OBJPTR SRPAPI AndroidBaseClass_getActivity(void *Object);
typedef VS_OBJPTR (SRPAPI *AndroidBaseClass_getActivityProc)(void *Object);

struct StructOfAttachAndroidBaseClass{
};
struct StructOfAndroidBaseClass{
    //----local attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_FILEOUTPUTSTREAMCLASS                                                            "FileOutputStreamClass"
extern VS_UUID VSOBJID_FileOutputStreamClass;
#define VSATTRDEPEND_FILEOUTPUTSTREAMCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_FILEOUTPUTSTREAMCLASS                                                      1
extern VS_INT32 SRPCALLBACK FileOutputStreamClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_FILEOUTPUTSTREAMCLASS_ANDROIDREFCOUNT                                          0
#define VSATTRNUMBER_FILEOUTPUTSTREAMCLASS                                                         1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileOutputStreamClass_init;
#define VSFUNCRETURNDEPEND_FILEOUTPUTSTREAMCLASS_INIT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_FILEOUTPUTSTREAMCLASS_INIT                                           1
#define VSFUNCPARAMDEPEND_FILEOUTPUTSTREAMCLASS_INIT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_FILEOUTPUTSTREAMCLASS_INIT                                            1

extern VS_BOOL SRPAPI FileOutputStreamClass_init(void *Object,VS_CHAR * path);
typedef VS_BOOL (SRPAPI *FileOutputStreamClass_initProc)(void *Object,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileOutputStreamClass_init1;
#define VSFUNCRETURNDEPEND_FILEOUTPUTSTREAMCLASS_INIT1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_FILEOUTPUTSTREAMCLASS_INIT1                                          1
#define VSFUNCPARAMDEPEND_FILEOUTPUTSTREAMCLASS_INIT1(X)  {{X[0].Type=30;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_FILEOUTPUTSTREAMCLASS_INIT1                                           2

extern VS_BOOL SRPAPI FileOutputStreamClass_init1(void *Object,VS_CHAR * path,VS_BOOL append);
typedef VS_BOOL (SRPAPI *FileOutputStreamClass_init1Proc)(void *Object,VS_CHAR * path,VS_BOOL append);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileOutputStreamClass_close;
#define VSFUNCRETURNDEPEND_FILEOUTPUTSTREAMCLASS_CLOSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_FILEOUTPUTSTREAMCLASS_CLOSE                                          0
#define VSFUNCPARAMDEPEND_FILEOUTPUTSTREAMCLASS_CLOSE(X)  {}
#define VSFUNCPARAMDEPENDNUM_FILEOUTPUTSTREAMCLASS_CLOSE                                           0

extern void SRPAPI FileOutputStreamClass_close(void *Object);
typedef void (SRPAPI *FileOutputStreamClass_closeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileOutputStreamClass_write1;
#define VSFUNCRETURNDEPEND_FILEOUTPUTSTREAMCLASS_WRITE1(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_FILEOUTPUTSTREAMCLASS_WRITE1                                         1
#define VSFUNCPARAMDEPEND_FILEOUTPUTSTREAMCLASS_WRITE1(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_FILEOUTPUTSTREAMCLASS_WRITE1                                          3

extern VS_INT32 SRPAPI FileOutputStreamClass_write1(void *Object,VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount);
typedef VS_INT32 (SRPAPI *FileOutputStreamClass_write1Proc)(void *Object,VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileOutputStreamClass_write;
#define VSFUNCRETURNDEPEND_FILEOUTPUTSTREAMCLASS_WRITE(X)  {}
#define VSFUNCRETURNDEPENDNUM_FILEOUTPUTSTREAMCLASS_WRITE                                          0
#define VSFUNCPARAMDEPEND_FILEOUTPUTSTREAMCLASS_WRITE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_FILEOUTPUTSTREAMCLASS_WRITE                                           1

extern void SRPAPI FileOutputStreamClass_write(void *Object,VS_INT32 oneByte);
typedef void (SRPAPI *FileOutputStreamClass_writeProc)(void *Object,VS_INT32 oneByte);

struct StructOfAttachFileOutputStreamClass{
};
struct StructOfFileOutputStreamClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_FILEDESCRIPTORCLASS                                                              "FileDescriptorClass"
extern VS_UUID VSOBJID_FileDescriptorClass;
#define VSATTRDEPEND_FILEDESCRIPTORCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_FILEDESCRIPTORCLASS                                                        1
extern VS_INT32 SRPCALLBACK FileDescriptorClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_FILEDESCRIPTORCLASS_ANDROIDREFCOUNT                                            0
#define VSATTRNUMBER_FILEDESCRIPTORCLASS                                                           1

struct StructOfAttachFileDescriptorClass{
};
struct StructOfFileDescriptorClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_BITMAPCLASS                                                                      "BitmapClass"
extern VS_UUID VSOBJID_BitmapClass;
#define VSATTRDEPEND_BITMAPCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_BITMAPCLASS                                                                1
extern VS_INT32 SRPCALLBACK BitmapClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_BITMAPCLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_BITMAPCLASS                                                                   1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_createBitmap0;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_CREATEBITMAP0(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_CREATEBITMAP0                                            1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_CREATEBITMAP0(X)  {{X[0].Type=57;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}{X[5].Type=57;}{X[6].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_CREATEBITMAP0                                             7

extern VS_BOOL SRPAPI BitmapClass_createBitmap0(void *Object,VS_OBJPTR source,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_OBJPTR m,VS_BOOL filter);
typedef VS_BOOL (SRPAPI *BitmapClass_createBitmap0Proc)(void *Object,VS_OBJPTR source,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_OBJPTR m,VS_BOOL filter);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_createBitmap1;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_CREATEBITMAP1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_CREATEBITMAP1                                            1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_CREATEBITMAP1(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_CREATEBITMAP1                                             3

extern VS_BOOL SRPAPI BitmapClass_createBitmap1(void *Object,VS_INT32 width,VS_INT32 height,VS_CHAR * config);
typedef VS_BOOL (SRPAPI *BitmapClass_createBitmap1Proc)(void *Object,VS_INT32 width,VS_INT32 height,VS_CHAR * config);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_createBitmap2;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_CREATEBITMAP2(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_CREATEBITMAP2                                            1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_CREATEBITMAP2(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}{X[5].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_CREATEBITMAP2                                             6

extern VS_BOOL SRPAPI BitmapClass_createBitmap2(void *Object,VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 width,VS_INT32 height,VS_CHAR * config);
typedef VS_BOOL (SRPAPI *BitmapClass_createBitmap2Proc)(void *Object,VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 width,VS_INT32 height,VS_CHAR * config);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_createBitmap3;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_CREATEBITMAP3(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_CREATEBITMAP3                                            1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_CREATEBITMAP3(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_CREATEBITMAP3                                             4

extern VS_BOOL SRPAPI BitmapClass_createBitmap3(void *Object,VS_BINBUFPTR colors,VS_INT32 width,VS_INT32 height,VS_CHAR * config);
typedef VS_BOOL (SRPAPI *BitmapClass_createBitmap3Proc)(void *Object,VS_BINBUFPTR colors,VS_INT32 width,VS_INT32 height,VS_CHAR * config);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_createScaledBitmap;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_CREATESCALEDBITMAP(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_CREATESCALEDBITMAP                                       1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_CREATESCALEDBITMAP(X)  {{X[0].Type=57;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_CREATESCALEDBITMAP                                        4

extern VS_BOOL SRPAPI BitmapClass_createScaledBitmap(void *Object,VS_OBJPTR src,VS_INT32 dstWidth,VS_INT32 dstHeight,VS_BOOL filter);
typedef VS_BOOL (SRPAPI *BitmapClass_createScaledBitmapProc)(void *Object,VS_OBJPTR src,VS_INT32 dstWidth,VS_INT32 dstHeight,VS_BOOL filter);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_eraseColor;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_ERASECOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_ERASECOLOR                                               0
#define VSFUNCPARAMDEPEND_BITMAPCLASS_ERASECOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_ERASECOLOR                                                1

extern void SRPAPI BitmapClass_eraseColor(void *Object,VS_INT32 c);
typedef void (SRPAPI *BitmapClass_eraseColorProc)(void *Object,VS_INT32 c);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_getHeight;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_GETHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_GETHEIGHT                                                1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_GETHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_GETHEIGHT                                                 0

extern VS_INT32 SRPAPI BitmapClass_getHeight(void *Object);
typedef VS_INT32 (SRPAPI *BitmapClass_getHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_getPixel;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_GETPIXEL(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_GETPIXEL                                                 1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_GETPIXEL(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_GETPIXEL                                                  2

extern VS_INT32 SRPAPI BitmapClass_getPixel(void *Object,VS_INT32 x,VS_INT32 y);
typedef VS_INT32 (SRPAPI *BitmapClass_getPixelProc)(void *Object,VS_INT32 x,VS_INT32 y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_getPixels;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_GETPIXELS(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_GETPIXELS                                                0
#define VSFUNCPARAMDEPEND_BITMAPCLASS_GETPIXELS(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}{X[5].Type=6;}{X[6].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_GETPIXELS                                                 7

extern void SRPAPI BitmapClass_getPixels(void *Object,VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *BitmapClass_getPixelsProc)(void *Object,VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_getWidth;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_GETWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_GETWIDTH                                                 1
#define VSFUNCPARAMDEPEND_BITMAPCLASS_GETWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_GETWIDTH                                                  0

extern VS_INT32 SRPAPI BitmapClass_getWidth(void *Object);
typedef VS_INT32 (SRPAPI *BitmapClass_getWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_setPixel;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_SETPIXEL(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_SETPIXEL                                                 0
#define VSFUNCPARAMDEPEND_BITMAPCLASS_SETPIXEL(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_SETPIXEL                                                  3

extern void SRPAPI BitmapClass_setPixel(void *Object,VS_INT32 x,VS_INT32 y,VS_INT32 color);
typedef void (SRPAPI *BitmapClass_setPixelProc)(void *Object,VS_INT32 x,VS_INT32 y,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapClass_setPixels;
#define VSFUNCRETURNDEPEND_BITMAPCLASS_SETPIXELS(X)  {}
#define VSFUNCRETURNDEPENDNUM_BITMAPCLASS_SETPIXELS                                                0
#define VSFUNCPARAMDEPEND_BITMAPCLASS_SETPIXELS(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}{X[5].Type=6;}{X[6].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPCLASS_SETPIXELS                                                 7

extern void SRPAPI BitmapClass_setPixels(void *Object,VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *BitmapClass_setPixelsProc)(void *Object,VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height);

struct StructOfAttachBitmapClass{
};
struct StructOfBitmapClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_FRAMELAYOUTCLASS                                                                 "FrameLayoutClass"
extern VS_UUID VSOBJID_FrameLayoutClass;
#define VSATTRDEPEND_FRAMELAYOUTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_FRAMELAYOUTCLASS                                                           4
extern VS_INT32 SRPCALLBACK FrameLayoutClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_FRAMELAYOUTCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRINDEX_FRAMELAYOUTCLASS_VIEWGROUPQUEUE                                                1
#define VSATTRINDEX_FRAMELAYOUTCLASS_VIEWQUEUE                                                     2
#define VSATTRINDEX_FRAMELAYOUTCLASS_OBJECTQUEUE                                                   3
#define VSATTRNUMBER_FRAMELAYOUTCLASS                                                              4

struct StructOfAttachFrameLayoutClass{
};
struct StructOfFrameLayoutClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_DIALOGCLASS                                                                      "DialogClass"
extern VS_UUID VSOBJID_DialogClass;
#define VSATTRDEPEND_DIALOGCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_DIALOGCLASS                                                                1
extern VS_INT32 SRPCALLBACK DialogClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_DIALOGCLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_DIALOGCLASS                                                                   1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_DialogClass_cancel;
#define VSFUNCRETURNDEPEND_DIALOGCLASS_CANCEL(X)  {}
#define VSFUNCRETURNDEPENDNUM_DIALOGCLASS_CANCEL                                                   0
#define VSFUNCPARAMDEPEND_DIALOGCLASS_CANCEL(X)  {}
#define VSFUNCPARAMDEPENDNUM_DIALOGCLASS_CANCEL                                                    0

extern void SRPAPI DialogClass_cancel(void *Object);
typedef void (SRPAPI *DialogClass_cancelProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DialogClass_dismiss;
#define VSFUNCRETURNDEPEND_DIALOGCLASS_DISMISS(X)  {}
#define VSFUNCRETURNDEPENDNUM_DIALOGCLASS_DISMISS                                                  0
#define VSFUNCPARAMDEPEND_DIALOGCLASS_DISMISS(X)  {}
#define VSFUNCPARAMDEPENDNUM_DIALOGCLASS_DISMISS                                                   0

extern void SRPAPI DialogClass_dismiss(void *Object);
typedef void (SRPAPI *DialogClass_dismissProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DialogClass_hide;
#define VSFUNCRETURNDEPEND_DIALOGCLASS_HIDE(X)  {}
#define VSFUNCRETURNDEPENDNUM_DIALOGCLASS_HIDE                                                     0
#define VSFUNCPARAMDEPEND_DIALOGCLASS_HIDE(X)  {}
#define VSFUNCPARAMDEPENDNUM_DIALOGCLASS_HIDE                                                      0

extern void SRPAPI DialogClass_hide(void *Object);
typedef void (SRPAPI *DialogClass_hideProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DialogClass_isShowing;
#define VSFUNCRETURNDEPEND_DIALOGCLASS_ISSHOWING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_DIALOGCLASS_ISSHOWING                                                1
#define VSFUNCPARAMDEPEND_DIALOGCLASS_ISSHOWING(X)  {}
#define VSFUNCPARAMDEPENDNUM_DIALOGCLASS_ISSHOWING                                                 0

extern VS_BOOL SRPAPI DialogClass_isShowing(void *Object);
typedef VS_BOOL (SRPAPI *DialogClass_isShowingProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_DialogClass_show;
#define VSFUNCRETURNDEPEND_DIALOGCLASS_SHOW(X)  {}
#define VSFUNCRETURNDEPENDNUM_DIALOGCLASS_SHOW                                                     0
#define VSFUNCPARAMDEPEND_DIALOGCLASS_SHOW(X)  {}
#define VSFUNCPARAMDEPENDNUM_DIALOGCLASS_SHOW                                                      0

extern void SRPAPI DialogClass_show(void *Object);
typedef void (SRPAPI *DialogClass_showProc)(void *Object);

struct StructOfAttachDialogClass{
};
struct StructOfDialogClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SRPWRAPANDROIDENGINE                                                             "SRPWrapAndroidEngine"
extern VS_UUID VSOBJID_SRPWrapAndroidEngine;

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_RECTFCLASS                                                                       "RectFClass"
extern VS_UUID VSOBJID_RectFClass;
#define VSATTRDEPEND_RECTFCLASS(X)  {{X[0].Type=8;X[0].Offset=0;}{X[1].Type=8;X[1].Offset=4;}{X[2].Type=8;X[2].Offset=8;}{X[3].Type=8;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_RECTFCLASS                                                                 4
extern VS_INT32 SRPCALLBACK RectFClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_RECTFCLASS_LEFT                                                                0
#define VSATTRINDEX_RECTFCLASS_TOP                                                                 1
#define VSATTRINDEX_RECTFCLASS_RIGHT                                                               2
#define VSATTRINDEX_RECTFCLASS_BOTTOM                                                              3
#define VSATTRNUMBER_RECTFCLASS                                                                    4

struct StructOfAttachRectFClass{
};
struct StructOfRectFClass{
    //----local attribute
    VS_FLOAT        left;                         //
    VS_FLOAT        top;                          //
    VS_FLOAT        right;                        //
    VS_FLOAT        bottom;                       //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_IMAGEBUTTONCLASS                                                                 "ImageButtonClass"
extern VS_UUID VSOBJID_ImageButtonClass;
#define VSATTRDEPEND_IMAGEBUTTONCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_IMAGEBUTTONCLASS                                                           1
extern VS_INT32 SRPCALLBACK ImageButtonClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_IMAGEBUTTONCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_IMAGEBUTTONCLASS                                                              1

struct StructOfAttachImageButtonClass{
};
struct StructOfImageButtonClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_STRINGARRAYADAPTERCLASS                                                          "StringArrayAdapterClass"
extern VS_UUID VSOBJID_StringArrayAdapterClass;
#define VSATTRDEPEND_STRINGARRAYADAPTERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_STRINGARRAYADAPTERCLASS                                                    1
extern VS_INT32 SRPCALLBACK StringArrayAdapterClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_STRINGARRAYADAPTERCLASS_ANDROIDREFCOUNT                                        0
#define VSATTRNUMBER_STRINGARRAYADAPTERCLASS                                                       1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_StringArrayAdapterClass_setDropDownViewResource;
#define VSFUNCRETURNDEPEND_STRINGARRAYADAPTERCLASS_SETDROPDOWNVIEWRESOURCE(X)  {}
#define VSFUNCRETURNDEPENDNUM_STRINGARRAYADAPTERCLASS_SETDROPDOWNVIEWRESOURCE                      0
#define VSFUNCPARAMDEPEND_STRINGARRAYADAPTERCLASS_SETDROPDOWNVIEWRESOURCE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_STRINGARRAYADAPTERCLASS_SETDROPDOWNVIEWRESOURCE                       1

extern void SRPAPI StringArrayAdapterClass_setDropDownViewResource(void *Object,VS_INT32 resource);
typedef void (SRPAPI *StringArrayAdapterClass_setDropDownViewResourceProc)(void *Object,VS_INT32 resource);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_StringArrayAdapterClass_remove;
#define VSFUNCRETURNDEPEND_STRINGARRAYADAPTERCLASS_REMOVE(X)  {}
#define VSFUNCRETURNDEPENDNUM_STRINGARRAYADAPTERCLASS_REMOVE                                       0
#define VSFUNCPARAMDEPEND_STRINGARRAYADAPTERCLASS_REMOVE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_STRINGARRAYADAPTERCLASS_REMOVE                                        1

extern void SRPAPI StringArrayAdapterClass_remove(void *Object,VS_CHAR * v);
typedef void (SRPAPI *StringArrayAdapterClass_removeProc)(void *Object,VS_CHAR * v);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_StringArrayAdapterClass_add;
#define VSFUNCRETURNDEPEND_STRINGARRAYADAPTERCLASS_ADD(X)  {}
#define VSFUNCRETURNDEPENDNUM_STRINGARRAYADAPTERCLASS_ADD                                          0
#define VSFUNCPARAMDEPEND_STRINGARRAYADAPTERCLASS_ADD(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_STRINGARRAYADAPTERCLASS_ADD                                           1

extern void SRPAPI StringArrayAdapterClass_add(void *Object,VS_CHAR * v);
typedef void (SRPAPI *StringArrayAdapterClass_addProc)(void *Object,VS_CHAR * v);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_StringArrayAdapterClass_getView;
#define VSFUNCRETURNDEPEND_STRINGARRAYADAPTERCLASS_GETVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_STRINGARRAYADAPTERCLASS_GETVIEW                                      1
#define VSFUNCPARAMDEPEND_STRINGARRAYADAPTERCLASS_GETVIEW(X)  {{X[0].Type=6;}{X[1].Type=57;}{X[2].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_STRINGARRAYADAPTERCLASS_GETVIEW                                       3

extern VS_OBJPTR SRPAPI StringArrayAdapterClass_getView(void *Object,VS_INT32 Position,VS_OBJPTR convertView,VS_OBJPTR parent);
typedef VS_OBJPTR (SRPAPI *StringArrayAdapterClass_getViewProc)(void *Object,VS_INT32 Position,VS_OBJPTR convertView,VS_OBJPTR parent);

struct StructOfAttachStringArrayAdapterClass{
};
struct StructOfStringArrayAdapterClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_PATHCLASS                                                                        "PathClass"
extern VS_UUID VSOBJID_PathClass;
#define VSATTRDEPEND_PATHCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_PATHCLASS                                                                  1
extern VS_INT32 SRPCALLBACK PathClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_PATHCLASS_ANDROIDREFCOUNT                                                      0
#define VSATTRNUMBER_PATHCLASS                                                                     1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_close;
#define VSFUNCRETURNDEPEND_PATHCLASS_CLOSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_CLOSE                                                      0
#define VSFUNCPARAMDEPEND_PATHCLASS_CLOSE(X)  {}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_CLOSE                                                       0

extern void SRPAPI PathClass_close(void *Object);
typedef void (SRPAPI *PathClass_closeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_cubicTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_CUBICTO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_CUBICTO                                                    0
#define VSFUNCPARAMDEPEND_PATHCLASS_CUBICTO(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=8;}{X[5].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_CUBICTO                                                     6

extern void SRPAPI PathClass_cubicTo(void *Object,VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3);
typedef void (SRPAPI *PathClass_cubicToProc)(void *Object,VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_isEmpty;
#define VSFUNCRETURNDEPEND_PATHCLASS_ISEMPTY(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_ISEMPTY                                                    1
#define VSFUNCPARAMDEPEND_PATHCLASS_ISEMPTY(X)  {}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_ISEMPTY                                                     0

extern VS_BOOL SRPAPI PathClass_isEmpty(void *Object);
typedef VS_BOOL (SRPAPI *PathClass_isEmptyProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_lineTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_LINETO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_LINETO                                                     0
#define VSFUNCPARAMDEPEND_PATHCLASS_LINETO(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_LINETO                                                      2

extern void SRPAPI PathClass_lineTo(void *Object,VS_FLOAT x,VS_FLOAT y);
typedef void (SRPAPI *PathClass_lineToProc)(void *Object,VS_FLOAT x,VS_FLOAT y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_moveTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_MOVETO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_MOVETO                                                     0
#define VSFUNCPARAMDEPEND_PATHCLASS_MOVETO(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_MOVETO                                                      2

extern void SRPAPI PathClass_moveTo(void *Object,VS_FLOAT x,VS_FLOAT y);
typedef void (SRPAPI *PathClass_moveToProc)(void *Object,VS_FLOAT x,VS_FLOAT y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_quadTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_QUADTO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_QUADTO                                                     0
#define VSFUNCPARAMDEPEND_PATHCLASS_QUADTO(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_QUADTO                                                      4

extern void SRPAPI PathClass_quadTo(void *Object,VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2);
typedef void (SRPAPI *PathClass_quadToProc)(void *Object,VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_rCubicTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_RCUBICTO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_RCUBICTO                                                   0
#define VSFUNCPARAMDEPEND_PATHCLASS_RCUBICTO(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=8;}{X[5].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_RCUBICTO                                                    6

extern void SRPAPI PathClass_rCubicTo(void *Object,VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3);
typedef void (SRPAPI *PathClass_rCubicToProc)(void *Object,VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_rLineTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_RLINETO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_RLINETO                                                    0
#define VSFUNCPARAMDEPEND_PATHCLASS_RLINETO(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_RLINETO                                                     2

extern void SRPAPI PathClass_rLineTo(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef void (SRPAPI *PathClass_rLineToProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_rMoveTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_RMOVETO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_RMOVETO                                                    0
#define VSFUNCPARAMDEPEND_PATHCLASS_RMOVETO(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_RMOVETO                                                     2

extern void SRPAPI PathClass_rMoveTo(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef void (SRPAPI *PathClass_rMoveToProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_rQuadTo;
#define VSFUNCRETURNDEPEND_PATHCLASS_RQUADTO(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_RQUADTO                                                    0
#define VSFUNCPARAMDEPEND_PATHCLASS_RQUADTO(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_RQUADTO                                                     4

extern void SRPAPI PathClass_rQuadTo(void *Object,VS_FLOAT dx1,VS_FLOAT dy1,VS_FLOAT dx2,VS_FLOAT dy2);
typedef void (SRPAPI *PathClass_rQuadToProc)(void *Object,VS_FLOAT dx1,VS_FLOAT dy1,VS_FLOAT dx2,VS_FLOAT dy2);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_reset;
#define VSFUNCRETURNDEPEND_PATHCLASS_RESET(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_RESET                                                      0
#define VSFUNCPARAMDEPEND_PATHCLASS_RESET(X)  {}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_RESET                                                       0

extern void SRPAPI PathClass_reset(void *Object);
typedef void (SRPAPI *PathClass_resetProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_rewind;
#define VSFUNCRETURNDEPEND_PATHCLASS_REWIND(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_REWIND                                                     0
#define VSFUNCPARAMDEPEND_PATHCLASS_REWIND(X)  {}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_REWIND                                                      0

extern void SRPAPI PathClass_rewind(void *Object);
typedef void (SRPAPI *PathClass_rewindProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_setFillType;
#define VSFUNCRETURNDEPEND_PATHCLASS_SETFILLTYPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_SETFILLTYPE                                                0
#define VSFUNCPARAMDEPEND_PATHCLASS_SETFILLTYPE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_SETFILLTYPE                                                 1

extern void SRPAPI PathClass_setFillType(void *Object,VS_CHAR * ft);
typedef void (SRPAPI *PathClass_setFillTypeProc)(void *Object,VS_CHAR * ft);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_PathClass_setLastPoint;
#define VSFUNCRETURNDEPEND_PATHCLASS_SETLASTPOINT(X)  {}
#define VSFUNCRETURNDEPENDNUM_PATHCLASS_SETLASTPOINT                                               0
#define VSFUNCPARAMDEPEND_PATHCLASS_SETLASTPOINT(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_PATHCLASS_SETLASTPOINT                                                2

extern void SRPAPI PathClass_setLastPoint(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef void (SRPAPI *PathClass_setLastPointProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

struct StructOfAttachPathClass{
};
struct StructOfPathClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ROUNDRECTSHAPECLASS                                                              "RoundRectShapeClass"
extern VS_UUID VSOBJID_RoundRectShapeClass;
#define VSATTRDEPEND_ROUNDRECTSHAPECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ROUNDRECTSHAPECLASS                                                        1
extern VS_INT32 SRPCALLBACK RoundRectShapeClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ROUNDRECTSHAPECLASS_ANDROIDREFCOUNT                                            0
#define VSATTRNUMBER_ROUNDRECTSHAPECLASS                                                           1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_RoundRectShapeClass_draw;
#define VSFUNCRETURNDEPEND_ROUNDRECTSHAPECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_ROUNDRECTSHAPECLASS_DRAW                                             0
#define VSFUNCPARAMDEPEND_ROUNDRECTSHAPECLASS_DRAW(X)  {{X[0].Type=57;}{X[1].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ROUNDRECTSHAPECLASS_DRAW                                              2

extern void SRPAPI RoundRectShapeClass_draw(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);
typedef void (SRPAPI *RoundRectShapeClass_drawProc)(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);

struct StructOfAttachRoundRectShapeClass{
};
struct StructOfRoundRectShapeClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SHAPEDRAWABLECLASS                                                               "ShapeDrawableClass"
extern VS_UUID VSOBJID_ShapeDrawableClass;
#define VSATTRDEPEND_SHAPEDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_SHAPEDRAWABLECLASS                                                         1
extern VS_INT32 SRPCALLBACK ShapeDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_SHAPEDRAWABLECLASS_ANDROIDREFCOUNT                                             0
#define VSATTRNUMBER_SHAPEDRAWABLECLASS                                                            1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_init;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_INIT(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_INIT                                              0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_INIT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_INIT                                               1

extern void SRPAPI ShapeDrawableClass_init(void *Object,VS_OBJPTR shape);
typedef void (SRPAPI *ShapeDrawableClass_initProc)(void *Object,VS_OBJPTR shape);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_draw;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_DRAW                                              0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_DRAW                                               1

extern void SRPAPI ShapeDrawableClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *ShapeDrawableClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_getChangingConfigurations;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                         1
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                          0

extern VS_INT32 SRPAPI ShapeDrawableClass_getChangingConfigurations(void *Object);
typedef VS_INT32 (SRPAPI *ShapeDrawableClass_getChangingConfigurationsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_getIntrinsicHeight;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_GETINTRINSICHEIGHT                                1
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_GETINTRINSICHEIGHT                                 0

extern VS_INT32 SRPAPI ShapeDrawableClass_getIntrinsicHeight(void *Object);
typedef VS_INT32 (SRPAPI *ShapeDrawableClass_getIntrinsicHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_getIntrinsicWidth;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_GETINTRINSICWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_GETINTRINSICWIDTH                                 1
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_GETINTRINSICWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_GETINTRINSICWIDTH                                  0

extern VS_INT32 SRPAPI ShapeDrawableClass_getIntrinsicWidth(void *Object);
typedef VS_INT32 (SRPAPI *ShapeDrawableClass_getIntrinsicWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_getOpacity;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_GETOPACITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_GETOPACITY                                        1
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_GETOPACITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_GETOPACITY                                         0

extern VS_INT32 SRPAPI ShapeDrawableClass_getOpacity(void *Object);
typedef VS_INT32 (SRPAPI *ShapeDrawableClass_getOpacityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_getPadding;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_GETPADDING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_GETPADDING                                        1
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_GETPADDING(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_GETPADDING                                         1

extern VS_BOOL SRPAPI ShapeDrawableClass_getPadding(void *Object,VS_OBJPTR padding);
typedef VS_BOOL (SRPAPI *ShapeDrawableClass_getPaddingProc)(void *Object,VS_OBJPTR padding);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_getPaint;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_GETPAINT(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_GETPAINT                                          1
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_GETPAINT(X)  {}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_GETPAINT                                           0

extern VS_OBJPTR SRPAPI ShapeDrawableClass_getPaint(void *Object);
typedef VS_OBJPTR (SRPAPI *ShapeDrawableClass_getPaintProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_setAlpha;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_SETALPHA                                          0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_SETALPHA                                           1

extern void SRPAPI ShapeDrawableClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *ShapeDrawableClass_setAlphaProc)(void *Object,VS_INT32 alpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_setDither;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_SETDITHER(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_SETDITHER                                         0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_SETDITHER(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_SETDITHER                                          1

extern void SRPAPI ShapeDrawableClass_setDither(void *Object,VS_BOOL dither);
typedef void (SRPAPI *ShapeDrawableClass_setDitherProc)(void *Object,VS_BOOL dither);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_setIntrinsicHeight;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_SETINTRINSICHEIGHT(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_SETINTRINSICHEIGHT                                0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_SETINTRINSICHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_SETINTRINSICHEIGHT                                 1

extern void SRPAPI ShapeDrawableClass_setIntrinsicHeight(void *Object,VS_INT32 height);
typedef void (SRPAPI *ShapeDrawableClass_setIntrinsicHeightProc)(void *Object,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_setIntrinsicWidth;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_SETINTRINSICWIDTH(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_SETINTRINSICWIDTH                                 0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_SETINTRINSICWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_SETINTRINSICWIDTH                                  1

extern void SRPAPI ShapeDrawableClass_setIntrinsicWidth(void *Object,VS_INT32 width);
typedef void (SRPAPI *ShapeDrawableClass_setIntrinsicWidthProc)(void *Object,VS_INT32 width);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ShapeDrawableClass_setPadding;
#define VSFUNCRETURNDEPEND_SHAPEDRAWABLECLASS_SETPADDING(X)  {}
#define VSFUNCRETURNDEPENDNUM_SHAPEDRAWABLECLASS_SETPADDING                                        0
#define VSFUNCPARAMDEPEND_SHAPEDRAWABLECLASS_SETPADDING(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SHAPEDRAWABLECLASS_SETPADDING                                         4

extern void SRPAPI ShapeDrawableClass_setPadding(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *ShapeDrawableClass_setPaddingProc)(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

struct StructOfAttachShapeDrawableClass{
};
struct StructOfShapeDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_BITMAPFACTORYCLASS                                                               "BitmapFactoryClass"
extern VS_UUID VSOBJID_BitmapFactoryClass;
#define VSATTRDEPEND_BITMAPFACTORYCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_BITMAPFACTORYCLASS                                                         1
extern VS_INT32 SRPCALLBACK BitmapFactoryClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_BITMAPFACTORYCLASS_ANDROIDREFCOUNT                                             0
#define VSATTRNUMBER_BITMAPFACTORYCLASS                                                            1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapFactoryClass_decodeResource;
#define VSFUNCRETURNDEPEND_BITMAPFACTORYCLASS_DECODERESOURCE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPFACTORYCLASS_DECODERESOURCE                                    1
#define VSFUNCPARAMDEPEND_BITMAPFACTORYCLASS_DECODERESOURCE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPFACTORYCLASS_DECODERESOURCE                                     1

extern VS_OBJPTR SRPAPI BitmapFactoryClass_decodeResource(void *Object,VS_INT32 id);
typedef VS_OBJPTR (SRPAPI *BitmapFactoryClass_decodeResourceProc)(void *Object,VS_INT32 id);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapFactoryClass_decodeFile;
#define VSFUNCRETURNDEPEND_BITMAPFACTORYCLASS_DECODEFILE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPFACTORYCLASS_DECODEFILE                                        1
#define VSFUNCPARAMDEPEND_BITMAPFACTORYCLASS_DECODEFILE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPFACTORYCLASS_DECODEFILE                                         1

extern VS_OBJPTR SRPAPI BitmapFactoryClass_decodeFile(void *Object,VS_CHAR * pathName);
typedef VS_OBJPTR (SRPAPI *BitmapFactoryClass_decodeFileProc)(void *Object,VS_CHAR * pathName);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapFactoryClass_decodeAssetsFile;
#define VSFUNCRETURNDEPEND_BITMAPFACTORYCLASS_DECODEASSETSFILE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPFACTORYCLASS_DECODEASSETSFILE                                  1
#define VSFUNCPARAMDEPEND_BITMAPFACTORYCLASS_DECODEASSETSFILE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPFACTORYCLASS_DECODEASSETSFILE                                   1

extern VS_OBJPTR SRPAPI BitmapFactoryClass_decodeAssetsFile(void *Object,VS_CHAR * pathName);
typedef VS_OBJPTR (SRPAPI *BitmapFactoryClass_decodeAssetsFileProc)(void *Object,VS_CHAR * pathName);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BitmapFactoryClass_decodeByteArray;
#define VSFUNCRETURNDEPEND_BITMAPFACTORYCLASS_DECODEBYTEARRAY(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BITMAPFACTORYCLASS_DECODEBYTEARRAY                                   1
#define VSFUNCPARAMDEPEND_BITMAPFACTORYCLASS_DECODEBYTEARRAY(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BITMAPFACTORYCLASS_DECODEBYTEARRAY                                    3

extern VS_OBJPTR SRPAPI BitmapFactoryClass_decodeByteArray(void *Object,VS_BINBUFPTR pathName,VS_INT32 offset,VS_INT32 length);
typedef VS_OBJPTR (SRPAPI *BitmapFactoryClass_decodeByteArrayProc)(void *Object,VS_BINBUFPTR pathName,VS_INT32 offset,VS_INT32 length);

struct StructOfAttachBitmapFactoryClass{
};
struct StructOfBitmapFactoryClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_TEXTVIEWCLASS                                                                    "TextViewClass"
extern VS_UUID VSOBJID_TextViewClass;
#define VSATTRDEPEND_TEXTVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_TEXTVIEWCLASS                                                              1
extern VS_INT32 SRPCALLBACK TextViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_TEXTVIEWCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRNUMBER_TEXTVIEWCLASS                                                                 1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_getText;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_GETTEXT(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_GETTEXT                                                1
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_GETTEXT(X)  {}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_GETTEXT                                                 0

extern VS_CHAR * SRPAPI TextViewClass_getText(void *Object);
typedef VS_CHAR * (SRPAPI *TextViewClass_getTextProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setAutoLinkMask;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETAUTOLINKMASK(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETAUTOLINKMASK                                        0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETAUTOLINKMASK(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETAUTOLINKMASK                                         1

extern void SRPAPI TextViewClass_setAutoLinkMask(void *Object,VS_INT32 mask);
typedef void (SRPAPI *TextViewClass_setAutoLinkMaskProc)(void *Object,VS_INT32 mask);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setCursorVisible;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETCURSORVISIBLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETCURSORVISIBLE                                       0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETCURSORVISIBLE(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETCURSORVISIBLE                                        1

extern void SRPAPI TextViewClass_setCursorVisible(void *Object,VS_BOOL visible);
typedef void (SRPAPI *TextViewClass_setCursorVisibleProc)(void *Object,VS_BOOL visible);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setEnabled;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETENABLED(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETENABLED                                             0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETENABLED                                              1

extern void SRPAPI TextViewClass_setEnabled(void *Object,VS_BOOL enabled);
typedef void (SRPAPI *TextViewClass_setEnabledProc)(void *Object,VS_BOOL enabled);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setGravity;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETGRAVITY                                             0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETGRAVITY                                              1

extern void SRPAPI TextViewClass_setGravity(void *Object,VS_INT32 gravity);
typedef void (SRPAPI *TextViewClass_setGravityProc)(void *Object,VS_INT32 gravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setHeight;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETHEIGHT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETHEIGHT                                              0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETHEIGHT                                               1

extern void SRPAPI TextViewClass_setHeight(void *Object,VS_INT32 pixels);
typedef void (SRPAPI *TextViewClass_setHeightProc)(void *Object,VS_INT32 pixels);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setHighlightColor;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETHIGHLIGHTCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETHIGHLIGHTCOLOR                                      0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETHIGHLIGHTCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETHIGHLIGHTCOLOR                                       1

extern void SRPAPI TextViewClass_setHighlightColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *TextViewClass_setHighlightColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setHint;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETHINT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETHINT                                                0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETHINT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETHINT                                                 1

extern void SRPAPI TextViewClass_setHint(void *Object,VS_CHAR * hint);
typedef void (SRPAPI *TextViewClass_setHintProc)(void *Object,VS_CHAR * hint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setHint1;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETHINT1(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETHINT1                                               0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETHINT1(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETHINT1                                                1

extern void SRPAPI TextViewClass_setHint1(void *Object,VS_INT32 resid);
typedef void (SRPAPI *TextViewClass_setHint1Proc)(void *Object,VS_INT32 resid);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setHintTextColor;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETHINTTEXTCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETHINTTEXTCOLOR                                       0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETHINTTEXTCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETHINTTEXTCOLOR                                        1

extern void SRPAPI TextViewClass_setHintTextColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *TextViewClass_setHintTextColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setHorizontallyScrolling;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETHORIZONTALLYSCROLLING(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETHORIZONTALLYSCROLLING                               0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETHORIZONTALLYSCROLLING(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETHORIZONTALLYSCROLLING                                1

extern void SRPAPI TextViewClass_setHorizontallyScrolling(void *Object,VS_BOOL whether);
typedef void (SRPAPI *TextViewClass_setHorizontallyScrollingProc)(void *Object,VS_BOOL whether);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setImeActionLabel;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETIMEACTIONLABEL(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETIMEACTIONLABEL                                      0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETIMEACTIONLABEL(X)  {{X[0].Type=30;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETIMEACTIONLABEL                                       2

extern void SRPAPI TextViewClass_setImeActionLabel(void *Object,VS_CHAR * label,VS_INT32 actionId);
typedef void (SRPAPI *TextViewClass_setImeActionLabelProc)(void *Object,VS_CHAR * label,VS_INT32 actionId);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setImeOptions;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETIMEOPTIONS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETIMEOPTIONS                                          0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETIMEOPTIONS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETIMEOPTIONS                                           1

extern void SRPAPI TextViewClass_setImeOptions(void *Object,VS_INT32 imeOptions);
typedef void (SRPAPI *TextViewClass_setImeOptionsProc)(void *Object,VS_INT32 imeOptions);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setIncludeFontPadding;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETINCLUDEFONTPADDING(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETINCLUDEFONTPADDING                                  0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETINCLUDEFONTPADDING(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETINCLUDEFONTPADDING                                   1

extern void SRPAPI TextViewClass_setIncludeFontPadding(void *Object,VS_BOOL includepad);
typedef void (SRPAPI *TextViewClass_setIncludeFontPaddingProc)(void *Object,VS_BOOL includepad);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setInputExtras;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETINPUTEXTRAS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETINPUTEXTRAS                                         0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETINPUTEXTRAS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETINPUTEXTRAS                                          1

extern void SRPAPI TextViewClass_setInputExtras(void *Object,VS_INT32 xmlResId);
typedef void (SRPAPI *TextViewClass_setInputExtrasProc)(void *Object,VS_INT32 xmlResId);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setInputType;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETINPUTTYPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETINPUTTYPE                                           0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETINPUTTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETINPUTTYPE                                            1

extern void SRPAPI TextViewClass_setInputType(void *Object,VS_INT32 type);
typedef void (SRPAPI *TextViewClass_setInputTypeProc)(void *Object,VS_INT32 type);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setLineSpacing;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETLINESPACING(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETLINESPACING                                         0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETLINESPACING(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETLINESPACING                                          2

extern void SRPAPI TextViewClass_setLineSpacing(void *Object,VS_FLOAT add,VS_FLOAT mult);
typedef void (SRPAPI *TextViewClass_setLineSpacingProc)(void *Object,VS_FLOAT add,VS_FLOAT mult);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setLines;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETLINES(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETLINES                                               0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETLINES(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETLINES                                                1

extern void SRPAPI TextViewClass_setLines(void *Object,VS_INT32 lines);
typedef void (SRPAPI *TextViewClass_setLinesProc)(void *Object,VS_INT32 lines);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setLinkTextColor;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETLINKTEXTCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETLINKTEXTCOLOR                                       0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETLINKTEXTCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETLINKTEXTCOLOR                                        1

extern void SRPAPI TextViewClass_setLinkTextColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *TextViewClass_setLinkTextColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setLinksClickable;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETLINKSCLICKABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETLINKSCLICKABLE                                      0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETLINKSCLICKABLE(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETLINKSCLICKABLE                                       1

extern void SRPAPI TextViewClass_setLinksClickable(void *Object,VS_BOOL whether);
typedef void (SRPAPI *TextViewClass_setLinksClickableProc)(void *Object,VS_BOOL whether);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMarqueeRepeatLimit;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMARQUEEREPEATLIMIT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMARQUEEREPEATLIMIT                                  0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMARQUEEREPEATLIMIT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMARQUEEREPEATLIMIT                                   1

extern void SRPAPI TextViewClass_setMarqueeRepeatLimit(void *Object,VS_INT32 marqueeLimit);
typedef void (SRPAPI *TextViewClass_setMarqueeRepeatLimitProc)(void *Object,VS_INT32 marqueeLimit);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMaxEms;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMAXEMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMAXEMS                                              0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMAXEMS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMAXEMS                                               1

extern void SRPAPI TextViewClass_setMaxEms(void *Object,VS_INT32 maxems);
typedef void (SRPAPI *TextViewClass_setMaxEmsProc)(void *Object,VS_INT32 maxems);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMaxHeight;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMAXHEIGHT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMAXHEIGHT                                           0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMAXHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMAXHEIGHT                                            1

extern void SRPAPI TextViewClass_setMaxHeight(void *Object,VS_INT32 maxHeight);
typedef void (SRPAPI *TextViewClass_setMaxHeightProc)(void *Object,VS_INT32 maxHeight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMaxLines;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMAXLINES(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMAXLINES                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMAXLINES(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMAXLINES                                             1

extern void SRPAPI TextViewClass_setMaxLines(void *Object,VS_INT32 maxlines);
typedef void (SRPAPI *TextViewClass_setMaxLinesProc)(void *Object,VS_INT32 maxlines);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMaxWidth;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMAXWIDTH(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMAXWIDTH                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMAXWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMAXWIDTH                                             1

extern void SRPAPI TextViewClass_setMaxWidth(void *Object,VS_INT32 maxpixels);
typedef void (SRPAPI *TextViewClass_setMaxWidthProc)(void *Object,VS_INT32 maxpixels);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMinEms;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMINEMS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMINEMS                                              0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMINEMS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMINEMS                                               1

extern void SRPAPI TextViewClass_setMinEms(void *Object,VS_INT32 minems);
typedef void (SRPAPI *TextViewClass_setMinEmsProc)(void *Object,VS_INT32 minems);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMinHeight;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMINHEIGHT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMINHEIGHT                                           0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMINHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMINHEIGHT                                            1

extern void SRPAPI TextViewClass_setMinHeight(void *Object,VS_INT32 minHeight);
typedef void (SRPAPI *TextViewClass_setMinHeightProc)(void *Object,VS_INT32 minHeight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMinLines;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMINLINES(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMINLINES                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMINLINES(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMINLINES                                             1

extern void SRPAPI TextViewClass_setMinLines(void *Object,VS_INT32 minlines);
typedef void (SRPAPI *TextViewClass_setMinLinesProc)(void *Object,VS_INT32 minlines);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setMinWidth;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETMINWIDTH(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETMINWIDTH                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETMINWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETMINWIDTH                                             1

extern void SRPAPI TextViewClass_setMinWidth(void *Object,VS_INT32 minpixels);
typedef void (SRPAPI *TextViewClass_setMinWidthProc)(void *Object,VS_INT32 minpixels);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setPadding;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETPADDING(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETPADDING                                             0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETPADDING(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETPADDING                                              4

extern void SRPAPI TextViewClass_setPadding(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *TextViewClass_setPaddingProc)(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setPaintFlags;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETPAINTFLAGS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETPAINTFLAGS                                          0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETPAINTFLAGS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETPAINTFLAGS                                           1

extern void SRPAPI TextViewClass_setPaintFlags(void *Object,VS_INT32 flags);
typedef void (SRPAPI *TextViewClass_setPaintFlagsProc)(void *Object,VS_INT32 flags);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setPrivateImeOptions;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETPRIVATEIMEOPTIONS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETPRIVATEIMEOPTIONS                                   0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETPRIVATEIMEOPTIONS(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETPRIVATEIMEOPTIONS                                    1

extern void SRPAPI TextViewClass_setPrivateImeOptions(void *Object,VS_CHAR * type);
typedef void (SRPAPI *TextViewClass_setPrivateImeOptionsProc)(void *Object,VS_CHAR * type);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setRawInputType;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETRAWINPUTTYPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETRAWINPUTTYPE                                        0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETRAWINPUTTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETRAWINPUTTYPE                                         1

extern void SRPAPI TextViewClass_setRawInputType(void *Object,VS_INT32 type);
typedef void (SRPAPI *TextViewClass_setRawInputTypeProc)(void *Object,VS_INT32 type);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setSelectAllOnFocus;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETSELECTALLONFOCUS(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETSELECTALLONFOCUS                                    0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETSELECTALLONFOCUS(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETSELECTALLONFOCUS                                     1

extern void SRPAPI TextViewClass_setSelectAllOnFocus(void *Object,VS_BOOL selectAllOnFocus);
typedef void (SRPAPI *TextViewClass_setSelectAllOnFocusProc)(void *Object,VS_BOOL selectAllOnFocus);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setSelected;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETSELECTED(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETSELECTED                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETSELECTED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETSELECTED                                             1

extern void SRPAPI TextViewClass_setSelected(void *Object,VS_BOOL selected);
typedef void (SRPAPI *TextViewClass_setSelectedProc)(void *Object,VS_BOOL selected);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setShadowLayer;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETSHADOWLAYER(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETSHADOWLAYER                                         0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETSHADOWLAYER(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETSHADOWLAYER                                          4

extern void SRPAPI TextViewClass_setShadowLayer(void *Object,VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color);
typedef void (SRPAPI *TextViewClass_setShadowLayerProc)(void *Object,VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setSingleLine;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETSINGLELINE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETSINGLELINE                                          0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETSINGLELINE(X)  {}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETSINGLELINE                                           0

extern void SRPAPI TextViewClass_setSingleLine(void *Object);
typedef void (SRPAPI *TextViewClass_setSingleLineProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setSingleLine1;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETSINGLELINE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETSINGLELINE1                                         0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETSINGLELINE1(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETSINGLELINE1                                          1

extern void SRPAPI TextViewClass_setSingleLine1(void *Object,VS_BOOL singleLine);
typedef void (SRPAPI *TextViewClass_setSingleLine1Proc)(void *Object,VS_BOOL singleLine);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setText;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTEXT                                                0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTEXT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTEXT                                                 1

extern void SRPAPI TextViewClass_setText(void *Object,VS_CHAR * Text);
typedef void (SRPAPI *TextViewClass_setTextProc)(void *Object,VS_CHAR * Text);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTextColor;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTEXTCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTEXTCOLOR                                           0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTEXTCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTEXTCOLOR                                            1

extern void SRPAPI TextViewClass_setTextColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *TextViewClass_setTextColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTextKeepState;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTEXTKEEPSTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTEXTKEEPSTATE                                       0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTEXTKEEPSTATE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTEXTKEEPSTATE                                        1

extern void SRPAPI TextViewClass_setTextKeepState(void *Object,VS_CHAR * text);
typedef void (SRPAPI *TextViewClass_setTextKeepStateProc)(void *Object,VS_CHAR * text);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTextScaleX;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTEXTSCALEX(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTEXTSCALEX                                          0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTEXTSCALEX(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTEXTSCALEX                                           1

extern void SRPAPI TextViewClass_setTextScaleX(void *Object,VS_FLOAT size);
typedef void (SRPAPI *TextViewClass_setTextScaleXProc)(void *Object,VS_FLOAT size);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTextSize;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTEXTSIZE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTEXTSIZE                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTEXTSIZE(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTEXTSIZE                                             1

extern void SRPAPI TextViewClass_setTextSize(void *Object,VS_FLOAT size);
typedef void (SRPAPI *TextViewClass_setTextSizeProc)(void *Object,VS_FLOAT size);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTextSize1;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTEXTSIZE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTEXTSIZE1                                           0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTEXTSIZE1(X)  {{X[0].Type=6;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTEXTSIZE1                                            2

extern void SRPAPI TextViewClass_setTextSize1(void *Object,VS_INT32 unit,VS_FLOAT size);
typedef void (SRPAPI *TextViewClass_setTextSize1Proc)(void *Object,VS_INT32 unit,VS_FLOAT size);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTypeface;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTYPEFACE(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTYPEFACE                                            0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTYPEFACE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTYPEFACE                                             1

extern void SRPAPI TextViewClass_setTypeface(void *Object,VS_OBJPTR tf);
typedef void (SRPAPI *TextViewClass_setTypefaceProc)(void *Object,VS_OBJPTR tf);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setTypeface1;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETTYPEFACE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETTYPEFACE1                                           0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETTYPEFACE1(X)  {{X[0].Type=57;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETTYPEFACE1                                            2

extern void SRPAPI TextViewClass_setTypeface1(void *Object,VS_OBJPTR tf,VS_INT32 style);
typedef void (SRPAPI *TextViewClass_setTypeface1Proc)(void *Object,VS_OBJPTR tf,VS_INT32 style);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_TextViewClass_setWidth;
#define VSFUNCRETURNDEPEND_TEXTVIEWCLASS_SETWIDTH(X)  {}
#define VSFUNCRETURNDEPENDNUM_TEXTVIEWCLASS_SETWIDTH                                               0
#define VSFUNCPARAMDEPEND_TEXTVIEWCLASS_SETWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_TEXTVIEWCLASS_SETWIDTH                                                1

extern void SRPAPI TextViewClass_setWidth(void *Object,VS_INT32 pixels);
typedef void (SRPAPI *TextViewClass_setWidthProc)(void *Object,VS_INT32 pixels);

struct StructOfAttachTextViewClass{
};
struct StructOfTextViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_OUTPUTSTREAMCLASS                                                                "OutputStreamClass"
extern VS_UUID VSOBJID_OutputStreamClass;
#define VSATTRDEPEND_OUTPUTSTREAMCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_OUTPUTSTREAMCLASS                                                          1
extern VS_INT32 SRPCALLBACK OutputStreamClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_OUTPUTSTREAMCLASS_ANDROIDREFCOUNT                                              0
#define VSATTRNUMBER_OUTPUTSTREAMCLASS                                                             1

struct StructOfAttachOutputStreamClass{
};
struct StructOfOutputStreamClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ARCSHAPECLASS                                                                    "ArcShapeClass"
extern VS_UUID VSOBJID_ArcShapeClass;
#define VSATTRDEPEND_ARCSHAPECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ARCSHAPECLASS                                                              1
extern VS_INT32 SRPCALLBACK ArcShapeClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ARCSHAPECLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRNUMBER_ARCSHAPECLASS                                                                 1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ArcShapeClass_init;
#define VSFUNCRETURNDEPEND_ARCSHAPECLASS_INIT(X)  {}
#define VSFUNCRETURNDEPENDNUM_ARCSHAPECLASS_INIT                                                   0
#define VSFUNCPARAMDEPEND_ARCSHAPECLASS_INIT(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_ARCSHAPECLASS_INIT                                                    2

extern void SRPAPI ArcShapeClass_init(void *Object,VS_FLOAT startAngle,VS_FLOAT sweepAngle);
typedef void (SRPAPI *ArcShapeClass_initProc)(void *Object,VS_FLOAT startAngle,VS_FLOAT sweepAngle);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ArcShapeClass_draw;
#define VSFUNCRETURNDEPEND_ARCSHAPECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_ARCSHAPECLASS_DRAW                                                   0
#define VSFUNCPARAMDEPEND_ARCSHAPECLASS_DRAW(X)  {{X[0].Type=57;}{X[1].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ARCSHAPECLASS_DRAW                                                    2

extern void SRPAPI ArcShapeClass_draw(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);
typedef void (SRPAPI *ArcShapeClass_drawProc)(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);

struct StructOfAttachArcShapeClass{
};
struct StructOfArcShapeClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_LAYERDRAWABLECLASS                                                               "LayerDrawableClass"
extern VS_UUID VSOBJID_LayerDrawableClass;
#define VSATTRDEPEND_LAYERDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_LAYERDRAWABLECLASS                                                         1
extern VS_INT32 SRPCALLBACK LayerDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_LAYERDRAWABLECLASS_ANDROIDREFCOUNT                                             0
#define VSATTRNUMBER_LAYERDRAWABLECLASS                                                            1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_init;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_INIT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_INIT                                              1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_INIT(X)  {{X[0].Type=40;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_INIT                                               1

extern VS_BOOL SRPAPI LayerDrawableClass_init(void *Object,VS_PARAPKGPTR layers);
typedef VS_BOOL (SRPAPI *LayerDrawableClass_initProc)(void *Object,VS_PARAPKGPTR layers);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_draw;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_DRAW                                              0
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_DRAW                                               1

extern void SRPAPI LayerDrawableClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *LayerDrawableClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_findDrawableByLayerId;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_FINDDRAWABLEBYLAYERID(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_FINDDRAWABLEBYLAYERID                             1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_FINDDRAWABLEBYLAYERID(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_FINDDRAWABLEBYLAYERID                              1

extern VS_OBJPTR SRPAPI LayerDrawableClass_findDrawableByLayerId(void *Object,VS_INT32 id);
typedef VS_OBJPTR (SRPAPI *LayerDrawableClass_findDrawableByLayerIdProc)(void *Object,VS_INT32 id);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getChangingConfigurations;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                         1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                          0

extern VS_INT32 SRPAPI LayerDrawableClass_getChangingConfigurations(void *Object);
typedef VS_INT32 (SRPAPI *LayerDrawableClass_getChangingConfigurationsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getDrawable;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETDRAWABLE                                       1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETDRAWABLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETDRAWABLE                                        1

extern VS_OBJPTR SRPAPI LayerDrawableClass_getDrawable(void *Object,VS_INT32 index);
typedef VS_OBJPTR (SRPAPI *LayerDrawableClass_getDrawableProc)(void *Object,VS_INT32 index);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getId;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETID(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETID                                             1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETID(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETID                                              1

extern VS_INT32 SRPAPI LayerDrawableClass_getId(void *Object,VS_INT32 index);
typedef VS_INT32 (SRPAPI *LayerDrawableClass_getIdProc)(void *Object,VS_INT32 index);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getIntrinsicHeight;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETINTRINSICHEIGHT                                1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETINTRINSICHEIGHT                                 0

extern VS_INT32 SRPAPI LayerDrawableClass_getIntrinsicHeight(void *Object);
typedef VS_INT32 (SRPAPI *LayerDrawableClass_getIntrinsicHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getIntrinsicWidth;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETINTRINSICWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETINTRINSICWIDTH                                 1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETINTRINSICWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETINTRINSICWIDTH                                  0

extern VS_INT32 SRPAPI LayerDrawableClass_getIntrinsicWidth(void *Object);
typedef VS_INT32 (SRPAPI *LayerDrawableClass_getIntrinsicWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getNumberOfLayers;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETNUMBEROFLAYERS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETNUMBEROFLAYERS                                 1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETNUMBEROFLAYERS(X)  {}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETNUMBEROFLAYERS                                  0

extern VS_INT32 SRPAPI LayerDrawableClass_getNumberOfLayers(void *Object);
typedef VS_INT32 (SRPAPI *LayerDrawableClass_getNumberOfLayersProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getOpacity;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETOPACITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETOPACITY                                        1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETOPACITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETOPACITY                                         0

extern VS_INT32 SRPAPI LayerDrawableClass_getOpacity(void *Object);
typedef VS_INT32 (SRPAPI *LayerDrawableClass_getOpacityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_getPadding;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_GETPADDING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_GETPADDING                                        1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_GETPADDING(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_GETPADDING                                         1

extern VS_BOOL SRPAPI LayerDrawableClass_getPadding(void *Object,VS_OBJPTR padding);
typedef VS_BOOL (SRPAPI *LayerDrawableClass_getPaddingProc)(void *Object,VS_OBJPTR padding);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_invalidateDrawable;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_INVALIDATEDRAWABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_INVALIDATEDRAWABLE                                0
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_INVALIDATEDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_INVALIDATEDRAWABLE                                 1

extern void SRPAPI LayerDrawableClass_invalidateDrawable(void *Object,VS_OBJPTR who);
typedef void (SRPAPI *LayerDrawableClass_invalidateDrawableProc)(void *Object,VS_OBJPTR who);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_isStateful;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_ISSTATEFUL(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_ISSTATEFUL                                        1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_ISSTATEFUL(X)  {}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_ISSTATEFUL                                         0

extern VS_BOOL SRPAPI LayerDrawableClass_isStateful(void *Object);
typedef VS_BOOL (SRPAPI *LayerDrawableClass_isStatefulProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_setAlpha;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_SETALPHA                                          0
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_SETALPHA                                           1

extern void SRPAPI LayerDrawableClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *LayerDrawableClass_setAlphaProc)(void *Object,VS_INT32 alpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_setDither;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_SETDITHER(X)  {}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_SETDITHER                                         0
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_SETDITHER(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_SETDITHER                                          1

extern void SRPAPI LayerDrawableClass_setDither(void *Object,VS_BOOL dither);
typedef void (SRPAPI *LayerDrawableClass_setDitherProc)(void *Object,VS_BOOL dither);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_setDrawableByLayerId;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_SETDRAWABLEBYLAYERID(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_SETDRAWABLEBYLAYERID                              1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_SETDRAWABLEBYLAYERID(X)  {{X[0].Type=6;}{X[1].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_SETDRAWABLEBYLAYERID                               2

extern VS_BOOL SRPAPI LayerDrawableClass_setDrawableByLayerId(void *Object,VS_INT32 id,VS_OBJPTR drawable);
typedef VS_BOOL (SRPAPI *LayerDrawableClass_setDrawableByLayerIdProc)(void *Object,VS_INT32 id,VS_OBJPTR drawable);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_setId;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_SETID(X)  {}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_SETID                                             0
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_SETID(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_SETID                                              2

extern void SRPAPI LayerDrawableClass_setId(void *Object,VS_INT32 index,VS_INT32 id);
typedef void (SRPAPI *LayerDrawableClass_setIdProc)(void *Object,VS_INT32 index,VS_INT32 id);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_setLayerInset;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_SETLAYERINSET(X)  {}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_SETLAYERINSET                                     0
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_SETLAYERINSET(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_SETLAYERINSET                                      5

extern void SRPAPI LayerDrawableClass_setLayerInset(void *Object,VS_INT32 index,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);
typedef void (SRPAPI *LayerDrawableClass_setLayerInsetProc)(void *Object,VS_INT32 index,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_LayerDrawableClass_setVisible;
#define VSFUNCRETURNDEPEND_LAYERDRAWABLECLASS_SETVISIBLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_LAYERDRAWABLECLASS_SETVISIBLE                                        1
#define VSFUNCPARAMDEPEND_LAYERDRAWABLECLASS_SETVISIBLE(X)  {{X[0].Type=1;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_LAYERDRAWABLECLASS_SETVISIBLE                                         2

extern VS_BOOL SRPAPI LayerDrawableClass_setVisible(void *Object,VS_BOOL visible,VS_BOOL restart);
typedef VS_BOOL (SRPAPI *LayerDrawableClass_setVisibleProc)(void *Object,VS_BOOL visible,VS_BOOL restart);

struct StructOfAttachLayerDrawableClass{
};
struct StructOfLayerDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_MEDIAPLAYERCLASS                                                                 "MediaPlayerClass"
extern VS_UUID VSOBJID_MediaPlayerClass;
#define VSATTRDEPEND_MEDIAPLAYERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_MEDIAPLAYERCLASS                                                           1
extern VS_INT32 SRPCALLBACK MediaPlayerClass_RequestRegisterObject( );

/*----output event: onBufferingUpdate[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onBufferingUpdate;
/*----output event: onCompletion[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onCompletion;
/*----output event: onError[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onError;
/*----output event: onInfo[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onInfo;
/*----output event: onPrepared[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onPrepared;
/*----output event: onSeekComplete[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onSeekComplete;
/*----output event: onVideoSizeChanged[]  Static Event */
extern VS_UUID VSOUTEVENTID_MediaPlayerClass_onVideoSizeChanged;

/*------Variable Index Define */
#define VSATTRINDEX_MEDIAPLAYERCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_MEDIAPLAYERCLASS                                                              1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_getCurrentPosition;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_GETCURRENTPOSITION(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_GETCURRENTPOSITION                                  1
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_GETCURRENTPOSITION(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_GETCURRENTPOSITION                                   0

extern VS_INT32 SRPAPI MediaPlayerClass_getCurrentPosition(void *Object);
typedef VS_INT32 (SRPAPI *MediaPlayerClass_getCurrentPositionProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_getDuration;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_GETDURATION(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_GETDURATION                                         1
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_GETDURATION(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_GETDURATION                                          0

extern VS_INT32 SRPAPI MediaPlayerClass_getDuration(void *Object);
typedef VS_INT32 (SRPAPI *MediaPlayerClass_getDurationProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_getVideoHeight;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_GETVIDEOHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_GETVIDEOHEIGHT                                      1
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_GETVIDEOHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_GETVIDEOHEIGHT                                       0

extern VS_INT32 SRPAPI MediaPlayerClass_getVideoHeight(void *Object);
typedef VS_INT32 (SRPAPI *MediaPlayerClass_getVideoHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_getVideoWidth;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_GETVIDEOWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_GETVIDEOWIDTH                                       1
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_GETVIDEOWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_GETVIDEOWIDTH                                        0

extern VS_INT32 SRPAPI MediaPlayerClass_getVideoWidth(void *Object);
typedef VS_INT32 (SRPAPI *MediaPlayerClass_getVideoWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_isLooping;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_ISLOOPING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_ISLOOPING                                           1
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_ISLOOPING(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_ISLOOPING                                            0

extern VS_BOOL SRPAPI MediaPlayerClass_isLooping(void *Object);
typedef VS_BOOL (SRPAPI *MediaPlayerClass_isLoopingProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_isPlaying;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_ISPLAYING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_ISPLAYING                                           1
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_ISPLAYING(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_ISPLAYING                                            0

extern VS_BOOL SRPAPI MediaPlayerClass_isPlaying(void *Object);
typedef VS_BOOL (SRPAPI *MediaPlayerClass_isPlayingProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_pause;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_PAUSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_PAUSE                                               0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_PAUSE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_PAUSE                                                0

extern void SRPAPI MediaPlayerClass_pause(void *Object);
typedef void (SRPAPI *MediaPlayerClass_pauseProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_prepare;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_PREPARE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_PREPARE                                             0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_PREPARE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_PREPARE                                              0

extern void SRPAPI MediaPlayerClass_prepare(void *Object);
typedef void (SRPAPI *MediaPlayerClass_prepareProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_prepareAsync;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_PREPAREASYNC(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_PREPAREASYNC                                        0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_PREPAREASYNC(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_PREPAREASYNC                                         0

extern void SRPAPI MediaPlayerClass_prepareAsync(void *Object);
typedef void (SRPAPI *MediaPlayerClass_prepareAsyncProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_release;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_RELEASE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_RELEASE                                             0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_RELEASE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_RELEASE                                              0

extern void SRPAPI MediaPlayerClass_release(void *Object);
typedef void (SRPAPI *MediaPlayerClass_releaseProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_reset;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_RESET(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_RESET                                               0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_RESET(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_RESET                                                0

extern void SRPAPI MediaPlayerClass_reset(void *Object);
typedef void (SRPAPI *MediaPlayerClass_resetProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_seekTo;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SEEKTO(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SEEKTO                                              0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SEEKTO(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SEEKTO                                               1

extern void SRPAPI MediaPlayerClass_seekTo(void *Object,VS_INT32 msec);
typedef void (SRPAPI *MediaPlayerClass_seekToProc)(void *Object,VS_INT32 msec);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setDataSource;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETDATASOURCE(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETDATASOURCE                                       0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETDATASOURCE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETDATASOURCE                                        1

extern void SRPAPI MediaPlayerClass_setDataSource(void *Object,VS_CHAR * path);
typedef void (SRPAPI *MediaPlayerClass_setDataSourceProc)(void *Object,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setDataSource1;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETDATASOURCE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETDATASOURCE1                                      0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETDATASOURCE1(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETDATASOURCE1                                       1

extern void SRPAPI MediaPlayerClass_setDataSource1(void *Object,VS_OBJPTR fd);
typedef void (SRPAPI *MediaPlayerClass_setDataSource1Proc)(void *Object,VS_OBJPTR fd);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setDataSource2;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETDATASOURCE2(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETDATASOURCE2                                      0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETDATASOURCE2(X)  {{X[0].Type=57;}{X[1].Type=9;}{X[2].Type=9;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETDATASOURCE2                                       3

extern void SRPAPI MediaPlayerClass_setDataSource2(void *Object,VS_OBJPTR fd,VS_LONG offset,VS_LONG length);
typedef void (SRPAPI *MediaPlayerClass_setDataSource2Proc)(void *Object,VS_OBJPTR fd,VS_LONG offset,VS_LONG length);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setDisplay;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETDISPLAY(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETDISPLAY                                          0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETDISPLAY(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETDISPLAY                                           1

extern void SRPAPI MediaPlayerClass_setDisplay(void *Object,VS_OBJPTR sh);
typedef void (SRPAPI *MediaPlayerClass_setDisplayProc)(void *Object,VS_OBJPTR sh);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setLooping;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETLOOPING(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETLOOPING                                          0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETLOOPING(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETLOOPING                                           1

extern void SRPAPI MediaPlayerClass_setLooping(void *Object,VS_BOOL looping);
typedef void (SRPAPI *MediaPlayerClass_setLoopingProc)(void *Object,VS_BOOL looping);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setScreenOnWhilePlaying;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETSCREENONWHILEPLAYING(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETSCREENONWHILEPLAYING                             0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETSCREENONWHILEPLAYING(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETSCREENONWHILEPLAYING                              1

extern void SRPAPI MediaPlayerClass_setScreenOnWhilePlaying(void *Object,VS_BOOL screenOn);
typedef void (SRPAPI *MediaPlayerClass_setScreenOnWhilePlayingProc)(void *Object,VS_BOOL screenOn);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_setVolume;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_SETVOLUME(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_SETVOLUME                                           0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_SETVOLUME(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_SETVOLUME                                            2

extern void SRPAPI MediaPlayerClass_setVolume(void *Object,VS_FLOAT leftVolume,VS_FLOAT rightVolume);
typedef void (SRPAPI *MediaPlayerClass_setVolumeProc)(void *Object,VS_FLOAT leftVolume,VS_FLOAT rightVolume);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_start;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_START(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_START                                               0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_START(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_START                                                0

extern void SRPAPI MediaPlayerClass_start(void *Object);
typedef void (SRPAPI *MediaPlayerClass_startProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MediaPlayerClass_stop;
#define VSFUNCRETURNDEPEND_MEDIAPLAYERCLASS_STOP(X)  {}
#define VSFUNCRETURNDEPENDNUM_MEDIAPLAYERCLASS_STOP                                                0
#define VSFUNCPARAMDEPEND_MEDIAPLAYERCLASS_STOP(X)  {}
#define VSFUNCPARAMDEPENDNUM_MEDIAPLAYERCLASS_STOP                                                 0

extern void SRPAPI MediaPlayerClass_stop(void *Object);
typedef void (SRPAPI *MediaPlayerClass_stopProc)(void *Object);

struct StructOfAttachMediaPlayerClass{
};
struct StructOfMediaPlayerClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_FILEINPUTSTREAMCLASS                                                             "FileInputStreamClass"
extern VS_UUID VSOBJID_FileInputStreamClass;
#define VSATTRDEPEND_FILEINPUTSTREAMCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_FILEINPUTSTREAMCLASS                                                       1
extern VS_INT32 SRPCALLBACK FileInputStreamClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_FILEINPUTSTREAMCLASS_ANDROIDREFCOUNT                                           0
#define VSATTRNUMBER_FILEINPUTSTREAMCLASS                                                          1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileInputStreamClass_init;
#define VSFUNCRETURNDEPEND_FILEINPUTSTREAMCLASS_INIT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_FILEINPUTSTREAMCLASS_INIT                                            1
#define VSFUNCPARAMDEPEND_FILEINPUTSTREAMCLASS_INIT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_FILEINPUTSTREAMCLASS_INIT                                             1

extern VS_BOOL SRPAPI FileInputStreamClass_init(void *Object,VS_CHAR * path);
typedef VS_BOOL (SRPAPI *FileInputStreamClass_initProc)(void *Object,VS_CHAR * path);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileInputStreamClass_available;
#define VSFUNCRETURNDEPEND_FILEINPUTSTREAMCLASS_AVAILABLE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_FILEINPUTSTREAMCLASS_AVAILABLE                                       1
#define VSFUNCPARAMDEPEND_FILEINPUTSTREAMCLASS_AVAILABLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_FILEINPUTSTREAMCLASS_AVAILABLE                                        0

extern VS_INT32 SRPAPI FileInputStreamClass_available(void *Object);
typedef VS_INT32 (SRPAPI *FileInputStreamClass_availableProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileInputStreamClass_close;
#define VSFUNCRETURNDEPEND_FILEINPUTSTREAMCLASS_CLOSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_FILEINPUTSTREAMCLASS_CLOSE                                           0
#define VSFUNCPARAMDEPEND_FILEINPUTSTREAMCLASS_CLOSE(X)  {}
#define VSFUNCPARAMDEPENDNUM_FILEINPUTSTREAMCLASS_CLOSE                                            0

extern void SRPAPI FileInputStreamClass_close(void *Object);
typedef void (SRPAPI *FileInputStreamClass_closeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileInputStreamClass_read;
#define VSFUNCRETURNDEPEND_FILEINPUTSTREAMCLASS_READ(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_FILEINPUTSTREAMCLASS_READ                                            1
#define VSFUNCPARAMDEPEND_FILEINPUTSTREAMCLASS_READ(X)  {}
#define VSFUNCPARAMDEPENDNUM_FILEINPUTSTREAMCLASS_READ                                             0

extern VS_INT32 SRPAPI FileInputStreamClass_read(void *Object);
typedef VS_INT32 (SRPAPI *FileInputStreamClass_readProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileInputStreamClass_read1;
#define VSFUNCRETURNDEPEND_FILEINPUTSTREAMCLASS_READ1(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_FILEINPUTSTREAMCLASS_READ1                                           1
#define VSFUNCPARAMDEPEND_FILEINPUTSTREAMCLASS_READ1(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_FILEINPUTSTREAMCLASS_READ1                                            3

extern VS_INT32 SRPAPI FileInputStreamClass_read1(void *Object,VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount);
typedef VS_INT32 (SRPAPI *FileInputStreamClass_read1Proc)(void *Object,VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_FileInputStreamClass_skip;
#define VSFUNCRETURNDEPEND_FILEINPUTSTREAMCLASS_SKIP(X)  {}
#define VSFUNCRETURNDEPENDNUM_FILEINPUTSTREAMCLASS_SKIP                                            0
#define VSFUNCPARAMDEPEND_FILEINPUTSTREAMCLASS_SKIP(X)  {{X[0].Type=9;}}
#define VSFUNCPARAMDEPENDNUM_FILEINPUTSTREAMCLASS_SKIP                                             1

extern void SRPAPI FileInputStreamClass_skip(void *Object,VS_LONG byteCount);
typedef void (SRPAPI *FileInputStreamClass_skipProc)(void *Object,VS_LONG byteCount);

struct StructOfAttachFileInputStreamClass{
};
struct StructOfFileInputStreamClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_CHECKBOXCLASS                                                                    "CheckBoxClass"
extern VS_UUID VSOBJID_CheckBoxClass;
#define VSATTRDEPEND_CHECKBOXCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_CHECKBOXCLASS                                                              1
extern VS_INT32 SRPCALLBACK CheckBoxClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_CHECKBOXCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRNUMBER_CHECKBOXCLASS                                                                 1

struct StructOfAttachCheckBoxClass{
};
struct StructOfCheckBoxClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_LISTVIEWCLASS                                                                    "ListViewClass"
extern VS_UUID VSOBJID_ListViewClass;
#define VSATTRDEPEND_LISTVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_LISTVIEWCLASS                                                              4
extern VS_INT32 SRPCALLBACK ListViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_LISTVIEWCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRINDEX_LISTVIEWCLASS_VIEWGROUPQUEUE                                                   1
#define VSATTRINDEX_LISTVIEWCLASS_VIEWQUEUE                                                        2
#define VSATTRINDEX_LISTVIEWCLASS_OBJECTQUEUE                                                      3
#define VSATTRNUMBER_LISTVIEWCLASS                                                                 4

struct StructOfAttachListViewClass{
};
struct StructOfListViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_IMAGEVIEWCLASS                                                                   "ImageViewClass"
extern VS_UUID VSOBJID_ImageViewClass;
#define VSATTRDEPEND_IMAGEVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_IMAGEVIEWCLASS                                                             1
extern VS_INT32 SRPCALLBACK ImageViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_IMAGEVIEWCLASS_ANDROIDREFCOUNT                                                 0
#define VSATTRNUMBER_IMAGEVIEWCLASS                                                                1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_clearColorFilter;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_CLEARCOLORFILTER(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_CLEARCOLORFILTER                                      0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_CLEARCOLORFILTER(X)  {}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_CLEARCOLORFILTER                                       0

extern void SRPAPI ImageViewClass_clearColorFilter(void *Object);
typedef void (SRPAPI *ImageViewClass_clearColorFilterProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_getBaseline;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_GETBASELINE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_GETBASELINE                                           1
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_GETBASELINE(X)  {}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_GETBASELINE                                            0

extern VS_INT32 SRPAPI ImageViewClass_getBaseline(void *Object);
typedef VS_INT32 (SRPAPI *ImageViewClass_getBaselineProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_getBaselineAlignBottom;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_GETBASELINEALIGNBOTTOM(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_GETBASELINEALIGNBOTTOM                                1
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_GETBASELINEALIGNBOTTOM(X)  {}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_GETBASELINEALIGNBOTTOM                                 0

extern VS_BOOL SRPAPI ImageViewClass_getBaselineAlignBottom(void *Object);
typedef VS_BOOL (SRPAPI *ImageViewClass_getBaselineAlignBottomProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_getDrawable;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_GETDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_GETDRAWABLE                                           1
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_GETDRAWABLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_GETDRAWABLE                                            0

extern VS_OBJPTR SRPAPI ImageViewClass_getDrawable(void *Object);
typedef VS_OBJPTR (SRPAPI *ImageViewClass_getDrawableProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_getImageMatrix;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_GETIMAGEMATRIX(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_GETIMAGEMATRIX                                        1
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_GETIMAGEMATRIX(X)  {}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_GETIMAGEMATRIX                                         0

extern VS_OBJPTR SRPAPI ImageViewClass_getImageMatrix(void *Object);
typedef VS_OBJPTR (SRPAPI *ImageViewClass_getImageMatrixProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_getScaleType;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_GETSCALETYPE(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_GETSCALETYPE                                          1
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_GETSCALETYPE(X)  {}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_GETSCALETYPE                                           0

extern VS_CHAR * SRPAPI ImageViewClass_getScaleType(void *Object);
typedef VS_CHAR * (SRPAPI *ImageViewClass_getScaleTypeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_invalidateDrawable;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_INVALIDATEDRAWABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_INVALIDATEDRAWABLE                                    0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_INVALIDATEDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_INVALIDATEDRAWABLE                                     1

extern void SRPAPI ImageViewClass_invalidateDrawable(void *Object,VS_OBJPTR dr);
typedef void (SRPAPI *ImageViewClass_invalidateDrawableProc)(void *Object,VS_OBJPTR dr);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setAdjustViewBounds;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETADJUSTVIEWBOUNDS(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETADJUSTVIEWBOUNDS                                   0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETADJUSTVIEWBOUNDS(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETADJUSTVIEWBOUNDS                                    1

extern void SRPAPI ImageViewClass_setAdjustViewBounds(void *Object,VS_BOOL adjustViewBounds);
typedef void (SRPAPI *ImageViewClass_setAdjustViewBoundsProc)(void *Object,VS_BOOL adjustViewBounds);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setAlpha;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETALPHA                                              0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETALPHA                                               1

extern void SRPAPI ImageViewClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *ImageViewClass_setAlphaProc)(void *Object,VS_INT32 alpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageBitmap;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGEBITMAP(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEBITMAP                                        0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGEBITMAP(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEBITMAP                                         1

extern void SRPAPI ImageViewClass_setImageBitmap(void *Object,VS_OBJPTR bm);
typedef void (SRPAPI *ImageViewClass_setImageBitmapProc)(void *Object,VS_OBJPTR bm);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageDrawable;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGEDRAWABLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEDRAWABLE                                      0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGEDRAWABLE(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEDRAWABLE                                       1

extern void SRPAPI ImageViewClass_setImageDrawable(void *Object,VS_OBJPTR drawable);
typedef void (SRPAPI *ImageViewClass_setImageDrawableProc)(void *Object,VS_OBJPTR drawable);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageLevel;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGELEVEL(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGELEVEL                                         0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGELEVEL(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGELEVEL                                          1

extern void SRPAPI ImageViewClass_setImageLevel(void *Object,VS_INT32 level);
typedef void (SRPAPI *ImageViewClass_setImageLevelProc)(void *Object,VS_INT32 level);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageMatrix;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGEMATRIX(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEMATRIX                                        0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGEMATRIX(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEMATRIX                                         1

extern void SRPAPI ImageViewClass_setImageMatrix(void *Object,VS_OBJPTR matrix);
typedef void (SRPAPI *ImageViewClass_setImageMatrixProc)(void *Object,VS_OBJPTR matrix);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageResource;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGERESOURCE(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGERESOURCE                                      0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGERESOURCE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGERESOURCE                                       1

extern void SRPAPI ImageViewClass_setImageResource(void *Object,VS_INT32 resid);
typedef void (SRPAPI *ImageViewClass_setImageResourceProc)(void *Object,VS_INT32 resid);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageState;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGESTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGESTATE                                         0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGESTATE(X)  {{X[0].Type=40;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGESTATE                                          2

extern void SRPAPI ImageViewClass_setImageState(void *Object,VS_PARAPKGPTR state,VS_BOOL merge);
typedef void (SRPAPI *ImageViewClass_setImageStateProc)(void *Object,VS_PARAPKGPTR state,VS_BOOL merge);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setImageURI;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETIMAGEURI(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEURI                                           0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETIMAGEURI(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETIMAGEURI                                            1

extern void SRPAPI ImageViewClass_setImageURI(void *Object,VS_CHAR * uri);
typedef void (SRPAPI *ImageViewClass_setImageURIProc)(void *Object,VS_CHAR * uri);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setMaxHeight;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETMAXHEIGHT(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETMAXHEIGHT                                          0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETMAXHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETMAXHEIGHT                                           1

extern void SRPAPI ImageViewClass_setMaxHeight(void *Object,VS_INT32 maxHeight);
typedef void (SRPAPI *ImageViewClass_setMaxHeightProc)(void *Object,VS_INT32 maxHeight);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setMaxWidth;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETMAXWIDTH(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETMAXWIDTH                                           0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETMAXWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETMAXWIDTH                                            1

extern void SRPAPI ImageViewClass_setMaxWidth(void *Object,VS_INT32 maxWidth);
typedef void (SRPAPI *ImageViewClass_setMaxWidthProc)(void *Object,VS_INT32 maxWidth);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setScaleType;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETSCALETYPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETSCALETYPE                                          0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETSCALETYPE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETSCALETYPE                                           1

extern void SRPAPI ImageViewClass_setScaleType(void *Object,VS_CHAR * scaleType);
typedef void (SRPAPI *ImageViewClass_setScaleTypeProc)(void *Object,VS_CHAR * scaleType);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ImageViewClass_setSelected;
#define VSFUNCRETURNDEPEND_IMAGEVIEWCLASS_SETSELECTED(X)  {}
#define VSFUNCRETURNDEPENDNUM_IMAGEVIEWCLASS_SETSELECTED                                           0
#define VSFUNCPARAMDEPEND_IMAGEVIEWCLASS_SETSELECTED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_IMAGEVIEWCLASS_SETSELECTED                                            1

extern void SRPAPI ImageViewClass_setSelected(void *Object,VS_BOOL selected);
typedef void (SRPAPI *ImageViewClass_setSelectedProc)(void *Object,VS_BOOL selected);

struct StructOfAttachImageViewClass{
};
struct StructOfImageViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ABSSPINNERCLASS                                                                  "AbsSpinnerClass"
extern VS_UUID VSOBJID_AbsSpinnerClass;
#define VSATTRDEPEND_ABSSPINNERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_ABSSPINNERCLASS                                                            4
extern VS_INT32 SRPCALLBACK AbsSpinnerClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ABSSPINNERCLASS_ANDROIDREFCOUNT                                                0
#define VSATTRINDEX_ABSSPINNERCLASS_VIEWGROUPQUEUE                                                 1
#define VSATTRINDEX_ABSSPINNERCLASS_VIEWQUEUE                                                      2
#define VSATTRINDEX_ABSSPINNERCLASS_OBJECTQUEUE                                                    3
#define VSATTRNUMBER_ABSSPINNERCLASS                                                               4

struct StructOfAttachAbsSpinnerClass{
};
struct StructOfAbsSpinnerClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_MOTIONEVENTCLASS                                                                 "MotionEventClass"
extern VS_UUID VSOBJID_MotionEventClass;
#define VSATTRDEPEND_MOTIONEVENTCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_MOTIONEVENTCLASS                                                           1
extern VS_INT32 SRPCALLBACK MotionEventClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_MOTIONEVENTCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_MOTIONEVENTCLASS                                                              1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_findPointerIndex;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_FINDPOINTERINDEX(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_FINDPOINTERINDEX                                    1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_FINDPOINTERINDEX(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_FINDPOINTERINDEX                                     1

extern VS_INT32 SRPAPI MotionEventClass_findPointerIndex(void *Object,VS_INT32 pointerId);
typedef VS_INT32 (SRPAPI *MotionEventClass_findPointerIndexProc)(void *Object,VS_INT32 pointerId);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getAction;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETACTION(X)  {{X[0].Type=2;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETACTION                                           1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETACTION(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETACTION                                            0

extern VS_INT8 SRPAPI MotionEventClass_getAction(void *Object);
typedef VS_INT8 (SRPAPI *MotionEventClass_getActionProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getDeviceId;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETDEVICEID(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETDEVICEID                                         1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETDEVICEID(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETDEVICEID                                          0

extern VS_INT32 SRPAPI MotionEventClass_getDeviceId(void *Object);
typedef VS_INT32 (SRPAPI *MotionEventClass_getDeviceIdProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getDownTime;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETDOWNTIME(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETDOWNTIME                                         1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETDOWNTIME(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETDOWNTIME                                          0

extern VS_LONG SRPAPI MotionEventClass_getDownTime(void *Object);
typedef VS_LONG (SRPAPI *MotionEventClass_getDownTimeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getEdgeFlags;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETEDGEFLAGS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETEDGEFLAGS                                        1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETEDGEFLAGS(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETEDGEFLAGS                                         0

extern VS_INT32 SRPAPI MotionEventClass_getEdgeFlags(void *Object);
typedef VS_INT32 (SRPAPI *MotionEventClass_getEdgeFlagsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getEventTime;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETEVENTTIME(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETEVENTTIME                                        1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETEVENTTIME(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETEVENTTIME                                         0

extern VS_LONG SRPAPI MotionEventClass_getEventTime(void *Object);
typedef VS_LONG (SRPAPI *MotionEventClass_getEventTimeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalEventTime;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALEVENTTIME(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALEVENTTIME                              1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALEVENTTIME(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALEVENTTIME                               1

extern VS_LONG SRPAPI MotionEventClass_getHistoricalEventTime(void *Object,VS_INT32 pos);
typedef VS_LONG (SRPAPI *MotionEventClass_getHistoricalEventTimeProc)(void *Object,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalPressure;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALPRESSURE(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALPRESSURE                               1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALPRESSURE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALPRESSURE                                1

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalPressure(void *Object,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalPressureProc)(void *Object,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalPressure1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALPRESSURE1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALPRESSURE1                              1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALPRESSURE1(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALPRESSURE1                               2

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalPressure1(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalPressure1Proc)(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalSize;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALSIZE(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALSIZE                                   1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALSIZE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALSIZE                                    1

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalSize(void *Object,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalSizeProc)(void *Object,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalSize1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALSIZE1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALSIZE1                                  1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALSIZE1(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALSIZE1                                   2

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalSize1(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalSize1Proc)(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalX;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALX(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALX                                      1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALX(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALX                                       1

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalX(void *Object,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalXProc)(void *Object,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalX1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALX1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALX1                                     1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALX1(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALX1                                      2

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalX1(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalX1Proc)(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalY;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALY(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALY                                      1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALY                                       1

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalY(void *Object,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalYProc)(void *Object,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistoricalY1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORICALY1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALY1                                     1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORICALY1(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORICALY1                                      2

extern VS_FLOAT SRPAPI MotionEventClass_getHistoricalY1(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getHistoricalY1Proc)(void *Object,VS_INT32 pointerIndex,VS_INT32 pos);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getHistorySize;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETHISTORYSIZE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETHISTORYSIZE                                      1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETHISTORYSIZE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETHISTORYSIZE                                       0

extern VS_INT32 SRPAPI MotionEventClass_getHistorySize(void *Object);
typedef VS_INT32 (SRPAPI *MotionEventClass_getHistorySizeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getMetaState;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETMETASTATE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETMETASTATE                                        1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETMETASTATE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETMETASTATE                                         0

extern VS_INT32 SRPAPI MotionEventClass_getMetaState(void *Object);
typedef VS_INT32 (SRPAPI *MotionEventClass_getMetaStateProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getPointerCount;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETPOINTERCOUNT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETPOINTERCOUNT                                     1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETPOINTERCOUNT(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETPOINTERCOUNT                                      0

extern VS_INT32 SRPAPI MotionEventClass_getPointerCount(void *Object);
typedef VS_INT32 (SRPAPI *MotionEventClass_getPointerCountProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getPointerId;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETPOINTERID(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETPOINTERID                                        1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETPOINTERID(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETPOINTERID                                         1

extern VS_INT32 SRPAPI MotionEventClass_getPointerId(void *Object,VS_INT32 pointerIndex);
typedef VS_INT32 (SRPAPI *MotionEventClass_getPointerIdProc)(void *Object,VS_INT32 pointerIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getPressure;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETPRESSURE(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETPRESSURE                                         1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETPRESSURE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETPRESSURE                                          0

extern VS_FLOAT SRPAPI MotionEventClass_getPressure(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getPressureProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getPressure1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETPRESSURE1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETPRESSURE1                                        1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETPRESSURE1(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETPRESSURE1                                         1

extern VS_FLOAT SRPAPI MotionEventClass_getPressure1(void *Object,VS_INT32 pointerIndex);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getPressure1Proc)(void *Object,VS_INT32 pointerIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getRawX;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETRAWX(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETRAWX                                             1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETRAWX(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETRAWX                                              0

extern VS_FLOAT SRPAPI MotionEventClass_getRawX(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getRawXProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getRawY;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETRAWY(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETRAWY                                             1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETRAWY(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETRAWY                                              0

extern VS_FLOAT SRPAPI MotionEventClass_getRawY(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getRawYProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getSize;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETSIZE(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETSIZE                                             1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETSIZE(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETSIZE                                              0

extern VS_FLOAT SRPAPI MotionEventClass_getSize(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getSizeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getSize1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETSIZE1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETSIZE1                                            1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETSIZE1(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETSIZE1                                             1

extern VS_FLOAT SRPAPI MotionEventClass_getSize1(void *Object,VS_INT32 pointerIndex);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getSize1Proc)(void *Object,VS_INT32 pointerIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getX;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETX(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETX                                                1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETX(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETX                                                 0

extern VS_FLOAT SRPAPI MotionEventClass_getX(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getXProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getX1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETX1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETX1                                               1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETX1(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETX1                                                1

extern VS_FLOAT SRPAPI MotionEventClass_getX1(void *Object,VS_INT32 pointerIndex);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getX1Proc)(void *Object,VS_INT32 pointerIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getXPrecision;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETXPRECISION(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETXPRECISION                                       1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETXPRECISION(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETXPRECISION                                        0

extern VS_FLOAT SRPAPI MotionEventClass_getXPrecision(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getXPrecisionProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getY;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETY(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETY                                                1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETY(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETY                                                 0

extern VS_FLOAT SRPAPI MotionEventClass_getY(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getYProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getY1;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETY1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETY1                                               1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETY1(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETY1                                                1

extern VS_FLOAT SRPAPI MotionEventClass_getY1(void *Object,VS_INT32 pointerIndex);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getY1Proc)(void *Object,VS_INT32 pointerIndex);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_MotionEventClass_getYPrecision;
#define VSFUNCRETURNDEPEND_MOTIONEVENTCLASS_GETYPRECISION(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_MOTIONEVENTCLASS_GETYPRECISION                                       1
#define VSFUNCPARAMDEPEND_MOTIONEVENTCLASS_GETYPRECISION(X)  {}
#define VSFUNCPARAMDEPENDNUM_MOTIONEVENTCLASS_GETYPRECISION                                        0

extern VS_FLOAT SRPAPI MotionEventClass_getYPrecision(void *Object);
typedef VS_FLOAT (SRPAPI *MotionEventClass_getYPrecisionProc)(void *Object);

struct StructOfAttachMotionEventClass{
};
struct StructOfMotionEventClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ASSETFILEDESCRIPTORCLASS                                                         "AssetFileDescriptorClass"
extern VS_UUID VSOBJID_AssetFileDescriptorClass;
#define VSATTRDEPEND_ASSETFILEDESCRIPTORCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ASSETFILEDESCRIPTORCLASS                                                   1
extern VS_INT32 SRPCALLBACK AssetFileDescriptorClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ASSETFILEDESCRIPTORCLASS_ANDROIDREFCOUNT                                       0
#define VSATTRNUMBER_ASSETFILEDESCRIPTORCLASS                                                      1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_close;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_CLOSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_CLOSE                                       0
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_CLOSE(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_CLOSE                                        0

extern void SRPAPI AssetFileDescriptorClass_close(void *Object);
typedef void (SRPAPI *AssetFileDescriptorClass_closeProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_createInputStream;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_CREATEINPUTSTREAM(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_CREATEINPUTSTREAM                           1
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_CREATEINPUTSTREAM(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_CREATEINPUTSTREAM                            0

extern VS_OBJPTR SRPAPI AssetFileDescriptorClass_createInputStream(void *Object);
typedef VS_OBJPTR (SRPAPI *AssetFileDescriptorClass_createInputStreamProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_createOutputStream;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_CREATEOUTPUTSTREAM(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_CREATEOUTPUTSTREAM                          1
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_CREATEOUTPUTSTREAM(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_CREATEOUTPUTSTREAM                           0

extern VS_OBJPTR SRPAPI AssetFileDescriptorClass_createOutputStream(void *Object);
typedef VS_OBJPTR (SRPAPI *AssetFileDescriptorClass_createOutputStreamProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_describeContents;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_DESCRIBECONTENTS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_DESCRIBECONTENTS                            1
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_DESCRIBECONTENTS(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_DESCRIBECONTENTS                             0

extern VS_INT32 SRPAPI AssetFileDescriptorClass_describeContents(void *Object);
typedef VS_INT32 (SRPAPI *AssetFileDescriptorClass_describeContentsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_getDeclaredLength;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_GETDECLAREDLENGTH(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_GETDECLAREDLENGTH                           1
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_GETDECLAREDLENGTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_GETDECLAREDLENGTH                            0

extern VS_LONG SRPAPI AssetFileDescriptorClass_getDeclaredLength(void *Object);
typedef VS_LONG (SRPAPI *AssetFileDescriptorClass_getDeclaredLengthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_getLength;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_GETLENGTH(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_GETLENGTH                                   1
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_GETLENGTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_GETLENGTH                                    0

extern VS_LONG SRPAPI AssetFileDescriptorClass_getLength(void *Object);
typedef VS_LONG (SRPAPI *AssetFileDescriptorClass_getLengthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AssetFileDescriptorClass_getStartOffset;
#define VSFUNCRETURNDEPEND_ASSETFILEDESCRIPTORCLASS_GETSTARTOFFSET(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_ASSETFILEDESCRIPTORCLASS_GETSTARTOFFSET                              1
#define VSFUNCPARAMDEPEND_ASSETFILEDESCRIPTORCLASS_GETSTARTOFFSET(X)  {}
#define VSFUNCPARAMDEPENDNUM_ASSETFILEDESCRIPTORCLASS_GETSTARTOFFSET                               0

extern VS_LONG SRPAPI AssetFileDescriptorClass_getStartOffset(void *Object);
typedef VS_LONG (SRPAPI *AssetFileDescriptorClass_getStartOffsetProc)(void *Object);

struct StructOfAttachAssetFileDescriptorClass{
};
struct StructOfAssetFileDescriptorClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_WEBSETTINGSCLASS                                                                 "WebSettingsClass"
extern VS_UUID VSOBJID_WebSettingsClass;
#define VSATTRDEPEND_WEBSETTINGSCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_WEBSETTINGSCLASS                                                           1
extern VS_INT32 SRPCALLBACK WebSettingsClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_WEBSETTINGSCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_WEBSETTINGSCLASS                                                              1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebSettingsClass_setJavaScriptEnabled;
#define VSFUNCRETURNDEPEND_WEBSETTINGSCLASS_SETJAVASCRIPTENABLED(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBSETTINGSCLASS_SETJAVASCRIPTENABLED                                0
#define VSFUNCPARAMDEPEND_WEBSETTINGSCLASS_SETJAVASCRIPTENABLED(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_WEBSETTINGSCLASS_SETJAVASCRIPTENABLED                                 1

extern void SRPAPI WebSettingsClass_setJavaScriptEnabled(void *Object,VS_BOOL flag);
typedef void (SRPAPI *WebSettingsClass_setJavaScriptEnabledProc)(void *Object,VS_BOOL flag);

struct StructOfAttachWebSettingsClass{
};
struct StructOfWebSettingsClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_BASEADAPTERCLASS                                                                 "BaseAdapterClass"
extern VS_UUID VSOBJID_BaseAdapterClass;
#define VSATTRDEPEND_BASEADAPTERCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_BASEADAPTERCLASS                                                           1
extern VS_INT32 SRPCALLBACK BaseAdapterClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_BASEADAPTERCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRNUMBER_BASEADAPTERCLASS                                                              1

/*------Local Define Function */
/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_onCreateAndroid;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_ONCREATEANDROID(X)  {}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_ONCREATEANDROID                                     0
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_ONCREATEANDROID(X)  {}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_ONCREATEANDROID                                      0

extern void SRPAPI BaseAdapterClass_onCreateAndroid(void *Object);
typedef void (SRPAPI *BaseAdapterClass_onCreateAndroidProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_getCount;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_GETCOUNT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_GETCOUNT                                            1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_GETCOUNT(X)  {}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_GETCOUNT                                             0

extern VS_INT32 SRPAPI BaseAdapterClass_getCount(void *Object);
typedef VS_INT32 (SRPAPI *BaseAdapterClass_getCountProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_getItem;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_GETITEM(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_GETITEM                                             1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_GETITEM(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_GETITEM                                              1

extern VS_CHAR * SRPAPI BaseAdapterClass_getItem(void *Object,VS_INT32 position);
typedef VS_CHAR * (SRPAPI *BaseAdapterClass_getItemProc)(void *Object,VS_INT32 position);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_getItemId;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_GETITEMID(X)  {{X[0].Type=9;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_GETITEMID                                           1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_GETITEMID(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_GETITEMID                                            1

extern VS_LONG SRPAPI BaseAdapterClass_getItemId(void *Object,VS_INT32 position);
typedef VS_LONG (SRPAPI *BaseAdapterClass_getItemIdProc)(void *Object,VS_INT32 position);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_getViewTypeCount;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_GETVIEWTYPECOUNT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_GETVIEWTYPECOUNT                                    1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_GETVIEWTYPECOUNT(X)  {}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_GETVIEWTYPECOUNT                                     0

extern VS_INT32 SRPAPI BaseAdapterClass_getViewTypeCount(void *Object);
typedef VS_INT32 (SRPAPI *BaseAdapterClass_getViewTypeCountProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_getItemViewType;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_GETITEMVIEWTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_GETITEMVIEWTYPE                                     1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_GETITEMVIEWTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_GETITEMVIEWTYPE                                      1

extern VS_INT32 SRPAPI BaseAdapterClass_getItemViewType(void *Object,VS_INT32 position);
typedef VS_INT32 (SRPAPI *BaseAdapterClass_getItemViewTypeProc)(void *Object,VS_INT32 position);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_getView;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_GETVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_GETVIEW                                             1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_GETVIEW(X)  {{X[0].Type=6;}{X[1].Type=57;}{X[2].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_GETVIEW                                              3

extern VS_OBJPTR SRPAPI BaseAdapterClass_getView(void *Object,VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent);
typedef VS_OBJPTR (SRPAPI *BaseAdapterClass_getViewProc)(void *Object,VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_BaseAdapterClass_isEmpty;
#define VSFUNCRETURNDEPEND_BASEADAPTERCLASS_ISEMPTY(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BASEADAPTERCLASS_ISEMPTY                                             1
#define VSFUNCPARAMDEPEND_BASEADAPTERCLASS_ISEMPTY(X)  {}
#define VSFUNCPARAMDEPENDNUM_BASEADAPTERCLASS_ISEMPTY                                              0

extern VS_BOOL SRPAPI BaseAdapterClass_isEmpty(void *Object);
typedef VS_BOOL (SRPAPI *BaseAdapterClass_isEmptyProc)(void *Object);

struct StructOfAttachBaseAdapterClass{
};
struct StructOfBaseAdapterClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_DRAWABLECLASS                                                                    "DrawableClass"
extern VS_UUID VSOBJID_DrawableClass;
#define VSATTRDEPEND_DRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_DRAWABLECLASS                                                              1
extern VS_INT32 SRPCALLBACK DrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_DRAWABLECLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRNUMBER_DRAWABLECLASS                                                                 1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_DrawableClass_setBounds;
#define VSFUNCRETURNDEPEND_DRAWABLECLASS_SETBOUNDS(X)  {}
#define VSFUNCRETURNDEPENDNUM_DRAWABLECLASS_SETBOUNDS                                              0
#define VSFUNCPARAMDEPEND_DRAWABLECLASS_SETBOUNDS(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_DRAWABLECLASS_SETBOUNDS                                               4

extern void SRPAPI DrawableClass_setBounds(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *DrawableClass_setBoundsProc)(void *Object,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

struct StructOfAttachDrawableClass{
};
struct StructOfDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_GALLERYCLASS                                                                     "GalleryClass"
extern VS_UUID VSOBJID_GalleryClass;
#define VSATTRDEPEND_GALLERYCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_GALLERYCLASS                                                               4
extern VS_INT32 SRPCALLBACK GalleryClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_GALLERYCLASS_ANDROIDREFCOUNT                                                   0
#define VSATTRINDEX_GALLERYCLASS_VIEWGROUPQUEUE                                                    1
#define VSATTRINDEX_GALLERYCLASS_VIEWQUEUE                                                         2
#define VSATTRINDEX_GALLERYCLASS_OBJECTQUEUE                                                       3
#define VSATTRNUMBER_GALLERYCLASS                                                                  4

/*------Local Define Function */
/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onDown;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONDOWN(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONDOWN                                                  1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONDOWN(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONDOWN                                                   1

extern VS_BOOL SRPAPI GalleryClass_onDown(void *Object,VS_OBJPTR e);
typedef VS_BOOL (SRPAPI *GalleryClass_onDownProc)(void *Object,VS_OBJPTR e);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperDown;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERDOWN(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERDOWN                                             1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERDOWN(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERDOWN                                              1

extern VS_BOOL SRPAPI GalleryClass_onSuperDown(void *Object,VS_OBJPTR e);
typedef VS_BOOL (SRPAPI *GalleryClass_onSuperDownProc)(void *Object,VS_OBJPTR e);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onFling;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONFLING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONFLING                                                 1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONFLING(X)  {{X[0].Type=57;}{X[1].Type=57;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONFLING                                                  4

extern VS_BOOL SRPAPI GalleryClass_onFling(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY);
typedef VS_BOOL (SRPAPI *GalleryClass_onFlingProc)(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperFling;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERFLING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERFLING                                            1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERFLING(X)  {{X[0].Type=57;}{X[1].Type=57;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERFLING                                             4

extern VS_BOOL SRPAPI GalleryClass_onSuperFling(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY);
typedef VS_BOOL (SRPAPI *GalleryClass_onSuperFlingProc)(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onLongPress;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONLONGPRESS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONLONGPRESS                                             1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONLONGPRESS(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONLONGPRESS                                              1

extern VS_BOOL SRPAPI GalleryClass_onLongPress(void *Object,VS_OBJPTR e);
typedef VS_BOOL (SRPAPI *GalleryClass_onLongPressProc)(void *Object,VS_OBJPTR e);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperLongPress;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERLONGPRESS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERLONGPRESS                                        1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERLONGPRESS(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERLONGPRESS                                         1

extern VS_BOOL SRPAPI GalleryClass_onSuperLongPress(void *Object,VS_OBJPTR e);
typedef VS_BOOL (SRPAPI *GalleryClass_onSuperLongPressProc)(void *Object,VS_OBJPTR e);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onScroll;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSCROLL(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSCROLL                                                1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSCROLL(X)  {{X[0].Type=57;}{X[1].Type=57;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSCROLL                                                 4

extern VS_BOOL SRPAPI GalleryClass_onScroll(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY);
typedef VS_BOOL (SRPAPI *GalleryClass_onScrollProc)(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperScroll;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERSCROLL(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERSCROLL                                           1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERSCROLL(X)  {{X[0].Type=57;}{X[1].Type=57;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERSCROLL                                            4

extern VS_BOOL SRPAPI GalleryClass_onSuperScroll(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY);
typedef VS_BOOL (SRPAPI *GalleryClass_onSuperScrollProc)(void *Object,VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onShowPress;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSHOWPRESS(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSHOWPRESS                                             0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSHOWPRESS(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSHOWPRESS                                              1

extern void SRPAPI GalleryClass_onShowPress(void *Object,VS_OBJPTR e);
typedef void (SRPAPI *GalleryClass_onShowPressProc)(void *Object,VS_OBJPTR e);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperShowPress;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERSHOWPRESS(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERSHOWPRESS                                        0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERSHOWPRESS(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERSHOWPRESS                                         1

extern void SRPAPI GalleryClass_onSuperShowPress(void *Object,VS_OBJPTR e);
typedef void (SRPAPI *GalleryClass_onSuperShowPressProc)(void *Object,VS_OBJPTR e);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSingleTapUp;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSINGLETAPUP(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSINGLETAPUP                                           1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSINGLETAPUP(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSINGLETAPUP                                            1

extern VS_BOOL SRPAPI GalleryClass_onSingleTapUp(void *Object,VS_OBJPTR e);
typedef VS_BOOL (SRPAPI *GalleryClass_onSingleTapUpProc)(void *Object,VS_OBJPTR e);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperSingleTapUp;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERSINGLETAPUP(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERSINGLETAPUP                                      1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERSINGLETAPUP(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERSINGLETAPUP                                       1

extern VS_BOOL SRPAPI GalleryClass_onSuperSingleTapUp(void *Object,VS_OBJPTR e);
typedef VS_BOOL (SRPAPI *GalleryClass_onSuperSingleTapUpProc)(void *Object,VS_OBJPTR e);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onTouchEvent;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONTOUCHEVENT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONTOUCHEVENT                                            1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONTOUCHEVENT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONTOUCHEVENT                                             1

extern VS_BOOL SRPAPI GalleryClass_onTouchEvent(void *Object,VS_OBJPTR event);
typedef VS_BOOL (SRPAPI *GalleryClass_onTouchEventProc)(void *Object,VS_OBJPTR event);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_onSuperTouchEvent;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_ONSUPERTOUCHEVENT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_ONSUPERTOUCHEVENT                                       1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_ONSUPERTOUCHEVENT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_ONSUPERTOUCHEVENT                                        1

extern VS_BOOL SRPAPI GalleryClass_onSuperTouchEvent(void *Object,VS_OBJPTR event);
typedef VS_BOOL (SRPAPI *GalleryClass_onSuperTouchEventProc)(void *Object,VS_OBJPTR event);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_setAnimationDuration;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_SETANIMATIONDURATION(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_SETANIMATIONDURATION                                    0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_SETANIMATIONDURATION(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_SETANIMATIONDURATION                                     1

extern void SRPAPI GalleryClass_setAnimationDuration(void *Object,VS_INT32 animationDurationMillis);
typedef void (SRPAPI *GalleryClass_setAnimationDurationProc)(void *Object,VS_INT32 animationDurationMillis);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_setCallbackDuringFling;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_SETCALLBACKDURINGFLING(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_SETCALLBACKDURINGFLING                                  0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_SETCALLBACKDURINGFLING(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_SETCALLBACKDURINGFLING                                   1

extern void SRPAPI GalleryClass_setCallbackDuringFling(void *Object,VS_BOOL shouldCallback);
typedef void (SRPAPI *GalleryClass_setCallbackDuringFlingProc)(void *Object,VS_BOOL shouldCallback);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_setGravity;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_SETGRAVITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_SETGRAVITY                                              0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_SETGRAVITY(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_SETGRAVITY                                               1

extern void SRPAPI GalleryClass_setGravity(void *Object,VS_INT32 gravity);
typedef void (SRPAPI *GalleryClass_setGravityProc)(void *Object,VS_INT32 gravity);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_setSpacing;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_SETSPACING(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_SETSPACING                                              0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_SETSPACING(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_SETSPACING                                               1

extern void SRPAPI GalleryClass_setSpacing(void *Object,VS_INT32 spacing);
typedef void (SRPAPI *GalleryClass_setSpacingProc)(void *Object,VS_INT32 spacing);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_setUnselectedAlpha;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_SETUNSELECTEDALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_SETUNSELECTEDALPHA                                      0
#define VSFUNCPARAMDEPEND_GALLERYCLASS_SETUNSELECTEDALPHA(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_SETUNSELECTEDALPHA                                       1

extern void SRPAPI GalleryClass_setUnselectedAlpha(void *Object,VS_BOOL unselectedAlpha);
typedef void (SRPAPI *GalleryClass_setUnselectedAlphaProc)(void *Object,VS_BOOL unselectedAlpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GalleryClass_showContextMenu;
#define VSFUNCRETURNDEPEND_GALLERYCLASS_SHOWCONTEXTMENU(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GALLERYCLASS_SHOWCONTEXTMENU                                         1
#define VSFUNCPARAMDEPEND_GALLERYCLASS_SHOWCONTEXTMENU(X)  {}
#define VSFUNCPARAMDEPENDNUM_GALLERYCLASS_SHOWCONTEXTMENU                                          0

extern VS_BOOL SRPAPI GalleryClass_showContextMenu(void *Object);
typedef VS_BOOL (SRPAPI *GalleryClass_showContextMenuProc)(void *Object);

struct StructOfAttachGalleryClass{
};
struct StructOfGalleryClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_VIEWGROUPCLASS                                                                   "ViewGroupClass"
extern VS_UUID VSOBJID_ViewGroupClass;
#define VSATTRDEPEND_VIEWGROUPCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_VIEWGROUPCLASS                                                             4
extern VS_INT32 SRPCALLBACK ViewGroupClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_VIEWGROUPCLASS_ANDROIDREFCOUNT                                                 0
#define VSATTRINDEX_VIEWGROUPCLASS_VIEWGROUPQUEUE                                                  1
#define VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE                                                       2
#define VSATTRINDEX_VIEWGROUPCLASS_OBJECTQUEUE                                                     3
#define VSATTRNUMBER_VIEWGROUPCLASS                                                                4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_addView;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ADDVIEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ADDVIEW                                               0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ADDVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ADDVIEW                                                1

extern void SRPAPI ViewGroupClass_addView(void *Object,VS_OBJPTR child);
typedef void (SRPAPI *ViewGroupClass_addViewProc)(void *Object,VS_OBJPTR child);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_getChildAt;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_GETCHILDAT(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_GETCHILDAT                                            1
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_GETCHILDAT(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_GETCHILDAT                                             1

extern VS_OBJPTR SRPAPI ViewGroupClass_getChildAt(void *Object,VS_INT32 index);
typedef VS_OBJPTR (SRPAPI *ViewGroupClass_getChildAtProc)(void *Object,VS_INT32 index);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_getChildCount;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_GETCHILDCOUNT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_GETCHILDCOUNT                                         1
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_GETCHILDCOUNT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_GETCHILDCOUNT                                          0

extern VS_INT32 SRPAPI ViewGroupClass_getChildCount(void *Object);
typedef VS_INT32 (SRPAPI *ViewGroupClass_getChildCountProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_recomputeViewAttributes;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_RECOMPUTEVIEWATTRIBUTES(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_RECOMPUTEVIEWATTRIBUTES                               0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_RECOMPUTEVIEWATTRIBUTES(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_RECOMPUTEVIEWATTRIBUTES                                1

extern void SRPAPI ViewGroupClass_recomputeViewAttributes(void *Object,VS_OBJPTR child);
typedef void (SRPAPI *ViewGroupClass_recomputeViewAttributesProc)(void *Object,VS_OBJPTR child);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_removeView;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REMOVEVIEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REMOVEVIEW                                            0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REMOVEVIEW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REMOVEVIEW                                             1

extern void SRPAPI ViewGroupClass_removeView(void *Object,VS_OBJPTR view);
typedef void (SRPAPI *ViewGroupClass_removeViewProc)(void *Object,VS_OBJPTR view);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_removeAllViews;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REMOVEALLVIEWS(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REMOVEALLVIEWS                                        0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REMOVEALLVIEWS(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REMOVEALLVIEWS                                         0

extern void SRPAPI ViewGroupClass_removeAllViews(void *Object);
typedef void (SRPAPI *ViewGroupClass_removeAllViewsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_refreshDrawableState;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REFRESHDRAWABLESTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REFRESHDRAWABLESTATE                                  0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REFRESHDRAWABLESTATE(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REFRESHDRAWABLESTATE                                   0

extern void SRPAPI ViewGroupClass_refreshDrawableState(void *Object);
typedef void (SRPAPI *ViewGroupClass_refreshDrawableStateProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_requestFocus;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REQUESTFOCUS(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REQUESTFOCUS                                          1
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REQUESTFOCUS(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REQUESTFOCUS                                           0

extern VS_BOOL SRPAPI ViewGroupClass_requestFocus(void *Object);
typedef VS_BOOL (SRPAPI *ViewGroupClass_requestFocusProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_requestFocus1;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REQUESTFOCUS1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REQUESTFOCUS1                                         1
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REQUESTFOCUS1(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REQUESTFOCUS1                                          1

extern VS_BOOL SRPAPI ViewGroupClass_requestFocus1(void *Object,VS_INT32 direction);
typedef VS_BOOL (SRPAPI *ViewGroupClass_requestFocus1Proc)(void *Object,VS_INT32 direction);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_requestFocusFromTouch;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REQUESTFOCUSFROMTOUCH(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REQUESTFOCUSFROMTOUCH                                 1
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REQUESTFOCUSFROMTOUCH(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REQUESTFOCUSFROMTOUCH                                  0

extern VS_BOOL SRPAPI ViewGroupClass_requestFocusFromTouch(void *Object);
typedef VS_BOOL (SRPAPI *ViewGroupClass_requestFocusFromTouchProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_requestLayout;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_REQUESTLAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_REQUESTLAYOUT                                         0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_REQUESTLAYOUT(X)  {}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_REQUESTLAYOUT                                          0

extern void SRPAPI ViewGroupClass_requestLayout(void *Object);
typedef void (SRPAPI *ViewGroupClass_requestLayoutProc)(void *Object);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onDraw;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONDRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONDRAW                                                0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONDRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONDRAW                                                 1

extern void SRPAPI ViewGroupClass_onDraw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *ViewGroupClass_onDrawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onSuperDraw;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONSUPERDRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONSUPERDRAW                                           0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONSUPERDRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONSUPERDRAW                                            1

extern void SRPAPI ViewGroupClass_onSuperDraw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *ViewGroupClass_onSuperDrawProc)(void *Object,VS_OBJPTR canvas);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onLayout;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONLAYOUT(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONLAYOUT                                              0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONLAYOUT(X)  {{X[0].Type=1;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONLAYOUT                                               5

extern void SRPAPI ViewGroupClass_onLayout(void *Object,VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
typedef void (SRPAPI *ViewGroupClass_onLayoutProc)(void *Object,VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onMeasure;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONMEASURE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONMEASURE                                             0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONMEASURE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONMEASURE                                              2

extern void SRPAPI ViewGroupClass_onMeasure(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
typedef void (SRPAPI *ViewGroupClass_onMeasureProc)(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onSuperMeasure;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONSUPERMEASURE(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONSUPERMEASURE                                        0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONSUPERMEASURE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONSUPERMEASURE                                         2

extern void SRPAPI ViewGroupClass_onSuperMeasure(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
typedef void (SRPAPI *ViewGroupClass_onSuperMeasureProc)(void *Object,VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);

/*[Public Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onSizeChanged;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONSIZECHANGED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONSIZECHANGED                                         0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONSIZECHANGED(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONSIZECHANGED                                          4

extern void SRPAPI ViewGroupClass_onSizeChanged(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
typedef void (SRPAPI *ViewGroupClass_onSizeChangedProc)(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_ViewGroupClass_onSuperSizeChanged;
#define VSFUNCRETURNDEPEND_VIEWGROUPCLASS_ONSUPERSIZECHANGED(X)  {}
#define VSFUNCRETURNDEPENDNUM_VIEWGROUPCLASS_ONSUPERSIZECHANGED                                    0
#define VSFUNCPARAMDEPEND_VIEWGROUPCLASS_ONSUPERSIZECHANGED(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_VIEWGROUPCLASS_ONSUPERSIZECHANGED                                     4

extern void SRPAPI ViewGroupClass_onSuperSizeChanged(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
typedef void (SRPAPI *ViewGroupClass_onSuperSizeChangedProc)(void *Object,VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);

struct StructOfAttachViewGroupClass{
};
struct StructOfViewGroupClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----local attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_SOUNDPOOLCLASS                                                                   "SoundPoolClass"
extern VS_UUID VSOBJID_SoundPoolClass;
#define VSATTRDEPEND_SOUNDPOOLCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_SOUNDPOOLCLASS                                                             1
extern VS_INT32 SRPCALLBACK SoundPoolClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_SOUNDPOOLCLASS_ANDROIDREFCOUNT                                                 0
#define VSATTRNUMBER_SOUNDPOOLCLASS                                                                1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_load;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_LOAD(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_LOAD                                                  1
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_LOAD(X)  {{X[0].Type=30;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_LOAD                                                   2

extern VS_INT32 SRPAPI SoundPoolClass_load(void *Object,VS_CHAR * path,VS_INT32 priority);
typedef VS_INT32 (SRPAPI *SoundPoolClass_loadProc)(void *Object,VS_CHAR * path,VS_INT32 priority);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_load1;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_LOAD1(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_LOAD1                                                 1
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_LOAD1(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_LOAD1                                                  2

extern VS_INT32 SRPAPI SoundPoolClass_load1(void *Object,VS_INT32 resId,VS_INT32 priority);
typedef VS_INT32 (SRPAPI *SoundPoolClass_load1Proc)(void *Object,VS_INT32 resId,VS_INT32 priority);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_load2;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_LOAD2(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_LOAD2                                                 1
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_LOAD2(X)  {{X[0].Type=57;}{X[1].Type=9;}{X[2].Type=9;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_LOAD2                                                  4

extern VS_INT32 SRPAPI SoundPoolClass_load2(void *Object,VS_OBJPTR fd,VS_LONG offset,VS_LONG length,VS_INT32 priority);
typedef VS_INT32 (SRPAPI *SoundPoolClass_load2Proc)(void *Object,VS_OBJPTR fd,VS_LONG offset,VS_LONG length,VS_INT32 priority);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_pause;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_PAUSE(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_PAUSE                                                 0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_PAUSE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_PAUSE                                                  1

extern void SRPAPI SoundPoolClass_pause(void *Object,VS_INT32 streamID);
typedef void (SRPAPI *SoundPoolClass_pauseProc)(void *Object,VS_INT32 streamID);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_play;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_PLAY(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_PLAY                                                  0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_PLAY(X)  {{X[0].Type=6;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=6;}{X[4].Type=6;}{X[5].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_PLAY                                                   6

extern void SRPAPI SoundPoolClass_play(void *Object,VS_INT32 soundID,VS_FLOAT leftVolume,VS_FLOAT rightVolume,VS_INT32 priority,VS_INT32 loop,VS_FLOAT rate);
typedef void (SRPAPI *SoundPoolClass_playProc)(void *Object,VS_INT32 soundID,VS_FLOAT leftVolume,VS_FLOAT rightVolume,VS_INT32 priority,VS_INT32 loop,VS_FLOAT rate);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_release;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_RELEASE(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_RELEASE                                               0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_RELEASE(X)  {}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_RELEASE                                                0

extern void SRPAPI SoundPoolClass_release(void *Object);
typedef void (SRPAPI *SoundPoolClass_releaseProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_resume;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_RESUME(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_RESUME                                                0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_RESUME(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_RESUME                                                 1

extern void SRPAPI SoundPoolClass_resume(void *Object,VS_INT32 streamID);
typedef void (SRPAPI *SoundPoolClass_resumeProc)(void *Object,VS_INT32 streamID);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_setLoop;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_SETLOOP(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_SETLOOP                                               0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_SETLOOP(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_SETLOOP                                                2

extern void SRPAPI SoundPoolClass_setLoop(void *Object,VS_INT32 streamID,VS_INT32 loop);
typedef void (SRPAPI *SoundPoolClass_setLoopProc)(void *Object,VS_INT32 streamID,VS_INT32 loop);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_setPriority;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_SETPRIORITY(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_SETPRIORITY                                           0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_SETPRIORITY(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_SETPRIORITY                                            2

extern void SRPAPI SoundPoolClass_setPriority(void *Object,VS_INT32 streamID,VS_INT32 priority);
typedef void (SRPAPI *SoundPoolClass_setPriorityProc)(void *Object,VS_INT32 streamID,VS_INT32 priority);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_setRate;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_SETRATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_SETRATE                                               0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_SETRATE(X)  {{X[0].Type=6;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_SETRATE                                                2

extern void SRPAPI SoundPoolClass_setRate(void *Object,VS_INT32 streamID,VS_FLOAT rate);
typedef void (SRPAPI *SoundPoolClass_setRateProc)(void *Object,VS_INT32 streamID,VS_FLOAT rate);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_setVolume;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_SETVOLUME(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_SETVOLUME                                             0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_SETVOLUME(X)  {{X[0].Type=6;}{X[1].Type=8;}{X[2].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_SETVOLUME                                              3

extern void SRPAPI SoundPoolClass_setVolume(void *Object,VS_INT32 streamID,VS_FLOAT leftVolume,VS_FLOAT rightVolume);
typedef void (SRPAPI *SoundPoolClass_setVolumeProc)(void *Object,VS_INT32 streamID,VS_FLOAT leftVolume,VS_FLOAT rightVolume);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_stop;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_STOP(X)  {}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_STOP                                                  0
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_STOP(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_STOP                                                   1

extern void SRPAPI SoundPoolClass_stop(void *Object,VS_INT32 streamID);
typedef void (SRPAPI *SoundPoolClass_stopProc)(void *Object,VS_INT32 streamID);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_SoundPoolClass_unload;
#define VSFUNCRETURNDEPEND_SOUNDPOOLCLASS_UNLOAD(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_SOUNDPOOLCLASS_UNLOAD                                                1
#define VSFUNCPARAMDEPEND_SOUNDPOOLCLASS_UNLOAD(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_SOUNDPOOLCLASS_UNLOAD                                                 1

extern VS_BOOL SRPAPI SoundPoolClass_unload(void *Object,VS_INT32 soundID);
typedef VS_BOOL (SRPAPI *SoundPoolClass_unloadProc)(void *Object,VS_INT32 soundID);

struct StructOfAttachSoundPoolClass{
};
struct StructOfSoundPoolClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ABSLISTVIEWCLASS                                                                 "AbsListViewClass"
extern VS_UUID VSOBJID_AbsListViewClass;
#define VSATTRDEPEND_ABSLISTVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_ABSLISTVIEWCLASS                                                           4
extern VS_INT32 SRPCALLBACK AbsListViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ABSLISTVIEWCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRINDEX_ABSLISTVIEWCLASS_VIEWGROUPQUEUE                                                1
#define VSATTRINDEX_ABSLISTVIEWCLASS_VIEWQUEUE                                                     2
#define VSATTRINDEX_ABSLISTVIEWCLASS_OBJECTQUEUE                                                   3
#define VSATTRNUMBER_ABSLISTVIEWCLASS                                                              4

struct StructOfAttachAbsListViewClass{
};
struct StructOfAbsListViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_COMPOUNDBUTTONCLASS                                                              "CompoundButtonClass"
extern VS_UUID VSOBJID_CompoundButtonClass;
#define VSATTRDEPEND_COMPOUNDBUTTONCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_COMPOUNDBUTTONCLASS                                                        1
extern VS_INT32 SRPCALLBACK CompoundButtonClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_COMPOUNDBUTTONCLASS_ANDROIDREFCOUNT                                            0
#define VSATTRNUMBER_COMPOUNDBUTTONCLASS                                                           1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_CompoundButtonClass_isChecked;
#define VSFUNCRETURNDEPEND_COMPOUNDBUTTONCLASS_ISCHECKED(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_COMPOUNDBUTTONCLASS_ISCHECKED                                        1
#define VSFUNCPARAMDEPEND_COMPOUNDBUTTONCLASS_ISCHECKED(X)  {}
#define VSFUNCPARAMDEPENDNUM_COMPOUNDBUTTONCLASS_ISCHECKED                                         0

extern VS_BOOL SRPAPI CompoundButtonClass_isChecked(void *Object);
typedef VS_BOOL (SRPAPI *CompoundButtonClass_isCheckedProc)(void *Object);

struct StructOfAttachCompoundButtonClass{
};
struct StructOfCompoundButtonClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_GRIDVIEWCLASS                                                                    "GridViewClass"
extern VS_UUID VSOBJID_GridViewClass;
#define VSATTRDEPEND_GRIDVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_GRIDVIEWCLASS                                                              4
extern VS_INT32 SRPCALLBACK GridViewClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_GRIDVIEWCLASS_ANDROIDREFCOUNT                                                  0
#define VSATTRINDEX_GRIDVIEWCLASS_VIEWGROUPQUEUE                                                   1
#define VSATTRINDEX_GRIDVIEWCLASS_VIEWQUEUE                                                        2
#define VSATTRINDEX_GRIDVIEWCLASS_OBJECTQUEUE                                                      3
#define VSATTRNUMBER_GRIDVIEWCLASS                                                                 4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_GridViewClass_setNumColumns;
#define VSFUNCRETURNDEPEND_GRIDVIEWCLASS_SETNUMCOLUMNS(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRIDVIEWCLASS_SETNUMCOLUMNS                                          0
#define VSFUNCPARAMDEPEND_GRIDVIEWCLASS_SETNUMCOLUMNS(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRIDVIEWCLASS_SETNUMCOLUMNS                                           1

extern void SRPAPI GridViewClass_setNumColumns(void *Object,VS_INT32 numColumns);
typedef void (SRPAPI *GridViewClass_setNumColumnsProc)(void *Object,VS_INT32 numColumns);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GridViewClass_setSelection;
#define VSFUNCRETURNDEPEND_GRIDVIEWCLASS_SETSELECTION(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRIDVIEWCLASS_SETSELECTION                                           0
#define VSFUNCPARAMDEPEND_GRIDVIEWCLASS_SETSELECTION(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRIDVIEWCLASS_SETSELECTION                                            1

extern void SRPAPI GridViewClass_setSelection(void *Object,VS_INT32 position);
typedef void (SRPAPI *GridViewClass_setSelectionProc)(void *Object,VS_INT32 position);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GridViewClass_setStretchMode;
#define VSFUNCRETURNDEPEND_GRIDVIEWCLASS_SETSTRETCHMODE(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRIDVIEWCLASS_SETSTRETCHMODE                                         0
#define VSFUNCPARAMDEPEND_GRIDVIEWCLASS_SETSTRETCHMODE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_GRIDVIEWCLASS_SETSTRETCHMODE                                          1

extern void SRPAPI GridViewClass_setStretchMode(void *Object,VS_CHAR * stretchMode);
typedef void (SRPAPI *GridViewClass_setStretchModeProc)(void *Object,VS_CHAR * stretchMode);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GridViewClass_setVerticalSpacing;
#define VSFUNCRETURNDEPEND_GRIDVIEWCLASS_SETVERTICALSPACING(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRIDVIEWCLASS_SETVERTICALSPACING                                     0
#define VSFUNCPARAMDEPEND_GRIDVIEWCLASS_SETVERTICALSPACING(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRIDVIEWCLASS_SETVERTICALSPACING                                      1

extern void SRPAPI GridViewClass_setVerticalSpacing(void *Object,VS_INT32 verticalSpacing);
typedef void (SRPAPI *GridViewClass_setVerticalSpacingProc)(void *Object,VS_INT32 verticalSpacing);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GridViewClass_setHorizontalSpacing;
#define VSFUNCRETURNDEPEND_GRIDVIEWCLASS_SETHORIZONTALSPACING(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRIDVIEWCLASS_SETHORIZONTALSPACING                                   0
#define VSFUNCPARAMDEPEND_GRIDVIEWCLASS_SETHORIZONTALSPACING(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRIDVIEWCLASS_SETHORIZONTALSPACING                                    1

extern void SRPAPI GridViewClass_setHorizontalSpacing(void *Object,VS_INT32 horizontalSpacing);
typedef void (SRPAPI *GridViewClass_setHorizontalSpacingProc)(void *Object,VS_INT32 horizontalSpacing);

struct StructOfAttachGridViewClass{
};
struct StructOfGridViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ANIMATIONDRAWABLECLASS                                                           "AnimationDrawableClass"
extern VS_UUID VSOBJID_AnimationDrawableClass;
#define VSATTRDEPEND_ANIMATIONDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_ANIMATIONDRAWABLECLASS                                                     1
extern VS_INT32 SRPCALLBACK AnimationDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_ANIMATIONDRAWABLECLASS_ANDROIDREFCOUNT                                         0
#define VSATTRNUMBER_ANIMATIONDRAWABLECLASS                                                        1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_addFrame;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_ADDFRAME(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_ADDFRAME                                      0
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_ADDFRAME(X)  {{X[0].Type=57;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_ADDFRAME                                       2

extern void SRPAPI AnimationDrawableClass_addFrame(void *Object,VS_OBJPTR frame,VS_INT32 duration);
typedef void (SRPAPI *AnimationDrawableClass_addFrameProc)(void *Object,VS_OBJPTR frame,VS_INT32 duration);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_getDuration;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_GETDURATION(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_GETDURATION                                   1
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_GETDURATION(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_GETDURATION                                    1

extern VS_INT32 SRPAPI AnimationDrawableClass_getDuration(void *Object,VS_INT32 i);
typedef VS_INT32 (SRPAPI *AnimationDrawableClass_getDurationProc)(void *Object,VS_INT32 i);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_getNumberOfFrames;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_GETNUMBEROFFRAMES(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_GETNUMBEROFFRAMES                             1
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_GETNUMBEROFFRAMES(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_GETNUMBEROFFRAMES                              0

extern VS_INT32 SRPAPI AnimationDrawableClass_getNumberOfFrames(void *Object);
typedef VS_INT32 (SRPAPI *AnimationDrawableClass_getNumberOfFramesProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_isOneShot;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_ISONESHOT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_ISONESHOT                                     1
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_ISONESHOT(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_ISONESHOT                                      0

extern VS_BOOL SRPAPI AnimationDrawableClass_isOneShot(void *Object);
typedef VS_BOOL (SRPAPI *AnimationDrawableClass_isOneShotProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_isRunning;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_ISRUNNING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_ISRUNNING                                     1
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_ISRUNNING(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_ISRUNNING                                      0

extern VS_BOOL SRPAPI AnimationDrawableClass_isRunning(void *Object);
typedef VS_BOOL (SRPAPI *AnimationDrawableClass_isRunningProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_run;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_RUN(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_RUN                                           0
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_RUN(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_RUN                                            0

extern void SRPAPI AnimationDrawableClass_run(void *Object);
typedef void (SRPAPI *AnimationDrawableClass_runProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_setOneShot;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_SETONESHOT(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_SETONESHOT                                    0
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_SETONESHOT(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_SETONESHOT                                     1

extern void SRPAPI AnimationDrawableClass_setOneShot(void *Object,VS_BOOL oneShot);
typedef void (SRPAPI *AnimationDrawableClass_setOneShotProc)(void *Object,VS_BOOL oneShot);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_setVisible;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_SETVISIBLE(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_SETVISIBLE                                    1
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_SETVISIBLE(X)  {{X[0].Type=1;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_SETVISIBLE                                     2

extern VS_BOOL SRPAPI AnimationDrawableClass_setVisible(void *Object,VS_BOOL visible,VS_BOOL restart);
typedef VS_BOOL (SRPAPI *AnimationDrawableClass_setVisibleProc)(void *Object,VS_BOOL visible,VS_BOOL restart);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_start;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_START(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_START                                         0
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_START(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_START                                          0

extern void SRPAPI AnimationDrawableClass_start(void *Object);
typedef void (SRPAPI *AnimationDrawableClass_startProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_AnimationDrawableClass_stop;
#define VSFUNCRETURNDEPEND_ANIMATIONDRAWABLECLASS_STOP(X)  {}
#define VSFUNCRETURNDEPENDNUM_ANIMATIONDRAWABLECLASS_STOP                                          0
#define VSFUNCPARAMDEPEND_ANIMATIONDRAWABLECLASS_STOP(X)  {}
#define VSFUNCPARAMDEPENDNUM_ANIMATIONDRAWABLECLASS_STOP                                           0

extern void SRPAPI AnimationDrawableClass_stop(void *Object);
typedef void (SRPAPI *AnimationDrawableClass_stopProc)(void *Object);

struct StructOfAttachAnimationDrawableClass{
};
struct StructOfAnimationDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_BUTTONCLASS                                                                      "ButtonClass"
extern VS_UUID VSOBJID_ButtonClass;
#define VSATTRDEPEND_BUTTONCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_BUTTONCLASS                                                                1
extern VS_INT32 SRPCALLBACK ButtonClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_BUTTONCLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_BUTTONCLASS                                                                   1

struct StructOfAttachButtonClass{
};
struct StructOfButtonClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_GRADIENTDRAWABLECLASS                                                            "GradientDrawableClass"
extern VS_UUID VSOBJID_GradientDrawableClass;
#define VSATTRDEPEND_GRADIENTDRAWABLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_GRADIENTDRAWABLECLASS                                                      1
extern VS_INT32 SRPCALLBACK GradientDrawableClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_GRADIENTDRAWABLECLASS_ANDROIDREFCOUNT                                          0
#define VSATTRNUMBER_GRADIENTDRAWABLECLASS                                                         1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_draw;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_DRAW                                           0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_DRAW(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_DRAW                                            1

extern void SRPAPI GradientDrawableClass_draw(void *Object,VS_OBJPTR canvas);
typedef void (SRPAPI *GradientDrawableClass_drawProc)(void *Object,VS_OBJPTR canvas);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_getChangingConfigurations;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                      1
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_GETCHANGINGCONFIGURATIONS(X)  {}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_GETCHANGINGCONFIGURATIONS                       0

extern VS_INT32 SRPAPI GradientDrawableClass_getChangingConfigurations(void *Object);
typedef VS_INT32 (SRPAPI *GradientDrawableClass_getChangingConfigurationsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_getIntrinsicHeight;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_GETINTRINSICHEIGHT                             1
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_GETINTRINSICHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_GETINTRINSICHEIGHT                              0

extern VS_INT32 SRPAPI GradientDrawableClass_getIntrinsicHeight(void *Object);
typedef VS_INT32 (SRPAPI *GradientDrawableClass_getIntrinsicHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_getIntrinsicWidth;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_GETINTRINSICWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_GETINTRINSICWIDTH                              1
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_GETINTRINSICWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_GETINTRINSICWIDTH                               0

extern VS_INT32 SRPAPI GradientDrawableClass_getIntrinsicWidth(void *Object);
typedef VS_INT32 (SRPAPI *GradientDrawableClass_getIntrinsicWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_getOpacity;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_GETOPACITY(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_GETOPACITY                                     1
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_GETOPACITY(X)  {}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_GETOPACITY                                      0

extern VS_INT32 SRPAPI GradientDrawableClass_getOpacity(void *Object);
typedef VS_INT32 (SRPAPI *GradientDrawableClass_getOpacityProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_getPadding;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_GETPADDING(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_GETPADDING                                     1
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_GETPADDING(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_GETPADDING                                      1

extern VS_BOOL SRPAPI GradientDrawableClass_getPadding(void *Object,VS_OBJPTR padding);
typedef VS_BOOL (SRPAPI *GradientDrawableClass_getPaddingProc)(void *Object,VS_OBJPTR padding);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setAlpha;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETALPHA(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETALPHA                                       0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETALPHA(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETALPHA                                        1

extern void SRPAPI GradientDrawableClass_setAlpha(void *Object,VS_INT32 alpha);
typedef void (SRPAPI *GradientDrawableClass_setAlphaProc)(void *Object,VS_INT32 alpha);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setColor;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETCOLOR                                       0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETCOLOR                                        1

extern void SRPAPI GradientDrawableClass_setColor(void *Object,VS_INT32 argb);
typedef void (SRPAPI *GradientDrawableClass_setColorProc)(void *Object,VS_INT32 argb);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setCornerRadii;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETCORNERRADII(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETCORNERRADII                                 0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETCORNERRADII(X)  {{X[0].Type=40;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETCORNERRADII                                  1

extern void SRPAPI GradientDrawableClass_setCornerRadii(void *Object,VS_PARAPKGPTR radii);
typedef void (SRPAPI *GradientDrawableClass_setCornerRadiiProc)(void *Object,VS_PARAPKGPTR radii);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setCornerRadius;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETCORNERRADIUS(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETCORNERRADIUS                                0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETCORNERRADIUS(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETCORNERRADIUS                                 1

extern void SRPAPI GradientDrawableClass_setCornerRadius(void *Object,VS_FLOAT radius);
typedef void (SRPAPI *GradientDrawableClass_setCornerRadiusProc)(void *Object,VS_FLOAT radius);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setDither;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETDITHER(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETDITHER                                      0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETDITHER(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETDITHER                                       1

extern void SRPAPI GradientDrawableClass_setDither(void *Object,VS_BOOL dither);
typedef void (SRPAPI *GradientDrawableClass_setDitherProc)(void *Object,VS_BOOL dither);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setGradientCenter;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETGRADIENTCENTER(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETGRADIENTCENTER                              0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETGRADIENTCENTER(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETGRADIENTCENTER                               2

extern void SRPAPI GradientDrawableClass_setGradientCenter(void *Object,VS_FLOAT x,VS_FLOAT y);
typedef void (SRPAPI *GradientDrawableClass_setGradientCenterProc)(void *Object,VS_FLOAT x,VS_FLOAT y);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setGradientRadius;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETGRADIENTRADIUS(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETGRADIENTRADIUS                              0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETGRADIENTRADIUS(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETGRADIENTRADIUS                               1

extern void SRPAPI GradientDrawableClass_setGradientRadius(void *Object,VS_FLOAT gradientRadius);
typedef void (SRPAPI *GradientDrawableClass_setGradientRadiusProc)(void *Object,VS_FLOAT gradientRadius);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setGradientType;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETGRADIENTTYPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETGRADIENTTYPE                                0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETGRADIENTTYPE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETGRADIENTTYPE                                 1

extern void SRPAPI GradientDrawableClass_setGradientType(void *Object,VS_INT32 gradient);
typedef void (SRPAPI *GradientDrawableClass_setGradientTypeProc)(void *Object,VS_INT32 gradient);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setShape;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETSHAPE(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETSHAPE                                       0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETSHAPE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETSHAPE                                        1

extern void SRPAPI GradientDrawableClass_setShape(void *Object,VS_INT32 shape);
typedef void (SRPAPI *GradientDrawableClass_setShapeProc)(void *Object,VS_INT32 shape);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setSize;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETSIZE(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETSIZE                                        0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETSIZE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETSIZE                                         2

extern void SRPAPI GradientDrawableClass_setSize(void *Object,VS_INT32 width,VS_INT32 height);
typedef void (SRPAPI *GradientDrawableClass_setSizeProc)(void *Object,VS_INT32 width,VS_INT32 height);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setStroke;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETSTROKE(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETSTROKE                                      0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETSTROKE(X)  {{X[0].Type=6;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETSTROKE                                       2

extern void SRPAPI GradientDrawableClass_setStroke(void *Object,VS_INT32 width,VS_INT32 color);
typedef void (SRPAPI *GradientDrawableClass_setStrokeProc)(void *Object,VS_INT32 width,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setStroke1;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETSTROKE1(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETSTROKE1                                     0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETSTROKE1(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=8;}{X[3].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETSTROKE1                                      4

extern void SRPAPI GradientDrawableClass_setStroke1(void *Object,VS_INT32 width,VS_INT32 color,VS_FLOAT dashWidth,VS_FLOAT dashGap);
typedef void (SRPAPI *GradientDrawableClass_setStroke1Proc)(void *Object,VS_INT32 width,VS_INT32 color,VS_FLOAT dashWidth,VS_FLOAT dashGap);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_GradientDrawableClass_setUseLevel;
#define VSFUNCRETURNDEPEND_GRADIENTDRAWABLECLASS_SETUSELEVEL(X)  {}
#define VSFUNCRETURNDEPENDNUM_GRADIENTDRAWABLECLASS_SETUSELEVEL                                    0
#define VSFUNCPARAMDEPEND_GRADIENTDRAWABLECLASS_SETUSELEVEL(X)  {{X[0].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_GRADIENTDRAWABLECLASS_SETUSELEVEL                                     1

extern void SRPAPI GradientDrawableClass_setUseLevel(void *Object,VS_BOOL useLevel);
typedef void (SRPAPI *GradientDrawableClass_setUseLevelProc)(void *Object,VS_BOOL useLevel);

struct StructOfAttachGradientDrawableClass{
};
struct StructOfGradientDrawableClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_ADAPTERVIEWCLASS                                                                 "AdapterViewClass"
extern VS_UUID VSOBJID_AdapterViewClass;
#define VSATTRDEPEND_ADAPTERVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_ADAPTERVIEWCLASS                                                           4
extern VS_INT32 SRPCALLBACK AdapterViewClass_RequestRegisterObject( );

/*----output event: onItemClick[ParaPkg[0] view._ID,position,id;script(event,_ID,position,id)]  Static Event */
extern VS_UUID VSOUTEVENTID_AdapterViewClass_onItemClick;
/*----output event: onItemSelected[]  Static Event */
extern VS_UUID VSOUTEVENTID_AdapterViewClass_onItemSelected;
/*----output event: onNothingSelected[]  Static Event */
extern VS_UUID VSOUTEVENTID_AdapterViewClass_onNothingSelected;

/*------Variable Index Define */
#define VSATTRINDEX_ADAPTERVIEWCLASS_ANDROIDREFCOUNT                                               0
#define VSATTRINDEX_ADAPTERVIEWCLASS_VIEWGROUPQUEUE                                                1
#define VSATTRINDEX_ADAPTERVIEWCLASS_VIEWQUEUE                                                     2
#define VSATTRINDEX_ADAPTERVIEWCLASS_OBJECTQUEUE                                                   3
#define VSATTRNUMBER_ADAPTERVIEWCLASS                                                              4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_AdapterViewClass_setAdapter;
#define VSFUNCRETURNDEPEND_ADAPTERVIEWCLASS_SETADAPTER(X)  {}
#define VSFUNCRETURNDEPENDNUM_ADAPTERVIEWCLASS_SETADAPTER                                          0
#define VSFUNCPARAMDEPEND_ADAPTERVIEWCLASS_SETADAPTER(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_ADAPTERVIEWCLASS_SETADAPTER                                           1

extern void SRPAPI AdapterViewClass_setAdapter(void *Object,VS_OBJPTR adapter);
typedef void (SRPAPI *AdapterViewClass_setAdapterProc)(void *Object,VS_OBJPTR adapter);

struct StructOfAttachAdapterViewClass{
};
struct StructOfAdapterViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_DIALOGINTERFACECLASS                                                             "DialogInterfaceClass"
extern VS_UUID VSOBJID_DialogInterfaceClass;
#define VSATTRDEPEND_DIALOGINTERFACECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_DIALOGINTERFACECLASS                                                       1
extern VS_INT32 SRPCALLBACK DialogInterfaceClass_RequestRegisterObject( );

/*----output event: onMultiChoiceClick[]  Static Event */
extern VS_UUID VSOUTEVENTID_DialogInterfaceClass_onMultiChoiceClick;
/*----output event: onClick[]  Static Event */
extern VS_UUID VSOUTEVENTID_DialogInterfaceClass_onClick;
/*----output event: onCancel[]  Static Event */
extern VS_UUID VSOUTEVENTID_DialogInterfaceClass_onCancel;
/*----output event: onItemSelected[]  Static Event */
extern VS_UUID VSOUTEVENTID_DialogInterfaceClass_onItemSelected;
/*----output event: onKey[]  Static Event */
extern VS_UUID VSOUTEVENTID_DialogInterfaceClass_onKey;

/*------Variable Index Define */
#define VSATTRINDEX_DIALOGINTERFACECLASS_ANDROIDREFCOUNT                                           0
#define VSATTRNUMBER_DIALOGINTERFACECLASS                                                          1

struct StructOfAttachDialogInterfaceClass{
};
struct StructOfDialogInterfaceClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_RECTSHAPECLASS                                                                   "RectShapeClass"
extern VS_UUID VSOBJID_RectShapeClass;
#define VSATTRDEPEND_RECTSHAPECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_RECTSHAPECLASS                                                             1
extern VS_INT32 SRPCALLBACK RectShapeClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_RECTSHAPECLASS_ANDROIDREFCOUNT                                                 0
#define VSATTRNUMBER_RECTSHAPECLASS                                                                1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_RectShapeClass_draw;
#define VSFUNCRETURNDEPEND_RECTSHAPECLASS_DRAW(X)  {}
#define VSFUNCRETURNDEPENDNUM_RECTSHAPECLASS_DRAW                                                  0
#define VSFUNCPARAMDEPEND_RECTSHAPECLASS_DRAW(X)  {{X[0].Type=57;}{X[1].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_RECTSHAPECLASS_DRAW                                                   2

extern void SRPAPI RectShapeClass_draw(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);
typedef void (SRPAPI *RectShapeClass_drawProc)(void *Object,VS_OBJPTR canvas,VS_OBJPTR paint);

struct StructOfAttachRectShapeClass{
};
struct StructOfRectShapeClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_BUNDLECLASS                                                                      "BundleClass"
extern VS_UUID VSOBJID_BundleClass;
#define VSATTRDEPEND_BUNDLECLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_BUNDLECLASS                                                                1
extern VS_INT32 SRPCALLBACK BundleClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_BUNDLECLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_BUNDLECLASS                                                                   1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_clear;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_CLEAR(X)  {}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_CLEAR                                                    0
#define VSFUNCPARAMDEPEND_BUNDLECLASS_CLEAR(X)  {}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_CLEAR                                                     0

extern void SRPAPI BundleClass_clear(void *Object);
typedef void (SRPAPI *BundleClass_clearProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_containsKey;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_CONTAINSKEY(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_CONTAINSKEY                                              1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_CONTAINSKEY(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_CONTAINSKEY                                               1

extern VS_BOOL SRPAPI BundleClass_containsKey(void *Object,VS_CHAR * key);
typedef VS_BOOL (SRPAPI *BundleClass_containsKeyProc)(void *Object,VS_CHAR * key);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getBoolean;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETBOOLEAN(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETBOOLEAN                                               1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETBOOLEAN(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETBOOLEAN                                                1

extern VS_BOOL SRPAPI BundleClass_getBoolean(void *Object,VS_CHAR * key);
typedef VS_BOOL (SRPAPI *BundleClass_getBooleanProc)(void *Object,VS_CHAR * key);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getBoolean1;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETBOOLEAN1(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETBOOLEAN1                                              1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETBOOLEAN1(X)  {{X[0].Type=30;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETBOOLEAN1                                               2

extern VS_BOOL SRPAPI BundleClass_getBoolean1(void *Object,VS_CHAR * key,VS_BOOL defaultValue);
typedef VS_BOOL (SRPAPI *BundleClass_getBoolean1Proc)(void *Object,VS_CHAR * key,VS_BOOL defaultValue);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getCharSequence;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETCHARSEQUENCE(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETCHARSEQUENCE                                          1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETCHARSEQUENCE(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETCHARSEQUENCE                                           1

extern VS_CHAR * SRPAPI BundleClass_getCharSequence(void *Object,VS_CHAR * key);
typedef VS_CHAR * (SRPAPI *BundleClass_getCharSequenceProc)(void *Object,VS_CHAR * key);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getFloat;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETFLOAT(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETFLOAT                                                 1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETFLOAT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETFLOAT                                                  1

extern VS_FLOAT SRPAPI BundleClass_getFloat(void *Object,VS_CHAR * key);
typedef VS_FLOAT (SRPAPI *BundleClass_getFloatProc)(void *Object,VS_CHAR * key);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getFloat1;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETFLOAT1(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETFLOAT1                                                1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETFLOAT1(X)  {{X[0].Type=30;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETFLOAT1                                                 2

extern VS_FLOAT SRPAPI BundleClass_getFloat1(void *Object,VS_CHAR * key,VS_FLOAT defaultValue);
typedef VS_FLOAT (SRPAPI *BundleClass_getFloat1Proc)(void *Object,VS_CHAR * key,VS_FLOAT defaultValue);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getInt;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETINT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETINT                                                   1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETINT(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETINT                                                    1

extern VS_INT32 SRPAPI BundleClass_getInt(void *Object,VS_CHAR * key);
typedef VS_INT32 (SRPAPI *BundleClass_getIntProc)(void *Object,VS_CHAR * key);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_getInt1;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_GETINT1(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_GETINT1                                                  1
#define VSFUNCPARAMDEPEND_BUNDLECLASS_GETINT1(X)  {{X[0].Type=30;}{X[1].Type=7;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_GETINT1                                                   2

extern VS_INT32 SRPAPI BundleClass_getInt1(void *Object,VS_CHAR * key,VS_UINT32 defaultValue);
typedef VS_INT32 (SRPAPI *BundleClass_getInt1Proc)(void *Object,VS_CHAR * key,VS_UINT32 defaultValue);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_putBoolean;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_PUTBOOLEAN(X)  {}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_PUTBOOLEAN                                               0
#define VSFUNCPARAMDEPEND_BUNDLECLASS_PUTBOOLEAN(X)  {{X[0].Type=30;}{X[1].Type=1;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_PUTBOOLEAN                                                2

extern void SRPAPI BundleClass_putBoolean(void *Object,VS_CHAR * key,VS_BOOL value);
typedef void (SRPAPI *BundleClass_putBooleanProc)(void *Object,VS_CHAR * key,VS_BOOL value);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_putCharSequence;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_PUTCHARSEQUENCE(X)  {}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_PUTCHARSEQUENCE                                          0
#define VSFUNCPARAMDEPEND_BUNDLECLASS_PUTCHARSEQUENCE(X)  {{X[0].Type=30;}{X[1].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_PUTCHARSEQUENCE                                           2

extern void SRPAPI BundleClass_putCharSequence(void *Object,VS_CHAR * key,VS_CHAR * value);
typedef void (SRPAPI *BundleClass_putCharSequenceProc)(void *Object,VS_CHAR * key,VS_CHAR * value);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_putFloat;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_PUTFLOAT(X)  {}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_PUTFLOAT                                                 0
#define VSFUNCPARAMDEPEND_BUNDLECLASS_PUTFLOAT(X)  {{X[0].Type=30;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_PUTFLOAT                                                  2

extern void SRPAPI BundleClass_putFloat(void *Object,VS_CHAR * key,VS_FLOAT value);
typedef void (SRPAPI *BundleClass_putFloatProc)(void *Object,VS_CHAR * key,VS_FLOAT value);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_BundleClass_putInt;
#define VSFUNCRETURNDEPEND_BUNDLECLASS_PUTINT(X)  {}
#define VSFUNCRETURNDEPENDNUM_BUNDLECLASS_PUTINT                                                   0
#define VSFUNCPARAMDEPEND_BUNDLECLASS_PUTINT(X)  {{X[0].Type=30;}{X[1].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_BUNDLECLASS_PUTINT                                                    2

extern void SRPAPI BundleClass_putInt(void *Object,VS_CHAR * key,VS_INT32 value);
typedef void (SRPAPI *BundleClass_putIntProc)(void *Object,VS_CHAR * key,VS_INT32 value);

struct StructOfAttachBundleClass{
};
struct StructOfBundleClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_WEBVIEWCLASS                                                                     "WebViewClass"
extern VS_UUID VSOBJID_WebViewClass;
#define VSATTRDEPEND_WEBVIEWCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}{X[1].Type=14;X[1].Offset=4;}{X[2].Type=14;X[2].Offset=8;}{X[3].Type=14;X[3].Offset=12;}}
#define VSATTRDEPENDNUM_WEBVIEWCLASS                                                               4
extern VS_INT32 SRPCALLBACK WebViewClass_RequestRegisterObject( );

/*----output event: onProgressChanged[Script(Event,newProgress)]  Static Event */
extern VS_UUID VSOUTEVENTID_WebViewClass_onProgressChanged;
/*----output event: onReceivedError[Script(int errorCode, String description, String failingUrl)]  Static Event */
extern VS_UUID VSOUTEVENTID_WebViewClass_onReceivedError;

/*------Variable Index Define */
#define VSATTRINDEX_WEBVIEWCLASS_ANDROIDREFCOUNT                                                   0
#define VSATTRINDEX_WEBVIEWCLASS_VIEWGROUPQUEUE                                                    1
#define VSATTRINDEX_WEBVIEWCLASS_VIEWQUEUE                                                         2
#define VSATTRINDEX_WEBVIEWCLASS_OBJECTQUEUE                                                       3
#define VSATTRNUMBER_WEBVIEWCLASS                                                                  4

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_getProgress;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GETPROGRESS(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GETPROGRESS                                             1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GETPROGRESS(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GETPROGRESS                                              0

extern VS_INT32 SRPAPI WebViewClass_getProgress(void *Object);
typedef VS_INT32 (SRPAPI *WebViewClass_getProgressProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_getScale;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GETSCALE(X)  {{X[0].Type=8;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GETSCALE                                                1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GETSCALE(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GETSCALE                                                 0

extern VS_FLOAT SRPAPI WebViewClass_getScale(void *Object);
typedef VS_FLOAT (SRPAPI *WebViewClass_getScaleProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_getSettings;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GETSETTINGS(X)  {{X[0].Type=57;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GETSETTINGS                                             1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GETSETTINGS(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GETSETTINGS                                              0

extern VS_OBJPTR SRPAPI WebViewClass_getSettings(void *Object);
typedef VS_OBJPTR (SRPAPI *WebViewClass_getSettingsProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_getTitle;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GETTITLE(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GETTITLE                                                1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GETTITLE(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GETTITLE                                                 0

extern VS_CHAR * SRPAPI WebViewClass_getTitle(void *Object);
typedef VS_CHAR * (SRPAPI *WebViewClass_getTitleProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_getUrl;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GETURL(X)  {{X[0].Type=30;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GETURL                                                  1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GETURL(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GETURL                                                   0

extern VS_CHAR * SRPAPI WebViewClass_getUrl(void *Object);
typedef VS_CHAR * (SRPAPI *WebViewClass_getUrlProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_goBack;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GOBACK(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GOBACK                                                  0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GOBACK(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GOBACK                                                   0

extern void SRPAPI WebViewClass_goBack(void *Object);
typedef void (SRPAPI *WebViewClass_goBackProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_goBackOrForward;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GOBACKORFORWARD(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GOBACKORFORWARD                                         0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GOBACKORFORWARD(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GOBACKORFORWARD                                          1

extern void SRPAPI WebViewClass_goBackOrForward(void *Object,VS_INT32 steps);
typedef void (SRPAPI *WebViewClass_goBackOrForwardProc)(void *Object,VS_INT32 steps);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_goForward;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_GOFORWARD(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_GOFORWARD                                               0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_GOFORWARD(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_GOFORWARD                                                0

extern void SRPAPI WebViewClass_goForward(void *Object);
typedef void (SRPAPI *WebViewClass_goForwardProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_loadData;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_LOADDATA(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_LOADDATA                                                0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_LOADDATA(X)  {{X[0].Type=30;}{X[1].Type=30;}{X[2].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_LOADDATA                                                 3

extern void SRPAPI WebViewClass_loadData(void *Object,VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding);
typedef void (SRPAPI *WebViewClass_loadDataProc)(void *Object,VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_loadDataWithBaseURL;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_LOADDATAWITHBASEURL(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_LOADDATAWITHBASEURL                                     0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_LOADDATAWITHBASEURL(X)  {{X[0].Type=30;}{X[1].Type=30;}{X[2].Type=30;}{X[3].Type=30;}{X[4].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_LOADDATAWITHBASEURL                                      5

extern void SRPAPI WebViewClass_loadDataWithBaseURL(void *Object,VS_CHAR * baseUrl,VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding,VS_CHAR * historyUrl);
typedef void (SRPAPI *WebViewClass_loadDataWithBaseURLProc)(void *Object,VS_CHAR * baseUrl,VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding,VS_CHAR * historyUrl);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_loadUrl;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_LOADURL(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_LOADURL                                                 0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_LOADURL(X)  {{X[0].Type=30;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_LOADURL                                                  1

extern void SRPAPI WebViewClass_loadUrl(void *Object,VS_CHAR * url);
typedef void (SRPAPI *WebViewClass_loadUrlProc)(void *Object,VS_CHAR * url);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_setBackgroundColor;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_SETBACKGROUNDCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_SETBACKGROUNDCOLOR                                      0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_SETBACKGROUNDCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_SETBACKGROUNDCOLOR                                       1

extern void SRPAPI WebViewClass_setBackgroundColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *WebViewClass_setBackgroundColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_setInitialScale;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_SETINITIALSCALE(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_SETINITIALSCALE                                         0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_SETINITIALSCALE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_SETINITIALSCALE                                          1

extern void SRPAPI WebViewClass_setInitialScale(void *Object,VS_INT32 scaleInPercent);
typedef void (SRPAPI *WebViewClass_setInitialScaleProc)(void *Object,VS_INT32 scaleInPercent);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_setScrollBarStyle;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_SETSCROLLBARSTYLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_SETSCROLLBARSTYLE                                       0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_SETSCROLLBARSTYLE(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_SETSCROLLBARSTYLE                                        1

extern void SRPAPI WebViewClass_setScrollBarStyle(void *Object,VS_INT32 style);
typedef void (SRPAPI *WebViewClass_setScrollBarStyleProc)(void *Object,VS_INT32 style);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_stopLoading;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_STOPLOADING(X)  {}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_STOPLOADING                                             0
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_STOPLOADING(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_STOPLOADING                                              0

extern void SRPAPI WebViewClass_stopLoading(void *Object);
typedef void (SRPAPI *WebViewClass_stopLoadingProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_zoomIn;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_ZOOMIN(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_ZOOMIN                                                  1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_ZOOMIN(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_ZOOMIN                                                   0

extern VS_BOOL SRPAPI WebViewClass_zoomIn(void *Object);
typedef VS_BOOL (SRPAPI *WebViewClass_zoomInProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_WebViewClass_zoomOut;
#define VSFUNCRETURNDEPEND_WEBVIEWCLASS_ZOOMOUT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_WEBVIEWCLASS_ZOOMOUT                                                 1
#define VSFUNCPARAMDEPEND_WEBVIEWCLASS_ZOOMOUT(X)  {}
#define VSFUNCPARAMDEPENDNUM_WEBVIEWCLASS_ZOOMOUT                                                  0

extern VS_BOOL SRPAPI WebViewClass_zoomOut(void *Object);
typedef VS_BOOL (SRPAPI *WebViewClass_zoomOutProc)(void *Object);

struct StructOfAttachWebViewClass{
};
struct StructOfWebViewClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
    //----class[ViewGroupClass] attribute
    void            *ViewGroupQueue;              //
    void            *ViewQueue;                   //
    void            *ObjectQueue;                 //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define VSOBJNAME_CANVASCLASS                                                                      "CanvasClass"
extern VS_UUID VSOBJID_CanvasClass;
#define VSATTRDEPEND_CANVASCLASS(X)  {{X[0].Type=6;X[0].Offset=0;}}
#define VSATTRDEPENDNUM_CANVASCLASS                                                                1
extern VS_INT32 SRPCALLBACK CanvasClass_RequestRegisterObject( );

/*------Variable Index Define */
#define VSATTRINDEX_CANVASCLASS_ANDROIDREFCOUNT                                                    0
#define VSATTRNUMBER_CANVASCLASS                                                                   1

/*------Local Define Function */
/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_init;
#define VSFUNCRETURNDEPEND_CANVASCLASS_INIT(X)  {{X[0].Type=1;}}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_INIT                                                     1
#define VSFUNCPARAMDEPEND_CANVASCLASS_INIT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_INIT                                                      1

extern VS_BOOL SRPAPI CanvasClass_init(void *Object,VS_OBJPTR bitmap);
typedef VS_BOOL (SRPAPI *CanvasClass_initProc)(void *Object,VS_OBJPTR bitmap);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawARGB;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWARGB(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWARGB                                                 0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWARGB(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWARGB                                                  4

extern void SRPAPI CanvasClass_drawARGB(void *Object,VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b);
typedef void (SRPAPI *CanvasClass_drawARGBProc)(void *Object,VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawArc;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWARC(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWARC                                                  0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWARC(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=8;}{X[5].Type=8;}{X[6].Type=1;}{X[7].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWARC                                                   8

extern void SRPAPI CanvasClass_drawArc(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT startAngle,VS_FLOAT sweepAngle,VS_BOOL useCenter,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawArcProc)(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT startAngle,VS_FLOAT sweepAngle,VS_BOOL useCenter,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawBitmap;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWBITMAP(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWBITMAP                                               0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWBITMAP(X)  {{X[0].Type=57;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWBITMAP                                                4

extern void SRPAPI CanvasClass_drawBitmap(void *Object,VS_OBJPTR bitmap,VS_FLOAT left,VS_FLOAT top,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawBitmapProc)(void *Object,VS_OBJPTR bitmap,VS_FLOAT left,VS_FLOAT top,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawBitmap1;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWBITMAP1(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWBITMAP1                                              0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWBITMAP1(X)  {{X[0].Type=59;}{X[1].Type=6;}{X[2].Type=6;}{X[3].Type=6;}{X[4].Type=6;}{X[5].Type=6;}{X[6].Type=6;}{X[7].Type=1;}{X[8].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWBITMAP1                                               9

extern void SRPAPI CanvasClass_drawBitmap1(void *Object,VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_BOOL hasAlpha,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawBitmap1Proc)(void *Object,VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_BOOL hasAlpha,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawCircle;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWCIRCLE(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWCIRCLE                                               0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWCIRCLE(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWCIRCLE                                                4

extern void SRPAPI CanvasClass_drawCircle(void *Object,VS_FLOAT cx,VS_FLOAT cy,VS_FLOAT radius,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawCircleProc)(void *Object,VS_FLOAT cx,VS_FLOAT cy,VS_FLOAT radius,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawColor;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWCOLOR(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWCOLOR                                                0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWCOLOR(X)  {{X[0].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWCOLOR                                                 1

extern void SRPAPI CanvasClass_drawColor(void *Object,VS_INT32 color);
typedef void (SRPAPI *CanvasClass_drawColorProc)(void *Object,VS_INT32 color);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawLine;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWLINE(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWLINE                                                 0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWLINE(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWLINE                                                  5

extern void SRPAPI CanvasClass_drawLine(void *Object,VS_FLOAT startX,VS_FLOAT startY,VS_FLOAT stopX,VS_FLOAT stopY,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawLineProc)(void *Object,VS_FLOAT startX,VS_FLOAT startY,VS_FLOAT stopX,VS_FLOAT stopY,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawOval;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWOVAL(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWOVAL                                                 0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWOVAL(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWOVAL                                                  5

extern void SRPAPI CanvasClass_drawOval(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawOvalProc)(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawPaint;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWPAINT(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWPAINT                                                0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWPAINT(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWPAINT                                                 1

extern void SRPAPI CanvasClass_drawPaint(void *Object,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawPaintProc)(void *Object,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawPath;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWPATH(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWPATH                                                 0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWPATH(X)  {{X[0].Type=57;}{X[1].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWPATH                                                  2

extern void SRPAPI CanvasClass_drawPath(void *Object,VS_OBJPTR path,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawPathProc)(void *Object,VS_OBJPTR path,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawPoint;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWPOINT(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWPOINT                                                0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWPOINT(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWPOINT                                                 3

extern void SRPAPI CanvasClass_drawPoint(void *Object,VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawPointProc)(void *Object,VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawRGB;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWRGB(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWRGB                                                  0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWRGB(X)  {{X[0].Type=6;}{X[1].Type=6;}{X[2].Type=6;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWRGB                                                   3

extern void SRPAPI CanvasClass_drawRGB(void *Object,VS_INT32 r,VS_INT32 g,VS_INT32 b);
typedef void (SRPAPI *CanvasClass_drawRGBProc)(void *Object,VS_INT32 r,VS_INT32 g,VS_INT32 b);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawRect;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWRECT(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWRECT                                                 0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWRECT(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWRECT                                                  5

extern void SRPAPI CanvasClass_drawRect(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawRectProc)(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawRoundRect;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWROUNDRECT(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWROUNDRECT                                            0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWROUNDRECT(X)  {{X[0].Type=8;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=8;}{X[5].Type=8;}{X[6].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWROUNDRECT                                             7

extern void SRPAPI CanvasClass_drawRoundRect(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT rx,VS_FLOAT ry,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawRoundRectProc)(void *Object,VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT rx,VS_FLOAT ry,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawText;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWTEXT(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWTEXT                                                 0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWTEXT(X)  {{X[0].Type=30;}{X[1].Type=8;}{X[2].Type=8;}{X[3].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWTEXT                                                  4

extern void SRPAPI CanvasClass_drawText(void *Object,VS_CHAR * text,VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawTextProc)(void *Object,VS_CHAR * text,VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_drawTextOnPath;
#define VSFUNCRETURNDEPEND_CANVASCLASS_DRAWTEXTONPATH(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_DRAWTEXTONPATH                                           0
#define VSFUNCPARAMDEPEND_CANVASCLASS_DRAWTEXTONPATH(X)  {{X[0].Type=30;}{X[1].Type=57;}{X[2].Type=8;}{X[3].Type=8;}{X[4].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_DRAWTEXTONPATH                                            5

extern void SRPAPI CanvasClass_drawTextOnPath(void *Object,VS_CHAR * text,VS_OBJPTR path,VS_FLOAT hOffset,VS_FLOAT vOffset,VS_OBJPTR paint);
typedef void (SRPAPI *CanvasClass_drawTextOnPathProc)(void *Object,VS_CHAR * text,VS_OBJPTR path,VS_FLOAT hOffset,VS_FLOAT vOffset,VS_OBJPTR paint);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_getHeight;
#define VSFUNCRETURNDEPEND_CANVASCLASS_GETHEIGHT(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_GETHEIGHT                                                1
#define VSFUNCPARAMDEPEND_CANVASCLASS_GETHEIGHT(X)  {}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_GETHEIGHT                                                 0

extern VS_INT32 SRPAPI CanvasClass_getHeight(void *Object);
typedef VS_INT32 (SRPAPI *CanvasClass_getHeightProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_getWidth;
#define VSFUNCRETURNDEPEND_CANVASCLASS_GETWIDTH(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_GETWIDTH                                                 1
#define VSFUNCPARAMDEPEND_CANVASCLASS_GETWIDTH(X)  {}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_GETWIDTH                                                  0

extern VS_INT32 SRPAPI CanvasClass_getWidth(void *Object);
typedef VS_INT32 (SRPAPI *CanvasClass_getWidthProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_restore;
#define VSFUNCRETURNDEPEND_CANVASCLASS_RESTORE(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_RESTORE                                                  0
#define VSFUNCPARAMDEPEND_CANVASCLASS_RESTORE(X)  {}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_RESTORE                                                   0

extern void SRPAPI CanvasClass_restore(void *Object);
typedef void (SRPAPI *CanvasClass_restoreProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_rotate;
#define VSFUNCRETURNDEPEND_CANVASCLASS_ROTATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_ROTATE                                                   0
#define VSFUNCPARAMDEPEND_CANVASCLASS_ROTATE(X)  {{X[0].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_ROTATE                                                    1

extern void SRPAPI CanvasClass_rotate(void *Object,VS_FLOAT degrees);
typedef void (SRPAPI *CanvasClass_rotateProc)(void *Object,VS_FLOAT degrees);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_save;
#define VSFUNCRETURNDEPEND_CANVASCLASS_SAVE(X)  {{X[0].Type=6;}}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_SAVE                                                     1
#define VSFUNCPARAMDEPEND_CANVASCLASS_SAVE(X)  {}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_SAVE                                                      0

extern VS_INT32 SRPAPI CanvasClass_save(void *Object);
typedef VS_INT32 (SRPAPI *CanvasClass_saveProc)(void *Object);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_scale;
#define VSFUNCRETURNDEPEND_CANVASCLASS_SCALE(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_SCALE                                                    0
#define VSFUNCPARAMDEPEND_CANVASCLASS_SCALE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_SCALE                                                     2

extern void SRPAPI CanvasClass_scale(void *Object,VS_FLOAT sx,VS_FLOAT sy);
typedef void (SRPAPI *CanvasClass_scaleProc)(void *Object,VS_FLOAT sx,VS_FLOAT sy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_setBitmap;
#define VSFUNCRETURNDEPEND_CANVASCLASS_SETBITMAP(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_SETBITMAP                                                0
#define VSFUNCPARAMDEPEND_CANVASCLASS_SETBITMAP(X)  {{X[0].Type=57;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_SETBITMAP                                                 1

extern void SRPAPI CanvasClass_setBitmap(void *Object,VS_OBJPTR bitmap);
typedef void (SRPAPI *CanvasClass_setBitmapProc)(void *Object,VS_OBJPTR bitmap);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_skew;
#define VSFUNCRETURNDEPEND_CANVASCLASS_SKEW(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_SKEW                                                     0
#define VSFUNCPARAMDEPEND_CANVASCLASS_SKEW(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_SKEW                                                      2

extern void SRPAPI CanvasClass_skew(void *Object,VS_FLOAT sx,VS_FLOAT sy);
typedef void (SRPAPI *CanvasClass_skewProc)(void *Object,VS_FLOAT sx,VS_FLOAT sy);

/*[Private Function] :     */
extern VS_UUID VSFUNCID_CanvasClass_translate;
#define VSFUNCRETURNDEPEND_CANVASCLASS_TRANSLATE(X)  {}
#define VSFUNCRETURNDEPENDNUM_CANVASCLASS_TRANSLATE                                                0
#define VSFUNCPARAMDEPEND_CANVASCLASS_TRANSLATE(X)  {{X[0].Type=8;}{X[1].Type=8;}}
#define VSFUNCPARAMDEPENDNUM_CANVASCLASS_TRANSLATE                                                 2

extern void SRPAPI CanvasClass_translate(void *Object,VS_FLOAT dx,VS_FLOAT dy);
typedef void (SRPAPI *CanvasClass_translateProc)(void *Object,VS_FLOAT dx,VS_FLOAT dy);

struct StructOfAttachCanvasClass{
};
struct StructOfCanvasClass{
    //----class[AndroidBaseClass] attribute
    VS_INT32        AndroidRefCount;              //
};

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
//#define VSOBJNAME_BASICSERVICEITEM                                                                 "BasicServiceItem"
//UUID VSOBJID_BasicServiceItem;

#pragma pack()

#endif
