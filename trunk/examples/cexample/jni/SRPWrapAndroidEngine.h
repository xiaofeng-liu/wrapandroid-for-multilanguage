/*--------------------------------------------------*/
/*VirtualSociety System Header File*/
/*CreateBy SRPLab                */
/*CreateDate: 2012-4-6  */
/*--------------------------------------------------*/
#ifndef VIRTUALSOCIETY_HEADERFILE_SRPWRAPANDROIDENGINE
#define VIRTUALSOCIETY_HEADERFILE_SRPWRAPANDROIDENGINE

#include <stdio.h>
#include <stdlib.h>
#include <vsopencommtype.h>
#include <vsopenapi.h>
#include <vsopensyseventdef.h>

#if( VS_OS_TYPE == VS_OS_WINDOWS )
#pragma warning (disable:4819)
#pragma warning (disable:4244)
#pragma warning (disable:4996)
#pragma warning (disable:4800)
#endif

#pragma pack(4)

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*--Macro[Layout] Define */
#define WRAP_CONTENT                                      -2          
#define MATCH_PARENT                                      -1          
#define FILL_PARENT                                       -1          
#define METRICS_SP                                        2           
#define METRICS_PT                                        1           
#define METRICS_PX                                        0           

/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
extern VS_UUID VSSTRUCTID_RectF;

struct StructOfRectF{
    VS_FLOAT        left;                         //
    VS_FLOAT        top;                          //
    VS_FLOAT        right;                        //
    VS_FLOAT        bottom;                       //
};



#pragma pack()

#endif
