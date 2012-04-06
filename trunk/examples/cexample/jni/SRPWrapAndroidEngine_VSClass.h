/*--------------------------------------------------*/
/*VirtualSociety System ServiceModuleTemplate Class Header File*/
/*CreateBy SRPLab                */
/*CreateDate: 2012-4-6  */
/*--------------------------------------------------*/
#ifndef SRPWRAPANDROIDENGINE_CLASSHEADERFILE
#define SRPWRAPANDROIDENGINE_CLASSHEADERFILE

#define _INCLUDE_STARLIB
#include "SRPWrapAndroidEngine_VSDHeader.h"

#if( VS_OS_TYPE == VS_OS_WINDOWS )
#pragma warning (disable:4819)
#pragma warning (disable:4244)
#pragma warning (disable:4996)
#pragma warning (disable:4800)
#endif

#pragma pack(4)

class ClassOfRectClass:public ClassOfSRPObject{
public:
    ClassOfRectClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRectClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRectClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRectClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Attribute Get/Put Function Define
    VS_INT32 Get_left();
    void Put_left(VS_INT32 In_Value);

    VS_INT32 Get_top();
    void Put_top(VS_INT32 In_Value);

    VS_INT32 Get_right();
    void Put_right(VS_INT32 In_Value);

    VS_INT32 Get_bottom();
    void Put_bottom(VS_INT32 In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--Attribute Property Define
    __declspec(property(get=Get_left, put=Put_left)) VS_INT32 left;
    __declspec(property(get=Get_top, put=Put_top)) VS_INT32 top;
    __declspec(property(get=Get_right, put=Put_right)) VS_INT32 right;
    __declspec(property(get=Get_bottom, put=Put_bottom)) VS_INT32 bottom;
#endif

};

class ClassOfAndroidBaseClass:public ClassOfSRPObject{
public:
    ClassOfAndroidBaseClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAndroidBaseClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAndroidBaseClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAndroidBaseClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Attribute Get/Put Function Define
    VS_INT32 Get_AndroidRefCount();
    void Put_AndroidRefCount(VS_INT32 In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--Attribute Property Define
    __declspec(property(get=Get_AndroidRefCount, put=Put_AndroidRefCount)) VS_INT32 AndroidRefCount;
#endif

public:
    //--Function Define
    void SRPAPI incAndroidRef();
    void SRPAPI decAndroidRef();
    VS_OBJPTR SRPAPI getActivity();
};

class ClassOfViewClass:public ClassOfAndroidBaseClass{
public:
    ClassOfViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onClick();
    void Put_E_onClick(VSSystemEvent_EventProc In_Value);


public:
    //--PubFunction Get/Put Function Define
    void Put_F_onCreateAndroid(void * In_Value);
    void * Get_F_onCreateAndroid();

    void Put_F_onDraw(void * In_Value);
    void * Get_F_onDraw();

    void Put_F_onTouchEvent(void * In_Value);
    void * Get_F_onTouchEvent();

    void Put_F_onLayout(void * In_Value);
    void * Get_F_onLayout();

    void Put_F_onMeasure(void * In_Value);
    void * Get_F_onMeasure();

    void Put_F_onSizeChanged(void * In_Value);
    void * Get_F_onSizeChanged();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onClick, put=Put_E_onClick)) VSSystemEvent_EventProc E_onClick;
#endif

#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_onCreateAndroid, put=Put_F_onCreateAndroid)) void * F_onCreateAndroid;
    __declspec(property(get=Get_F_onDraw, put=Put_F_onDraw)) void * F_onDraw;
    __declspec(property(get=Get_F_onTouchEvent, put=Put_F_onTouchEvent)) void * F_onTouchEvent;
    __declspec(property(get=Get_F_onLayout, put=Put_F_onLayout)) void * F_onLayout;
    __declspec(property(get=Get_F_onMeasure, put=Put_F_onMeasure)) void * F_onMeasure;
    __declspec(property(get=Get_F_onSizeChanged, put=Put_F_onSizeChanged)) void * F_onSizeChanged;
#endif

public:
    //--Function Define
    void SRPAPI onCreateAndroid();
    void SRPAPI setAbsoluteLayoutParams(VS_INT32 width,VS_INT32 height,VS_INT32 x,VS_INT32 y);
    void SRPAPI setLinearLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setLinearWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
    void SRPAPI setRaidoGroupLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setRaidoGroupWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
    void SRPAPI setTableLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setTableWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
    void SRPAPI setTableRowLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setTableRowWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight);
    void SRPAPI setAbsListViewLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setGalleryLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setGridViewLayoutParams(VS_INT32 width,VS_INT32 height);
    void SRPAPI setRelativeLayoutParams(VS_INT32 width,VS_INT32 height);
    VS_INT32 SRPAPI sp2px(VS_FLOAT v);
    VS_INT32 SRPAPI dp2px(VS_FLOAT v);
    VS_INT32 SRPAPI pt2pxX(VS_FLOAT v);
    VS_INT32 SRPAPI pt2pxY(VS_FLOAT v);
    void SRPAPI onDraw(VS_OBJPTR canvas);
    void SRPAPI onSuperDraw(VS_OBJPTR canvas);
    void SRPAPI bringToFront();
    void SRPAPI clearFocus();
    void SRPAPI draw(VS_OBJPTR draw);
    VS_INT32 SRPAPI getBottom();
    VS_CHAR * SRPAPI getContentDescription();
    VS_INT32 SRPAPI getHeight();
    VS_INT32 SRPAPI getId();
    VS_INT32 SRPAPI getLeft();
    VS_INT32 SRPAPI getPaddingBottom();
    VS_INT32 SRPAPI getPaddingLeft();
    VS_INT32 SRPAPI getPaddingRight();
    VS_INT32 SRPAPI getPaddingTop();
    VS_INT32 SRPAPI getRight();
    VS_INT32 SRPAPI getTop();
    VS_INT32 SRPAPI getVisibility();
    VS_INT32 SRPAPI getWidth();
    VS_BOOL SRPAPI hasFocus();
    void SRPAPI invalidate();
    void SRPAPI invalidate1(VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);
    VS_BOOL SRPAPI isClickable();
    VS_BOOL SRPAPI isEnabled();
    VS_BOOL SRPAPI isFocusable();
    VS_BOOL SRPAPI isFocusableInTouchMode();
    VS_BOOL SRPAPI isFocused();
    VS_BOOL SRPAPI isHapticFeedbackEnabled();
    VS_BOOL SRPAPI isHorizontalFadingEdgeEnabled();
    VS_BOOL SRPAPI isHorizontalScrollBarEnabled();
    VS_BOOL SRPAPI isInEditMode();
    VS_BOOL SRPAPI isInTouchMode();
    VS_BOOL SRPAPI isLayoutRequested();
    VS_BOOL SRPAPI isLongClickable();
    VS_BOOL SRPAPI isOpaque();
    VS_BOOL SRPAPI isPressed();
    VS_BOOL SRPAPI isSaveEnabled();
    VS_BOOL SRPAPI isScrollbarFadingEnabled();
    VS_BOOL SRPAPI isSelected();
    VS_BOOL SRPAPI isShown();
    VS_BOOL SRPAPI isSoundEffectsEnabled();
    VS_BOOL SRPAPI isVerticalFadingEdgeEnabled();
    VS_BOOL SRPAPI isVerticalScrollBarEnabled();
    void SRPAPI layout(VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);
    void SRPAPI measure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
    void SRPAPI postInvalidate();
    void SRPAPI postInvalidate1(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI postInvalidateDelayed(VS_LONG delayMilliseconds);
    void SRPAPI postInvalidateDelayed1();
    VS_BOOL SRPAPI requestFocus(VS_LONG delayMilliseconds,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI scrollBy(VS_INT32 x,VS_INT32 y);
    void SRPAPI scrollTo(VS_INT32 x,VS_INT32 y);
    void SRPAPI setBackgroundColor(VS_INT32 color);
    void SRPAPI setBackgroundResource(VS_INT32 resid);
    void SRPAPI setFocusable(VS_BOOL focusable);
    void SRPAPI setId(VS_INT32 id);
    void SRPAPI setPadding(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI setPressed(VS_BOOL pressed);
    void SRPAPI setScrollBarStyle(VS_INT32 style);
    void SRPAPI setScrollbarFadingEnabled(VS_BOOL fadeScrollbars);
    void SRPAPI setSelected(VS_BOOL selected);
    void SRPAPI setVerticalFadingEdgeEnabled(VS_BOOL verticalFadingEdgeEnabled);
    void SRPAPI setVerticalScrollBarEnabled(VS_BOOL verticalScrollBarEnabled);
    void SRPAPI setVisibility(VS_INT32 visibility);
    VS_BOOL SRPAPI onTouchEvent(VS_OBJPTR event);
    void SRPAPI onLayout(VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI onSuperLayout(VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI onMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
    void SRPAPI onSuperMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
    void SRPAPI onSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
    void SRPAPI onSuperSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
    void SRPAPI setMeasuredDimension(VS_INT32 measuredWidth,VS_INT32 measuredHeight);
};

class ClassOfProgressBarClass:public ClassOfViewClass{
public:
    ClassOfProgressBarClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfProgressBarClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfProgressBarClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfProgressBarClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setMax(VS_INT32 max);
    void SRPAPI setProgress(VS_INT32 progress);
    void SRPAPI setVisibility(VS_INT32 v);
    void SRPAPI setIndeterminate(VS_BOOL indeterminate);
    void SRPAPI setIndeterminateDrawable(VS_INT32 resid);
    void SRPAPI setProgressDrawable(VS_INT32 resid);
    void SRPAPI incrementProgressBy(VS_INT32 diff);
    void SRPAPI incrementSecondaryProgressBy(VS_INT32 diff);
    VS_INT32 SRPAPI getProgress();
    VS_INT32 SRPAPI getSecondaryProgress();
    VS_INT32 SRPAPI getMax();
};

class ClassOfSurfaceViewClass:public ClassOfViewClass{
public:
    ClassOfSurfaceViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfSurfaceViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfSurfaceViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfSurfaceViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_surfaceChanged(void * In_Value);
    void * Get_F_surfaceChanged();

    void Put_F_surfaceCreated(void * In_Value);
    void * Get_F_surfaceCreated();

    void Put_F_surfaceDestroyed(void * In_Value);
    void * Get_F_surfaceDestroyed();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_surfaceChanged, put=Put_F_surfaceChanged)) void * F_surfaceChanged;
    __declspec(property(get=Get_F_surfaceCreated, put=Put_F_surfaceCreated)) void * F_surfaceCreated;
    __declspec(property(get=Get_F_surfaceDestroyed, put=Put_F_surfaceDestroyed)) void * F_surfaceDestroyed;
#endif

public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas);
    void SRPAPI setVisibility(VS_INT32 visibility);
    void SRPAPI setZOrderMediaOverlay(VS_BOOL isMediaOverlay);
    void SRPAPI setZOrderOnTop(VS_BOOL onTop);
    VS_BOOL SRPAPI isCreating();
    VS_OBJPTR SRPAPI lockCanvas();
    VS_OBJPTR SRPAPI lockCanvas1(VS_OBJPTR dirty);
    void SRPAPI unlockCanvasAndPost(VS_OBJPTR canvas);
    void SRPAPI surfaceChanged(VS_INT32 format,VS_INT32 width,VS_INT32 height);
    void SRPAPI surfaceCreated();
    void SRPAPI surfaceDestroyed();
};

class ClassOfAnalogClockClass:public ClassOfViewClass{
public:
    ClassOfAnalogClockClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAnalogClockClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAnalogClockClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAnalogClockClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfObjectBaseClass:public ClassOfAndroidBaseClass{
public:
    ClassOfObjectBaseClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfObjectBaseClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfObjectBaseClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfObjectBaseClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfPaintClass:public ClassOfObjectBaseClass{
public:
    ClassOfPaintClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfPaintClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfPaintClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfPaintClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_INT32 SRPAPI getAlpha();
    VS_INT32 SRPAPI getColor();
    VS_FLOAT SRPAPI measureText(VS_CHAR * text);
    void SRPAPI reset();
    void SRPAPI set(VS_OBJPTR src);
    void SRPAPI setARGB(VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b);
    void SRPAPI setAlpha(VS_INT32 a);
    void SRPAPI setAntiAlias(VS_BOOL aa);
    void SRPAPI setColor(VS_INT32 color);
    void SRPAPI setDither(VS_BOOL dither);
    void SRPAPI setFakeBoldText(VS_BOOL fakeBoldText);
    void SRPAPI setFilterBitmap(VS_BOOL filter);
    void SRPAPI setFlags(VS_INT32 flags);
    void SRPAPI setLinearText(VS_BOOL linearText);
    void SRPAPI setShadowLayer(VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color);
    void SRPAPI setStrikeThruText(VS_BOOL strikeThruText);
    void SRPAPI setStrokeCap(VS_CHAR * cap);
    void SRPAPI setStrokeJoin(VS_CHAR * join);
    void SRPAPI setStrokeMiter(VS_FLOAT miter);
    void SRPAPI setStrokeWidth(VS_FLOAT width);
    void SRPAPI setStyle(VS_CHAR * style);
    void SRPAPI setSubpixelText(VS_BOOL subpixelText);
    void SRPAPI setTextAlign(VS_CHAR * align);
    void SRPAPI setTextScaleX(VS_FLOAT scaleX);
    void SRPAPI setTextSize(VS_FLOAT textSize);
    void SRPAPI setTextSkewX(VS_FLOAT skewX);
    void SRPAPI setTypeface(VS_OBJPTR typeface);
    void SRPAPI setUnderlineText(VS_BOOL underlineText);
};

class ClassOfToastClass:public ClassOfObjectBaseClass{
public:
    ClassOfToastClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfToastClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfToastClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfToastClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI cancel();
    VS_INT32 SRPAPI getDuration();
    VS_INT32 SRPAPI getGravity();
    VS_FLOAT SRPAPI getHorizontalMargin();
    VS_FLOAT SRPAPI getVerticalMargin();
    VS_INT32 SRPAPI getXOffset();
    VS_INT32 SRPAPI getYOffset();
    VS_OBJPTR SRPAPI makeText(VS_CHAR * text,VS_INT32 duration);
    void SRPAPI setDuration(VS_INT32 duration);
    void SRPAPI setGravity(VS_INT32 gravity,VS_INT32 xOffset,VS_INT32 yOffset);
    void SRPAPI setMargin(VS_FLOAT horizontalMargin,VS_FLOAT verticalMargin);
    void SRPAPI setText(VS_CHAR * s);
    void SRPAPI setView(VS_OBJPTR view);
    void SRPAPI show();
};

class ClassOfMatrixClass:public ClassOfObjectBaseClass{
public:
    ClassOfMatrixClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfMatrixClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfMatrixClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfMatrixClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI invert(VS_OBJPTR inverse);
    VS_BOOL SRPAPI isIdentity();
    VS_BOOL SRPAPI postConcat(VS_OBJPTR other);
    VS_BOOL SRPAPI postRotate(VS_FLOAT degrees);
    VS_BOOL SRPAPI postRotate1(VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);
    VS_BOOL SRPAPI postScale(VS_FLOAT sx,VS_FLOAT sy);
    VS_BOOL SRPAPI postScale1(VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);
    VS_BOOL SRPAPI postSkew(VS_FLOAT kx,VS_FLOAT ky);
    VS_BOOL SRPAPI postSkew1(VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);
    VS_BOOL SRPAPI postTranslate(VS_FLOAT dx,VS_FLOAT dy);
    VS_BOOL SRPAPI preConcat(VS_OBJPTR other);
    VS_BOOL SRPAPI preRotate(VS_FLOAT degrees);
    VS_BOOL SRPAPI preRotate1(VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);
    VS_BOOL SRPAPI preScale(VS_FLOAT sx,VS_FLOAT sy);
    VS_BOOL SRPAPI preScale1(VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);
    VS_BOOL SRPAPI preSkew(VS_FLOAT kx,VS_FLOAT ky);
    VS_BOOL SRPAPI preSkew1(VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);
    VS_BOOL SRPAPI preTranslate(VS_FLOAT dx,VS_FLOAT dy);
    void SRPAPI reset();
    void SRPAPI set(VS_OBJPTR src);
    void SRPAPI setRotate(VS_FLOAT degrees);
    void SRPAPI setRotate1(VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py);
    void SRPAPI setScale(VS_FLOAT sx,VS_FLOAT sy);
    void SRPAPI setScale1(VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py);
    void SRPAPI setSinCos(VS_FLOAT sinValue,VS_FLOAT cosValue);
    void SRPAPI setSinCos1(VS_FLOAT sinValue,VS_FLOAT cosValue,VS_FLOAT px,VS_FLOAT py);
    void SRPAPI setSkew(VS_FLOAT kx,VS_FLOAT ky);
    void SRPAPI setSkew1(VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py);
    void SRPAPI setTranslate(VS_FLOAT dx,VS_FLOAT dy);
};

class ClassOfShapeClass:public ClassOfObjectBaseClass{
public:
    ClassOfShapeClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfShapeClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfShapeClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_FLOAT SRPAPI getHeight();
    VS_FLOAT SRPAPI getWidth();
    VS_BOOL SRPAPI hasAlpha();
    void SRPAPI resize(VS_FLOAT width,VS_FLOAT height);
};

class ClassOfInputStreamClass:public ClassOfObjectBaseClass{
public:
    ClassOfInputStreamClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfInputStreamClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfInputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfInputStreamClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfTypefaceClass:public ClassOfObjectBaseClass{
public:
    ClassOfTypefaceClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfTypefaceClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfTypefaceClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfTypefaceClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI create(VS_CHAR * familyName,VS_INT32 style);
    VS_BOOL SRPAPI createFromFile(VS_CHAR * path);
    VS_BOOL SRPAPI createFromAsset(VS_CHAR * path);
    void SRPAPI defaultFromStyle(VS_INT32 style);
    VS_INT32 SRPAPI getStyle();
    VS_BOOL SRPAPI isBold();
    VS_BOOL SRPAPI isItalic();
};

class ClassOfActivityClass:public ClassOfAndroidBaseClass{
public:
    ClassOfActivityClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfActivityClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfActivityClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfActivityClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_onStart(void * In_Value);
    void * Get_F_onStart();

    void Put_F_onSaveInstanceState(void * In_Value);
    void * Get_F_onSaveInstanceState();

    void Put_F_onRestoreInstanceState(void * In_Value);
    void * Get_F_onRestoreInstanceState();

    void Put_F_onPause(void * In_Value);
    void * Get_F_onPause();

    void Put_F_onResume(void * In_Value);
    void * Get_F_onResume();

    void Put_F_onDestroy(void * In_Value);
    void * Get_F_onDestroy();

    void Put_F_onTouchEvent(void * In_Value);
    void * Get_F_onTouchEvent();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_onStart, put=Put_F_onStart)) void * F_onStart;
    __declspec(property(get=Get_F_onSaveInstanceState, put=Put_F_onSaveInstanceState)) void * F_onSaveInstanceState;
    __declspec(property(get=Get_F_onRestoreInstanceState, put=Put_F_onRestoreInstanceState)) void * F_onRestoreInstanceState;
    __declspec(property(get=Get_F_onPause, put=Put_F_onPause)) void * F_onPause;
    __declspec(property(get=Get_F_onResume, put=Put_F_onResume)) void * F_onResume;
    __declspec(property(get=Get_F_onDestroy, put=Put_F_onDestroy)) void * F_onDestroy;
    __declspec(property(get=Get_F_onTouchEvent, put=Put_F_onTouchEvent)) void * F_onTouchEvent;
#endif

public:
    //--Function Define
    void SRPAPI onStart();
    VS_OBJPTR SRPAPI getSaveInstanceState();
    void SRPAPI onSaveInstanceState(VS_OBJPTR savedInstanceState);
    void SRPAPI onRestoreInstanceState(VS_OBJPTR savedInstanceState);
    void SRPAPI onPause();
    void SRPAPI onResume();
    void SRPAPI onDestroy();
    void SRPAPI exit(VS_INT32 code);
    VS_BOOL SRPAPI onTouchEvent(VS_OBJPTR event);
    void SRPAPI setTitle(VS_CHAR * title);
    void SRPAPI setTitleColor(VS_INT32 textColor);
    VS_BOOL SRPAPI runScript(VS_CHAR * scriptInterface,VS_CHAR * script);
    VS_BOOL SRPAPI DoFile(VS_CHAR * scriptInterface,VS_CHAR * path);
    VS_BOOL SRPAPI DoAssetsFile(VS_CHAR * scriptInterface,VS_CHAR * path);
    void SRPAPI pushActivity(VS_OBJPTR activity);
    VS_OBJPTR SRPAPI popActivity();
    VS_OBJPTR SRPAPI getCurrent();
    void SRPAPI setResource(VS_CHAR * ResourceName,VS_INT32 ResourceID);
    VS_INT32 SRPAPI getResource(VS_CHAR * ResourceName);
    VS_OBJPTR SRPAPI getAssetFileDescriptor(VS_CHAR * path);
    VS_CHAR * SRPAPI getWifiMacAddress();
    VS_CHAR * SRPAPI getLocalIpAddress();
    VS_BOOL SRPAPI openWifi();
    void SRPAPI closeWifi();
    void SRPAPI keepScreenOn(VS_BOOL flag);
    void SRPAPI startActivity(VS_OBJPTR intent);
    VS_BOOL SRPAPI requestWindowFeature(VS_INT32 featureId);
    void SRPAPI setDefaultKeyMode(VS_INT32 mode);
    VS_INT32 SRPAPI getHeight();
    VS_INT32 SRPAPI getWidth();
    VS_OBJPTR SRPAPI getTransitionDrawable(VS_INT32 resid);
    VS_OBJPTR SRPAPI getBitmapDrawable(VS_INT32 resid);
};

class ClassOfIntentClass:public ClassOfObjectBaseClass{
public:
    ClassOfIntentClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfIntentClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfIntentClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfIntentClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setAction(VS_CHAR * action);
    void SRPAPI setData(VS_CHAR * data);
    void SRPAPI setType(VS_CHAR * type);
    void SRPAPI putExtra(VS_CHAR * value);
    void SRPAPI putExtraEx(VS_CHAR * paraPkg);
};

class ClassOfAdapterClass:public ClassOfAndroidBaseClass{
public:
    ClassOfAdapterClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAdapterClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAdapterClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_getCount(void * In_Value);
    void * Get_F_getCount();

    void Put_F_getItem(void * In_Value);
    void * Get_F_getItem();

    void Put_F_getItemId(void * In_Value);
    void * Get_F_getItemId();

    void Put_F_getViewTypeCount(void * In_Value);
    void * Get_F_getViewTypeCount();

    void Put_F_getItemViewType(void * In_Value);
    void * Get_F_getItemViewType();

    void Put_F_getView(void * In_Value);
    void * Get_F_getView();

    void Put_F_isEmpty(void * In_Value);
    void * Get_F_isEmpty();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_getCount, put=Put_F_getCount)) void * F_getCount;
    __declspec(property(get=Get_F_getItem, put=Put_F_getItem)) void * F_getItem;
    __declspec(property(get=Get_F_getItemId, put=Put_F_getItemId)) void * F_getItemId;
    __declspec(property(get=Get_F_getViewTypeCount, put=Put_F_getViewTypeCount)) void * F_getViewTypeCount;
    __declspec(property(get=Get_F_getItemViewType, put=Put_F_getItemViewType)) void * F_getItemViewType;
    __declspec(property(get=Get_F_getView, put=Put_F_getView)) void * F_getView;
    __declspec(property(get=Get_F_isEmpty, put=Put_F_isEmpty)) void * F_isEmpty;
#endif

public:
    //--Function Define
    VS_INT32 SRPAPI getCount();
    VS_CHAR * SRPAPI getItem(VS_INT32 position);
    VS_LONG SRPAPI getItemId(VS_INT32 position);
    VS_INT32 SRPAPI getViewTypeCount();
    VS_INT32 SRPAPI getItemViewType(VS_INT32 position);
    VS_OBJPTR SRPAPI getView(VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent);
    VS_BOOL SRPAPI isEmpty();
};

class ClassOfFileDescriptorClass:public ClassOfObjectBaseClass{
public:
    ClassOfFileDescriptorClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfFileDescriptorClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfBitmapClass:public ClassOfObjectBaseClass{
public:
    ClassOfBitmapClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfBitmapClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfBitmapClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfBitmapClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI createBitmap0(VS_OBJPTR source,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_OBJPTR m,VS_BOOL filter);
    VS_BOOL SRPAPI createBitmap1(VS_INT32 width,VS_INT32 height,VS_CHAR * config);
    VS_BOOL SRPAPI createBitmap2(VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 width,VS_INT32 height,VS_CHAR * config);
    VS_BOOL SRPAPI createBitmap3(VS_BINBUFPTR colors,VS_INT32 width,VS_INT32 height,VS_CHAR * config);
    VS_BOOL SRPAPI createScaledBitmap(VS_OBJPTR src,VS_INT32 dstWidth,VS_INT32 dstHeight,VS_BOOL filter);
    void SRPAPI eraseColor(VS_INT32 c);
    VS_INT32 SRPAPI getHeight();
    VS_INT32 SRPAPI getPixel(VS_INT32 x,VS_INT32 y);
    void SRPAPI getPixels(VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height);
    VS_INT32 SRPAPI getWidth();
    void SRPAPI setPixel(VS_INT32 x,VS_INT32 y,VS_INT32 color);
    void SRPAPI setPixels(VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height);
};

class ClassOfDialogClass:public ClassOfObjectBaseClass{
public:
    ClassOfDialogClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfDialogClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfDialogClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfDialogClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI cancel();
    void SRPAPI dismiss();
    void SRPAPI hide();
    VS_BOOL SRPAPI isShowing();
    void SRPAPI show();
};

class ClassOfAlertDialogClass:public ClassOfDialogClass{
public:
    ClassOfAlertDialogClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAlertDialogClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAlertDialogClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAlertDialogClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onClick();
    void Put_E_onClick(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onClick, put=Put_E_onClick)) VSSystemEvent_EventProc E_onClick;
#endif

public:
    //--Function Define
    void SRPAPI setButton(VS_INT32 whichButton,VS_CHAR * text);
    void SRPAPI setCustomTitle(VS_OBJPTR customTitleView);
    void SRPAPI setIcon(VS_INT32 resId);
    void SRPAPI setInverseBackgroundForced(VS_BOOL forceInverseBackground);
    void SRPAPI setMessage(VS_CHAR * message);
    void SRPAPI setTitle(VS_CHAR * message);
    void SRPAPI setView1(VS_OBJPTR view,VS_INT32 viewSpacingLeft,VS_INT32 viewSpacingTop,VS_INT32 viewSpacingRight,VS_INT32 viewSpacingBottom);
    void SRPAPI setView(VS_OBJPTR view);
};

class ClassOfRectFClass:public ClassOfSRPObject{
public:
    ClassOfRectFClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRectFClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRectFClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRectFClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Attribute Get/Put Function Define
    VS_FLOAT Get_left();
    void Put_left(VS_FLOAT In_Value);

    VS_FLOAT Get_top();
    void Put_top(VS_FLOAT In_Value);

    VS_FLOAT Get_right();
    void Put_right(VS_FLOAT In_Value);

    VS_FLOAT Get_bottom();
    void Put_bottom(VS_FLOAT In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--Attribute Property Define
    __declspec(property(get=Get_left, put=Put_left)) VS_FLOAT left;
    __declspec(property(get=Get_top, put=Put_top)) VS_FLOAT top;
    __declspec(property(get=Get_right, put=Put_right)) VS_FLOAT right;
    __declspec(property(get=Get_bottom, put=Put_bottom)) VS_FLOAT bottom;
#endif

};

class ClassOfPathClass:public ClassOfObjectBaseClass{
public:
    ClassOfPathClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfPathClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfPathClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfPathClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI close();
    void SRPAPI cubicTo(VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3);
    VS_BOOL SRPAPI isEmpty();
    void SRPAPI lineTo(VS_FLOAT x,VS_FLOAT y);
    void SRPAPI moveTo(VS_FLOAT x,VS_FLOAT y);
    void SRPAPI quadTo(VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2);
    void SRPAPI rCubicTo(VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3);
    void SRPAPI rLineTo(VS_FLOAT dx,VS_FLOAT dy);
    void SRPAPI rMoveTo(VS_FLOAT dx,VS_FLOAT dy);
    void SRPAPI rQuadTo(VS_FLOAT dx1,VS_FLOAT dy1,VS_FLOAT dx2,VS_FLOAT dy2);
    void SRPAPI reset();
    void SRPAPI rewind();
    void SRPAPI setFillType(VS_CHAR * ft);
    void SRPAPI setLastPoint(VS_FLOAT dx,VS_FLOAT dy);
};

class ClassOfBitmapFactoryClass:public ClassOfObjectBaseClass{
public:
    ClassOfBitmapFactoryClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfBitmapFactoryClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfBitmapFactoryClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfBitmapFactoryClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_OBJPTR SRPAPI decodeResource(VS_INT32 id);
    VS_OBJPTR SRPAPI decodeFile(VS_CHAR * pathName);
    VS_OBJPTR SRPAPI decodeAssetsFile(VS_CHAR * pathName);
    VS_OBJPTR SRPAPI decodeByteArray(VS_BINBUFPTR pathName,VS_INT32 offset,VS_INT32 length);
};

class ClassOfTextViewClass:public ClassOfViewClass{
public:
    ClassOfTextViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfTextViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfTextViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfTextViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_CHAR * SRPAPI getText();
    void SRPAPI setAutoLinkMask(VS_INT32 mask);
    void SRPAPI setCursorVisible(VS_BOOL visible);
    void SRPAPI setEnabled(VS_BOOL enabled);
    void SRPAPI setGravity(VS_INT32 gravity);
    void SRPAPI setHeight(VS_INT32 pixels);
    void SRPAPI setHighlightColor(VS_INT32 color);
    void SRPAPI setHint(VS_CHAR * hint);
    void SRPAPI setHint1(VS_INT32 resid);
    void SRPAPI setHintTextColor(VS_INT32 color);
    void SRPAPI setHorizontallyScrolling(VS_BOOL whether);
    void SRPAPI setImeActionLabel(VS_CHAR * label,VS_INT32 actionId);
    void SRPAPI setImeOptions(VS_INT32 imeOptions);
    void SRPAPI setIncludeFontPadding(VS_BOOL includepad);
    void SRPAPI setInputExtras(VS_INT32 xmlResId);
    void SRPAPI setInputType(VS_INT32 type);
    void SRPAPI setLineSpacing(VS_FLOAT add,VS_FLOAT mult);
    void SRPAPI setLines(VS_INT32 lines);
    void SRPAPI setLinkTextColor(VS_INT32 color);
    void SRPAPI setLinksClickable(VS_BOOL whether);
    void SRPAPI setMarqueeRepeatLimit(VS_INT32 marqueeLimit);
    void SRPAPI setMaxEms(VS_INT32 maxems);
    void SRPAPI setMaxHeight(VS_INT32 maxHeight);
    void SRPAPI setMaxLines(VS_INT32 maxlines);
    void SRPAPI setMaxWidth(VS_INT32 maxpixels);
    void SRPAPI setMinEms(VS_INT32 minems);
    void SRPAPI setMinHeight(VS_INT32 minHeight);
    void SRPAPI setMinLines(VS_INT32 minlines);
    void SRPAPI setMinWidth(VS_INT32 minpixels);
    void SRPAPI setPadding(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI setPaintFlags(VS_INT32 flags);
    void SRPAPI setPrivateImeOptions(VS_CHAR * type);
    void SRPAPI setRawInputType(VS_INT32 type);
    void SRPAPI setSelectAllOnFocus(VS_BOOL selectAllOnFocus);
    void SRPAPI setSelected(VS_BOOL selected);
    void SRPAPI setShadowLayer(VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color);
    void SRPAPI setSingleLine();
    void SRPAPI setSingleLine1(VS_BOOL singleLine);
    void SRPAPI setText(VS_CHAR * Text);
    void SRPAPI setTextColor(VS_INT32 color);
    void SRPAPI setTextKeepState(VS_CHAR * text);
    void SRPAPI setTextScaleX(VS_FLOAT size);
    void SRPAPI setTextSize(VS_FLOAT size);
    void SRPAPI setTextSize1(VS_INT32 unit,VS_FLOAT size);
    void SRPAPI setTypeface(VS_OBJPTR tf);
    void SRPAPI setTypeface1(VS_OBJPTR tf,VS_INT32 style);
    void SRPAPI setWidth(VS_INT32 pixels);
};

class ClassOfDigitalClockClass:public ClassOfTextViewClass{
public:
    ClassOfDigitalClockClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfDigitalClockClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfDigitalClockClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfDigitalClockClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfEditTextClass:public ClassOfTextViewClass{
public:
    ClassOfEditTextClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfEditTextClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfEditTextClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfEditTextClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfAutoCompleteTextViewClass:public ClassOfEditTextClass{
public:
    ClassOfAutoCompleteTextViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAutoCompleteTextViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAutoCompleteTextViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAutoCompleteTextViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setAdapter(VS_OBJPTR adapter);
    void SRPAPI setThreshold(VS_INT32 threshold);
};

class ClassOfOutputStreamClass:public ClassOfObjectBaseClass{
public:
    ClassOfOutputStreamClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfOutputStreamClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfFileOutputStreamClass:public ClassOfOutputStreamClass{
public:
    ClassOfFileOutputStreamClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfFileOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfFileOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfFileOutputStreamClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI init(VS_CHAR * path);
    VS_BOOL SRPAPI init1(VS_CHAR * path,VS_BOOL append);
    void SRPAPI close();
    VS_INT32 SRPAPI write1(VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount);
    void SRPAPI write(VS_INT32 oneByte);
};

class ClassOfMediaPlayerClass:public ClassOfObjectBaseClass{
public:
    ClassOfMediaPlayerClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfMediaPlayerClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfMediaPlayerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfMediaPlayerClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onBufferingUpdate();
    void Put_E_onBufferingUpdate(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onCompletion();
    void Put_E_onCompletion(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onError();
    void Put_E_onError(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onInfo();
    void Put_E_onInfo(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onPrepared();
    void Put_E_onPrepared(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onSeekComplete();
    void Put_E_onSeekComplete(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onVideoSizeChanged();
    void Put_E_onVideoSizeChanged(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onBufferingUpdate, put=Put_E_onBufferingUpdate)) VSSystemEvent_EventProc E_onBufferingUpdate;
    __declspec(property(get=Get_E_onCompletion, put=Put_E_onCompletion)) VSSystemEvent_EventProc E_onCompletion;
    __declspec(property(get=Get_E_onError, put=Put_E_onError)) VSSystemEvent_EventProc E_onError;
    __declspec(property(get=Get_E_onInfo, put=Put_E_onInfo)) VSSystemEvent_EventProc E_onInfo;
    __declspec(property(get=Get_E_onPrepared, put=Put_E_onPrepared)) VSSystemEvent_EventProc E_onPrepared;
    __declspec(property(get=Get_E_onSeekComplete, put=Put_E_onSeekComplete)) VSSystemEvent_EventProc E_onSeekComplete;
    __declspec(property(get=Get_E_onVideoSizeChanged, put=Put_E_onVideoSizeChanged)) VSSystemEvent_EventProc E_onVideoSizeChanged;
#endif

public:
    //--Function Define
    VS_INT32 SRPAPI getCurrentPosition();
    VS_INT32 SRPAPI getDuration();
    VS_INT32 SRPAPI getVideoHeight();
    VS_INT32 SRPAPI getVideoWidth();
    VS_BOOL SRPAPI isLooping();
    VS_BOOL SRPAPI isPlaying();
    void SRPAPI pause();
    void SRPAPI prepare();
    void SRPAPI prepareAsync();
    void SRPAPI release();
    void SRPAPI reset();
    void SRPAPI seekTo(VS_INT32 msec);
    void SRPAPI setDataSource(VS_CHAR * path);
    void SRPAPI setDataSource1(VS_OBJPTR fd);
    void SRPAPI setDataSource2(VS_OBJPTR fd,VS_LONG offset,VS_LONG length);
    void SRPAPI setDisplay(VS_OBJPTR sh);
    void SRPAPI setLooping(VS_BOOL looping);
    void SRPAPI setScreenOnWhilePlaying(VS_BOOL screenOn);
    void SRPAPI setVolume(VS_FLOAT leftVolume,VS_FLOAT rightVolume);
    void SRPAPI start();
    void SRPAPI stop();
};

class ClassOfFileInputStreamClass:public ClassOfInputStreamClass{
public:
    ClassOfFileInputStreamClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfFileInputStreamClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfFileInputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfFileInputStreamClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI init(VS_CHAR * path);
    VS_INT32 SRPAPI available();
    void SRPAPI close();
    VS_INT32 SRPAPI read();
    VS_INT32 SRPAPI read1(VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount);
    void SRPAPI skip(VS_LONG byteCount);
};

class ClassOfImageViewClass:public ClassOfViewClass{
public:
    ClassOfImageViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfImageViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfImageViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfImageViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI clearColorFilter();
    VS_INT32 SRPAPI getBaseline();
    VS_BOOL SRPAPI getBaselineAlignBottom();
    VS_OBJPTR SRPAPI getDrawable();
    VS_OBJPTR SRPAPI getImageMatrix();
    VS_CHAR * SRPAPI getScaleType();
    void SRPAPI invalidateDrawable(VS_OBJPTR dr);
    void SRPAPI setAdjustViewBounds(VS_BOOL adjustViewBounds);
    void SRPAPI setAlpha(VS_INT32 alpha);
    void SRPAPI setImageBitmap(VS_OBJPTR bm);
    void SRPAPI setImageDrawable(VS_OBJPTR drawable);
    void SRPAPI setImageLevel(VS_INT32 level);
    void SRPAPI setImageMatrix(VS_OBJPTR matrix);
    void SRPAPI setImageResource(VS_INT32 resid);
    void SRPAPI setImageState(VS_PARAPKGPTR state,VS_BOOL merge);
    void SRPAPI setImageURI(VS_CHAR * uri);
    void SRPAPI setMaxHeight(VS_INT32 maxHeight);
    void SRPAPI setMaxWidth(VS_INT32 maxWidth);
    void SRPAPI setScaleType(VS_CHAR * scaleType);
    void SRPAPI setSelected(VS_BOOL selected);
};

class ClassOfImageButtonClass:public ClassOfImageViewClass{
public:
    ClassOfImageButtonClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfImageButtonClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfImageButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfImageButtonClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfMotionEventClass:public ClassOfObjectBaseClass{
public:
    ClassOfMotionEventClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfMotionEventClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfMotionEventClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfMotionEventClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_INT32 SRPAPI findPointerIndex(VS_INT32 pointerId);
    VS_INT8 SRPAPI getAction();
    VS_INT32 SRPAPI getDeviceId();
    VS_LONG SRPAPI getDownTime();
    VS_INT32 SRPAPI getEdgeFlags();
    VS_LONG SRPAPI getEventTime();
    VS_LONG SRPAPI getHistoricalEventTime(VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalPressure(VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalPressure1(VS_INT32 pointerIndex,VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalSize(VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalSize1(VS_INT32 pointerIndex,VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalX(VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalX1(VS_INT32 pointerIndex,VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalY(VS_INT32 pos);
    VS_FLOAT SRPAPI getHistoricalY1(VS_INT32 pointerIndex,VS_INT32 pos);
    VS_INT32 SRPAPI getHistorySize();
    VS_INT32 SRPAPI getMetaState();
    VS_INT32 SRPAPI getPointerCount();
    VS_INT32 SRPAPI getPointerId(VS_INT32 pointerIndex);
    VS_FLOAT SRPAPI getPressure();
    VS_FLOAT SRPAPI getPressure1(VS_INT32 pointerIndex);
    VS_FLOAT SRPAPI getRawX();
    VS_FLOAT SRPAPI getRawY();
    VS_FLOAT SRPAPI getSize();
    VS_FLOAT SRPAPI getSize1(VS_INT32 pointerIndex);
    VS_FLOAT SRPAPI getX();
    VS_FLOAT SRPAPI getX1(VS_INT32 pointerIndex);
    VS_FLOAT SRPAPI getXPrecision();
    VS_FLOAT SRPAPI getY();
    VS_FLOAT SRPAPI getY1(VS_INT32 pointerIndex);
    VS_FLOAT SRPAPI getYPrecision();
};

class ClassOfAssetFileDescriptorClass:public ClassOfFileDescriptorClass{
public:
    ClassOfAssetFileDescriptorClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAssetFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAssetFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAssetFileDescriptorClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI close();
    VS_OBJPTR SRPAPI createInputStream();
    VS_OBJPTR SRPAPI createOutputStream();
    VS_INT32 SRPAPI describeContents();
    VS_LONG SRPAPI getDeclaredLength();
    VS_LONG SRPAPI getLength();
    VS_LONG SRPAPI getStartOffset();
};

class ClassOfWebSettingsClass:public ClassOfObjectBaseClass{
public:
    ClassOfWebSettingsClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfWebSettingsClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfWebSettingsClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfWebSettingsClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setJavaScriptEnabled(VS_BOOL flag);
};

class ClassOfBaseAdapterClass:public ClassOfAndroidBaseClass{
public:
    ClassOfBaseAdapterClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfBaseAdapterClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfBaseAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfBaseAdapterClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_onCreateAndroid(void * In_Value);
    void * Get_F_onCreateAndroid();

    void Put_F_getCount(void * In_Value);
    void * Get_F_getCount();

    void Put_F_getItem(void * In_Value);
    void * Get_F_getItem();

    void Put_F_getItemId(void * In_Value);
    void * Get_F_getItemId();

    void Put_F_getViewTypeCount(void * In_Value);
    void * Get_F_getViewTypeCount();

    void Put_F_getItemViewType(void * In_Value);
    void * Get_F_getItemViewType();

    void Put_F_getView(void * In_Value);
    void * Get_F_getView();

    void Put_F_isEmpty(void * In_Value);
    void * Get_F_isEmpty();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_onCreateAndroid, put=Put_F_onCreateAndroid)) void * F_onCreateAndroid;
    __declspec(property(get=Get_F_getCount, put=Put_F_getCount)) void * F_getCount;
    __declspec(property(get=Get_F_getItem, put=Put_F_getItem)) void * F_getItem;
    __declspec(property(get=Get_F_getItemId, put=Put_F_getItemId)) void * F_getItemId;
    __declspec(property(get=Get_F_getViewTypeCount, put=Put_F_getViewTypeCount)) void * F_getViewTypeCount;
    __declspec(property(get=Get_F_getItemViewType, put=Put_F_getItemViewType)) void * F_getItemViewType;
    __declspec(property(get=Get_F_getView, put=Put_F_getView)) void * F_getView;
    __declspec(property(get=Get_F_isEmpty, put=Put_F_isEmpty)) void * F_isEmpty;
#endif

public:
    //--Function Define
    void SRPAPI onCreateAndroid();
    VS_INT32 SRPAPI getCount();
    VS_CHAR * SRPAPI getItem(VS_INT32 position);
    VS_LONG SRPAPI getItemId(VS_INT32 position);
    VS_INT32 SRPAPI getViewTypeCount();
    VS_INT32 SRPAPI getItemViewType(VS_INT32 position);
    VS_OBJPTR SRPAPI getView(VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent);
    VS_BOOL SRPAPI isEmpty();
};

class ClassOfSimpleAdapterClass:public ClassOfBaseAdapterClass{
public:
    ClassOfSimpleAdapterClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfSimpleAdapterClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfSimpleAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfSimpleAdapterClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfStringArrayAdapterClass:public ClassOfBaseAdapterClass{
public:
    ClassOfStringArrayAdapterClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfStringArrayAdapterClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfStringArrayAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfStringArrayAdapterClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_getView(void * In_Value);
    void * Get_F_getView();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_getView, put=Put_F_getView)) void * F_getView;
#endif

public:
    //--Function Define
    void SRPAPI setDropDownViewResource(VS_INT32 resource);
    void SRPAPI remove(VS_CHAR * v);
    void SRPAPI add(VS_CHAR * v);
    VS_OBJPTR SRPAPI getView(VS_INT32 Position,VS_OBJPTR convertView,VS_OBJPTR parent);
};

class ClassOfDrawableClass:public ClassOfObjectBaseClass{
public:
    ClassOfDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setBounds(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
};

class ClassOfDrawableContainerClass:public ClassOfDrawableClass{
public:
    ClassOfDrawableContainerClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfDrawableContainerClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfDrawableContainerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfDrawableContainerClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_INT32 SRPAPI getChangingConfigurations();
    VS_OBJPTR SRPAPI getCurrent();
    VS_INT32 SRPAPI getIntrinsicHeight();
    VS_INT32 SRPAPI getIntrinsicWidth();
    VS_INT32 SRPAPI getMinimumHeight();
    VS_INT32 SRPAPI getMinimumWidth();
    VS_INT32 SRPAPI getOpacity();
    VS_BOOL SRPAPI getPadding(VS_OBJPTR padding);
    void SRPAPI invalidateDrawable(VS_BOOL who);
    VS_BOOL SRPAPI isStateful();
    VS_BOOL SRPAPI selectDrawable(VS_INT32 idx);
    void SRPAPI setAlpha(VS_INT32 alpha);
    void SRPAPI setDither(VS_BOOL dither);
    VS_BOOL SRPAPI setVisible(VS_BOOL visible,VS_BOOL restart);
};

class ClassOfColorDrawableClass:public ClassOfDrawableClass{
public:
    ClassOfColorDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfColorDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfColorDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfColorDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_INT32 SRPAPI getAlpha();
    VS_INT32 SRPAPI getChangingConfigurations();
    VS_INT32 SRPAPI getOpacity();
    void SRPAPI setAlpha(VS_INT32 alpha);
};

class ClassOfBitmapDrawableClass:public ClassOfDrawableClass{
public:
    ClassOfBitmapDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfBitmapDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfBitmapDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfBitmapDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI init(VS_CHAR * filepath);
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_OBJPTR SRPAPI getBitmap();
    VS_INT32 SRPAPI getChangingConfigurations();
    VS_INT32 SRPAPI getGravity();
    VS_INT32 SRPAPI getIntrinsicHeight();
    VS_INT32 SRPAPI getIntrinsicWidth();
    VS_INT32 SRPAPI getOpacity();
    VS_OBJPTR SRPAPI getPaint();
    VS_CHAR * SRPAPI getTileModeX();
    VS_CHAR * SRPAPI getTileModeY();
    void SRPAPI setAlpha(VS_INT32 alpha);
    void SRPAPI setAntiAlias(VS_BOOL aa);
    void SRPAPI setDither(VS_BOOL dither);
    void SRPAPI setFilterBitmap(VS_BOOL filter);
    void SRPAPI setGravity(VS_INT32 gravity);
    void SRPAPI setTargetDensity(VS_INT32 density);
    void SRPAPI setTargetDensity1(VS_OBJPTR canvas);
    void SRPAPI setTileModeX(VS_CHAR * mode);
    void SRPAPI setTileModeXY(VS_CHAR * xmode,VS_CHAR * ymode);
    void SRPAPI setTileModeY(VS_CHAR * mode);
};

class ClassOfShapeDrawableClass:public ClassOfDrawableClass{
public:
    ClassOfShapeDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfShapeDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfShapeDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfShapeDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI init(VS_OBJPTR shape);
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_INT32 SRPAPI getChangingConfigurations();
    VS_INT32 SRPAPI getIntrinsicHeight();
    VS_INT32 SRPAPI getIntrinsicWidth();
    VS_INT32 SRPAPI getOpacity();
    VS_BOOL SRPAPI getPadding(VS_OBJPTR padding);
    VS_OBJPTR SRPAPI getPaint();
    void SRPAPI setAlpha(VS_INT32 alpha);
    void SRPAPI setDither(VS_BOOL dither);
    void SRPAPI setIntrinsicHeight(VS_INT32 height);
    void SRPAPI setIntrinsicWidth(VS_INT32 width);
    void SRPAPI setPadding(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
};

class ClassOfLayerDrawableClass:public ClassOfDrawableClass{
public:
    ClassOfLayerDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfLayerDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfLayerDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfLayerDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI init(VS_PARAPKGPTR layers);
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_OBJPTR SRPAPI findDrawableByLayerId(VS_INT32 id);
    VS_INT32 SRPAPI getChangingConfigurations();
    VS_OBJPTR SRPAPI getDrawable(VS_INT32 index);
    VS_INT32 SRPAPI getId(VS_INT32 index);
    VS_INT32 SRPAPI getIntrinsicHeight();
    VS_INT32 SRPAPI getIntrinsicWidth();
    VS_INT32 SRPAPI getNumberOfLayers();
    VS_INT32 SRPAPI getOpacity();
    VS_BOOL SRPAPI getPadding(VS_OBJPTR padding);
    void SRPAPI invalidateDrawable(VS_OBJPTR who);
    VS_BOOL SRPAPI isStateful();
    void SRPAPI setAlpha(VS_INT32 alpha);
    void SRPAPI setDither(VS_BOOL dither);
    VS_BOOL SRPAPI setDrawableByLayerId(VS_INT32 id,VS_OBJPTR drawable);
    void SRPAPI setId(VS_INT32 index,VS_INT32 id);
    void SRPAPI setLayerInset(VS_INT32 index,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b);
    VS_BOOL SRPAPI setVisible(VS_BOOL visible,VS_BOOL restart);
};

class ClassOfTransitionDrawableClass:public ClassOfLayerDrawableClass{
public:
    ClassOfTransitionDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfTransitionDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfTransitionDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfTransitionDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI init(VS_PARAPKGPTR layers);
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_BOOL SRPAPI isCrossFadeEnabled();
    void SRPAPI resetTransition();
    void SRPAPI reverseTransition(VS_INT32 duration);
    void SRPAPI setCrossFadeEnabled(VS_BOOL enabled);
    void SRPAPI startTransition(VS_INT32 durationMillis);
};

class ClassOfViewGroupClass:public ClassOfViewClass{
public:
    ClassOfViewGroupClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfViewGroupClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfViewGroupClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfViewGroupClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_onDraw(void * In_Value);
    void * Get_F_onDraw();

    void Put_F_onLayout(void * In_Value);
    void * Get_F_onLayout();

    void Put_F_onMeasure(void * In_Value);
    void * Get_F_onMeasure();

    void Put_F_onSizeChanged(void * In_Value);
    void * Get_F_onSizeChanged();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_onDraw, put=Put_F_onDraw)) void * F_onDraw;
    __declspec(property(get=Get_F_onLayout, put=Put_F_onLayout)) void * F_onLayout;
    __declspec(property(get=Get_F_onMeasure, put=Put_F_onMeasure)) void * F_onMeasure;
    __declspec(property(get=Get_F_onSizeChanged, put=Put_F_onSizeChanged)) void * F_onSizeChanged;
#endif

public:
    //--Function Define
    void SRPAPI addView(VS_OBJPTR child);
    VS_OBJPTR SRPAPI getChildAt(VS_INT32 index);
    VS_INT32 SRPAPI getChildCount();
    void SRPAPI recomputeViewAttributes(VS_OBJPTR child);
    void SRPAPI removeView(VS_OBJPTR view);
    void SRPAPI removeAllViews();
    void SRPAPI refreshDrawableState();
    VS_BOOL SRPAPI requestFocus();
    VS_BOOL SRPAPI requestFocus1(VS_INT32 direction);
    VS_BOOL SRPAPI requestFocusFromTouch();
    void SRPAPI requestLayout();
    void SRPAPI onDraw(VS_OBJPTR canvas);
    void SRPAPI onSuperDraw(VS_OBJPTR canvas);
    void SRPAPI onLayout(VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom);
    void SRPAPI onMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
    void SRPAPI onSuperMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec);
    void SRPAPI onSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
    void SRPAPI onSuperSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh);
};

class ClassOfRelativeLayoutClass:public ClassOfViewGroupClass{
public:
    ClassOfRelativeLayoutClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRelativeLayoutClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRelativeLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRelativeLayoutClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI requestLayout();
    void SRPAPI setGravity(VS_INT32 gravity);
    void SRPAPI setHorizontalGravity(VS_INT32 horizontalGravity);
    void SRPAPI setVerticalGravity(VS_INT32 verticalGravity);
};

class ClassOfAbsoluteLayoutClass:public ClassOfViewGroupClass{
public:
    ClassOfAbsoluteLayoutClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAbsoluteLayoutClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAbsoluteLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAbsoluteLayoutClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfLinearLayoutClass:public ClassOfViewGroupClass{
public:
    ClassOfLinearLayoutClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfLinearLayoutClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfLinearLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfLinearLayoutClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setGravity(VS_INT32 gravity);
    void SRPAPI setHorizontalGravity(VS_INT32 horizontalGravity);
    void SRPAPI setOrientation(VS_CHAR * orientation);
    void SRPAPI setVerticalGravity(VS_INT32 verticalGravity);
};

class ClassOfTableRowClass:public ClassOfLinearLayoutClass{
public:
    ClassOfTableRowClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfTableRowClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfTableRowClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfTableRowClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfTableLayoutClass:public ClassOfLinearLayoutClass{
public:
    ClassOfTableLayoutClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfTableLayoutClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfTableLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfTableLayoutClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI isColumnCollapsed(VS_INT32 columnIndex);
    VS_BOOL SRPAPI isColumnShrinkable(VS_INT32 columnIndex);
    VS_BOOL SRPAPI isColumnStretchable(VS_INT32 columnIndex);
    VS_BOOL SRPAPI isShrinkAllColumns();
    VS_BOOL SRPAPI isStretchAllColumns();
    void SRPAPI requestLayout();
    void SRPAPI setColumnShrinkable(VS_INT32 columnIndex,VS_BOOL isShrinkable);
    void SRPAPI setColumnStretchable(VS_INT32 columnIndex,VS_BOOL isStretchable);
    void SRPAPI setShrinkAllColumns(VS_BOOL shrinkAllColumns);
    void SRPAPI setStretchAllColumns(VS_BOOL stretchAllColumns);
};

class ClassOfRadioGroupClass:public ClassOfLinearLayoutClass{
public:
    ClassOfRadioGroupClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRadioGroupClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRadioGroupClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRadioGroupClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onCheckedChanged();
    void Put_E_onCheckedChanged(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onCheckedChanged, put=Put_E_onCheckedChanged)) VSSystemEvent_EventProc E_onCheckedChanged;
#endif

};

class ClassOfFrameLayoutClass:public ClassOfViewGroupClass{
public:
    ClassOfFrameLayoutClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfFrameLayoutClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfFrameLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfFrameLayoutClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfTimePickerClass:public ClassOfFrameLayoutClass{
public:
    ClassOfTimePickerClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfTimePickerClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfTimePickerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfTimePickerClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onTimeChanged();
    void Put_E_onTimeChanged(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onTimeChanged, put=Put_E_onTimeChanged)) VSSystemEvent_EventProc E_onTimeChanged;
#endif

public:
    //--Function Define
    void SRPAPI setCurrentHour(VS_INT32 currentHour);
    void SRPAPI setCurrentMinute(VS_INT32 currentMinute);
    void SRPAPI setIs24HourView(VS_BOOL is24HourView);
    VS_INT32 SRPAPI getCurrentHour();
    VS_INT32 SRPAPI getCurrentMinute();
    VS_BOOL SRPAPI is24HourView();
};

class ClassOfDatePickerClass:public ClassOfFrameLayoutClass{
public:
    ClassOfDatePickerClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfDatePickerClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfDatePickerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfDatePickerClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onDateChanged();
    void Put_E_onDateChanged(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onDateChanged, put=Put_E_onDateChanged)) VSSystemEvent_EventProc E_onDateChanged;
#endif

public:
    //--Function Define
    void SRPAPI updateDate(VS_INT32 year,VS_INT32 monthOfYear,VS_INT32 dayOfMonth);
    VS_INT32 SRPAPI getDayOfMonth();
    VS_INT32 SRPAPI getMonth();
    VS_INT32 SRPAPI getYear();
};

class ClassOfSoundPoolClass:public ClassOfObjectBaseClass{
public:
    ClassOfSoundPoolClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfSoundPoolClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfSoundPoolClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfSoundPoolClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_INT32 SRPAPI load(VS_CHAR * path,VS_INT32 priority);
    VS_INT32 SRPAPI load1(VS_INT32 resId,VS_INT32 priority);
    VS_INT32 SRPAPI load2(VS_OBJPTR fd,VS_LONG offset,VS_LONG length,VS_INT32 priority);
    void SRPAPI pause(VS_INT32 streamID);
    void SRPAPI play(VS_INT32 soundID,VS_FLOAT leftVolume,VS_FLOAT rightVolume,VS_INT32 priority,VS_INT32 loop,VS_FLOAT rate);
    void SRPAPI release();
    void SRPAPI resume(VS_INT32 streamID);
    void SRPAPI setLoop(VS_INT32 streamID,VS_INT32 loop);
    void SRPAPI setPriority(VS_INT32 streamID,VS_INT32 priority);
    void SRPAPI setRate(VS_INT32 streamID,VS_FLOAT rate);
    void SRPAPI setVolume(VS_INT32 streamID,VS_FLOAT leftVolume,VS_FLOAT rightVolume);
    void SRPAPI stop(VS_INT32 streamID);
    VS_BOOL SRPAPI unload(VS_INT32 soundID);
};

class ClassOfAnimationDrawableClass:public ClassOfDrawableContainerClass{
public:
    ClassOfAnimationDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAnimationDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAnimationDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAnimationDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI addFrame(VS_OBJPTR frame,VS_INT32 duration);
    VS_INT32 SRPAPI getDuration(VS_INT32 i);
    VS_INT32 SRPAPI getNumberOfFrames();
    VS_BOOL SRPAPI isOneShot();
    VS_BOOL SRPAPI isRunning();
    void SRPAPI run();
    void SRPAPI setOneShot(VS_BOOL oneShot);
    VS_BOOL SRPAPI setVisible(VS_BOOL visible,VS_BOOL restart);
    void SRPAPI start();
    void SRPAPI stop();
};

class ClassOfButtonClass:public ClassOfTextViewClass{
public:
    ClassOfButtonClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfButtonClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfButtonClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfCompoundButtonClass:public ClassOfButtonClass{
public:
    ClassOfCompoundButtonClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfCompoundButtonClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfCompoundButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfCompoundButtonClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI isChecked();
};

class ClassOfRadioButtonClass:public ClassOfCompoundButtonClass{
public:
    ClassOfRadioButtonClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRadioButtonClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRadioButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRadioButtonClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfCheckBoxClass:public ClassOfCompoundButtonClass{
public:
    ClassOfCheckBoxClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfCheckBoxClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfCheckBoxClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfCheckBoxClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfGradientDrawableClass:public ClassOfDrawableClass{
public:
    ClassOfGradientDrawableClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfGradientDrawableClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfGradientDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfGradientDrawableClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas);
    VS_INT32 SRPAPI getChangingConfigurations();
    VS_INT32 SRPAPI getIntrinsicHeight();
    VS_INT32 SRPAPI getIntrinsicWidth();
    VS_INT32 SRPAPI getOpacity();
    VS_BOOL SRPAPI getPadding(VS_OBJPTR padding);
    void SRPAPI setAlpha(VS_INT32 alpha);
    void SRPAPI setColor(VS_INT32 argb);
    void SRPAPI setCornerRadii(VS_PARAPKGPTR radii);
    void SRPAPI setCornerRadius(VS_FLOAT radius);
    void SRPAPI setDither(VS_BOOL dither);
    void SRPAPI setGradientCenter(VS_FLOAT x,VS_FLOAT y);
    void SRPAPI setGradientRadius(VS_FLOAT gradientRadius);
    void SRPAPI setGradientType(VS_INT32 gradient);
    void SRPAPI setShape(VS_INT32 shape);
    void SRPAPI setSize(VS_INT32 width,VS_INT32 height);
    void SRPAPI setStroke(VS_INT32 width,VS_INT32 color);
    void SRPAPI setStroke1(VS_INT32 width,VS_INT32 color,VS_FLOAT dashWidth,VS_FLOAT dashGap);
    void SRPAPI setUseLevel(VS_BOOL useLevel);
};

class ClassOfAdapterViewClass:public ClassOfViewGroupClass{
public:
    ClassOfAdapterViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAdapterViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAdapterViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAdapterViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onItemClick();
    void Put_E_onItemClick(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onItemSelected();
    void Put_E_onItemSelected(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onNothingSelected();
    void Put_E_onNothingSelected(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onItemClick, put=Put_E_onItemClick)) VSSystemEvent_EventProc E_onItemClick;
    __declspec(property(get=Get_E_onItemSelected, put=Put_E_onItemSelected)) VSSystemEvent_EventProc E_onItemSelected;
    __declspec(property(get=Get_E_onNothingSelected, put=Put_E_onNothingSelected)) VSSystemEvent_EventProc E_onNothingSelected;
#endif

public:
    //--Function Define
    void SRPAPI setAdapter(VS_OBJPTR adapter);
};

class ClassOfAbsSpinnerClass:public ClassOfAdapterViewClass{
public:
    ClassOfAbsSpinnerClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAbsSpinnerClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAbsSpinnerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAbsSpinnerClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfSpinnerClass:public ClassOfAbsSpinnerClass{
public:
    ClassOfSpinnerClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfSpinnerClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfSpinnerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfSpinnerClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfGalleryClass:public ClassOfAbsSpinnerClass{
public:
    ClassOfGalleryClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfGalleryClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfGalleryClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfGalleryClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--PubFunction Get/Put Function Define
    void Put_F_onDown(void * In_Value);
    void * Get_F_onDown();

    void Put_F_onFling(void * In_Value);
    void * Get_F_onFling();

    void Put_F_onLongPress(void * In_Value);
    void * Get_F_onLongPress();

    void Put_F_onScroll(void * In_Value);
    void * Get_F_onScroll();

    void Put_F_onShowPress(void * In_Value);
    void * Get_F_onShowPress();

    void Put_F_onSingleTapUp(void * In_Value);
    void * Get_F_onSingleTapUp();

    void Put_F_onTouchEvent(void * In_Value);
    void * Get_F_onTouchEvent();


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--PubFunction Property Define
    __declspec(property(get=Get_F_onDown, put=Put_F_onDown)) void * F_onDown;
    __declspec(property(get=Get_F_onFling, put=Put_F_onFling)) void * F_onFling;
    __declspec(property(get=Get_F_onLongPress, put=Put_F_onLongPress)) void * F_onLongPress;
    __declspec(property(get=Get_F_onScroll, put=Put_F_onScroll)) void * F_onScroll;
    __declspec(property(get=Get_F_onShowPress, put=Put_F_onShowPress)) void * F_onShowPress;
    __declspec(property(get=Get_F_onSingleTapUp, put=Put_F_onSingleTapUp)) void * F_onSingleTapUp;
    __declspec(property(get=Get_F_onTouchEvent, put=Put_F_onTouchEvent)) void * F_onTouchEvent;
#endif

public:
    //--Function Define
    VS_BOOL SRPAPI onDown(VS_OBJPTR e);
    VS_BOOL SRPAPI onSuperDown(VS_OBJPTR e);
    VS_BOOL SRPAPI onFling(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY);
    VS_BOOL SRPAPI onSuperFling(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY);
    VS_BOOL SRPAPI onLongPress(VS_OBJPTR e);
    VS_BOOL SRPAPI onSuperLongPress(VS_OBJPTR e);
    VS_BOOL SRPAPI onScroll(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY);
    VS_BOOL SRPAPI onSuperScroll(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY);
    void SRPAPI onShowPress(VS_OBJPTR e);
    void SRPAPI onSuperShowPress(VS_OBJPTR e);
    VS_BOOL SRPAPI onSingleTapUp(VS_OBJPTR e);
    VS_BOOL SRPAPI onSuperSingleTapUp(VS_OBJPTR e);
    VS_BOOL SRPAPI onTouchEvent(VS_OBJPTR event);
    VS_BOOL SRPAPI onSuperTouchEvent(VS_OBJPTR event);
    void SRPAPI setAnimationDuration(VS_INT32 animationDurationMillis);
    void SRPAPI setCallbackDuringFling(VS_BOOL shouldCallback);
    void SRPAPI setGravity(VS_INT32 gravity);
    void SRPAPI setSpacing(VS_INT32 spacing);
    void SRPAPI setUnselectedAlpha(VS_BOOL unselectedAlpha);
    VS_BOOL SRPAPI showContextMenu();
};

class ClassOfAbsListViewClass:public ClassOfAdapterViewClass{
public:
    ClassOfAbsListViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfAbsListViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfAbsListViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfAbsListViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfListViewClass:public ClassOfAbsListViewClass{
public:
    ClassOfListViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfListViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfListViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfListViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
};

class ClassOfGridViewClass:public ClassOfAbsListViewClass{
public:
    ClassOfGridViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfGridViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfGridViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfGridViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI setNumColumns(VS_INT32 numColumns);
    void SRPAPI setSelection(VS_INT32 position);
    void SRPAPI setStretchMode(VS_CHAR * stretchMode);
    void SRPAPI setVerticalSpacing(VS_INT32 verticalSpacing);
    void SRPAPI setHorizontalSpacing(VS_INT32 horizontalSpacing);
};

class ClassOfDialogInterfaceClass:public ClassOfObjectBaseClass{
public:
    ClassOfDialogInterfaceClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfDialogInterfaceClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfDialogInterfaceClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfDialogInterfaceClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onMultiChoiceClick();
    void Put_E_onMultiChoiceClick(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onClick();
    void Put_E_onClick(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onCancel();
    void Put_E_onCancel(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onItemSelected();
    void Put_E_onItemSelected(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onKey();
    void Put_E_onKey(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onMultiChoiceClick, put=Put_E_onMultiChoiceClick)) VSSystemEvent_EventProc E_onMultiChoiceClick;
    __declspec(property(get=Get_E_onClick, put=Put_E_onClick)) VSSystemEvent_EventProc E_onClick;
    __declspec(property(get=Get_E_onCancel, put=Put_E_onCancel)) VSSystemEvent_EventProc E_onCancel;
    __declspec(property(get=Get_E_onItemSelected, put=Put_E_onItemSelected)) VSSystemEvent_EventProc E_onItemSelected;
    __declspec(property(get=Get_E_onKey, put=Put_E_onKey)) VSSystemEvent_EventProc E_onKey;
#endif

};

class ClassOfRectShapeClass:public ClassOfShapeClass{
public:
    ClassOfRectShapeClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRectShapeClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRectShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRectShapeClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas,VS_OBJPTR paint);
};

class ClassOfOvalShapeClass:public ClassOfRectShapeClass{
public:
    ClassOfOvalShapeClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfOvalShapeClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfOvalShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfOvalShapeClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas,VS_OBJPTR paint);
};

class ClassOfRoundRectShapeClass:public ClassOfRectShapeClass{
public:
    ClassOfRoundRectShapeClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfRoundRectShapeClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfRoundRectShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfRoundRectShapeClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI draw(VS_OBJPTR canvas,VS_OBJPTR paint);
};

class ClassOfArcShapeClass:public ClassOfRectShapeClass{
public:
    ClassOfArcShapeClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfArcShapeClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfArcShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfArcShapeClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI init(VS_FLOAT startAngle,VS_FLOAT sweepAngle);
    void SRPAPI draw(VS_OBJPTR canvas,VS_OBJPTR paint);
};

class ClassOfBundleClass:public ClassOfObjectBaseClass{
public:
    ClassOfBundleClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfBundleClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfBundleClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfBundleClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    void SRPAPI clear();
    VS_BOOL SRPAPI containsKey(VS_CHAR * key);
    VS_BOOL SRPAPI getBoolean(VS_CHAR * key);
    VS_BOOL SRPAPI getBoolean1(VS_CHAR * key,VS_BOOL defaultValue);
    VS_CHAR * SRPAPI getCharSequence(VS_CHAR * key);
    VS_FLOAT SRPAPI getFloat(VS_CHAR * key);
    VS_FLOAT SRPAPI getFloat1(VS_CHAR * key,VS_FLOAT defaultValue);
    VS_INT32 SRPAPI getInt(VS_CHAR * key);
    VS_INT32 SRPAPI getInt1(VS_CHAR * key,VS_UINT32 defaultValue);
    void SRPAPI putBoolean(VS_CHAR * key,VS_BOOL value);
    void SRPAPI putCharSequence(VS_CHAR * key,VS_CHAR * value);
    void SRPAPI putFloat(VS_CHAR * key,VS_FLOAT value);
    void SRPAPI putInt(VS_CHAR * key,VS_INT32 value);
};

class ClassOfWebViewClass:public ClassOfAbsoluteLayoutClass{
public:
    ClassOfWebViewClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfWebViewClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfWebViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfWebViewClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--OutEvent Get/Put Function Define
    VSSystemEvent_EventProc Get_E_onProgressChanged();
    void Put_E_onProgressChanged(VSSystemEvent_EventProc In_Value);

    VSSystemEvent_EventProc Get_E_onReceivedError();
    void Put_E_onReceivedError(VSSystemEvent_EventProc In_Value);


#if( VS_OS_TYPE == VS_OS_WINDOW )
public:
    //--OutEvent Property Define
    __declspec(property(get=Get_E_onProgressChanged, put=Put_E_onProgressChanged)) VSSystemEvent_EventProc E_onProgressChanged;
    __declspec(property(get=Get_E_onReceivedError, put=Put_E_onReceivedError)) VSSystemEvent_EventProc E_onReceivedError;
#endif

public:
    //--Function Define
    VS_INT32 SRPAPI getProgress();
    VS_FLOAT SRPAPI getScale();
    VS_OBJPTR SRPAPI getSettings();
    VS_CHAR * SRPAPI getTitle();
    VS_CHAR * SRPAPI getUrl();
    void SRPAPI goBack();
    void SRPAPI goBackOrForward(VS_INT32 steps);
    void SRPAPI goForward();
    void SRPAPI loadData(VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding);
    void SRPAPI loadDataWithBaseURL(VS_CHAR * baseUrl,VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding,VS_CHAR * historyUrl);
    void SRPAPI loadUrl(VS_CHAR * url);
    void SRPAPI setBackgroundColor(VS_INT32 color);
    void SRPAPI setInitialScale(VS_INT32 scaleInPercent);
    void SRPAPI setScrollBarStyle(VS_INT32 style);
    void SRPAPI stopLoading();
    VS_BOOL SRPAPI zoomIn();
    VS_BOOL SRPAPI zoomOut();
};

class ClassOfCanvasClass:public ClassOfObjectBaseClass{
public:
    ClassOfCanvasClass();  //--Not Create a Class Object, Use WrapObject() to attach 
    ClassOfCanvasClass(class ClassOfSRPInterface *In_SRPInterface);  //--Create a Class Object
    ClassOfCanvasClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject);  //--Create a Class Object and wrap SRPObject
    virtual VS_CHAR *SRPAPI GetSelfName();
    static class ClassOfCanvasClass *SRPAPI GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer = 0xFFFFFFFF);
public:
    //--Function Define
    VS_BOOL SRPAPI init(VS_OBJPTR bitmap);
    void SRPAPI drawARGB(VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b);
    void SRPAPI drawArc(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT startAngle,VS_FLOAT sweepAngle,VS_BOOL useCenter,VS_OBJPTR paint);
    void SRPAPI drawBitmap(VS_OBJPTR bitmap,VS_FLOAT left,VS_FLOAT top,VS_OBJPTR paint);
    void SRPAPI drawBitmap1(VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_BOOL hasAlpha,VS_OBJPTR paint);
    void SRPAPI drawCircle(VS_FLOAT cx,VS_FLOAT cy,VS_FLOAT radius,VS_OBJPTR paint);
    void SRPAPI drawColor(VS_INT32 color);
    void SRPAPI drawLine(VS_FLOAT startX,VS_FLOAT startY,VS_FLOAT stopX,VS_FLOAT stopY,VS_OBJPTR paint);
    void SRPAPI drawOval(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint);
    void SRPAPI drawPaint(VS_OBJPTR paint);
    void SRPAPI drawPath(VS_OBJPTR path,VS_OBJPTR paint);
    void SRPAPI drawPoint(VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint);
    void SRPAPI drawRGB(VS_INT32 r,VS_INT32 g,VS_INT32 b);
    void SRPAPI drawRect(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint);
    void SRPAPI drawRoundRect(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT rx,VS_FLOAT ry,VS_OBJPTR paint);
    void SRPAPI drawText(VS_CHAR * text,VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint);
    void SRPAPI drawTextOnPath(VS_CHAR * text,VS_OBJPTR path,VS_FLOAT hOffset,VS_FLOAT vOffset,VS_OBJPTR paint);
    VS_INT32 SRPAPI getHeight();
    VS_INT32 SRPAPI getWidth();
    void SRPAPI restore();
    void SRPAPI rotate(VS_FLOAT degrees);
    VS_INT32 SRPAPI save();
    void SRPAPI scale(VS_FLOAT sx,VS_FLOAT sy);
    void SRPAPI setBitmap(VS_OBJPTR bitmap);
    void SRPAPI skew(VS_FLOAT sx,VS_FLOAT sy);
    void SRPAPI translate(VS_FLOAT dx,VS_FLOAT dy);
};

/*--------------------------------------------------*/

#pragma pack()

#endif
