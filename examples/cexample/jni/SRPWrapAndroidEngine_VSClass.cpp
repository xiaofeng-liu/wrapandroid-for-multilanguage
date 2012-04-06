/*--------------------------------------------------*/
/*VirtualSociety System ServiceModuleTemplate Class Body File*/
/*CreateBy SRPLab                */
/*CreateDate: 2012-4-6  */
/*--------------------------------------------------*/
#include "SRPWrapAndroidEngine_VSClass.h"
ClassOfRectClass::ClassOfRectClass()
{
}

ClassOfRectClass::ClassOfRectClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RectClass,0,NULL));
}

ClassOfRectClass::ClassOfRectClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRectClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RectClass" );
    return Buf;
}

class ClassOfRectClass *ClassOfRectClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRectClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRectClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RectClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRectClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_INT32 ClassOfRectClass::Get_left()
{
    return ((struct StructOfRectClass *)ThisSRPObject) -> left;
}
void ClassOfRectClass::Put_left(VS_INT32 In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTCLASS_LEFT,(VS_INT8 *)&In_Value);
}

VS_INT32 ClassOfRectClass::Get_top()
{
    return ((struct StructOfRectClass *)ThisSRPObject) -> top;
}
void ClassOfRectClass::Put_top(VS_INT32 In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTCLASS_TOP,(VS_INT8 *)&In_Value);
}

VS_INT32 ClassOfRectClass::Get_right()
{
    return ((struct StructOfRectClass *)ThisSRPObject) -> right;
}
void ClassOfRectClass::Put_right(VS_INT32 In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTCLASS_RIGHT,(VS_INT8 *)&In_Value);
}

VS_INT32 ClassOfRectClass::Get_bottom()
{
    return ((struct StructOfRectClass *)ThisSRPObject) -> bottom;
}
void ClassOfRectClass::Put_bottom(VS_INT32 In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTCLASS_BOTTOM,(VS_INT8 *)&In_Value);
}



ClassOfAndroidBaseClass::ClassOfAndroidBaseClass()
{
}

ClassOfAndroidBaseClass::ClassOfAndroidBaseClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AndroidBaseClass,0,NULL));
}

ClassOfAndroidBaseClass::ClassOfAndroidBaseClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAndroidBaseClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AndroidBaseClass" );
    return Buf;
}

class ClassOfAndroidBaseClass *ClassOfAndroidBaseClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAndroidBaseClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAndroidBaseClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AndroidBaseClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAndroidBaseClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_INT32 ClassOfAndroidBaseClass::Get_AndroidRefCount()
{
    return ((struct StructOfAndroidBaseClass *)ThisSRPObject) -> AndroidRefCount;
}
void ClassOfAndroidBaseClass::Put_AndroidRefCount(VS_INT32 In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_ANDROIDBASECLASS_ANDROIDREFCOUNT,(VS_INT8 *)&In_Value);
}


void SRPAPI ClassOfAndroidBaseClass::incAndroidRef()
{
    ThisSRPInterface -> Call(ThisSRPObject,"incAndroidRef");
}
void SRPAPI ClassOfAndroidBaseClass::decAndroidRef()
{
    ThisSRPInterface -> Call(ThisSRPObject,"decAndroidRef");
}
VS_OBJPTR SRPAPI ClassOfAndroidBaseClass::getActivity()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getActivity");
}

ClassOfViewClass::ClassOfViewClass()
{
}

ClassOfViewClass::ClassOfViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ViewClass,0,NULL));
}

ClassOfViewClass::ClassOfViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ViewClass" );
    return Buf;
}

class ClassOfViewClass *ClassOfViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfViewClass::Get_E_onClick()
{
    return NULL;
}
void ClassOfViewClass::Put_E_onClick(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_ViewClass_onClick,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

void ClassOfViewClass::Put_F_onCreateAndroid(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewClass_onCreateAndroid,In_Value,NULL);
}
void * ClassOfViewClass::Get_F_onCreateAndroid()
{
    return NULL;
}

void ClassOfViewClass::Put_F_onDraw(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewClass_onDraw,In_Value,NULL);
}
void * ClassOfViewClass::Get_F_onDraw()
{
    return NULL;
}

void ClassOfViewClass::Put_F_onTouchEvent(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewClass_onTouchEvent,In_Value,NULL);
}
void * ClassOfViewClass::Get_F_onTouchEvent()
{
    return NULL;
}

void ClassOfViewClass::Put_F_onLayout(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewClass_onLayout,In_Value,NULL);
}
void * ClassOfViewClass::Get_F_onLayout()
{
    return NULL;
}

void ClassOfViewClass::Put_F_onMeasure(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewClass_onMeasure,In_Value,NULL);
}
void * ClassOfViewClass::Get_F_onMeasure()
{
    return NULL;
}

void ClassOfViewClass::Put_F_onSizeChanged(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewClass_onSizeChanged,In_Value,NULL);
}
void * ClassOfViewClass::Get_F_onSizeChanged()
{
    return NULL;
}


void SRPAPI ClassOfViewClass::onCreateAndroid()
{
    ThisSRPInterface -> Call(ThisSRPObject,"onCreateAndroid");
}
void SRPAPI ClassOfViewClass::setAbsoluteLayoutParams(VS_INT32 width,VS_INT32 height,VS_INT32 x,VS_INT32 y)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAbsoluteLayoutParams",width,height,x,y);
}
void SRPAPI ClassOfViewClass::setLinearLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLinearLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setLinearWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLinearWeightLayoutParams",width,height,weight);
}
void SRPAPI ClassOfViewClass::setRaidoGroupLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRaidoGroupLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setRaidoGroupWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRaidoGroupWeightLayoutParams",width,height,weight);
}
void SRPAPI ClassOfViewClass::setTableLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTableLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setTableWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTableWeightLayoutParams",width,height,weight);
}
void SRPAPI ClassOfViewClass::setTableRowLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTableRowLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setTableRowWeightLayoutParams(VS_INT32 width,VS_INT32 height,VS_FLOAT weight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTableRowWeightLayoutParams",width,height,weight);
}
void SRPAPI ClassOfViewClass::setAbsListViewLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAbsListViewLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setGalleryLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGalleryLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setGridViewLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGridViewLayoutParams",width,height);
}
void SRPAPI ClassOfViewClass::setRelativeLayoutParams(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRelativeLayoutParams",width,height);
}
VS_INT32 SRPAPI ClassOfViewClass::sp2px(VS_FLOAT v)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"sp2px",v);
}
VS_INT32 SRPAPI ClassOfViewClass::dp2px(VS_FLOAT v)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"dp2px",v);
}
VS_INT32 SRPAPI ClassOfViewClass::pt2pxX(VS_FLOAT v)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"pt2pxX",v);
}
VS_INT32 SRPAPI ClassOfViewClass::pt2pxY(VS_FLOAT v)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"pt2pxY",v);
}
void SRPAPI ClassOfViewClass::onDraw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onDraw",canvas);
}
void SRPAPI ClassOfViewClass::onSuperDraw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperDraw",canvas);
}
void SRPAPI ClassOfViewClass::bringToFront()
{
    ThisSRPInterface -> Call(ThisSRPObject,"bringToFront");
}
void SRPAPI ClassOfViewClass::clearFocus()
{
    ThisSRPInterface -> Call(ThisSRPObject,"clearFocus");
}
void SRPAPI ClassOfViewClass::draw(VS_OBJPTR draw)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",draw);
}
VS_INT32 SRPAPI ClassOfViewClass::getBottom()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getBottom");
}
VS_CHAR * SRPAPI ClassOfViewClass::getContentDescription()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getContentDescription");
}
VS_INT32 SRPAPI ClassOfViewClass::getHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getHeight");
}
VS_INT32 SRPAPI ClassOfViewClass::getId()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getId");
}
VS_INT32 SRPAPI ClassOfViewClass::getLeft()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getLeft");
}
VS_INT32 SRPAPI ClassOfViewClass::getPaddingBottom()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPaddingBottom");
}
VS_INT32 SRPAPI ClassOfViewClass::getPaddingLeft()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPaddingLeft");
}
VS_INT32 SRPAPI ClassOfViewClass::getPaddingRight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPaddingRight");
}
VS_INT32 SRPAPI ClassOfViewClass::getPaddingTop()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPaddingTop");
}
VS_INT32 SRPAPI ClassOfViewClass::getRight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getRight");
}
VS_INT32 SRPAPI ClassOfViewClass::getTop()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getTop");
}
VS_INT32 SRPAPI ClassOfViewClass::getVisibility()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getVisibility");
}
VS_INT32 SRPAPI ClassOfViewClass::getWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getWidth");
}
VS_BOOL SRPAPI ClassOfViewClass::hasFocus()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"hasFocus");
}
void SRPAPI ClassOfViewClass::invalidate()
{
    ThisSRPInterface -> Call(ThisSRPObject,"invalidate");
}
void SRPAPI ClassOfViewClass::invalidate1(VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b)
{
    ThisSRPInterface -> Call(ThisSRPObject,"invalidate1",l,t,r,b);
}
VS_BOOL SRPAPI ClassOfViewClass::isClickable()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isClickable");
}
VS_BOOL SRPAPI ClassOfViewClass::isEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isFocusable()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isFocusable");
}
VS_BOOL SRPAPI ClassOfViewClass::isFocusableInTouchMode()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isFocusableInTouchMode");
}
VS_BOOL SRPAPI ClassOfViewClass::isFocused()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isFocused");
}
VS_BOOL SRPAPI ClassOfViewClass::isHapticFeedbackEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isHapticFeedbackEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isHorizontalFadingEdgeEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isHorizontalFadingEdgeEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isHorizontalScrollBarEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isHorizontalScrollBarEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isInEditMode()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isInEditMode");
}
VS_BOOL SRPAPI ClassOfViewClass::isInTouchMode()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isInTouchMode");
}
VS_BOOL SRPAPI ClassOfViewClass::isLayoutRequested()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isLayoutRequested");
}
VS_BOOL SRPAPI ClassOfViewClass::isLongClickable()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isLongClickable");
}
VS_BOOL SRPAPI ClassOfViewClass::isOpaque()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isOpaque");
}
VS_BOOL SRPAPI ClassOfViewClass::isPressed()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isPressed");
}
VS_BOOL SRPAPI ClassOfViewClass::isSaveEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isSaveEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isScrollbarFadingEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isScrollbarFadingEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isSelected()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isSelected");
}
VS_BOOL SRPAPI ClassOfViewClass::isShown()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isShown");
}
VS_BOOL SRPAPI ClassOfViewClass::isSoundEffectsEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isSoundEffectsEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isVerticalFadingEdgeEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isVerticalFadingEdgeEnabled");
}
VS_BOOL SRPAPI ClassOfViewClass::isVerticalScrollBarEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isVerticalScrollBarEnabled");
}
void SRPAPI ClassOfViewClass::layout(VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b)
{
    ThisSRPInterface -> Call(ThisSRPObject,"layout",l,t,r,b);
}
void SRPAPI ClassOfViewClass::measure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec)
{
    ThisSRPInterface -> Call(ThisSRPObject,"measure",widthMeasureSpec,heightMeasureSpec);
}
void SRPAPI ClassOfViewClass::postInvalidate()
{
    ThisSRPInterface -> Call(ThisSRPObject,"postInvalidate");
}
void SRPAPI ClassOfViewClass::postInvalidate1(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"postInvalidate1",left,top,right,bottom);
}
void SRPAPI ClassOfViewClass::postInvalidateDelayed(VS_LONG delayMilliseconds)
{
    ThisSRPInterface -> Call(ThisSRPObject,"postInvalidateDelayed",delayMilliseconds);
}
void SRPAPI ClassOfViewClass::postInvalidateDelayed1()
{
    ThisSRPInterface -> Call(ThisSRPObject,"postInvalidateDelayed1");
}
VS_BOOL SRPAPI ClassOfViewClass::requestFocus(VS_LONG delayMilliseconds,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"requestFocus",delayMilliseconds,left,top,right,bottom);
}
void SRPAPI ClassOfViewClass::scrollBy(VS_INT32 x,VS_INT32 y)
{
    ThisSRPInterface -> Call(ThisSRPObject,"scrollBy",x,y);
}
void SRPAPI ClassOfViewClass::scrollTo(VS_INT32 x,VS_INT32 y)
{
    ThisSRPInterface -> Call(ThisSRPObject,"scrollTo",x,y);
}
void SRPAPI ClassOfViewClass::setBackgroundColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setBackgroundColor",color);
}
void SRPAPI ClassOfViewClass::setBackgroundResource(VS_INT32 resid)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setBackgroundResource",resid);
}
void SRPAPI ClassOfViewClass::setFocusable(VS_BOOL focusable)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setFocusable",focusable);
}
void SRPAPI ClassOfViewClass::setId(VS_INT32 id)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setId",id);
}
void SRPAPI ClassOfViewClass::setPadding(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPadding",left,top,right,bottom);
}
void SRPAPI ClassOfViewClass::setPressed(VS_BOOL pressed)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPressed",pressed);
}
void SRPAPI ClassOfViewClass::setScrollBarStyle(VS_INT32 style)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScrollBarStyle",style);
}
void SRPAPI ClassOfViewClass::setScrollbarFadingEnabled(VS_BOOL fadeScrollbars)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScrollbarFadingEnabled",fadeScrollbars);
}
void SRPAPI ClassOfViewClass::setSelected(VS_BOOL selected)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSelected",selected);
}
void SRPAPI ClassOfViewClass::setVerticalFadingEdgeEnabled(VS_BOOL verticalFadingEdgeEnabled)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVerticalFadingEdgeEnabled",verticalFadingEdgeEnabled);
}
void SRPAPI ClassOfViewClass::setVerticalScrollBarEnabled(VS_BOOL verticalScrollBarEnabled)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVerticalScrollBarEnabled",verticalScrollBarEnabled);
}
void SRPAPI ClassOfViewClass::setVisibility(VS_INT32 visibility)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVisibility",visibility);
}
VS_BOOL SRPAPI ClassOfViewClass::onTouchEvent(VS_OBJPTR event)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onTouchEvent",event);
}
void SRPAPI ClassOfViewClass::onLayout(VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onLayout",changed,left,top,right,bottom);
}
void SRPAPI ClassOfViewClass::onSuperLayout(VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperLayout",changed,left,top,right,bottom);
}
void SRPAPI ClassOfViewClass::onMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onMeasure",widthMeasureSpec,heightMeasureSpec);
}
void SRPAPI ClassOfViewClass::onSuperMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperMeasure",widthMeasureSpec,heightMeasureSpec);
}
void SRPAPI ClassOfViewClass::onSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSizeChanged",w,h,oldw,oldh);
}
void SRPAPI ClassOfViewClass::onSuperSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperSizeChanged",w,h,oldw,oldh);
}
void SRPAPI ClassOfViewClass::setMeasuredDimension(VS_INT32 measuredWidth,VS_INT32 measuredHeight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMeasuredDimension",measuredWidth,measuredHeight);
}

ClassOfProgressBarClass::ClassOfProgressBarClass()
{
}

ClassOfProgressBarClass::ClassOfProgressBarClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ProgressBarClass,0,NULL));
}

ClassOfProgressBarClass::ClassOfProgressBarClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfProgressBarClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ProgressBarClass" );
    return Buf;
}

class ClassOfProgressBarClass *ClassOfProgressBarClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfProgressBarClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfProgressBarClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ProgressBarClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfProgressBarClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfProgressBarClass::setMax(VS_INT32 max)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMax",max);
}
void SRPAPI ClassOfProgressBarClass::setProgress(VS_INT32 progress)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setProgress",progress);
}
void SRPAPI ClassOfProgressBarClass::setVisibility(VS_INT32 v)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVisibility",v);
}
void SRPAPI ClassOfProgressBarClass::setIndeterminate(VS_BOOL indeterminate)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIndeterminate",indeterminate);
}
void SRPAPI ClassOfProgressBarClass::setIndeterminateDrawable(VS_INT32 resid)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIndeterminateDrawable",resid);
}
void SRPAPI ClassOfProgressBarClass::setProgressDrawable(VS_INT32 resid)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setProgressDrawable",resid);
}
void SRPAPI ClassOfProgressBarClass::incrementProgressBy(VS_INT32 diff)
{
    ThisSRPInterface -> Call(ThisSRPObject,"incrementProgressBy",diff);
}
void SRPAPI ClassOfProgressBarClass::incrementSecondaryProgressBy(VS_INT32 diff)
{
    ThisSRPInterface -> Call(ThisSRPObject,"incrementSecondaryProgressBy",diff);
}
VS_INT32 SRPAPI ClassOfProgressBarClass::getProgress()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getProgress");
}
VS_INT32 SRPAPI ClassOfProgressBarClass::getSecondaryProgress()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getSecondaryProgress");
}
VS_INT32 SRPAPI ClassOfProgressBarClass::getMax()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getMax");
}

ClassOfSurfaceViewClass::ClassOfSurfaceViewClass()
{
}

ClassOfSurfaceViewClass::ClassOfSurfaceViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_SurfaceViewClass,0,NULL));
}

ClassOfSurfaceViewClass::ClassOfSurfaceViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfSurfaceViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "SurfaceViewClass" );
    return Buf;
}

class ClassOfSurfaceViewClass *ClassOfSurfaceViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfSurfaceViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfSurfaceViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "SurfaceViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfSurfaceViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfSurfaceViewClass::Put_F_surfaceChanged(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_SurfaceViewClass_surfaceChanged,In_Value,NULL);
}
void * ClassOfSurfaceViewClass::Get_F_surfaceChanged()
{
    return NULL;
}

void ClassOfSurfaceViewClass::Put_F_surfaceCreated(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_SurfaceViewClass_surfaceCreated,In_Value,NULL);
}
void * ClassOfSurfaceViewClass::Get_F_surfaceCreated()
{
    return NULL;
}

void ClassOfSurfaceViewClass::Put_F_surfaceDestroyed(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_SurfaceViewClass_surfaceDestroyed,In_Value,NULL);
}
void * ClassOfSurfaceViewClass::Get_F_surfaceDestroyed()
{
    return NULL;
}


void SRPAPI ClassOfSurfaceViewClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
void SRPAPI ClassOfSurfaceViewClass::setVisibility(VS_INT32 visibility)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVisibility",visibility);
}
void SRPAPI ClassOfSurfaceViewClass::setZOrderMediaOverlay(VS_BOOL isMediaOverlay)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setZOrderMediaOverlay",isMediaOverlay);
}
void SRPAPI ClassOfSurfaceViewClass::setZOrderOnTop(VS_BOOL onTop)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setZOrderOnTop",onTop);
}
VS_BOOL SRPAPI ClassOfSurfaceViewClass::isCreating()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isCreating");
}
VS_OBJPTR SRPAPI ClassOfSurfaceViewClass::lockCanvas()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"lockCanvas");
}
VS_OBJPTR SRPAPI ClassOfSurfaceViewClass::lockCanvas1(VS_OBJPTR dirty)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"lockCanvas1",dirty);
}
void SRPAPI ClassOfSurfaceViewClass::unlockCanvasAndPost(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"unlockCanvasAndPost",canvas);
}
void SRPAPI ClassOfSurfaceViewClass::surfaceChanged(VS_INT32 format,VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"surfaceChanged",format,width,height);
}
void SRPAPI ClassOfSurfaceViewClass::surfaceCreated()
{
    ThisSRPInterface -> Call(ThisSRPObject,"surfaceCreated");
}
void SRPAPI ClassOfSurfaceViewClass::surfaceDestroyed()
{
    ThisSRPInterface -> Call(ThisSRPObject,"surfaceDestroyed");
}

ClassOfAnalogClockClass::ClassOfAnalogClockClass()
{
}

ClassOfAnalogClockClass::ClassOfAnalogClockClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AnalogClockClass,0,NULL));
}

ClassOfAnalogClockClass::ClassOfAnalogClockClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAnalogClockClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AnalogClockClass" );
    return Buf;
}

class ClassOfAnalogClockClass *ClassOfAnalogClockClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAnalogClockClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAnalogClockClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AnalogClockClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAnalogClockClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfObjectBaseClass::ClassOfObjectBaseClass()
{
}

ClassOfObjectBaseClass::ClassOfObjectBaseClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ObjectBaseClass,0,NULL));
}

ClassOfObjectBaseClass::ClassOfObjectBaseClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfObjectBaseClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ObjectBaseClass" );
    return Buf;
}

class ClassOfObjectBaseClass *ClassOfObjectBaseClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfObjectBaseClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfObjectBaseClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ObjectBaseClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfObjectBaseClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfPaintClass::ClassOfPaintClass()
{
}

ClassOfPaintClass::ClassOfPaintClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_PaintClass,0,NULL));
}

ClassOfPaintClass::ClassOfPaintClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfPaintClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "PaintClass" );
    return Buf;
}

class ClassOfPaintClass *ClassOfPaintClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfPaintClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfPaintClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "PaintClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfPaintClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_INT32 SRPAPI ClassOfPaintClass::getAlpha()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getAlpha");
}
VS_INT32 SRPAPI ClassOfPaintClass::getColor()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getColor");
}
VS_FLOAT SRPAPI ClassOfPaintClass::measureText(VS_CHAR * text)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"measureText",text);
}
void SRPAPI ClassOfPaintClass::reset()
{
    ThisSRPInterface -> Call(ThisSRPObject,"reset");
}
void SRPAPI ClassOfPaintClass::set(VS_OBJPTR src)
{
    ThisSRPInterface -> Call(ThisSRPObject,"set",src);
}
void SRPAPI ClassOfPaintClass::setARGB(VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setARGB",a,r,g,b);
}
void SRPAPI ClassOfPaintClass::setAlpha(VS_INT32 a)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",a);
}
void SRPAPI ClassOfPaintClass::setAntiAlias(VS_BOOL aa)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAntiAlias",aa);
}
void SRPAPI ClassOfPaintClass::setColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setColor",color);
}
void SRPAPI ClassOfPaintClass::setDither(VS_BOOL dither)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDither",dither);
}
void SRPAPI ClassOfPaintClass::setFakeBoldText(VS_BOOL fakeBoldText)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setFakeBoldText",fakeBoldText);
}
void SRPAPI ClassOfPaintClass::setFilterBitmap(VS_BOOL filter)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setFilterBitmap",filter);
}
void SRPAPI ClassOfPaintClass::setFlags(VS_INT32 flags)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setFlags",flags);
}
void SRPAPI ClassOfPaintClass::setLinearText(VS_BOOL linearText)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLinearText",linearText);
}
void SRPAPI ClassOfPaintClass::setShadowLayer(VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setShadowLayer",radius,dx,dy,color);
}
void SRPAPI ClassOfPaintClass::setStrikeThruText(VS_BOOL strikeThruText)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStrikeThruText",strikeThruText);
}
void SRPAPI ClassOfPaintClass::setStrokeCap(VS_CHAR * cap)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStrokeCap",cap);
}
void SRPAPI ClassOfPaintClass::setStrokeJoin(VS_CHAR * join)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStrokeJoin",join);
}
void SRPAPI ClassOfPaintClass::setStrokeMiter(VS_FLOAT miter)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStrokeMiter",miter);
}
void SRPAPI ClassOfPaintClass::setStrokeWidth(VS_FLOAT width)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStrokeWidth",width);
}
void SRPAPI ClassOfPaintClass::setStyle(VS_CHAR * style)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStyle",style);
}
void SRPAPI ClassOfPaintClass::setSubpixelText(VS_BOOL subpixelText)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSubpixelText",subpixelText);
}
void SRPAPI ClassOfPaintClass::setTextAlign(VS_CHAR * align)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextAlign",align);
}
void SRPAPI ClassOfPaintClass::setTextScaleX(VS_FLOAT scaleX)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextScaleX",scaleX);
}
void SRPAPI ClassOfPaintClass::setTextSize(VS_FLOAT textSize)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextSize",textSize);
}
void SRPAPI ClassOfPaintClass::setTextSkewX(VS_FLOAT skewX)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextSkewX",skewX);
}
void SRPAPI ClassOfPaintClass::setTypeface(VS_OBJPTR typeface)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTypeface",typeface);
}
void SRPAPI ClassOfPaintClass::setUnderlineText(VS_BOOL underlineText)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setUnderlineText",underlineText);
}

ClassOfToastClass::ClassOfToastClass()
{
}

ClassOfToastClass::ClassOfToastClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ToastClass,0,NULL));
}

ClassOfToastClass::ClassOfToastClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfToastClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ToastClass" );
    return Buf;
}

class ClassOfToastClass *ClassOfToastClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfToastClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfToastClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ToastClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfToastClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfToastClass::cancel()
{
    ThisSRPInterface -> Call(ThisSRPObject,"cancel");
}
VS_INT32 SRPAPI ClassOfToastClass::getDuration()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getDuration");
}
VS_INT32 SRPAPI ClassOfToastClass::getGravity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getGravity");
}
VS_FLOAT SRPAPI ClassOfToastClass::getHorizontalMargin()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHorizontalMargin");
}
VS_FLOAT SRPAPI ClassOfToastClass::getVerticalMargin()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getVerticalMargin");
}
VS_INT32 SRPAPI ClassOfToastClass::getXOffset()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getXOffset");
}
VS_INT32 SRPAPI ClassOfToastClass::getYOffset()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getYOffset");
}
VS_OBJPTR SRPAPI ClassOfToastClass::makeText(VS_CHAR * text,VS_INT32 duration)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"makeText",text,duration);
}
void SRPAPI ClassOfToastClass::setDuration(VS_INT32 duration)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDuration",duration);
}
void SRPAPI ClassOfToastClass::setGravity(VS_INT32 gravity,VS_INT32 xOffset,VS_INT32 yOffset)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGravity",gravity,xOffset,yOffset);
}
void SRPAPI ClassOfToastClass::setMargin(VS_FLOAT horizontalMargin,VS_FLOAT verticalMargin)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMargin",horizontalMargin,verticalMargin);
}
void SRPAPI ClassOfToastClass::setText(VS_CHAR * s)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setText",s);
}
void SRPAPI ClassOfToastClass::setView(VS_OBJPTR view)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setView",view);
}
void SRPAPI ClassOfToastClass::show()
{
    ThisSRPInterface -> Call(ThisSRPObject,"show");
}

ClassOfMatrixClass::ClassOfMatrixClass()
{
}

ClassOfMatrixClass::ClassOfMatrixClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_MatrixClass,0,NULL));
}

ClassOfMatrixClass::ClassOfMatrixClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfMatrixClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "MatrixClass" );
    return Buf;
}

class ClassOfMatrixClass *ClassOfMatrixClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfMatrixClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfMatrixClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "MatrixClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfMatrixClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfMatrixClass::invert(VS_OBJPTR inverse)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"invert",inverse);
}
VS_BOOL SRPAPI ClassOfMatrixClass::isIdentity()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isIdentity");
}
VS_BOOL SRPAPI ClassOfMatrixClass::postConcat(VS_OBJPTR other)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postConcat",other);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postRotate(VS_FLOAT degrees)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postRotate",degrees);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postRotate1(VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postRotate1",degrees,px,py);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postScale(VS_FLOAT sx,VS_FLOAT sy)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postScale",sx,sy);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postScale1(VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postScale1",sx,sy,px,py);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postSkew(VS_FLOAT kx,VS_FLOAT ky)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postSkew",kx,ky);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postSkew1(VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postSkew1",kx,ky,px,py);
}
VS_BOOL SRPAPI ClassOfMatrixClass::postTranslate(VS_FLOAT dx,VS_FLOAT dy)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"postTranslate",dx,dy);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preConcat(VS_OBJPTR other)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preConcat",other);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preRotate(VS_FLOAT degrees)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preRotate",degrees);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preRotate1(VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preRotate1",degrees,px,py);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preScale(VS_FLOAT sx,VS_FLOAT sy)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preScale",sx,sy);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preScale1(VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preScale1",sx,sy,px,py);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preSkew(VS_FLOAT kx,VS_FLOAT ky)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preSkew",kx,ky);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preSkew1(VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preSkew1",kx,ky,px,py);
}
VS_BOOL SRPAPI ClassOfMatrixClass::preTranslate(VS_FLOAT dx,VS_FLOAT dy)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"preTranslate",dx,dy);
}
void SRPAPI ClassOfMatrixClass::reset()
{
    ThisSRPInterface -> Call(ThisSRPObject,"reset");
}
void SRPAPI ClassOfMatrixClass::set(VS_OBJPTR src)
{
    ThisSRPInterface -> Call(ThisSRPObject,"set",src);
}
void SRPAPI ClassOfMatrixClass::setRotate(VS_FLOAT degrees)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRotate",degrees);
}
void SRPAPI ClassOfMatrixClass::setRotate1(VS_FLOAT degrees,VS_FLOAT px,VS_FLOAT py)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRotate1",degrees,px,py);
}
void SRPAPI ClassOfMatrixClass::setScale(VS_FLOAT sx,VS_FLOAT sy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScale",sx,sy);
}
void SRPAPI ClassOfMatrixClass::setScale1(VS_FLOAT sx,VS_FLOAT sy,VS_FLOAT px,VS_FLOAT py)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScale1",sx,sy,px,py);
}
void SRPAPI ClassOfMatrixClass::setSinCos(VS_FLOAT sinValue,VS_FLOAT cosValue)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSinCos",sinValue,cosValue);
}
void SRPAPI ClassOfMatrixClass::setSinCos1(VS_FLOAT sinValue,VS_FLOAT cosValue,VS_FLOAT px,VS_FLOAT py)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSinCos1",sinValue,cosValue,px,py);
}
void SRPAPI ClassOfMatrixClass::setSkew(VS_FLOAT kx,VS_FLOAT ky)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSkew",kx,ky);
}
void SRPAPI ClassOfMatrixClass::setSkew1(VS_FLOAT kx,VS_FLOAT ky,VS_FLOAT px,VS_FLOAT py)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSkew1",kx,ky,px,py);
}
void SRPAPI ClassOfMatrixClass::setTranslate(VS_FLOAT dx,VS_FLOAT dy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTranslate",dx,dy);
}

ClassOfShapeClass::ClassOfShapeClass()
{
}

ClassOfShapeClass::ClassOfShapeClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ShapeClass,0,NULL));
}

ClassOfShapeClass::ClassOfShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfShapeClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ShapeClass" );
    return Buf;
}

class ClassOfShapeClass *ClassOfShapeClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfShapeClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfShapeClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ShapeClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfShapeClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_FLOAT SRPAPI ClassOfShapeClass::getHeight()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHeight");
}
VS_FLOAT SRPAPI ClassOfShapeClass::getWidth()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getWidth");
}
VS_BOOL SRPAPI ClassOfShapeClass::hasAlpha()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"hasAlpha");
}
void SRPAPI ClassOfShapeClass::resize(VS_FLOAT width,VS_FLOAT height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"resize",width,height);
}

ClassOfInputStreamClass::ClassOfInputStreamClass()
{
}

ClassOfInputStreamClass::ClassOfInputStreamClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_InputStreamClass,0,NULL));
}

ClassOfInputStreamClass::ClassOfInputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfInputStreamClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "InputStreamClass" );
    return Buf;
}

class ClassOfInputStreamClass *ClassOfInputStreamClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfInputStreamClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfInputStreamClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "InputStreamClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfInputStreamClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfTypefaceClass::ClassOfTypefaceClass()
{
}

ClassOfTypefaceClass::ClassOfTypefaceClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_TypefaceClass,0,NULL));
}

ClassOfTypefaceClass::ClassOfTypefaceClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfTypefaceClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "TypefaceClass" );
    return Buf;
}

class ClassOfTypefaceClass *ClassOfTypefaceClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfTypefaceClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfTypefaceClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "TypefaceClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfTypefaceClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfTypefaceClass::create(VS_CHAR * familyName,VS_INT32 style)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"create",familyName,style);
}
VS_BOOL SRPAPI ClassOfTypefaceClass::createFromFile(VS_CHAR * path)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createFromFile",path);
}
VS_BOOL SRPAPI ClassOfTypefaceClass::createFromAsset(VS_CHAR * path)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createFromAsset",path);
}
void SRPAPI ClassOfTypefaceClass::defaultFromStyle(VS_INT32 style)
{
    ThisSRPInterface -> Call(ThisSRPObject,"defaultFromStyle",style);
}
VS_INT32 SRPAPI ClassOfTypefaceClass::getStyle()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getStyle");
}
VS_BOOL SRPAPI ClassOfTypefaceClass::isBold()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isBold");
}
VS_BOOL SRPAPI ClassOfTypefaceClass::isItalic()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isItalic");
}

ClassOfActivityClass::ClassOfActivityClass()
{
}

ClassOfActivityClass::ClassOfActivityClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ActivityClass,0,NULL));
}

ClassOfActivityClass::ClassOfActivityClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfActivityClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ActivityClass" );
    return Buf;
}

class ClassOfActivityClass *ClassOfActivityClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfActivityClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfActivityClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ActivityClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfActivityClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfActivityClass::Put_F_onStart(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onStart,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onStart()
{
    return NULL;
}

void ClassOfActivityClass::Put_F_onSaveInstanceState(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onSaveInstanceState,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onSaveInstanceState()
{
    return NULL;
}

void ClassOfActivityClass::Put_F_onRestoreInstanceState(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onRestoreInstanceState,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onRestoreInstanceState()
{
    return NULL;
}

void ClassOfActivityClass::Put_F_onPause(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onPause,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onPause()
{
    return NULL;
}

void ClassOfActivityClass::Put_F_onResume(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onResume,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onResume()
{
    return NULL;
}

void ClassOfActivityClass::Put_F_onDestroy(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onDestroy,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onDestroy()
{
    return NULL;
}

void ClassOfActivityClass::Put_F_onTouchEvent(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ActivityClass_onTouchEvent,In_Value,NULL);
}
void * ClassOfActivityClass::Get_F_onTouchEvent()
{
    return NULL;
}


void SRPAPI ClassOfActivityClass::onStart()
{
    ThisSRPInterface -> Call(ThisSRPObject,"onStart");
}
VS_OBJPTR SRPAPI ClassOfActivityClass::getSaveInstanceState()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getSaveInstanceState");
}
void SRPAPI ClassOfActivityClass::onSaveInstanceState(VS_OBJPTR savedInstanceState)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSaveInstanceState",savedInstanceState);
}
void SRPAPI ClassOfActivityClass::onRestoreInstanceState(VS_OBJPTR savedInstanceState)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onRestoreInstanceState",savedInstanceState);
}
void SRPAPI ClassOfActivityClass::onPause()
{
    ThisSRPInterface -> Call(ThisSRPObject,"onPause");
}
void SRPAPI ClassOfActivityClass::onResume()
{
    ThisSRPInterface -> Call(ThisSRPObject,"onResume");
}
void SRPAPI ClassOfActivityClass::onDestroy()
{
    ThisSRPInterface -> Call(ThisSRPObject,"onDestroy");
}
void SRPAPI ClassOfActivityClass::exit(VS_INT32 code)
{
    ThisSRPInterface -> Call(ThisSRPObject,"exit",code);
}
VS_BOOL SRPAPI ClassOfActivityClass::onTouchEvent(VS_OBJPTR event)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onTouchEvent",event);
}
void SRPAPI ClassOfActivityClass::setTitle(VS_CHAR * title)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTitle",title);
}
void SRPAPI ClassOfActivityClass::setTitleColor(VS_INT32 textColor)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTitleColor",textColor);
}
VS_BOOL SRPAPI ClassOfActivityClass::runScript(VS_CHAR * scriptInterface,VS_CHAR * script)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"runScript",scriptInterface,script);
}
VS_BOOL SRPAPI ClassOfActivityClass::DoFile(VS_CHAR * scriptInterface,VS_CHAR * path)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"DoFile",scriptInterface,path);
}
VS_BOOL SRPAPI ClassOfActivityClass::DoAssetsFile(VS_CHAR * scriptInterface,VS_CHAR * path)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"DoAssetsFile",scriptInterface,path);
}
void SRPAPI ClassOfActivityClass::pushActivity(VS_OBJPTR activity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"pushActivity",activity);
}
VS_OBJPTR SRPAPI ClassOfActivityClass::popActivity()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"popActivity");
}
VS_OBJPTR SRPAPI ClassOfActivityClass::getCurrent()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getCurrent");
}
void SRPAPI ClassOfActivityClass::setResource(VS_CHAR * ResourceName,VS_INT32 ResourceID)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setResource",ResourceName,ResourceID);
}
VS_INT32 SRPAPI ClassOfActivityClass::getResource(VS_CHAR * ResourceName)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getResource",ResourceName);
}
VS_OBJPTR SRPAPI ClassOfActivityClass::getAssetFileDescriptor(VS_CHAR * path)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getAssetFileDescriptor",path);
}
VS_CHAR * SRPAPI ClassOfActivityClass::getWifiMacAddress()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getWifiMacAddress");
}
VS_CHAR * SRPAPI ClassOfActivityClass::getLocalIpAddress()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getLocalIpAddress");
}
VS_BOOL SRPAPI ClassOfActivityClass::openWifi()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"openWifi");
}
void SRPAPI ClassOfActivityClass::closeWifi()
{
    ThisSRPInterface -> Call(ThisSRPObject,"closeWifi");
}
void SRPAPI ClassOfActivityClass::keepScreenOn(VS_BOOL flag)
{
    ThisSRPInterface -> Call(ThisSRPObject,"keepScreenOn",flag);
}
void SRPAPI ClassOfActivityClass::startActivity(VS_OBJPTR intent)
{
    ThisSRPInterface -> Call(ThisSRPObject,"startActivity",intent);
}
VS_BOOL SRPAPI ClassOfActivityClass::requestWindowFeature(VS_INT32 featureId)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"requestWindowFeature",featureId);
}
void SRPAPI ClassOfActivityClass::setDefaultKeyMode(VS_INT32 mode)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDefaultKeyMode",mode);
}
VS_INT32 SRPAPI ClassOfActivityClass::getHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getHeight");
}
VS_INT32 SRPAPI ClassOfActivityClass::getWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getWidth");
}
VS_OBJPTR SRPAPI ClassOfActivityClass::getTransitionDrawable(VS_INT32 resid)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getTransitionDrawable",resid);
}
VS_OBJPTR SRPAPI ClassOfActivityClass::getBitmapDrawable(VS_INT32 resid)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getBitmapDrawable",resid);
}

ClassOfIntentClass::ClassOfIntentClass()
{
}

ClassOfIntentClass::ClassOfIntentClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_IntentClass,0,NULL));
}

ClassOfIntentClass::ClassOfIntentClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfIntentClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "IntentClass" );
    return Buf;
}

class ClassOfIntentClass *ClassOfIntentClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfIntentClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfIntentClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "IntentClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfIntentClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfIntentClass::setAction(VS_CHAR * action)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAction",action);
}
void SRPAPI ClassOfIntentClass::setData(VS_CHAR * data)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setData",data);
}
void SRPAPI ClassOfIntentClass::setType(VS_CHAR * type)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setType",type);
}
void SRPAPI ClassOfIntentClass::putExtra(VS_CHAR * value)
{
    ThisSRPInterface -> Call(ThisSRPObject,"putExtra",value);
}
void SRPAPI ClassOfIntentClass::putExtraEx(VS_CHAR * paraPkg)
{
    ThisSRPInterface -> Call(ThisSRPObject,"putExtraEx",paraPkg);
}

ClassOfAdapterClass::ClassOfAdapterClass()
{
}

ClassOfAdapterClass::ClassOfAdapterClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AdapterClass,0,NULL));
}

ClassOfAdapterClass::ClassOfAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAdapterClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AdapterClass" );
    return Buf;
}

class ClassOfAdapterClass *ClassOfAdapterClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAdapterClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAdapterClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AdapterClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAdapterClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfAdapterClass::Put_F_getCount(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_getCount,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_getCount()
{
    return NULL;
}

void ClassOfAdapterClass::Put_F_getItem(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_getItem,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_getItem()
{
    return NULL;
}

void ClassOfAdapterClass::Put_F_getItemId(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_getItemId,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_getItemId()
{
    return NULL;
}

void ClassOfAdapterClass::Put_F_getViewTypeCount(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_getViewTypeCount,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_getViewTypeCount()
{
    return NULL;
}

void ClassOfAdapterClass::Put_F_getItemViewType(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_getItemViewType,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_getItemViewType()
{
    return NULL;
}

void ClassOfAdapterClass::Put_F_getView(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_getView,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_getView()
{
    return NULL;
}

void ClassOfAdapterClass::Put_F_isEmpty(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_AdapterClass_isEmpty,In_Value,NULL);
}
void * ClassOfAdapterClass::Get_F_isEmpty()
{
    return NULL;
}


VS_INT32 SRPAPI ClassOfAdapterClass::getCount()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getCount");
}
VS_CHAR * SRPAPI ClassOfAdapterClass::getItem(VS_INT32 position)
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getItem",position);
}
VS_LONG SRPAPI ClassOfAdapterClass::getItemId(VS_INT32 position)
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getItemId",position);
}
VS_INT32 SRPAPI ClassOfAdapterClass::getViewTypeCount()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getViewTypeCount");
}
VS_INT32 SRPAPI ClassOfAdapterClass::getItemViewType(VS_INT32 position)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getItemViewType",position);
}
VS_OBJPTR SRPAPI ClassOfAdapterClass::getView(VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getView",position,convertView,parent);
}
VS_BOOL SRPAPI ClassOfAdapterClass::isEmpty()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isEmpty");
}

ClassOfFileDescriptorClass::ClassOfFileDescriptorClass()
{
}

ClassOfFileDescriptorClass::ClassOfFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_FileDescriptorClass,0,NULL));
}

ClassOfFileDescriptorClass::ClassOfFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfFileDescriptorClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "FileDescriptorClass" );
    return Buf;
}

class ClassOfFileDescriptorClass *ClassOfFileDescriptorClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfFileDescriptorClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfFileDescriptorClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "FileDescriptorClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfFileDescriptorClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfBitmapClass::ClassOfBitmapClass()
{
}

ClassOfBitmapClass::ClassOfBitmapClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_BitmapClass,0,NULL));
}

ClassOfBitmapClass::ClassOfBitmapClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfBitmapClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "BitmapClass" );
    return Buf;
}

class ClassOfBitmapClass *ClassOfBitmapClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfBitmapClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfBitmapClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "BitmapClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfBitmapClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfBitmapClass::createBitmap0(VS_OBJPTR source,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_OBJPTR m,VS_BOOL filter)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createBitmap0",source,x,y,width,height,m,filter);
}
VS_BOOL SRPAPI ClassOfBitmapClass::createBitmap1(VS_INT32 width,VS_INT32 height,VS_CHAR * config)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createBitmap1",width,height,config);
}
VS_BOOL SRPAPI ClassOfBitmapClass::createBitmap2(VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 width,VS_INT32 height,VS_CHAR * config)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createBitmap2",colors,offset,stride,width,height,config);
}
VS_BOOL SRPAPI ClassOfBitmapClass::createBitmap3(VS_BINBUFPTR colors,VS_INT32 width,VS_INT32 height,VS_CHAR * config)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createBitmap3",colors,width,height,config);
}
VS_BOOL SRPAPI ClassOfBitmapClass::createScaledBitmap(VS_OBJPTR src,VS_INT32 dstWidth,VS_INT32 dstHeight,VS_BOOL filter)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"createScaledBitmap",src,dstWidth,dstHeight,filter);
}
void SRPAPI ClassOfBitmapClass::eraseColor(VS_INT32 c)
{
    ThisSRPInterface -> Call(ThisSRPObject,"eraseColor",c);
}
VS_INT32 SRPAPI ClassOfBitmapClass::getHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getHeight");
}
VS_INT32 SRPAPI ClassOfBitmapClass::getPixel(VS_INT32 x,VS_INT32 y)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPixel",x,y);
}
void SRPAPI ClassOfBitmapClass::getPixels(VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"getPixels",pixels,offset,stride,x,y,width,height);
}
VS_INT32 SRPAPI ClassOfBitmapClass::getWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getWidth");
}
void SRPAPI ClassOfBitmapClass::setPixel(VS_INT32 x,VS_INT32 y,VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPixel",x,y,color);
}
void SRPAPI ClassOfBitmapClass::setPixels(VS_BINBUFPTR pixels,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPixels",pixels,offset,stride,x,y,width,height);
}

ClassOfDialogClass::ClassOfDialogClass()
{
}

ClassOfDialogClass::ClassOfDialogClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_DialogClass,0,NULL));
}

ClassOfDialogClass::ClassOfDialogClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfDialogClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "DialogClass" );
    return Buf;
}

class ClassOfDialogClass *ClassOfDialogClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfDialogClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfDialogClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "DialogClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfDialogClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfDialogClass::cancel()
{
    ThisSRPInterface -> Call(ThisSRPObject,"cancel");
}
void SRPAPI ClassOfDialogClass::dismiss()
{
    ThisSRPInterface -> Call(ThisSRPObject,"dismiss");
}
void SRPAPI ClassOfDialogClass::hide()
{
    ThisSRPInterface -> Call(ThisSRPObject,"hide");
}
VS_BOOL SRPAPI ClassOfDialogClass::isShowing()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isShowing");
}
void SRPAPI ClassOfDialogClass::show()
{
    ThisSRPInterface -> Call(ThisSRPObject,"show");
}

ClassOfAlertDialogClass::ClassOfAlertDialogClass()
{
}

ClassOfAlertDialogClass::ClassOfAlertDialogClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AlertDialogClass,0,NULL));
}

ClassOfAlertDialogClass::ClassOfAlertDialogClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAlertDialogClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AlertDialogClass" );
    return Buf;
}

class ClassOfAlertDialogClass *ClassOfAlertDialogClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAlertDialogClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAlertDialogClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AlertDialogClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAlertDialogClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfAlertDialogClass::Get_E_onClick()
{
    return NULL;
}
void ClassOfAlertDialogClass::Put_E_onClick(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_AlertDialogClass_onClick,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}


void SRPAPI ClassOfAlertDialogClass::setButton(VS_INT32 whichButton,VS_CHAR * text)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setButton",whichButton,text);
}
void SRPAPI ClassOfAlertDialogClass::setCustomTitle(VS_OBJPTR customTitleView)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCustomTitle",customTitleView);
}
void SRPAPI ClassOfAlertDialogClass::setIcon(VS_INT32 resId)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIcon",resId);
}
void SRPAPI ClassOfAlertDialogClass::setInverseBackgroundForced(VS_BOOL forceInverseBackground)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setInverseBackgroundForced",forceInverseBackground);
}
void SRPAPI ClassOfAlertDialogClass::setMessage(VS_CHAR * message)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMessage",message);
}
void SRPAPI ClassOfAlertDialogClass::setTitle(VS_CHAR * message)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTitle",message);
}
void SRPAPI ClassOfAlertDialogClass::setView1(VS_OBJPTR view,VS_INT32 viewSpacingLeft,VS_INT32 viewSpacingTop,VS_INT32 viewSpacingRight,VS_INT32 viewSpacingBottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setView1",view,viewSpacingLeft,viewSpacingTop,viewSpacingRight,viewSpacingBottom);
}
void SRPAPI ClassOfAlertDialogClass::setView(VS_OBJPTR view)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setView",view);
}

ClassOfRectFClass::ClassOfRectFClass()
{
}

ClassOfRectFClass::ClassOfRectFClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RectFClass,0,NULL));
}

ClassOfRectFClass::ClassOfRectFClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRectFClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RectFClass" );
    return Buf;
}

class ClassOfRectFClass *ClassOfRectFClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRectFClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRectFClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RectFClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRectFClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_FLOAT ClassOfRectFClass::Get_left()
{
    return ((struct StructOfRectFClass *)ThisSRPObject) -> left;
}
void ClassOfRectFClass::Put_left(VS_FLOAT In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTFCLASS_LEFT,(VS_INT8 *)&In_Value);
}

VS_FLOAT ClassOfRectFClass::Get_top()
{
    return ((struct StructOfRectFClass *)ThisSRPObject) -> top;
}
void ClassOfRectFClass::Put_top(VS_FLOAT In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTFCLASS_TOP,(VS_INT8 *)&In_Value);
}

VS_FLOAT ClassOfRectFClass::Get_right()
{
    return ((struct StructOfRectFClass *)ThisSRPObject) -> right;
}
void ClassOfRectFClass::Put_right(VS_FLOAT In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTFCLASS_RIGHT,(VS_INT8 *)&In_Value);
}

VS_FLOAT ClassOfRectFClass::Get_bottom()
{
    return ((struct StructOfRectFClass *)ThisSRPObject) -> bottom;
}
void ClassOfRectFClass::Put_bottom(VS_FLOAT In_Value)
{
    ThisSRPInterface -> ChangeObject(ThisSRPObject,VSATTRINDEX_RECTFCLASS_BOTTOM,(VS_INT8 *)&In_Value);
}



ClassOfPathClass::ClassOfPathClass()
{
}

ClassOfPathClass::ClassOfPathClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_PathClass,0,NULL));
}

ClassOfPathClass::ClassOfPathClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfPathClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "PathClass" );
    return Buf;
}

class ClassOfPathClass *ClassOfPathClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfPathClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfPathClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "PathClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfPathClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfPathClass::close()
{
    ThisSRPInterface -> Call(ThisSRPObject,"close");
}
void SRPAPI ClassOfPathClass::cubicTo(VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3)
{
    ThisSRPInterface -> Call(ThisSRPObject,"cubicTo",x1,y1,x2,y2,x3,y3);
}
VS_BOOL SRPAPI ClassOfPathClass::isEmpty()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isEmpty");
}
void SRPAPI ClassOfPathClass::lineTo(VS_FLOAT x,VS_FLOAT y)
{
    ThisSRPInterface -> Call(ThisSRPObject,"lineTo",x,y);
}
void SRPAPI ClassOfPathClass::moveTo(VS_FLOAT x,VS_FLOAT y)
{
    ThisSRPInterface -> Call(ThisSRPObject,"moveTo",x,y);
}
void SRPAPI ClassOfPathClass::quadTo(VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2)
{
    ThisSRPInterface -> Call(ThisSRPObject,"quadTo",x1,y1,x2,y2);
}
void SRPAPI ClassOfPathClass::rCubicTo(VS_FLOAT x1,VS_FLOAT y1,VS_FLOAT x2,VS_FLOAT y2,VS_FLOAT x3,VS_FLOAT y3)
{
    ThisSRPInterface -> Call(ThisSRPObject,"rCubicTo",x1,y1,x2,y2,x3,y3);
}
void SRPAPI ClassOfPathClass::rLineTo(VS_FLOAT dx,VS_FLOAT dy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"rLineTo",dx,dy);
}
void SRPAPI ClassOfPathClass::rMoveTo(VS_FLOAT dx,VS_FLOAT dy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"rMoveTo",dx,dy);
}
void SRPAPI ClassOfPathClass::rQuadTo(VS_FLOAT dx1,VS_FLOAT dy1,VS_FLOAT dx2,VS_FLOAT dy2)
{
    ThisSRPInterface -> Call(ThisSRPObject,"rQuadTo",dx1,dy1,dx2,dy2);
}
void SRPAPI ClassOfPathClass::reset()
{
    ThisSRPInterface -> Call(ThisSRPObject,"reset");
}
void SRPAPI ClassOfPathClass::rewind()
{
    ThisSRPInterface -> Call(ThisSRPObject,"rewind");
}
void SRPAPI ClassOfPathClass::setFillType(VS_CHAR * ft)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setFillType",ft);
}
void SRPAPI ClassOfPathClass::setLastPoint(VS_FLOAT dx,VS_FLOAT dy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLastPoint",dx,dy);
}

ClassOfBitmapFactoryClass::ClassOfBitmapFactoryClass()
{
}

ClassOfBitmapFactoryClass::ClassOfBitmapFactoryClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_BitmapFactoryClass,0,NULL));
}

ClassOfBitmapFactoryClass::ClassOfBitmapFactoryClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfBitmapFactoryClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "BitmapFactoryClass" );
    return Buf;
}

class ClassOfBitmapFactoryClass *ClassOfBitmapFactoryClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfBitmapFactoryClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfBitmapFactoryClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "BitmapFactoryClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfBitmapFactoryClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_OBJPTR SRPAPI ClassOfBitmapFactoryClass::decodeResource(VS_INT32 id)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"decodeResource",id);
}
VS_OBJPTR SRPAPI ClassOfBitmapFactoryClass::decodeFile(VS_CHAR * pathName)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"decodeFile",pathName);
}
VS_OBJPTR SRPAPI ClassOfBitmapFactoryClass::decodeAssetsFile(VS_CHAR * pathName)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"decodeAssetsFile",pathName);
}
VS_OBJPTR SRPAPI ClassOfBitmapFactoryClass::decodeByteArray(VS_BINBUFPTR pathName,VS_INT32 offset,VS_INT32 length)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"decodeByteArray",pathName,offset,length);
}

ClassOfTextViewClass::ClassOfTextViewClass()
{
}

ClassOfTextViewClass::ClassOfTextViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_TextViewClass,0,NULL));
}

ClassOfTextViewClass::ClassOfTextViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfTextViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "TextViewClass" );
    return Buf;
}

class ClassOfTextViewClass *ClassOfTextViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfTextViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfTextViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "TextViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfTextViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_CHAR * SRPAPI ClassOfTextViewClass::getText()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getText");
}
void SRPAPI ClassOfTextViewClass::setAutoLinkMask(VS_INT32 mask)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAutoLinkMask",mask);
}
void SRPAPI ClassOfTextViewClass::setCursorVisible(VS_BOOL visible)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCursorVisible",visible);
}
void SRPAPI ClassOfTextViewClass::setEnabled(VS_BOOL enabled)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setEnabled",enabled);
}
void SRPAPI ClassOfTextViewClass::setGravity(VS_INT32 gravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGravity",gravity);
}
void SRPAPI ClassOfTextViewClass::setHeight(VS_INT32 pixels)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHeight",pixels);
}
void SRPAPI ClassOfTextViewClass::setHighlightColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHighlightColor",color);
}
void SRPAPI ClassOfTextViewClass::setHint(VS_CHAR * hint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHint",hint);
}
void SRPAPI ClassOfTextViewClass::setHint1(VS_INT32 resid)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHint1",resid);
}
void SRPAPI ClassOfTextViewClass::setHintTextColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHintTextColor",color);
}
void SRPAPI ClassOfTextViewClass::setHorizontallyScrolling(VS_BOOL whether)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHorizontallyScrolling",whether);
}
void SRPAPI ClassOfTextViewClass::setImeActionLabel(VS_CHAR * label,VS_INT32 actionId)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImeActionLabel",label,actionId);
}
void SRPAPI ClassOfTextViewClass::setImeOptions(VS_INT32 imeOptions)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImeOptions",imeOptions);
}
void SRPAPI ClassOfTextViewClass::setIncludeFontPadding(VS_BOOL includepad)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIncludeFontPadding",includepad);
}
void SRPAPI ClassOfTextViewClass::setInputExtras(VS_INT32 xmlResId)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setInputExtras",xmlResId);
}
void SRPAPI ClassOfTextViewClass::setInputType(VS_INT32 type)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setInputType",type);
}
void SRPAPI ClassOfTextViewClass::setLineSpacing(VS_FLOAT add,VS_FLOAT mult)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLineSpacing",add,mult);
}
void SRPAPI ClassOfTextViewClass::setLines(VS_INT32 lines)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLines",lines);
}
void SRPAPI ClassOfTextViewClass::setLinkTextColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLinkTextColor",color);
}
void SRPAPI ClassOfTextViewClass::setLinksClickable(VS_BOOL whether)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLinksClickable",whether);
}
void SRPAPI ClassOfTextViewClass::setMarqueeRepeatLimit(VS_INT32 marqueeLimit)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMarqueeRepeatLimit",marqueeLimit);
}
void SRPAPI ClassOfTextViewClass::setMaxEms(VS_INT32 maxems)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMaxEms",maxems);
}
void SRPAPI ClassOfTextViewClass::setMaxHeight(VS_INT32 maxHeight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMaxHeight",maxHeight);
}
void SRPAPI ClassOfTextViewClass::setMaxLines(VS_INT32 maxlines)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMaxLines",maxlines);
}
void SRPAPI ClassOfTextViewClass::setMaxWidth(VS_INT32 maxpixels)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMaxWidth",maxpixels);
}
void SRPAPI ClassOfTextViewClass::setMinEms(VS_INT32 minems)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMinEms",minems);
}
void SRPAPI ClassOfTextViewClass::setMinHeight(VS_INT32 minHeight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMinHeight",minHeight);
}
void SRPAPI ClassOfTextViewClass::setMinLines(VS_INT32 minlines)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMinLines",minlines);
}
void SRPAPI ClassOfTextViewClass::setMinWidth(VS_INT32 minpixels)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMinWidth",minpixels);
}
void SRPAPI ClassOfTextViewClass::setPadding(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPadding",left,top,right,bottom);
}
void SRPAPI ClassOfTextViewClass::setPaintFlags(VS_INT32 flags)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPaintFlags",flags);
}
void SRPAPI ClassOfTextViewClass::setPrivateImeOptions(VS_CHAR * type)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPrivateImeOptions",type);
}
void SRPAPI ClassOfTextViewClass::setRawInputType(VS_INT32 type)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRawInputType",type);
}
void SRPAPI ClassOfTextViewClass::setSelectAllOnFocus(VS_BOOL selectAllOnFocus)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSelectAllOnFocus",selectAllOnFocus);
}
void SRPAPI ClassOfTextViewClass::setSelected(VS_BOOL selected)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSelected",selected);
}
void SRPAPI ClassOfTextViewClass::setShadowLayer(VS_FLOAT radius,VS_FLOAT dx,VS_FLOAT dy,VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setShadowLayer",radius,dx,dy,color);
}
void SRPAPI ClassOfTextViewClass::setSingleLine()
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSingleLine");
}
void SRPAPI ClassOfTextViewClass::setSingleLine1(VS_BOOL singleLine)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSingleLine1",singleLine);
}
void SRPAPI ClassOfTextViewClass::setText(VS_CHAR * Text)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setText",Text);
}
void SRPAPI ClassOfTextViewClass::setTextColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextColor",color);
}
void SRPAPI ClassOfTextViewClass::setTextKeepState(VS_CHAR * text)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextKeepState",text);
}
void SRPAPI ClassOfTextViewClass::setTextScaleX(VS_FLOAT size)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextScaleX",size);
}
void SRPAPI ClassOfTextViewClass::setTextSize(VS_FLOAT size)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextSize",size);
}
void SRPAPI ClassOfTextViewClass::setTextSize1(VS_INT32 unit,VS_FLOAT size)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTextSize1",unit,size);
}
void SRPAPI ClassOfTextViewClass::setTypeface(VS_OBJPTR tf)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTypeface",tf);
}
void SRPAPI ClassOfTextViewClass::setTypeface1(VS_OBJPTR tf,VS_INT32 style)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTypeface1",tf,style);
}
void SRPAPI ClassOfTextViewClass::setWidth(VS_INT32 pixels)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setWidth",pixels);
}

ClassOfDigitalClockClass::ClassOfDigitalClockClass()
{
}

ClassOfDigitalClockClass::ClassOfDigitalClockClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_DigitalClockClass,0,NULL));
}

ClassOfDigitalClockClass::ClassOfDigitalClockClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfDigitalClockClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "DigitalClockClass" );
    return Buf;
}

class ClassOfDigitalClockClass *ClassOfDigitalClockClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfDigitalClockClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfDigitalClockClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "DigitalClockClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfDigitalClockClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfEditTextClass::ClassOfEditTextClass()
{
}

ClassOfEditTextClass::ClassOfEditTextClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_EditTextClass,0,NULL));
}

ClassOfEditTextClass::ClassOfEditTextClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfEditTextClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "EditTextClass" );
    return Buf;
}

class ClassOfEditTextClass *ClassOfEditTextClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfEditTextClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfEditTextClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "EditTextClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfEditTextClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfAutoCompleteTextViewClass::ClassOfAutoCompleteTextViewClass()
{
}

ClassOfAutoCompleteTextViewClass::ClassOfAutoCompleteTextViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AutoCompleteTextViewClass,0,NULL));
}

ClassOfAutoCompleteTextViewClass::ClassOfAutoCompleteTextViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAutoCompleteTextViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AutoCompleteTextViewClass" );
    return Buf;
}

class ClassOfAutoCompleteTextViewClass *ClassOfAutoCompleteTextViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAutoCompleteTextViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAutoCompleteTextViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AutoCompleteTextViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAutoCompleteTextViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfAutoCompleteTextViewClass::setAdapter(VS_OBJPTR adapter)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAdapter",adapter);
}
void SRPAPI ClassOfAutoCompleteTextViewClass::setThreshold(VS_INT32 threshold)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setThreshold",threshold);
}

ClassOfOutputStreamClass::ClassOfOutputStreamClass()
{
}

ClassOfOutputStreamClass::ClassOfOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_OutputStreamClass,0,NULL));
}

ClassOfOutputStreamClass::ClassOfOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfOutputStreamClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "OutputStreamClass" );
    return Buf;
}

class ClassOfOutputStreamClass *ClassOfOutputStreamClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfOutputStreamClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfOutputStreamClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "OutputStreamClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfOutputStreamClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfFileOutputStreamClass::ClassOfFileOutputStreamClass()
{
}

ClassOfFileOutputStreamClass::ClassOfFileOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_FileOutputStreamClass,0,NULL));
}

ClassOfFileOutputStreamClass::ClassOfFileOutputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfFileOutputStreamClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "FileOutputStreamClass" );
    return Buf;
}

class ClassOfFileOutputStreamClass *ClassOfFileOutputStreamClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfFileOutputStreamClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfFileOutputStreamClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "FileOutputStreamClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfFileOutputStreamClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfFileOutputStreamClass::init(VS_CHAR * path)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init",path);
}
VS_BOOL SRPAPI ClassOfFileOutputStreamClass::init1(VS_CHAR * path,VS_BOOL append)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init1",path,append);
}
void SRPAPI ClassOfFileOutputStreamClass::close()
{
    ThisSRPInterface -> Call(ThisSRPObject,"close");
}
VS_INT32 SRPAPI ClassOfFileOutputStreamClass::write1(VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"write1",buffer,byteOffset,byteCount);
}
void SRPAPI ClassOfFileOutputStreamClass::write(VS_INT32 oneByte)
{
    ThisSRPInterface -> Call(ThisSRPObject,"write",oneByte);
}

ClassOfMediaPlayerClass::ClassOfMediaPlayerClass()
{
}

ClassOfMediaPlayerClass::ClassOfMediaPlayerClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_MediaPlayerClass,0,NULL));
}

ClassOfMediaPlayerClass::ClassOfMediaPlayerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfMediaPlayerClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "MediaPlayerClass" );
    return Buf;
}

class ClassOfMediaPlayerClass *ClassOfMediaPlayerClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfMediaPlayerClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfMediaPlayerClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "MediaPlayerClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfMediaPlayerClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onBufferingUpdate()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onBufferingUpdate(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onBufferingUpdate,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onCompletion()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onCompletion(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onCompletion,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onError()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onError(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onError,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onInfo()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onInfo(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onInfo,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onPrepared()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onPrepared(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onPrepared,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onSeekComplete()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onSeekComplete(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onSeekComplete,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfMediaPlayerClass::Get_E_onVideoSizeChanged()
{
    return NULL;
}
void ClassOfMediaPlayerClass::Put_E_onVideoSizeChanged(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_MediaPlayerClass_onVideoSizeChanged,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}


VS_INT32 SRPAPI ClassOfMediaPlayerClass::getCurrentPosition()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getCurrentPosition");
}
VS_INT32 SRPAPI ClassOfMediaPlayerClass::getDuration()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getDuration");
}
VS_INT32 SRPAPI ClassOfMediaPlayerClass::getVideoHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getVideoHeight");
}
VS_INT32 SRPAPI ClassOfMediaPlayerClass::getVideoWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getVideoWidth");
}
VS_BOOL SRPAPI ClassOfMediaPlayerClass::isLooping()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isLooping");
}
VS_BOOL SRPAPI ClassOfMediaPlayerClass::isPlaying()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isPlaying");
}
void SRPAPI ClassOfMediaPlayerClass::pause()
{
    ThisSRPInterface -> Call(ThisSRPObject,"pause");
}
void SRPAPI ClassOfMediaPlayerClass::prepare()
{
    ThisSRPInterface -> Call(ThisSRPObject,"prepare");
}
void SRPAPI ClassOfMediaPlayerClass::prepareAsync()
{
    ThisSRPInterface -> Call(ThisSRPObject,"prepareAsync");
}
void SRPAPI ClassOfMediaPlayerClass::release()
{
    ThisSRPInterface -> Call(ThisSRPObject,"release");
}
void SRPAPI ClassOfMediaPlayerClass::reset()
{
    ThisSRPInterface -> Call(ThisSRPObject,"reset");
}
void SRPAPI ClassOfMediaPlayerClass::seekTo(VS_INT32 msec)
{
    ThisSRPInterface -> Call(ThisSRPObject,"seekTo",msec);
}
void SRPAPI ClassOfMediaPlayerClass::setDataSource(VS_CHAR * path)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDataSource",path);
}
void SRPAPI ClassOfMediaPlayerClass::setDataSource1(VS_OBJPTR fd)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDataSource1",fd);
}
void SRPAPI ClassOfMediaPlayerClass::setDataSource2(VS_OBJPTR fd,VS_LONG offset,VS_LONG length)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDataSource2",fd,offset,length);
}
void SRPAPI ClassOfMediaPlayerClass::setDisplay(VS_OBJPTR sh)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDisplay",sh);
}
void SRPAPI ClassOfMediaPlayerClass::setLooping(VS_BOOL looping)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLooping",looping);
}
void SRPAPI ClassOfMediaPlayerClass::setScreenOnWhilePlaying(VS_BOOL screenOn)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScreenOnWhilePlaying",screenOn);
}
void SRPAPI ClassOfMediaPlayerClass::setVolume(VS_FLOAT leftVolume,VS_FLOAT rightVolume)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVolume",leftVolume,rightVolume);
}
void SRPAPI ClassOfMediaPlayerClass::start()
{
    ThisSRPInterface -> Call(ThisSRPObject,"start");
}
void SRPAPI ClassOfMediaPlayerClass::stop()
{
    ThisSRPInterface -> Call(ThisSRPObject,"stop");
}

ClassOfFileInputStreamClass::ClassOfFileInputStreamClass()
{
}

ClassOfFileInputStreamClass::ClassOfFileInputStreamClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_FileInputStreamClass,0,NULL));
}

ClassOfFileInputStreamClass::ClassOfFileInputStreamClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfFileInputStreamClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "FileInputStreamClass" );
    return Buf;
}

class ClassOfFileInputStreamClass *ClassOfFileInputStreamClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfFileInputStreamClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfFileInputStreamClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "FileInputStreamClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfFileInputStreamClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfFileInputStreamClass::init(VS_CHAR * path)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init",path);
}
VS_INT32 SRPAPI ClassOfFileInputStreamClass::available()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"available");
}
void SRPAPI ClassOfFileInputStreamClass::close()
{
    ThisSRPInterface -> Call(ThisSRPObject,"close");
}
VS_INT32 SRPAPI ClassOfFileInputStreamClass::read()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"read");
}
VS_INT32 SRPAPI ClassOfFileInputStreamClass::read1(VS_BINBUFPTR buffer,VS_INT32 byteOffset,VS_INT32 byteCount)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"read1",buffer,byteOffset,byteCount);
}
void SRPAPI ClassOfFileInputStreamClass::skip(VS_LONG byteCount)
{
    ThisSRPInterface -> Call(ThisSRPObject,"skip",byteCount);
}

ClassOfImageViewClass::ClassOfImageViewClass()
{
}

ClassOfImageViewClass::ClassOfImageViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ImageViewClass,0,NULL));
}

ClassOfImageViewClass::ClassOfImageViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfImageViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ImageViewClass" );
    return Buf;
}

class ClassOfImageViewClass *ClassOfImageViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfImageViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfImageViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ImageViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfImageViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfImageViewClass::clearColorFilter()
{
    ThisSRPInterface -> Call(ThisSRPObject,"clearColorFilter");
}
VS_INT32 SRPAPI ClassOfImageViewClass::getBaseline()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getBaseline");
}
VS_BOOL SRPAPI ClassOfImageViewClass::getBaselineAlignBottom()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getBaselineAlignBottom");
}
VS_OBJPTR SRPAPI ClassOfImageViewClass::getDrawable()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getDrawable");
}
VS_OBJPTR SRPAPI ClassOfImageViewClass::getImageMatrix()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getImageMatrix");
}
VS_CHAR * SRPAPI ClassOfImageViewClass::getScaleType()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getScaleType");
}
void SRPAPI ClassOfImageViewClass::invalidateDrawable(VS_OBJPTR dr)
{
    ThisSRPInterface -> Call(ThisSRPObject,"invalidateDrawable",dr);
}
void SRPAPI ClassOfImageViewClass::setAdjustViewBounds(VS_BOOL adjustViewBounds)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAdjustViewBounds",adjustViewBounds);
}
void SRPAPI ClassOfImageViewClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}
void SRPAPI ClassOfImageViewClass::setImageBitmap(VS_OBJPTR bm)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageBitmap",bm);
}
void SRPAPI ClassOfImageViewClass::setImageDrawable(VS_OBJPTR drawable)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageDrawable",drawable);
}
void SRPAPI ClassOfImageViewClass::setImageLevel(VS_INT32 level)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageLevel",level);
}
void SRPAPI ClassOfImageViewClass::setImageMatrix(VS_OBJPTR matrix)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageMatrix",matrix);
}
void SRPAPI ClassOfImageViewClass::setImageResource(VS_INT32 resid)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageResource",resid);
}
void SRPAPI ClassOfImageViewClass::setImageState(VS_PARAPKGPTR state,VS_BOOL merge)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageState",state,merge);
}
void SRPAPI ClassOfImageViewClass::setImageURI(VS_CHAR * uri)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setImageURI",uri);
}
void SRPAPI ClassOfImageViewClass::setMaxHeight(VS_INT32 maxHeight)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMaxHeight",maxHeight);
}
void SRPAPI ClassOfImageViewClass::setMaxWidth(VS_INT32 maxWidth)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setMaxWidth",maxWidth);
}
void SRPAPI ClassOfImageViewClass::setScaleType(VS_CHAR * scaleType)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScaleType",scaleType);
}
void SRPAPI ClassOfImageViewClass::setSelected(VS_BOOL selected)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSelected",selected);
}

ClassOfImageButtonClass::ClassOfImageButtonClass()
{
}

ClassOfImageButtonClass::ClassOfImageButtonClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ImageButtonClass,0,NULL));
}

ClassOfImageButtonClass::ClassOfImageButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfImageButtonClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ImageButtonClass" );
    return Buf;
}

class ClassOfImageButtonClass *ClassOfImageButtonClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfImageButtonClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfImageButtonClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ImageButtonClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfImageButtonClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfMotionEventClass::ClassOfMotionEventClass()
{
}

ClassOfMotionEventClass::ClassOfMotionEventClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_MotionEventClass,0,NULL));
}

ClassOfMotionEventClass::ClassOfMotionEventClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfMotionEventClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "MotionEventClass" );
    return Buf;
}

class ClassOfMotionEventClass *ClassOfMotionEventClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfMotionEventClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfMotionEventClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "MotionEventClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfMotionEventClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_INT32 SRPAPI ClassOfMotionEventClass::findPointerIndex(VS_INT32 pointerId)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"findPointerIndex",pointerId);
}
VS_INT8 SRPAPI ClassOfMotionEventClass::getAction()
{
    return (VS_INT8 )ThisSRPInterface -> Call(ThisSRPObject,"getAction");
}
VS_INT32 SRPAPI ClassOfMotionEventClass::getDeviceId()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getDeviceId");
}
VS_LONG SRPAPI ClassOfMotionEventClass::getDownTime()
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getDownTime");
}
VS_INT32 SRPAPI ClassOfMotionEventClass::getEdgeFlags()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getEdgeFlags");
}
VS_LONG SRPAPI ClassOfMotionEventClass::getEventTime()
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getEventTime");
}
VS_LONG SRPAPI ClassOfMotionEventClass::getHistoricalEventTime(VS_INT32 pos)
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getHistoricalEventTime",pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalPressure(VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalPressure",pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalPressure1(VS_INT32 pointerIndex,VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalPressure1",pointerIndex,pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalSize(VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalSize",pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalSize1(VS_INT32 pointerIndex,VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalSize1",pointerIndex,pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalX(VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalX",pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalX1(VS_INT32 pointerIndex,VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalX1",pointerIndex,pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalY(VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalY",pos);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getHistoricalY1(VS_INT32 pointerIndex,VS_INT32 pos)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getHistoricalY1",pointerIndex,pos);
}
VS_INT32 SRPAPI ClassOfMotionEventClass::getHistorySize()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getHistorySize");
}
VS_INT32 SRPAPI ClassOfMotionEventClass::getMetaState()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getMetaState");
}
VS_INT32 SRPAPI ClassOfMotionEventClass::getPointerCount()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPointerCount");
}
VS_INT32 SRPAPI ClassOfMotionEventClass::getPointerId(VS_INT32 pointerIndex)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getPointerId",pointerIndex);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getPressure()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getPressure");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getPressure1(VS_INT32 pointerIndex)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getPressure1",pointerIndex);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getRawX()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getRawX");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getRawY()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getRawY");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getSize()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getSize");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getSize1(VS_INT32 pointerIndex)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getSize1",pointerIndex);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getX()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getX");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getX1(VS_INT32 pointerIndex)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getX1",pointerIndex);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getXPrecision()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getXPrecision");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getY()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getY");
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getY1(VS_INT32 pointerIndex)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getY1",pointerIndex);
}
VS_FLOAT SRPAPI ClassOfMotionEventClass::getYPrecision()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getYPrecision");
}

ClassOfAssetFileDescriptorClass::ClassOfAssetFileDescriptorClass()
{
}

ClassOfAssetFileDescriptorClass::ClassOfAssetFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AssetFileDescriptorClass,0,NULL));
}

ClassOfAssetFileDescriptorClass::ClassOfAssetFileDescriptorClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAssetFileDescriptorClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AssetFileDescriptorClass" );
    return Buf;
}

class ClassOfAssetFileDescriptorClass *ClassOfAssetFileDescriptorClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAssetFileDescriptorClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAssetFileDescriptorClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AssetFileDescriptorClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAssetFileDescriptorClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfAssetFileDescriptorClass::close()
{
    ThisSRPInterface -> Call(ThisSRPObject,"close");
}
VS_OBJPTR SRPAPI ClassOfAssetFileDescriptorClass::createInputStream()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"createInputStream");
}
VS_OBJPTR SRPAPI ClassOfAssetFileDescriptorClass::createOutputStream()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"createOutputStream");
}
VS_INT32 SRPAPI ClassOfAssetFileDescriptorClass::describeContents()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"describeContents");
}
VS_LONG SRPAPI ClassOfAssetFileDescriptorClass::getDeclaredLength()
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getDeclaredLength");
}
VS_LONG SRPAPI ClassOfAssetFileDescriptorClass::getLength()
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getLength");
}
VS_LONG SRPAPI ClassOfAssetFileDescriptorClass::getStartOffset()
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getStartOffset");
}

ClassOfWebSettingsClass::ClassOfWebSettingsClass()
{
}

ClassOfWebSettingsClass::ClassOfWebSettingsClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_WebSettingsClass,0,NULL));
}

ClassOfWebSettingsClass::ClassOfWebSettingsClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfWebSettingsClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "WebSettingsClass" );
    return Buf;
}

class ClassOfWebSettingsClass *ClassOfWebSettingsClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfWebSettingsClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfWebSettingsClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "WebSettingsClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfWebSettingsClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfWebSettingsClass::setJavaScriptEnabled(VS_BOOL flag)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setJavaScriptEnabled",flag);
}

ClassOfBaseAdapterClass::ClassOfBaseAdapterClass()
{
}

ClassOfBaseAdapterClass::ClassOfBaseAdapterClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_BaseAdapterClass,0,NULL));
}

ClassOfBaseAdapterClass::ClassOfBaseAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfBaseAdapterClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "BaseAdapterClass" );
    return Buf;
}

class ClassOfBaseAdapterClass *ClassOfBaseAdapterClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfBaseAdapterClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfBaseAdapterClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "BaseAdapterClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfBaseAdapterClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfBaseAdapterClass::Put_F_onCreateAndroid(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_onCreateAndroid,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_onCreateAndroid()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_getCount(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_getCount,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_getCount()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_getItem(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_getItem,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_getItem()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_getItemId(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_getItemId,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_getItemId()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_getViewTypeCount(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_getViewTypeCount,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_getViewTypeCount()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_getItemViewType(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_getItemViewType,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_getItemViewType()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_getView(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_getView,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_getView()
{
    return NULL;
}

void ClassOfBaseAdapterClass::Put_F_isEmpty(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_BaseAdapterClass_isEmpty,In_Value,NULL);
}
void * ClassOfBaseAdapterClass::Get_F_isEmpty()
{
    return NULL;
}


void SRPAPI ClassOfBaseAdapterClass::onCreateAndroid()
{
    ThisSRPInterface -> Call(ThisSRPObject,"onCreateAndroid");
}
VS_INT32 SRPAPI ClassOfBaseAdapterClass::getCount()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getCount");
}
VS_CHAR * SRPAPI ClassOfBaseAdapterClass::getItem(VS_INT32 position)
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getItem",position);
}
VS_LONG SRPAPI ClassOfBaseAdapterClass::getItemId(VS_INT32 position)
{
    return (VS_LONG )ThisSRPInterface -> Call(ThisSRPObject,"getItemId",position);
}
VS_INT32 SRPAPI ClassOfBaseAdapterClass::getViewTypeCount()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getViewTypeCount");
}
VS_INT32 SRPAPI ClassOfBaseAdapterClass::getItemViewType(VS_INT32 position)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getItemViewType",position);
}
VS_OBJPTR SRPAPI ClassOfBaseAdapterClass::getView(VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getView",position,convertView,parent);
}
VS_BOOL SRPAPI ClassOfBaseAdapterClass::isEmpty()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isEmpty");
}

ClassOfSimpleAdapterClass::ClassOfSimpleAdapterClass()
{
}

ClassOfSimpleAdapterClass::ClassOfSimpleAdapterClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_SimpleAdapterClass,0,NULL));
}

ClassOfSimpleAdapterClass::ClassOfSimpleAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfSimpleAdapterClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "SimpleAdapterClass" );
    return Buf;
}

class ClassOfSimpleAdapterClass *ClassOfSimpleAdapterClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfSimpleAdapterClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfSimpleAdapterClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "SimpleAdapterClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfSimpleAdapterClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfStringArrayAdapterClass::ClassOfStringArrayAdapterClass()
{
}

ClassOfStringArrayAdapterClass::ClassOfStringArrayAdapterClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_StringArrayAdapterClass,0,NULL));
}

ClassOfStringArrayAdapterClass::ClassOfStringArrayAdapterClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfStringArrayAdapterClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "StringArrayAdapterClass" );
    return Buf;
}

class ClassOfStringArrayAdapterClass *ClassOfStringArrayAdapterClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfStringArrayAdapterClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfStringArrayAdapterClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "StringArrayAdapterClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfStringArrayAdapterClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfStringArrayAdapterClass::Put_F_getView(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_StringArrayAdapterClass_getView,In_Value,NULL);
}
void * ClassOfStringArrayAdapterClass::Get_F_getView()
{
    return NULL;
}


void SRPAPI ClassOfStringArrayAdapterClass::setDropDownViewResource(VS_INT32 resource)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDropDownViewResource",resource);
}
void SRPAPI ClassOfStringArrayAdapterClass::remove(VS_CHAR * v)
{
    ThisSRPInterface -> Call(ThisSRPObject,"remove",v);
}
void SRPAPI ClassOfStringArrayAdapterClass::add(VS_CHAR * v)
{
    ThisSRPInterface -> Call(ThisSRPObject,"add",v);
}
VS_OBJPTR SRPAPI ClassOfStringArrayAdapterClass::getView(VS_INT32 Position,VS_OBJPTR convertView,VS_OBJPTR parent)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getView",Position,convertView,parent);
}

ClassOfDrawableClass::ClassOfDrawableClass()
{
}

ClassOfDrawableClass::ClassOfDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_DrawableClass,0,NULL));
}

ClassOfDrawableClass::ClassOfDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "DrawableClass" );
    return Buf;
}

class ClassOfDrawableClass *ClassOfDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "DrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfDrawableClass::setBounds(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setBounds",left,top,right,bottom);
}

ClassOfDrawableContainerClass::ClassOfDrawableContainerClass()
{
}

ClassOfDrawableContainerClass::ClassOfDrawableContainerClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_DrawableContainerClass,0,NULL));
}

ClassOfDrawableContainerClass::ClassOfDrawableContainerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfDrawableContainerClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "DrawableContainerClass" );
    return Buf;
}

class ClassOfDrawableContainerClass *ClassOfDrawableContainerClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfDrawableContainerClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfDrawableContainerClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "DrawableContainerClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfDrawableContainerClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfDrawableContainerClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_INT32 SRPAPI ClassOfDrawableContainerClass::getChangingConfigurations()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChangingConfigurations");
}
VS_OBJPTR SRPAPI ClassOfDrawableContainerClass::getCurrent()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getCurrent");
}
VS_INT32 SRPAPI ClassOfDrawableContainerClass::getIntrinsicHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicHeight");
}
VS_INT32 SRPAPI ClassOfDrawableContainerClass::getIntrinsicWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicWidth");
}
VS_INT32 SRPAPI ClassOfDrawableContainerClass::getMinimumHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getMinimumHeight");
}
VS_INT32 SRPAPI ClassOfDrawableContainerClass::getMinimumWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getMinimumWidth");
}
VS_INT32 SRPAPI ClassOfDrawableContainerClass::getOpacity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getOpacity");
}
VS_BOOL SRPAPI ClassOfDrawableContainerClass::getPadding(VS_OBJPTR padding)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getPadding",padding);
}
void SRPAPI ClassOfDrawableContainerClass::invalidateDrawable(VS_BOOL who)
{
    ThisSRPInterface -> Call(ThisSRPObject,"invalidateDrawable",who);
}
VS_BOOL SRPAPI ClassOfDrawableContainerClass::isStateful()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isStateful");
}
VS_BOOL SRPAPI ClassOfDrawableContainerClass::selectDrawable(VS_INT32 idx)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"selectDrawable",idx);
}
void SRPAPI ClassOfDrawableContainerClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}
void SRPAPI ClassOfDrawableContainerClass::setDither(VS_BOOL dither)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDither",dither);
}
VS_BOOL SRPAPI ClassOfDrawableContainerClass::setVisible(VS_BOOL visible,VS_BOOL restart)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"setVisible",visible,restart);
}

ClassOfColorDrawableClass::ClassOfColorDrawableClass()
{
}

ClassOfColorDrawableClass::ClassOfColorDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ColorDrawableClass,0,NULL));
}

ClassOfColorDrawableClass::ClassOfColorDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfColorDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ColorDrawableClass" );
    return Buf;
}

class ClassOfColorDrawableClass *ClassOfColorDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfColorDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfColorDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ColorDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfColorDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfColorDrawableClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_INT32 SRPAPI ClassOfColorDrawableClass::getAlpha()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getAlpha");
}
VS_INT32 SRPAPI ClassOfColorDrawableClass::getChangingConfigurations()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChangingConfigurations");
}
VS_INT32 SRPAPI ClassOfColorDrawableClass::getOpacity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getOpacity");
}
void SRPAPI ClassOfColorDrawableClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}

ClassOfBitmapDrawableClass::ClassOfBitmapDrawableClass()
{
}

ClassOfBitmapDrawableClass::ClassOfBitmapDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_BitmapDrawableClass,0,NULL));
}

ClassOfBitmapDrawableClass::ClassOfBitmapDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfBitmapDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "BitmapDrawableClass" );
    return Buf;
}

class ClassOfBitmapDrawableClass *ClassOfBitmapDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfBitmapDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfBitmapDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "BitmapDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfBitmapDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfBitmapDrawableClass::init(VS_CHAR * filepath)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init",filepath);
}
void SRPAPI ClassOfBitmapDrawableClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_OBJPTR SRPAPI ClassOfBitmapDrawableClass::getBitmap()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getBitmap");
}
VS_INT32 SRPAPI ClassOfBitmapDrawableClass::getChangingConfigurations()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChangingConfigurations");
}
VS_INT32 SRPAPI ClassOfBitmapDrawableClass::getGravity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getGravity");
}
VS_INT32 SRPAPI ClassOfBitmapDrawableClass::getIntrinsicHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicHeight");
}
VS_INT32 SRPAPI ClassOfBitmapDrawableClass::getIntrinsicWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicWidth");
}
VS_INT32 SRPAPI ClassOfBitmapDrawableClass::getOpacity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getOpacity");
}
VS_OBJPTR SRPAPI ClassOfBitmapDrawableClass::getPaint()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getPaint");
}
VS_CHAR * SRPAPI ClassOfBitmapDrawableClass::getTileModeX()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getTileModeX");
}
VS_CHAR * SRPAPI ClassOfBitmapDrawableClass::getTileModeY()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getTileModeY");
}
void SRPAPI ClassOfBitmapDrawableClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}
void SRPAPI ClassOfBitmapDrawableClass::setAntiAlias(VS_BOOL aa)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAntiAlias",aa);
}
void SRPAPI ClassOfBitmapDrawableClass::setDither(VS_BOOL dither)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDither",dither);
}
void SRPAPI ClassOfBitmapDrawableClass::setFilterBitmap(VS_BOOL filter)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setFilterBitmap",filter);
}
void SRPAPI ClassOfBitmapDrawableClass::setGravity(VS_INT32 gravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGravity",gravity);
}
void SRPAPI ClassOfBitmapDrawableClass::setTargetDensity(VS_INT32 density)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTargetDensity",density);
}
void SRPAPI ClassOfBitmapDrawableClass::setTargetDensity1(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTargetDensity1",canvas);
}
void SRPAPI ClassOfBitmapDrawableClass::setTileModeX(VS_CHAR * mode)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTileModeX",mode);
}
void SRPAPI ClassOfBitmapDrawableClass::setTileModeXY(VS_CHAR * xmode,VS_CHAR * ymode)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTileModeXY",xmode,ymode);
}
void SRPAPI ClassOfBitmapDrawableClass::setTileModeY(VS_CHAR * mode)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setTileModeY",mode);
}

ClassOfShapeDrawableClass::ClassOfShapeDrawableClass()
{
}

ClassOfShapeDrawableClass::ClassOfShapeDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ShapeDrawableClass,0,NULL));
}

ClassOfShapeDrawableClass::ClassOfShapeDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfShapeDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ShapeDrawableClass" );
    return Buf;
}

class ClassOfShapeDrawableClass *ClassOfShapeDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfShapeDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfShapeDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ShapeDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfShapeDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfShapeDrawableClass::init(VS_OBJPTR shape)
{
    ThisSRPInterface -> Call(ThisSRPObject,"init",shape);
}
void SRPAPI ClassOfShapeDrawableClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_INT32 SRPAPI ClassOfShapeDrawableClass::getChangingConfigurations()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChangingConfigurations");
}
VS_INT32 SRPAPI ClassOfShapeDrawableClass::getIntrinsicHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicHeight");
}
VS_INT32 SRPAPI ClassOfShapeDrawableClass::getIntrinsicWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicWidth");
}
VS_INT32 SRPAPI ClassOfShapeDrawableClass::getOpacity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getOpacity");
}
VS_BOOL SRPAPI ClassOfShapeDrawableClass::getPadding(VS_OBJPTR padding)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getPadding",padding);
}
VS_OBJPTR SRPAPI ClassOfShapeDrawableClass::getPaint()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getPaint");
}
void SRPAPI ClassOfShapeDrawableClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}
void SRPAPI ClassOfShapeDrawableClass::setDither(VS_BOOL dither)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDither",dither);
}
void SRPAPI ClassOfShapeDrawableClass::setIntrinsicHeight(VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIntrinsicHeight",height);
}
void SRPAPI ClassOfShapeDrawableClass::setIntrinsicWidth(VS_INT32 width)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIntrinsicWidth",width);
}
void SRPAPI ClassOfShapeDrawableClass::setPadding(VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPadding",left,top,right,bottom);
}

ClassOfLayerDrawableClass::ClassOfLayerDrawableClass()
{
}

ClassOfLayerDrawableClass::ClassOfLayerDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_LayerDrawableClass,0,NULL));
}

ClassOfLayerDrawableClass::ClassOfLayerDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfLayerDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "LayerDrawableClass" );
    return Buf;
}

class ClassOfLayerDrawableClass *ClassOfLayerDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfLayerDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfLayerDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "LayerDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfLayerDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfLayerDrawableClass::init(VS_PARAPKGPTR layers)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init",layers);
}
void SRPAPI ClassOfLayerDrawableClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_OBJPTR SRPAPI ClassOfLayerDrawableClass::findDrawableByLayerId(VS_INT32 id)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"findDrawableByLayerId",id);
}
VS_INT32 SRPAPI ClassOfLayerDrawableClass::getChangingConfigurations()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChangingConfigurations");
}
VS_OBJPTR SRPAPI ClassOfLayerDrawableClass::getDrawable(VS_INT32 index)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getDrawable",index);
}
VS_INT32 SRPAPI ClassOfLayerDrawableClass::getId(VS_INT32 index)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getId",index);
}
VS_INT32 SRPAPI ClassOfLayerDrawableClass::getIntrinsicHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicHeight");
}
VS_INT32 SRPAPI ClassOfLayerDrawableClass::getIntrinsicWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicWidth");
}
VS_INT32 SRPAPI ClassOfLayerDrawableClass::getNumberOfLayers()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getNumberOfLayers");
}
VS_INT32 SRPAPI ClassOfLayerDrawableClass::getOpacity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getOpacity");
}
VS_BOOL SRPAPI ClassOfLayerDrawableClass::getPadding(VS_OBJPTR padding)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getPadding",padding);
}
void SRPAPI ClassOfLayerDrawableClass::invalidateDrawable(VS_OBJPTR who)
{
    ThisSRPInterface -> Call(ThisSRPObject,"invalidateDrawable",who);
}
VS_BOOL SRPAPI ClassOfLayerDrawableClass::isStateful()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isStateful");
}
void SRPAPI ClassOfLayerDrawableClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}
void SRPAPI ClassOfLayerDrawableClass::setDither(VS_BOOL dither)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDither",dither);
}
VS_BOOL SRPAPI ClassOfLayerDrawableClass::setDrawableByLayerId(VS_INT32 id,VS_OBJPTR drawable)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"setDrawableByLayerId",id,drawable);
}
void SRPAPI ClassOfLayerDrawableClass::setId(VS_INT32 index,VS_INT32 id)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setId",index,id);
}
void SRPAPI ClassOfLayerDrawableClass::setLayerInset(VS_INT32 index,VS_INT32 l,VS_INT32 t,VS_INT32 r,VS_INT32 b)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLayerInset",index,l,t,r,b);
}
VS_BOOL SRPAPI ClassOfLayerDrawableClass::setVisible(VS_BOOL visible,VS_BOOL restart)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"setVisible",visible,restart);
}

ClassOfTransitionDrawableClass::ClassOfTransitionDrawableClass()
{
}

ClassOfTransitionDrawableClass::ClassOfTransitionDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_TransitionDrawableClass,0,NULL));
}

ClassOfTransitionDrawableClass::ClassOfTransitionDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfTransitionDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "TransitionDrawableClass" );
    return Buf;
}

class ClassOfTransitionDrawableClass *ClassOfTransitionDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfTransitionDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfTransitionDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "TransitionDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfTransitionDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfTransitionDrawableClass::init(VS_PARAPKGPTR layers)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init",layers);
}
void SRPAPI ClassOfTransitionDrawableClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_BOOL SRPAPI ClassOfTransitionDrawableClass::isCrossFadeEnabled()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isCrossFadeEnabled");
}
void SRPAPI ClassOfTransitionDrawableClass::resetTransition()
{
    ThisSRPInterface -> Call(ThisSRPObject,"resetTransition");
}
void SRPAPI ClassOfTransitionDrawableClass::reverseTransition(VS_INT32 duration)
{
    ThisSRPInterface -> Call(ThisSRPObject,"reverseTransition",duration);
}
void SRPAPI ClassOfTransitionDrawableClass::setCrossFadeEnabled(VS_BOOL enabled)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCrossFadeEnabled",enabled);
}
void SRPAPI ClassOfTransitionDrawableClass::startTransition(VS_INT32 durationMillis)
{
    ThisSRPInterface -> Call(ThisSRPObject,"startTransition",durationMillis);
}

ClassOfViewGroupClass::ClassOfViewGroupClass()
{
}

ClassOfViewGroupClass::ClassOfViewGroupClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ViewGroupClass,0,NULL));
}

ClassOfViewGroupClass::ClassOfViewGroupClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfViewGroupClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ViewGroupClass" );
    return Buf;
}

class ClassOfViewGroupClass *ClassOfViewGroupClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfViewGroupClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfViewGroupClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ViewGroupClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfViewGroupClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfViewGroupClass::Put_F_onDraw(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewGroupClass_onDraw,In_Value,NULL);
}
void * ClassOfViewGroupClass::Get_F_onDraw()
{
    return NULL;
}

void ClassOfViewGroupClass::Put_F_onLayout(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewGroupClass_onLayout,In_Value,NULL);
}
void * ClassOfViewGroupClass::Get_F_onLayout()
{
    return NULL;
}

void ClassOfViewGroupClass::Put_F_onMeasure(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewGroupClass_onMeasure,In_Value,NULL);
}
void * ClassOfViewGroupClass::Get_F_onMeasure()
{
    return NULL;
}

void ClassOfViewGroupClass::Put_F_onSizeChanged(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_ViewGroupClass_onSizeChanged,In_Value,NULL);
}
void * ClassOfViewGroupClass::Get_F_onSizeChanged()
{
    return NULL;
}


void SRPAPI ClassOfViewGroupClass::addView(VS_OBJPTR child)
{
    ThisSRPInterface -> Call(ThisSRPObject,"addView",child);
}
VS_OBJPTR SRPAPI ClassOfViewGroupClass::getChildAt(VS_INT32 index)
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getChildAt",index);
}
VS_INT32 SRPAPI ClassOfViewGroupClass::getChildCount()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChildCount");
}
void SRPAPI ClassOfViewGroupClass::recomputeViewAttributes(VS_OBJPTR child)
{
    ThisSRPInterface -> Call(ThisSRPObject,"recomputeViewAttributes",child);
}
void SRPAPI ClassOfViewGroupClass::removeView(VS_OBJPTR view)
{
    ThisSRPInterface -> Call(ThisSRPObject,"removeView",view);
}
void SRPAPI ClassOfViewGroupClass::removeAllViews()
{
    ThisSRPInterface -> Call(ThisSRPObject,"removeAllViews");
}
void SRPAPI ClassOfViewGroupClass::refreshDrawableState()
{
    ThisSRPInterface -> Call(ThisSRPObject,"refreshDrawableState");
}
VS_BOOL SRPAPI ClassOfViewGroupClass::requestFocus()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"requestFocus");
}
VS_BOOL SRPAPI ClassOfViewGroupClass::requestFocus1(VS_INT32 direction)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"requestFocus1",direction);
}
VS_BOOL SRPAPI ClassOfViewGroupClass::requestFocusFromTouch()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"requestFocusFromTouch");
}
void SRPAPI ClassOfViewGroupClass::requestLayout()
{
    ThisSRPInterface -> Call(ThisSRPObject,"requestLayout");
}
void SRPAPI ClassOfViewGroupClass::onDraw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onDraw",canvas);
}
void SRPAPI ClassOfViewGroupClass::onSuperDraw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperDraw",canvas);
}
void SRPAPI ClassOfViewGroupClass::onLayout(VS_BOOL changed,VS_INT32 left,VS_INT32 top,VS_INT32 right,VS_INT32 bottom)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onLayout",changed,left,top,right,bottom);
}
void SRPAPI ClassOfViewGroupClass::onMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onMeasure",widthMeasureSpec,heightMeasureSpec);
}
void SRPAPI ClassOfViewGroupClass::onSuperMeasure(VS_INT32 widthMeasureSpec,VS_INT32 heightMeasureSpec)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperMeasure",widthMeasureSpec,heightMeasureSpec);
}
void SRPAPI ClassOfViewGroupClass::onSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSizeChanged",w,h,oldw,oldh);
}
void SRPAPI ClassOfViewGroupClass::onSuperSizeChanged(VS_INT32 w,VS_INT32 h,VS_INT32 oldw,VS_INT32 oldh)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperSizeChanged",w,h,oldw,oldh);
}

ClassOfRelativeLayoutClass::ClassOfRelativeLayoutClass()
{
}

ClassOfRelativeLayoutClass::ClassOfRelativeLayoutClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RelativeLayoutClass,0,NULL));
}

ClassOfRelativeLayoutClass::ClassOfRelativeLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRelativeLayoutClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RelativeLayoutClass" );
    return Buf;
}

class ClassOfRelativeLayoutClass *ClassOfRelativeLayoutClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRelativeLayoutClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRelativeLayoutClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RelativeLayoutClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRelativeLayoutClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfRelativeLayoutClass::requestLayout()
{
    ThisSRPInterface -> Call(ThisSRPObject,"requestLayout");
}
void SRPAPI ClassOfRelativeLayoutClass::setGravity(VS_INT32 gravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGravity",gravity);
}
void SRPAPI ClassOfRelativeLayoutClass::setHorizontalGravity(VS_INT32 horizontalGravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHorizontalGravity",horizontalGravity);
}
void SRPAPI ClassOfRelativeLayoutClass::setVerticalGravity(VS_INT32 verticalGravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVerticalGravity",verticalGravity);
}

ClassOfAbsoluteLayoutClass::ClassOfAbsoluteLayoutClass()
{
}

ClassOfAbsoluteLayoutClass::ClassOfAbsoluteLayoutClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AbsoluteLayoutClass,0,NULL));
}

ClassOfAbsoluteLayoutClass::ClassOfAbsoluteLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAbsoluteLayoutClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AbsoluteLayoutClass" );
    return Buf;
}

class ClassOfAbsoluteLayoutClass *ClassOfAbsoluteLayoutClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAbsoluteLayoutClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAbsoluteLayoutClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AbsoluteLayoutClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAbsoluteLayoutClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfLinearLayoutClass::ClassOfLinearLayoutClass()
{
}

ClassOfLinearLayoutClass::ClassOfLinearLayoutClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_LinearLayoutClass,0,NULL));
}

ClassOfLinearLayoutClass::ClassOfLinearLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfLinearLayoutClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "LinearLayoutClass" );
    return Buf;
}

class ClassOfLinearLayoutClass *ClassOfLinearLayoutClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfLinearLayoutClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfLinearLayoutClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "LinearLayoutClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfLinearLayoutClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfLinearLayoutClass::setGravity(VS_INT32 gravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGravity",gravity);
}
void SRPAPI ClassOfLinearLayoutClass::setHorizontalGravity(VS_INT32 horizontalGravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHorizontalGravity",horizontalGravity);
}
void SRPAPI ClassOfLinearLayoutClass::setOrientation(VS_CHAR * orientation)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setOrientation",orientation);
}
void SRPAPI ClassOfLinearLayoutClass::setVerticalGravity(VS_INT32 verticalGravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVerticalGravity",verticalGravity);
}

ClassOfTableRowClass::ClassOfTableRowClass()
{
}

ClassOfTableRowClass::ClassOfTableRowClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_TableRowClass,0,NULL));
}

ClassOfTableRowClass::ClassOfTableRowClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfTableRowClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "TableRowClass" );
    return Buf;
}

class ClassOfTableRowClass *ClassOfTableRowClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfTableRowClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfTableRowClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "TableRowClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfTableRowClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfTableLayoutClass::ClassOfTableLayoutClass()
{
}

ClassOfTableLayoutClass::ClassOfTableLayoutClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_TableLayoutClass,0,NULL));
}

ClassOfTableLayoutClass::ClassOfTableLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfTableLayoutClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "TableLayoutClass" );
    return Buf;
}

class ClassOfTableLayoutClass *ClassOfTableLayoutClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfTableLayoutClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfTableLayoutClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "TableLayoutClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfTableLayoutClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfTableLayoutClass::isColumnCollapsed(VS_INT32 columnIndex)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isColumnCollapsed",columnIndex);
}
VS_BOOL SRPAPI ClassOfTableLayoutClass::isColumnShrinkable(VS_INT32 columnIndex)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isColumnShrinkable",columnIndex);
}
VS_BOOL SRPAPI ClassOfTableLayoutClass::isColumnStretchable(VS_INT32 columnIndex)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isColumnStretchable",columnIndex);
}
VS_BOOL SRPAPI ClassOfTableLayoutClass::isShrinkAllColumns()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isShrinkAllColumns");
}
VS_BOOL SRPAPI ClassOfTableLayoutClass::isStretchAllColumns()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isStretchAllColumns");
}
void SRPAPI ClassOfTableLayoutClass::requestLayout()
{
    ThisSRPInterface -> Call(ThisSRPObject,"requestLayout");
}
void SRPAPI ClassOfTableLayoutClass::setColumnShrinkable(VS_INT32 columnIndex,VS_BOOL isShrinkable)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setColumnShrinkable",columnIndex,isShrinkable);
}
void SRPAPI ClassOfTableLayoutClass::setColumnStretchable(VS_INT32 columnIndex,VS_BOOL isStretchable)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setColumnStretchable",columnIndex,isStretchable);
}
void SRPAPI ClassOfTableLayoutClass::setShrinkAllColumns(VS_BOOL shrinkAllColumns)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setShrinkAllColumns",shrinkAllColumns);
}
void SRPAPI ClassOfTableLayoutClass::setStretchAllColumns(VS_BOOL stretchAllColumns)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStretchAllColumns",stretchAllColumns);
}

ClassOfRadioGroupClass::ClassOfRadioGroupClass()
{
}

ClassOfRadioGroupClass::ClassOfRadioGroupClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RadioGroupClass,0,NULL));
}

ClassOfRadioGroupClass::ClassOfRadioGroupClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRadioGroupClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RadioGroupClass" );
    return Buf;
}

class ClassOfRadioGroupClass *ClassOfRadioGroupClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRadioGroupClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRadioGroupClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RadioGroupClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRadioGroupClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfRadioGroupClass::Get_E_onCheckedChanged()
{
    return NULL;
}
void ClassOfRadioGroupClass::Put_E_onCheckedChanged(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_RadioGroupClass_onCheckedChanged,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}



ClassOfFrameLayoutClass::ClassOfFrameLayoutClass()
{
}

ClassOfFrameLayoutClass::ClassOfFrameLayoutClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_FrameLayoutClass,0,NULL));
}

ClassOfFrameLayoutClass::ClassOfFrameLayoutClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfFrameLayoutClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "FrameLayoutClass" );
    return Buf;
}

class ClassOfFrameLayoutClass *ClassOfFrameLayoutClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfFrameLayoutClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfFrameLayoutClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "FrameLayoutClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfFrameLayoutClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfTimePickerClass::ClassOfTimePickerClass()
{
}

ClassOfTimePickerClass::ClassOfTimePickerClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_TimePickerClass,0,NULL));
}

ClassOfTimePickerClass::ClassOfTimePickerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfTimePickerClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "TimePickerClass" );
    return Buf;
}

class ClassOfTimePickerClass *ClassOfTimePickerClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfTimePickerClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfTimePickerClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "TimePickerClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfTimePickerClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfTimePickerClass::Get_E_onTimeChanged()
{
    return NULL;
}
void ClassOfTimePickerClass::Put_E_onTimeChanged(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_TimePickerClass_onTimeChanged,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}


void SRPAPI ClassOfTimePickerClass::setCurrentHour(VS_INT32 currentHour)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCurrentHour",currentHour);
}
void SRPAPI ClassOfTimePickerClass::setCurrentMinute(VS_INT32 currentMinute)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCurrentMinute",currentMinute);
}
void SRPAPI ClassOfTimePickerClass::setIs24HourView(VS_BOOL is24HourView)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setIs24HourView",is24HourView);
}
VS_INT32 SRPAPI ClassOfTimePickerClass::getCurrentHour()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getCurrentHour");
}
VS_INT32 SRPAPI ClassOfTimePickerClass::getCurrentMinute()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getCurrentMinute");
}
VS_BOOL SRPAPI ClassOfTimePickerClass::is24HourView()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"is24HourView");
}

ClassOfDatePickerClass::ClassOfDatePickerClass()
{
}

ClassOfDatePickerClass::ClassOfDatePickerClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_DatePickerClass,0,NULL));
}

ClassOfDatePickerClass::ClassOfDatePickerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfDatePickerClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "DatePickerClass" );
    return Buf;
}

class ClassOfDatePickerClass *ClassOfDatePickerClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfDatePickerClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfDatePickerClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "DatePickerClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfDatePickerClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfDatePickerClass::Get_E_onDateChanged()
{
    return NULL;
}
void ClassOfDatePickerClass::Put_E_onDateChanged(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_DatePickerClass_onDateChanged,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}


void SRPAPI ClassOfDatePickerClass::updateDate(VS_INT32 year,VS_INT32 monthOfYear,VS_INT32 dayOfMonth)
{
    ThisSRPInterface -> Call(ThisSRPObject,"updateDate",year,monthOfYear,dayOfMonth);
}
VS_INT32 SRPAPI ClassOfDatePickerClass::getDayOfMonth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getDayOfMonth");
}
VS_INT32 SRPAPI ClassOfDatePickerClass::getMonth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getMonth");
}
VS_INT32 SRPAPI ClassOfDatePickerClass::getYear()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getYear");
}

ClassOfSoundPoolClass::ClassOfSoundPoolClass()
{
}

ClassOfSoundPoolClass::ClassOfSoundPoolClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_SoundPoolClass,0,NULL));
}

ClassOfSoundPoolClass::ClassOfSoundPoolClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfSoundPoolClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "SoundPoolClass" );
    return Buf;
}

class ClassOfSoundPoolClass *ClassOfSoundPoolClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfSoundPoolClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfSoundPoolClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "SoundPoolClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfSoundPoolClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_INT32 SRPAPI ClassOfSoundPoolClass::load(VS_CHAR * path,VS_INT32 priority)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"load",path,priority);
}
VS_INT32 SRPAPI ClassOfSoundPoolClass::load1(VS_INT32 resId,VS_INT32 priority)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"load1",resId,priority);
}
VS_INT32 SRPAPI ClassOfSoundPoolClass::load2(VS_OBJPTR fd,VS_LONG offset,VS_LONG length,VS_INT32 priority)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"load2",fd,offset,length,priority);
}
void SRPAPI ClassOfSoundPoolClass::pause(VS_INT32 streamID)
{
    ThisSRPInterface -> Call(ThisSRPObject,"pause",streamID);
}
void SRPAPI ClassOfSoundPoolClass::play(VS_INT32 soundID,VS_FLOAT leftVolume,VS_FLOAT rightVolume,VS_INT32 priority,VS_INT32 loop,VS_FLOAT rate)
{
    ThisSRPInterface -> Call(ThisSRPObject,"play",soundID,leftVolume,rightVolume,priority,loop,rate);
}
void SRPAPI ClassOfSoundPoolClass::release()
{
    ThisSRPInterface -> Call(ThisSRPObject,"release");
}
void SRPAPI ClassOfSoundPoolClass::resume(VS_INT32 streamID)
{
    ThisSRPInterface -> Call(ThisSRPObject,"resume",streamID);
}
void SRPAPI ClassOfSoundPoolClass::setLoop(VS_INT32 streamID,VS_INT32 loop)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setLoop",streamID,loop);
}
void SRPAPI ClassOfSoundPoolClass::setPriority(VS_INT32 streamID,VS_INT32 priority)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setPriority",streamID,priority);
}
void SRPAPI ClassOfSoundPoolClass::setRate(VS_INT32 streamID,VS_FLOAT rate)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setRate",streamID,rate);
}
void SRPAPI ClassOfSoundPoolClass::setVolume(VS_INT32 streamID,VS_FLOAT leftVolume,VS_FLOAT rightVolume)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVolume",streamID,leftVolume,rightVolume);
}
void SRPAPI ClassOfSoundPoolClass::stop(VS_INT32 streamID)
{
    ThisSRPInterface -> Call(ThisSRPObject,"stop",streamID);
}
VS_BOOL SRPAPI ClassOfSoundPoolClass::unload(VS_INT32 soundID)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"unload",soundID);
}

ClassOfAnimationDrawableClass::ClassOfAnimationDrawableClass()
{
}

ClassOfAnimationDrawableClass::ClassOfAnimationDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AnimationDrawableClass,0,NULL));
}

ClassOfAnimationDrawableClass::ClassOfAnimationDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAnimationDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AnimationDrawableClass" );
    return Buf;
}

class ClassOfAnimationDrawableClass *ClassOfAnimationDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAnimationDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAnimationDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AnimationDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAnimationDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfAnimationDrawableClass::addFrame(VS_OBJPTR frame,VS_INT32 duration)
{
    ThisSRPInterface -> Call(ThisSRPObject,"addFrame",frame,duration);
}
VS_INT32 SRPAPI ClassOfAnimationDrawableClass::getDuration(VS_INT32 i)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getDuration",i);
}
VS_INT32 SRPAPI ClassOfAnimationDrawableClass::getNumberOfFrames()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getNumberOfFrames");
}
VS_BOOL SRPAPI ClassOfAnimationDrawableClass::isOneShot()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isOneShot");
}
VS_BOOL SRPAPI ClassOfAnimationDrawableClass::isRunning()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isRunning");
}
void SRPAPI ClassOfAnimationDrawableClass::run()
{
    ThisSRPInterface -> Call(ThisSRPObject,"run");
}
void SRPAPI ClassOfAnimationDrawableClass::setOneShot(VS_BOOL oneShot)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setOneShot",oneShot);
}
VS_BOOL SRPAPI ClassOfAnimationDrawableClass::setVisible(VS_BOOL visible,VS_BOOL restart)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"setVisible",visible,restart);
}
void SRPAPI ClassOfAnimationDrawableClass::start()
{
    ThisSRPInterface -> Call(ThisSRPObject,"start");
}
void SRPAPI ClassOfAnimationDrawableClass::stop()
{
    ThisSRPInterface -> Call(ThisSRPObject,"stop");
}

ClassOfButtonClass::ClassOfButtonClass()
{
}

ClassOfButtonClass::ClassOfButtonClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ButtonClass,0,NULL));
}

ClassOfButtonClass::ClassOfButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfButtonClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ButtonClass" );
    return Buf;
}

class ClassOfButtonClass *ClassOfButtonClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfButtonClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfButtonClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ButtonClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfButtonClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfCompoundButtonClass::ClassOfCompoundButtonClass()
{
}

ClassOfCompoundButtonClass::ClassOfCompoundButtonClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_CompoundButtonClass,0,NULL));
}

ClassOfCompoundButtonClass::ClassOfCompoundButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfCompoundButtonClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "CompoundButtonClass" );
    return Buf;
}

class ClassOfCompoundButtonClass *ClassOfCompoundButtonClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfCompoundButtonClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfCompoundButtonClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "CompoundButtonClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfCompoundButtonClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfCompoundButtonClass::isChecked()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"isChecked");
}

ClassOfRadioButtonClass::ClassOfRadioButtonClass()
{
}

ClassOfRadioButtonClass::ClassOfRadioButtonClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RadioButtonClass,0,NULL));
}

ClassOfRadioButtonClass::ClassOfRadioButtonClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRadioButtonClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RadioButtonClass" );
    return Buf;
}

class ClassOfRadioButtonClass *ClassOfRadioButtonClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRadioButtonClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRadioButtonClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RadioButtonClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRadioButtonClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfCheckBoxClass::ClassOfCheckBoxClass()
{
}

ClassOfCheckBoxClass::ClassOfCheckBoxClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_CheckBoxClass,0,NULL));
}

ClassOfCheckBoxClass::ClassOfCheckBoxClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfCheckBoxClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "CheckBoxClass" );
    return Buf;
}

class ClassOfCheckBoxClass *ClassOfCheckBoxClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfCheckBoxClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfCheckBoxClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "CheckBoxClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfCheckBoxClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfGradientDrawableClass::ClassOfGradientDrawableClass()
{
}

ClassOfGradientDrawableClass::ClassOfGradientDrawableClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_GradientDrawableClass,0,NULL));
}

ClassOfGradientDrawableClass::ClassOfGradientDrawableClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfGradientDrawableClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "GradientDrawableClass" );
    return Buf;
}

class ClassOfGradientDrawableClass *ClassOfGradientDrawableClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfGradientDrawableClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfGradientDrawableClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "GradientDrawableClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfGradientDrawableClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfGradientDrawableClass::draw(VS_OBJPTR canvas)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas);
}
VS_INT32 SRPAPI ClassOfGradientDrawableClass::getChangingConfigurations()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getChangingConfigurations");
}
VS_INT32 SRPAPI ClassOfGradientDrawableClass::getIntrinsicHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicHeight");
}
VS_INT32 SRPAPI ClassOfGradientDrawableClass::getIntrinsicWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getIntrinsicWidth");
}
VS_INT32 SRPAPI ClassOfGradientDrawableClass::getOpacity()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getOpacity");
}
VS_BOOL SRPAPI ClassOfGradientDrawableClass::getPadding(VS_OBJPTR padding)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getPadding",padding);
}
void SRPAPI ClassOfGradientDrawableClass::setAlpha(VS_INT32 alpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAlpha",alpha);
}
void SRPAPI ClassOfGradientDrawableClass::setColor(VS_INT32 argb)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setColor",argb);
}
void SRPAPI ClassOfGradientDrawableClass::setCornerRadii(VS_PARAPKGPTR radii)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCornerRadii",radii);
}
void SRPAPI ClassOfGradientDrawableClass::setCornerRadius(VS_FLOAT radius)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCornerRadius",radius);
}
void SRPAPI ClassOfGradientDrawableClass::setDither(VS_BOOL dither)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setDither",dither);
}
void SRPAPI ClassOfGradientDrawableClass::setGradientCenter(VS_FLOAT x,VS_FLOAT y)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGradientCenter",x,y);
}
void SRPAPI ClassOfGradientDrawableClass::setGradientRadius(VS_FLOAT gradientRadius)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGradientRadius",gradientRadius);
}
void SRPAPI ClassOfGradientDrawableClass::setGradientType(VS_INT32 gradient)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGradientType",gradient);
}
void SRPAPI ClassOfGradientDrawableClass::setShape(VS_INT32 shape)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setShape",shape);
}
void SRPAPI ClassOfGradientDrawableClass::setSize(VS_INT32 width,VS_INT32 height)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSize",width,height);
}
void SRPAPI ClassOfGradientDrawableClass::setStroke(VS_INT32 width,VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStroke",width,color);
}
void SRPAPI ClassOfGradientDrawableClass::setStroke1(VS_INT32 width,VS_INT32 color,VS_FLOAT dashWidth,VS_FLOAT dashGap)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStroke1",width,color,dashWidth,dashGap);
}
void SRPAPI ClassOfGradientDrawableClass::setUseLevel(VS_BOOL useLevel)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setUseLevel",useLevel);
}

ClassOfAdapterViewClass::ClassOfAdapterViewClass()
{
}

ClassOfAdapterViewClass::ClassOfAdapterViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AdapterViewClass,0,NULL));
}

ClassOfAdapterViewClass::ClassOfAdapterViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAdapterViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AdapterViewClass" );
    return Buf;
}

class ClassOfAdapterViewClass *ClassOfAdapterViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAdapterViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAdapterViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AdapterViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAdapterViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfAdapterViewClass::Get_E_onItemClick()
{
    return NULL;
}
void ClassOfAdapterViewClass::Put_E_onItemClick(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_AdapterViewClass_onItemClick,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfAdapterViewClass::Get_E_onItemSelected()
{
    return NULL;
}
void ClassOfAdapterViewClass::Put_E_onItemSelected(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_AdapterViewClass_onItemSelected,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfAdapterViewClass::Get_E_onNothingSelected()
{
    return NULL;
}
void ClassOfAdapterViewClass::Put_E_onNothingSelected(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_AdapterViewClass_onNothingSelected,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}


void SRPAPI ClassOfAdapterViewClass::setAdapter(VS_OBJPTR adapter)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAdapter",adapter);
}

ClassOfAbsSpinnerClass::ClassOfAbsSpinnerClass()
{
}

ClassOfAbsSpinnerClass::ClassOfAbsSpinnerClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AbsSpinnerClass,0,NULL));
}

ClassOfAbsSpinnerClass::ClassOfAbsSpinnerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAbsSpinnerClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AbsSpinnerClass" );
    return Buf;
}

class ClassOfAbsSpinnerClass *ClassOfAbsSpinnerClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAbsSpinnerClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAbsSpinnerClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AbsSpinnerClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAbsSpinnerClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfSpinnerClass::ClassOfSpinnerClass()
{
}

ClassOfSpinnerClass::ClassOfSpinnerClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_SpinnerClass,0,NULL));
}

ClassOfSpinnerClass::ClassOfSpinnerClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfSpinnerClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "SpinnerClass" );
    return Buf;
}

class ClassOfSpinnerClass *ClassOfSpinnerClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfSpinnerClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfSpinnerClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "SpinnerClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfSpinnerClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfGalleryClass::ClassOfGalleryClass()
{
}

ClassOfGalleryClass::ClassOfGalleryClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_GalleryClass,0,NULL));
}

ClassOfGalleryClass::ClassOfGalleryClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfGalleryClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "GalleryClass" );
    return Buf;
}

class ClassOfGalleryClass *ClassOfGalleryClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfGalleryClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfGalleryClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "GalleryClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfGalleryClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void ClassOfGalleryClass::Put_F_onDown(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onDown,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onDown()
{
    return NULL;
}

void ClassOfGalleryClass::Put_F_onFling(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onFling,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onFling()
{
    return NULL;
}

void ClassOfGalleryClass::Put_F_onLongPress(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onLongPress,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onLongPress()
{
    return NULL;
}

void ClassOfGalleryClass::Put_F_onScroll(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onScroll,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onScroll()
{
    return NULL;
}

void ClassOfGalleryClass::Put_F_onShowPress(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onShowPress,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onShowPress()
{
    return NULL;
}

void ClassOfGalleryClass::Put_F_onSingleTapUp(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onSingleTapUp,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onSingleTapUp()
{
    return NULL;
}

void ClassOfGalleryClass::Put_F_onTouchEvent(void * In_Value)
{
    ThisSRPInterface -> CreateOVLFunction(ThisSRPObject,&VSFUNCID_GalleryClass_onTouchEvent,In_Value,NULL);
}
void * ClassOfGalleryClass::Get_F_onTouchEvent()
{
    return NULL;
}


VS_BOOL SRPAPI ClassOfGalleryClass::onDown(VS_OBJPTR e)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onDown",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSuperDown(VS_OBJPTR e)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSuperDown",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onFling(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onFling",e1,e2,velocityX,velocityY);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSuperFling(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT velocityX,VS_FLOAT velocityY)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSuperFling",e1,e2,velocityX,velocityY);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onLongPress(VS_OBJPTR e)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onLongPress",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSuperLongPress(VS_OBJPTR e)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSuperLongPress",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onScroll(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onScroll",e1,e2,distanceX,distanceY);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSuperScroll(VS_OBJPTR e1,VS_OBJPTR e2,VS_FLOAT distanceX,VS_FLOAT distanceY)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSuperScroll",e1,e2,distanceX,distanceY);
}
void SRPAPI ClassOfGalleryClass::onShowPress(VS_OBJPTR e)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onShowPress",e);
}
void SRPAPI ClassOfGalleryClass::onSuperShowPress(VS_OBJPTR e)
{
    ThisSRPInterface -> Call(ThisSRPObject,"onSuperShowPress",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSingleTapUp(VS_OBJPTR e)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSingleTapUp",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSuperSingleTapUp(VS_OBJPTR e)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSuperSingleTapUp",e);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onTouchEvent(VS_OBJPTR event)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onTouchEvent",event);
}
VS_BOOL SRPAPI ClassOfGalleryClass::onSuperTouchEvent(VS_OBJPTR event)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"onSuperTouchEvent",event);
}
void SRPAPI ClassOfGalleryClass::setAnimationDuration(VS_INT32 animationDurationMillis)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setAnimationDuration",animationDurationMillis);
}
void SRPAPI ClassOfGalleryClass::setCallbackDuringFling(VS_BOOL shouldCallback)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setCallbackDuringFling",shouldCallback);
}
void SRPAPI ClassOfGalleryClass::setGravity(VS_INT32 gravity)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setGravity",gravity);
}
void SRPAPI ClassOfGalleryClass::setSpacing(VS_INT32 spacing)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSpacing",spacing);
}
void SRPAPI ClassOfGalleryClass::setUnselectedAlpha(VS_BOOL unselectedAlpha)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setUnselectedAlpha",unselectedAlpha);
}
VS_BOOL SRPAPI ClassOfGalleryClass::showContextMenu()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"showContextMenu");
}

ClassOfAbsListViewClass::ClassOfAbsListViewClass()
{
}

ClassOfAbsListViewClass::ClassOfAbsListViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_AbsListViewClass,0,NULL));
}

ClassOfAbsListViewClass::ClassOfAbsListViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfAbsListViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "AbsListViewClass" );
    return Buf;
}

class ClassOfAbsListViewClass *ClassOfAbsListViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfAbsListViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfAbsListViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "AbsListViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfAbsListViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfListViewClass::ClassOfListViewClass()
{
}

ClassOfListViewClass::ClassOfListViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ListViewClass,0,NULL));
}

ClassOfListViewClass::ClassOfListViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfListViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ListViewClass" );
    return Buf;
}

class ClassOfListViewClass *ClassOfListViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfListViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfListViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ListViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfListViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}


ClassOfGridViewClass::ClassOfGridViewClass()
{
}

ClassOfGridViewClass::ClassOfGridViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_GridViewClass,0,NULL));
}

ClassOfGridViewClass::ClassOfGridViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfGridViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "GridViewClass" );
    return Buf;
}

class ClassOfGridViewClass *ClassOfGridViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfGridViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfGridViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "GridViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfGridViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfGridViewClass::setNumColumns(VS_INT32 numColumns)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setNumColumns",numColumns);
}
void SRPAPI ClassOfGridViewClass::setSelection(VS_INT32 position)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setSelection",position);
}
void SRPAPI ClassOfGridViewClass::setStretchMode(VS_CHAR * stretchMode)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setStretchMode",stretchMode);
}
void SRPAPI ClassOfGridViewClass::setVerticalSpacing(VS_INT32 verticalSpacing)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setVerticalSpacing",verticalSpacing);
}
void SRPAPI ClassOfGridViewClass::setHorizontalSpacing(VS_INT32 horizontalSpacing)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setHorizontalSpacing",horizontalSpacing);
}

ClassOfDialogInterfaceClass::ClassOfDialogInterfaceClass()
{
}

ClassOfDialogInterfaceClass::ClassOfDialogInterfaceClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_DialogInterfaceClass,0,NULL));
}

ClassOfDialogInterfaceClass::ClassOfDialogInterfaceClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfDialogInterfaceClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "DialogInterfaceClass" );
    return Buf;
}

class ClassOfDialogInterfaceClass *ClassOfDialogInterfaceClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfDialogInterfaceClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfDialogInterfaceClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "DialogInterfaceClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfDialogInterfaceClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfDialogInterfaceClass::Get_E_onMultiChoiceClick()
{
    return NULL;
}
void ClassOfDialogInterfaceClass::Put_E_onMultiChoiceClick(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_DialogInterfaceClass_onMultiChoiceClick,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfDialogInterfaceClass::Get_E_onClick()
{
    return NULL;
}
void ClassOfDialogInterfaceClass::Put_E_onClick(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_DialogInterfaceClass_onClick,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfDialogInterfaceClass::Get_E_onCancel()
{
    return NULL;
}
void ClassOfDialogInterfaceClass::Put_E_onCancel(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_DialogInterfaceClass_onCancel,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfDialogInterfaceClass::Get_E_onItemSelected()
{
    return NULL;
}
void ClassOfDialogInterfaceClass::Put_E_onItemSelected(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_DialogInterfaceClass_onItemSelected,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfDialogInterfaceClass::Get_E_onKey()
{
    return NULL;
}
void ClassOfDialogInterfaceClass::Put_E_onKey(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_DialogInterfaceClass_onKey,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}



ClassOfRectShapeClass::ClassOfRectShapeClass()
{
}

ClassOfRectShapeClass::ClassOfRectShapeClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RectShapeClass,0,NULL));
}

ClassOfRectShapeClass::ClassOfRectShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRectShapeClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RectShapeClass" );
    return Buf;
}

class ClassOfRectShapeClass *ClassOfRectShapeClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRectShapeClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRectShapeClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RectShapeClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRectShapeClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfRectShapeClass::draw(VS_OBJPTR canvas,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas,paint);
}

ClassOfOvalShapeClass::ClassOfOvalShapeClass()
{
}

ClassOfOvalShapeClass::ClassOfOvalShapeClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_OvalShapeClass,0,NULL));
}

ClassOfOvalShapeClass::ClassOfOvalShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfOvalShapeClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "OvalShapeClass" );
    return Buf;
}

class ClassOfOvalShapeClass *ClassOfOvalShapeClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfOvalShapeClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfOvalShapeClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "OvalShapeClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfOvalShapeClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfOvalShapeClass::draw(VS_OBJPTR canvas,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas,paint);
}

ClassOfRoundRectShapeClass::ClassOfRoundRectShapeClass()
{
}

ClassOfRoundRectShapeClass::ClassOfRoundRectShapeClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_RoundRectShapeClass,0,NULL));
}

ClassOfRoundRectShapeClass::ClassOfRoundRectShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfRoundRectShapeClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "RoundRectShapeClass" );
    return Buf;
}

class ClassOfRoundRectShapeClass *ClassOfRoundRectShapeClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfRoundRectShapeClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfRoundRectShapeClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "RoundRectShapeClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfRoundRectShapeClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfRoundRectShapeClass::draw(VS_OBJPTR canvas,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas,paint);
}

ClassOfArcShapeClass::ClassOfArcShapeClass()
{
}

ClassOfArcShapeClass::ClassOfArcShapeClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_ArcShapeClass,0,NULL));
}

ClassOfArcShapeClass::ClassOfArcShapeClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfArcShapeClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "ArcShapeClass" );
    return Buf;
}

class ClassOfArcShapeClass *ClassOfArcShapeClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfArcShapeClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfArcShapeClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "ArcShapeClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfArcShapeClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfArcShapeClass::init(VS_FLOAT startAngle,VS_FLOAT sweepAngle)
{
    ThisSRPInterface -> Call(ThisSRPObject,"init",startAngle,sweepAngle);
}
void SRPAPI ClassOfArcShapeClass::draw(VS_OBJPTR canvas,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"draw",canvas,paint);
}

ClassOfBundleClass::ClassOfBundleClass()
{
}

ClassOfBundleClass::ClassOfBundleClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_BundleClass,0,NULL));
}

ClassOfBundleClass::ClassOfBundleClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfBundleClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "BundleClass" );
    return Buf;
}

class ClassOfBundleClass *ClassOfBundleClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfBundleClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfBundleClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "BundleClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfBundleClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

void SRPAPI ClassOfBundleClass::clear()
{
    ThisSRPInterface -> Call(ThisSRPObject,"clear");
}
VS_BOOL SRPAPI ClassOfBundleClass::containsKey(VS_CHAR * key)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"containsKey",key);
}
VS_BOOL SRPAPI ClassOfBundleClass::getBoolean(VS_CHAR * key)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getBoolean",key);
}
VS_BOOL SRPAPI ClassOfBundleClass::getBoolean1(VS_CHAR * key,VS_BOOL defaultValue)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"getBoolean1",key,defaultValue);
}
VS_CHAR * SRPAPI ClassOfBundleClass::getCharSequence(VS_CHAR * key)
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getCharSequence",key);
}
VS_FLOAT SRPAPI ClassOfBundleClass::getFloat(VS_CHAR * key)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getFloat",key);
}
VS_FLOAT SRPAPI ClassOfBundleClass::getFloat1(VS_CHAR * key,VS_FLOAT defaultValue)
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getFloat1",key,defaultValue);
}
VS_INT32 SRPAPI ClassOfBundleClass::getInt(VS_CHAR * key)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getInt",key);
}
VS_INT32 SRPAPI ClassOfBundleClass::getInt1(VS_CHAR * key,VS_UINT32 defaultValue)
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getInt1",key,defaultValue);
}
void SRPAPI ClassOfBundleClass::putBoolean(VS_CHAR * key,VS_BOOL value)
{
    ThisSRPInterface -> Call(ThisSRPObject,"putBoolean",key,value);
}
void SRPAPI ClassOfBundleClass::putCharSequence(VS_CHAR * key,VS_CHAR * value)
{
    ThisSRPInterface -> Call(ThisSRPObject,"putCharSequence",key,value);
}
void SRPAPI ClassOfBundleClass::putFloat(VS_CHAR * key,VS_FLOAT value)
{
    ThisSRPInterface -> Call(ThisSRPObject,"putFloat",key,value);
}
void SRPAPI ClassOfBundleClass::putInt(VS_CHAR * key,VS_INT32 value)
{
    ThisSRPInterface -> Call(ThisSRPObject,"putInt",key,value);
}

ClassOfWebViewClass::ClassOfWebViewClass()
{
}

ClassOfWebViewClass::ClassOfWebViewClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_WebViewClass,0,NULL));
}

ClassOfWebViewClass::ClassOfWebViewClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfWebViewClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "WebViewClass" );
    return Buf;
}

class ClassOfWebViewClass *ClassOfWebViewClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfWebViewClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfWebViewClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "WebViewClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfWebViewClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VSSystemEvent_EventProc ClassOfWebViewClass::Get_E_onProgressChanged()
{
    return NULL;
}
void ClassOfWebViewClass::Put_E_onProgressChanged(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_WebViewClass_onProgressChanged,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}

VSSystemEvent_EventProc ClassOfWebViewClass::Get_E_onReceivedError()
{
    return NULL;
}
void ClassOfWebViewClass::Put_E_onReceivedError(VSSystemEvent_EventProc In_Value)
{
    ThisSRPInterface -> RegEventFunction(ThisSRPObject,&VSOUTEVENTID_WebViewClass_onReceivedError,ThisSRPObject,(void *)In_Value,(VS_ULONG)this);
}


VS_INT32 SRPAPI ClassOfWebViewClass::getProgress()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getProgress");
}
VS_FLOAT SRPAPI ClassOfWebViewClass::getScale()
{
    return (VS_FLOAT)ThisSRPInterface -> FCall(ThisSRPObject,"getScale");
}
VS_OBJPTR SRPAPI ClassOfWebViewClass::getSettings()
{
    return (VS_OBJPTR )ThisSRPInterface -> Call(ThisSRPObject,"getSettings");
}
VS_CHAR * SRPAPI ClassOfWebViewClass::getTitle()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getTitle");
}
VS_CHAR * SRPAPI ClassOfWebViewClass::getUrl()
{
    return (VS_CHAR * )ThisSRPInterface -> Call(ThisSRPObject,"getUrl");
}
void SRPAPI ClassOfWebViewClass::goBack()
{
    ThisSRPInterface -> Call(ThisSRPObject,"goBack");
}
void SRPAPI ClassOfWebViewClass::goBackOrForward(VS_INT32 steps)
{
    ThisSRPInterface -> Call(ThisSRPObject,"goBackOrForward",steps);
}
void SRPAPI ClassOfWebViewClass::goForward()
{
    ThisSRPInterface -> Call(ThisSRPObject,"goForward");
}
void SRPAPI ClassOfWebViewClass::loadData(VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding)
{
    ThisSRPInterface -> Call(ThisSRPObject,"loadData",data,mimeType,encoding);
}
void SRPAPI ClassOfWebViewClass::loadDataWithBaseURL(VS_CHAR * baseUrl,VS_CHAR * data,VS_CHAR * mimeType,VS_CHAR * encoding,VS_CHAR * historyUrl)
{
    ThisSRPInterface -> Call(ThisSRPObject,"loadDataWithBaseURL",baseUrl,data,mimeType,encoding,historyUrl);
}
void SRPAPI ClassOfWebViewClass::loadUrl(VS_CHAR * url)
{
    ThisSRPInterface -> Call(ThisSRPObject,"loadUrl",url);
}
void SRPAPI ClassOfWebViewClass::setBackgroundColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setBackgroundColor",color);
}
void SRPAPI ClassOfWebViewClass::setInitialScale(VS_INT32 scaleInPercent)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setInitialScale",scaleInPercent);
}
void SRPAPI ClassOfWebViewClass::setScrollBarStyle(VS_INT32 style)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setScrollBarStyle",style);
}
void SRPAPI ClassOfWebViewClass::stopLoading()
{
    ThisSRPInterface -> Call(ThisSRPObject,"stopLoading");
}
VS_BOOL SRPAPI ClassOfWebViewClass::zoomIn()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"zoomIn");
}
VS_BOOL SRPAPI ClassOfWebViewClass::zoomOut()
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"zoomOut");
}

ClassOfCanvasClass::ClassOfCanvasClass()
{
}

ClassOfCanvasClass::ClassOfCanvasClass(class ClassOfSRPInterface *In_SRPInterface)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_TRUE,VS_FALSE,In_SRPInterface -> MallocObjectL(&VSOBJID_CanvasClass,0,NULL));
}

ClassOfCanvasClass::ClassOfCanvasClass(class ClassOfSRPInterface *In_SRPInterface,void *SRPObject)
{
    if( In_SRPInterface == NULL )
        return;
    WrapObject(In_SRPInterface,VS_FALSE,VS_FALSE,SRPObject);
}

VS_CHAR *ClassOfCanvasClass::GetSelfName()
{
    static VS_CHAR Buf[64];
    strcpy( Buf, "CanvasClass" );
    return Buf;
}

class ClassOfCanvasClass *ClassOfCanvasClass::GetSRPWrap( class ClassOfSRPInterface *In_SRPInterface,void *SRPObject,VS_ULONG In_ClassLayer)
{
    class ClassOfCanvasClass *ClassObject;

    if( SRPObject == NULL || In_SRPInterface == NULL )
        return NULL;
    if( In_ClassLayer == 0xFFFFFFFF )
        In_ClassLayer = In_SRPInterface -> GetLayer( SRPObject );
    ClassObject = (class ClassOfCanvasClass *)In_SRPInterface -> GetAppClass( SRPObject, In_ClassLayer );
    if( ClassObject != NULL && strcmp( ((class ClassOfSRPObject *)ClassObject) -> GetSelfName(), "CanvasClass" ) == 0 )
        return ClassObject;
    ClassObject = new class ClassOfCanvasClass();
    ClassObject -> WrapObject(In_SRPInterface,VS_FALSE,VS_TRUE,SRPObject, In_ClassLayer);
    return ClassObject;
}

VS_BOOL SRPAPI ClassOfCanvasClass::init(VS_OBJPTR bitmap)
{
    return (VS_BOOL )ThisSRPInterface -> Call(ThisSRPObject,"init",bitmap);
}
void SRPAPI ClassOfCanvasClass::drawARGB(VS_INT32 a,VS_INT32 r,VS_INT32 g,VS_INT32 b)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawARGB",a,r,g,b);
}
void SRPAPI ClassOfCanvasClass::drawArc(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT startAngle,VS_FLOAT sweepAngle,VS_BOOL useCenter,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawArc",left,top,right,bottom,startAngle,sweepAngle,useCenter,paint);
}
void SRPAPI ClassOfCanvasClass::drawBitmap(VS_OBJPTR bitmap,VS_FLOAT left,VS_FLOAT top,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawBitmap",bitmap,left,top,paint);
}
void SRPAPI ClassOfCanvasClass::drawBitmap1(VS_BINBUFPTR colors,VS_INT32 offset,VS_INT32 stride,VS_INT32 x,VS_INT32 y,VS_INT32 width,VS_INT32 height,VS_BOOL hasAlpha,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawBitmap1",colors,offset,stride,x,y,width,height,hasAlpha,paint);
}
void SRPAPI ClassOfCanvasClass::drawCircle(VS_FLOAT cx,VS_FLOAT cy,VS_FLOAT radius,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawCircle",cx,cy,radius,paint);
}
void SRPAPI ClassOfCanvasClass::drawColor(VS_INT32 color)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawColor",color);
}
void SRPAPI ClassOfCanvasClass::drawLine(VS_FLOAT startX,VS_FLOAT startY,VS_FLOAT stopX,VS_FLOAT stopY,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawLine",startX,startY,stopX,stopY,paint);
}
void SRPAPI ClassOfCanvasClass::drawOval(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawOval",left,top,right,bottom,paint);
}
void SRPAPI ClassOfCanvasClass::drawPaint(VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawPaint",paint);
}
void SRPAPI ClassOfCanvasClass::drawPath(VS_OBJPTR path,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawPath",path,paint);
}
void SRPAPI ClassOfCanvasClass::drawPoint(VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawPoint",x,y,paint);
}
void SRPAPI ClassOfCanvasClass::drawRGB(VS_INT32 r,VS_INT32 g,VS_INT32 b)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawRGB",r,g,b);
}
void SRPAPI ClassOfCanvasClass::drawRect(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawRect",left,top,right,bottom,paint);
}
void SRPAPI ClassOfCanvasClass::drawRoundRect(VS_FLOAT left,VS_FLOAT top,VS_FLOAT right,VS_FLOAT bottom,VS_FLOAT rx,VS_FLOAT ry,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawRoundRect",left,top,right,bottom,rx,ry,paint);
}
void SRPAPI ClassOfCanvasClass::drawText(VS_CHAR * text,VS_FLOAT x,VS_FLOAT y,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawText",text,x,y,paint);
}
void SRPAPI ClassOfCanvasClass::drawTextOnPath(VS_CHAR * text,VS_OBJPTR path,VS_FLOAT hOffset,VS_FLOAT vOffset,VS_OBJPTR paint)
{
    ThisSRPInterface -> Call(ThisSRPObject,"drawTextOnPath",text,path,hOffset,vOffset,paint);
}
VS_INT32 SRPAPI ClassOfCanvasClass::getHeight()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getHeight");
}
VS_INT32 SRPAPI ClassOfCanvasClass::getWidth()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"getWidth");
}
void SRPAPI ClassOfCanvasClass::restore()
{
    ThisSRPInterface -> Call(ThisSRPObject,"restore");
}
void SRPAPI ClassOfCanvasClass::rotate(VS_FLOAT degrees)
{
    ThisSRPInterface -> Call(ThisSRPObject,"rotate",degrees);
}
VS_INT32 SRPAPI ClassOfCanvasClass::save()
{
    return (VS_INT32 )ThisSRPInterface -> Call(ThisSRPObject,"save");
}
void SRPAPI ClassOfCanvasClass::scale(VS_FLOAT sx,VS_FLOAT sy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"scale",sx,sy);
}
void SRPAPI ClassOfCanvasClass::setBitmap(VS_OBJPTR bitmap)
{
    ThisSRPInterface -> Call(ThisSRPObject,"setBitmap",bitmap);
}
void SRPAPI ClassOfCanvasClass::skew(VS_FLOAT sx,VS_FLOAT sy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"skew",sx,sy);
}
void SRPAPI ClassOfCanvasClass::translate(VS_FLOAT dx,VS_FLOAT dy)
{
    ThisSRPInterface -> Call(ThisSRPObject,"translate",dx,dy);
}

/*--------------------------------------------------*/
